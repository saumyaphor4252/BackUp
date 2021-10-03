#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TMath.h>
#include <cmath>
#include <TString.h>

void CheckMagRun()
{

   TFile *file = new TFile("Prompt2017_Bv2.root");
   TTree *tree;
   tree = (TTree*)file->Get("cosmicRateAnalyzer/Run");

   FILE *Events_per_Run = fopen("Events_per_Run.csv","w");
	
   unsigned int runnum;
   double  run_time;
   int     number_of_events;
   
   tree->SetBranchAddress("runnum", &runnum);
   tree->SetBranchAddress("run_time", &run_time);
   tree->SetBranchAddress("number_of_events", &number_of_events);

   Long64_t n = tree->GetEntriesFast();
   std::cout<<"Total Runs in this dataset are: "<<n<<std::endl;

   fprintf(Events_per_Run,"Total Runs,%lld \n",n);
   int nTotalEvents=0;
	
   for (Long64_t jentry=0; jentry<n;jentry++) //Loop over all runs
   {
     tree->GetEntry(jentry);

     std::cout<<"Run No: "<<runnum<<std::endl;  
     if (run_time == 0 )
       { std::cout<<"      Runtime zero for Run No,: "<<runnum<<std::endl;
	 continue;
       }

     nTotalEvents=nTotalEvents+number_of_events;
     std::cout<<"      Events in Run No: "<<number_of_events<<std::endl;	
     fprintf(Events_per_Run,"%i,%i\n",runnum,number_of_events);					
   }							

   std::cout<<"Total Events: "<<nTotalEvents<<std::endl;
   fclose(Events_per_Run);

}
