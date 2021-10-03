void Recursion(TDirectory* , const char*, const char*); 


void TestingGetKeys(const char* fileName1, const char* fileName2)
{
  TString InputFile = Form("%s",fileName1);
  TFile *file=new TFile(InputFile.Data());
  TString target1=file->GetPath();
  
  file->GetListOfKeys()->Print();
  Recursion(file, fileName1, fileName2);  
}


void Recursion(TDirectory* target, const char* filename1, const char* filename2)
{
  //TDirectory *current_dir = gDirectory;
  TFile *f1=TFile::Open( filename1, "r" );
  TString path( (char*)strstr( target->GetPath(), ":" ) );
  path.Remove( 0, 2 );
  f1->cd(path);
  TDirectory *temp= gDirectory;
  std::cout<<"Checking initial Get Keys Here: "<<temp->GetPath()<<std::endl;
   
  TIter next(temp->GetListOfKeys());
  TKey *key;
  while ((key=(TKey*)next()))
    {
      printf("key: %s points to an object of class: %s \n",
	     key->GetName(),
	     key->GetClassName());

      TObject *obj = key->ReadObj();
      if ( obj->IsA()->InheritsFrom( TDirectory::Class()))
	{
	  //
	 
	  std::cout << "Found subdirectory " << obj->GetName() << endl;
	  //TDirectory* subdir = gDirectory;
	  //std::cout<<subdir->GetPath()<<std::endl;
	  //TString str = Form("%s%s",gDirectory->GetPath(),key->GetName());
	  //std::cout<<str.Data()<<std::endl;
	  gDirectory->cd(key->GetName());
	  std::cout<<"CHECKING IF CD WORKS: -----"<<std::endl;
	  TDirectory* subdir = gDirectory;
	  std::cout<<subdir->GetPath()<<std::endl;
	  gDirectory->cd("..");
	  Recursion( subdir ,  filename1,  filename2);
	  gDirectory->cd("..");
	  //std::cout<<"My new directory has"<<std::endl;
	  //subdir->GetListOfKeys()->Print();
	  //std::cout<<"SUB dir Path: "<<subdir->GetPath()<<std::endl;
	  
	}
      else if (obj->IsA()->InheritsFrom( TTree::Class() ))
	{
	  std::cout<<"Tree found"<<std::endl;

	  //Drawing Function (tree path, file1, file2)
	  //in function call csv
	}
      else
	{std::cout<<"no new directory:"<<std::endl;}
      
    }
}
