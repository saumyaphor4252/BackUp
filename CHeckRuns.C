void CHeckRuns()
{
   TFile *file = new TFile("CRUZET_ReReco_2021_CRAB.root");
   
   bool IsFileExist;
   IsFileExist = file->IsZombie();
   if(IsFileExist)
   {
      cout<<endl<<"====================================================================================================="<<endl;
      cout<<"File not found. Check the file!"<<endl;
      cout<<"====================================================================================================="<<endl<<endl;
      exit (EXIT_FAILURE);
   }

   TTree *tree;
   tree = (TTree*)file->Get("cosmicRateAnalyzer/Run");
      
   unsigned int runnum;
   int     number_of_events;
   int     number_of_tracks;
  
   tree->SetBranchAddress("runnum", &runnum);
   tree->SetBranchAddress("number_of_events", &number_of_events);
   tree->SetBranchAddress("number_of_tracks", &number_of_tracks);
    
   vector<double>  events               ;
   vector<double>  runNumber  		;
     vector<double>  tracks		;
      int j=0;
      double total_tracks = 0, total_Events = 0;
   float nRunsNOtNegativeOrZeroTime=0;
  
   
   Long64_t n = tree->GetEntriesFast();
 
   for (Long64_t jentry=0; jentry<n;jentry++) 
   {
     tree->GetEntry(jentry);
     if (run_time == 0 || run_time < 0) continue;
     nRunsNOtNegativeOrZeroTime++;

     events              .push_back( number_of_events);
     
     runNumber 	         .push_back( runnum );
    
      tracks	 	 .push_back( number_of_tracks );
     total_tracks        += number_of_tracks;
     total_Events +=number_of_events;

     std::cout<<"Run Numenr: "<<runNumber<<std::endl;
 
   }


   std::cout<<"Total Runs in this files: "<<n<<endl;
   std::cout<<"Total negative or zero runtime Runs in this files: "<<nRunsNOtNegativeOrZeroTime<<endl;
   std::cout<<"Total events in this files: "<<total_Events<<endl;
   std::cout<<"Total tracks in this files: "<<total_tracks<<endl;
   
}
