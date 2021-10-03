void GetMagField_NewFormat()
{

  //TFile *file = new TFile("Commissioning_2018_Prompt.root");
  TFile *file = new TFile("CRUZET_2021_StreamExpress_17Aug_FULL.root");
   
   TTree *tree_Run = (TTree*)file->Get("cosmicRateAnalyzer/Run");
   TTree *tree_Event = (TTree*)file->Get("cosmicRateAnalyzer/Event");

   FILE *Events_per_Run = fopen("Events_per_Run.csv","w");
	
   unsigned int          runnum;
   double                run_time;
   int                   number_of_events;
   double                magField;
   double                mField;
   int                   ntrk;
   
   tree_Run->SetBranchAddress("runnum", &runnum);
   tree_Run->SetBranchAddress("run_time", &run_time);
   tree_Run->SetBranchAddress("number_of_events", &number_of_events);
   tree_Event->SetBranchAddress("magField", &magField);
   tree_Event->SetBranchAddress("ntrk", &ntrk); 
   
   Long64_t Run_Start_Event, Run_End_Event;

   Long64_t nTotalRuns = tree_Run->GetEntriesFast();
   std::cout<<"Total Runs in this file are: "<<nTotalRuns<<std::endl;

   Long64_t nTotalEvents = tree_Event->GetEntriesFast();
   std::cout<<"Total Events in this file are: "<<nTotalEvents<<std::endl;
   
   int nEventsInRun=0, nTotalTracks=0; float TempField;
   int CheckTotalEvents=0;
	
   for (int run=0; run<nTotalRuns;run++) //Loop over all runs
   {
     tree_Run->GetEntry(run);
     if(run==0)
       { Run_Start_Event=0;
	 Run_End_Event=number_of_events; 
       }
     else
       { Run_Start_Event=Run_End_Event;
         Run_End_Event=Run_Start_Event+number_of_events; 
       }
     //std::cout<<"Run Start: "<<Run_Start_Event<<" | "<<"Run End: "<<Run_End_Event<<std::endl;
     
     std::cout<<"Run No: "<<runnum<<std::endl;  
     //  if (run_time == 0 )
     //  { std::cout<<"      Runtime zero for Run No,: "<<runnum<<std::endl;
     //	 continue;
     // }
     
     
     // xxxxxxxxxxxxxx Run_Start_Event Run_End_Event
     for(Long64_t event=Run_Start_Event; event<Run_End_Event; event++)
       {
           tree_Event->GetEntry(event);
	   CheckTotalEvents++;
	   
	   if(event==0 || event==Run_Start_Event)
	     {
	       mField=magField;
	       nEventsInRun++;
	     }
	   else
	     {
	       if( magField==mField )
		 {
		   nEventsInRun++;
		 }
	       else if (magField!=mField)
		 {
		   std::cout<<"Events with MagField "<<mField<<" are: "<<nEventsInRun<<std::endl;
		   nEventsInRun=1;
		   mField=magField;
		 }  
	     }
	   TempField=magField;
	   nTotalTracks=nTotalTracks+ntrk;
	   
       }// Event Loop for each run
     
     std::cout<<"      Events in Run No: "<<number_of_events<<std::endl;
     std::cout<<"      Field: "<<TempField<<std::endl;
     fprintf(Events_per_Run,"%i,%i,%f\n",runnum,number_of_events,mField);
     
     
   }// loop over Runs in file							
   
   std::cout<<"Total Events: "<<CheckTotalEvents<<std::endl;
   std::cout<<"Total Tracks: "<<nTotalTracks<<std::endl;
   fclose(Events_per_Run);
   
}
