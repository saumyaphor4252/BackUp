TCanvas* GetCanvas();
void CheckZombieFiles(const char* ,const char* );

void ComparePlots(const char* fileName1,int nEvents1, const char* fileName2,int nEvents2)
{

  CheckZombieFiles(fileName1,fileName2);
  TString InputFile1= Form("%s",fileName1);
  
  TFile *file1 = new TFile(InputFile1);
  TDirectory *current_sourcedir = gDirectory;
  
  // file1->cd( path );
  std::cout<<gDirectory<<std::endl;
  // loop over all keys in this directory
  TChain *globChain = 0;
  TIter nextkey( current_sourcedir->GetListOfKeys() );
  TKey *key, *oldkey=0;


  while ( (key = (TKey*)nextkey()))
    {
      std::cout<<key->GetName()<<std::endl;
      TObject *obj = key->ReadObj();
      if ( obj->IsA()->InheritsFrom( TTree::Class() ) )
	{
	  const char* obj_name= obj->GetName();
	  std::cout<<obj->GetName()<<std::endl;
	}
      else if ( obj->IsA()->InheritsFrom( TDirectory::Class() ) )
	{
	  cout << "Found subdirectory " << obj->GetName() << endl;	  
	}
      
    }
  //xxxxxxxxxxxxxxxxxx PLOTTING XXXXXXXXXXXXXXXXX//
  //WORKING FINE! GetCanvas();
  
}

TCanvas* GetCanvas()
{
   TCanvas *c = new TCanvas("c", "c",754,169,800,756);
   gStyle->SetOptStat(0); // Dont show stats
   gStyle->SetOptTitle(0); // Dont show Title
   c->SetFillColor(0);  
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.141604);
   c->SetRightMargin(0.04761905);
   c->SetTopMargin(0.07152683);
   c->SetBottomMargin(0.1224209);
   c->SetFrameLineWidth(3);
   c->SetFrameFillStyle(0);
   c->SetFrameLineWidth(2);
   c->SetFrameLineWidth(3);
   return c;
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


