void CheckZombieFiles(const char* ,const char* );

void ComparePlots(const char* fileName1,int nEvents1, const char* fileName2,int nEvents2)
{

  CheckZombieFiles(fileName1,fileName2);
  TString InputFile1= Form("%s",fileName1);
  
  TFile *file1 = new TFile(InputFile1);
  file1->GetListOfKeys()->Print();
  TDirectory *current_dir = gDirectory;

  TIter next(file1->GetListOfKeys());
  TKey *key;
  while ((key=(TKey*)next()))
    {
      std::cout<<"while loop activated"<<std::endl;
      printf("key: %s points to an object of class: %s at %lld \n",
	     key->GetName(),
	     key->GetClassName(),key->GetSeekKey());

      TObject *obj = key->ReadObj();
      if ( obj->IsA()->InheritsFrom( TDirectory::Class()))
	{
	  TDirectory *subdir = gDirectory;
	  std::cout<<"My new directory has"<<std::endl;
	  subdir->GetListOfKeys()->Print();
	}
      else if (obj->IsA()->InheritsFrom( TTree::Class() ))
	{
	  std::cout<<"Tree"<<std::endl;
	}
      else
	{std::cout<<"no new directory:"<<std::endl;}
      
    }
  
}

void CheckZombieFiles(const char* filename1,const char* filename2)
{
 
  TString InputFile1= Form("%s",filename1);    TString InputFile2= Form("%s",filename2); 
  TFile *file1 = new TFile(InputFile1);         TFile *file2 = new TFile(InputFile2);   
  bool FilesExist;
  FilesExist = (file1->IsZombie() || file2->IsZombie());
  if(FilesExist)
    {   
      cout<<"=================================================================="<<endl;
      cout<<"File not found. Check the file!"<<endl;
      cout<<"=================================================================="<<endl;
      exit (EXIT_FAILURE);
    }
  else{ std::cout<<"Files Found! "<<std::endl;}
}


