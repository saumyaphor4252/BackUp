void GetEvents()
{

   //===========Mentioning File and Directory for Input============//
   TFile *file = TFile::Open("plots_WW2017_v7.root");
   // TTree *tree = (TTree*)file->Get("demo/Event");
   TIter next(file->GetListOfKeys());
   TKey *key, *key2;

   //=========================DEfining Histogram Array In case you wish to store Histograms in a root file ========================//

   while ((key=(TKey*)next()))
   {
     // printf("key: %s \n", key->GetName());
     TString CutName=key->GetName();
     TString DirName=CutName+"/events";
     TDirectory *Dir_Cut = (TDirectory*)file->Get(DirName.Data());
     printf("====================== Cut Name: %s =====================\n",CutName.Data());
     std::cout<<"xxxxxxx  Sample    :   events  xxxxxxx"<<std::endl;
     TIter next2(Dir_Cut->GetListOfKeys());
     while ((key2=(TKey*)next2()))
     {
       TObject *obj = key2->ReadObj();
       TH1D *h = (TH1D*)obj;
       TString keyName = key2->GetName();
       TString SampleName = keyName.ReplaceAll("histo_","");
       std::cout<<SampleName.Data()<<"  :   "<<std::setprecision(8)<<h->GetBinContent(1)<<std::endl;
      }
   }
}
   
