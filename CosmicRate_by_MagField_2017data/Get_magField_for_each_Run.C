void Get_magField_for_each_Run()
{
  /*
     1) Modify the name of the root file - (TFile file*)
     2) Enter the list of magnetic field values
     3) Enter the name of csv you want to create
     4) Also modify the if conditions if required
     5) Remove the header line from the csv obtained
   */

   //TFile *file = new TFile("Prompt2017_Av1.root");
   TFile *file = new TFile("Prompt2017_Bv1.root");
   //  TFile *file = new TFile("Commissioning2017.root");
   
   TTree *tree_Run = (TTree*)file->Get("cosmicRateAnalyzer/Run");
   TTree *tree_Event = (TTree*)file->Get("cosmicRateAnalyzer/Event");

   FILE *Events_per_Run = fopen("Events_per_Run_2017Bv1.csv","w");
	
   unsigned int          runnum;
   double                run_time;
   int                   number_of_events;
   vector<double>        *MagField;
   double                mField;
   
   tree_Run->SetBranchAddress("runnum", &runnum);
   tree_Run->SetBranchAddress("run_time", &run_time);
   tree_Run->SetBranchAddress("number_of_events", &number_of_events);
   tree_Event->SetBranchAddress("MagField", &MagField);

   MagField=0;
   
   Long64_t Run_Start_Event, Run_End_Event;

   Long64_t nTotalRuns = tree_Run->GetEntriesFast();
   std::cout<<"Total Runs in this file are: "<<nTotalRuns<<std::endl;

   Long64_t nTotalEvents = tree_Event->GetEntriesFast();
   std::cout<<"Total Events in this file are: "<<nTotalEvents<<std::endl;
   
   // fprintf(Events_per_Run,"Total Runs,%lld,Magnetic Field \n",nTotalRuns);
   int nEventsInRun=0; float TempField; int nZeroRunTime=0;
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
     std::cout<<"Run Start: "<<Run_Start_Event<<" | "<<"Run End: "<<Run_End_Event<<std::endl;
     
     std::cout<<"Run No: "<<runnum<<std::endl;  
     if (run_time == 0 || run_time < 0 ) //CAUTION USING THIS CONDITION
       { std::cout<<"      Runtime zero for Run No,: "<<runnum<<std::endl;
	 nZeroRunTime++;
	 //	 continue;
       }
     
     
     // xxxxxxxxxxxxxx Run_Start_Event Run_End_Event
     for(Long64_t event=Run_Start_Event; event<Run_End_Event; event++)
       {
           tree_Event->GetEntry(event);
	   CheckTotalEvents++;
	   
	   for (int k = 0; k < MagField->size() ; k++)	//
	   {
	     if(event==0 || event==Run_Start_Event)
	       {
		 mField=MagField->at(k);
		 nEventsInRun++;
	       }
	     else
	       {
		 if( MagField->at(k)==mField )
		   {
		     nEventsInRun++;
		   }
		 else if (MagField->at(k)!=mField)
		   {
		     std::cout<<"Events with MagField "<<mField<<" are: "<<nEventsInRun<<std::endl;
		     nEventsInRun=1;
		     mField=MagField->at(k);
		   }  
	       }
	  TempField=MagField->at(k);
	   }// Mag Field loop
	
       }// Event Loop for each run
     
     std::cout<<"      Events in Run No: "<<number_of_events<<std::endl;
     std::cout<<"      Field: "<<TempField<<std::endl;
     fprintf(Events_per_Run,"%i,%i,%f\n",runnum,number_of_events,mField);
    
     
   }// loop over Runs in file							

   std::cout<<"Total Events: "<<CheckTotalEvents<<std::endl;
   std::cout<<"Total Runs with Runtime zero : "<<nZeroRunTime<<std::endl;
	 
   fclose(Events_per_Run);
   
}
