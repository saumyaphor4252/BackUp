TGraphErrors *Get_RateGraph(TVectorD , TVectorD , TVectorD , TVectorD , TString , TString, TString, int);
TString ToString( int num )
{
  ostringstream start;
  start<<num;
  TString start1=start.str();
  return start1;
}

void Rate_Field()
{
   TFile *file = new TFile("Prompt2017_Bv2.root");
   vector<double> available_Mag_Field = {2.02203};
   
   bool IsFileExist;
   IsFileExist = file->IsZombie();
   if(IsFileExist)
   {
      cout<<endl<<"====================================================================================================="<<endl;
      cout<<"File not found. Check the file!"<<endl;
      cout<<"====================================================================================================="<<endl<<endl;
      exit (EXIT_FAILURE);
   }

   //+++++++++++++++++++++++++++++       Make Directory     +++++++++++++++++++++++++++++++++++++
   gSystem->Exec("mkdir -p Rate_Plots");
   

   TTree *tree;
   tree = (TTree*)file->Get("cosmicRateAnalyzer/Run");

   /*   TGraphErrors *gr_track_rate_FPIX[2];
   for(int i=0; i<2; i++)
     {	
       TString numstr=ToString(i);
       TString graphName="gr_track_rate_FPIX"+numstr; 
       gr_track_rate_FPIX[i]= new TGraphErrors;
       }*/
   
   // ==== Define canvases for plotting ===//
   TCanvas* Canvas[8];
   for(int i=0; i<8; i++)
     {
       TString numstr=ToString(i);
       TString canvasName="Canvas"+numstr; 
       Canvas[i]= new TCanvas(canvasName,canvasName,513,87,800,794);    // Declare canvas
       gStyle->SetOptStat(0);
       Canvas[i]->Range(298435.9,-0.8918666,299415.6,7.221623);
       Canvas[i]->SetFillColor(0);
       Canvas[i]->SetBorderMode(0);
       Canvas[i]->SetBorderSize(2);
       Canvas[i]->SetGrid();
       Canvas[i]->SetLeftMargin(0.1466165);
       Canvas[i]->SetRightMargin(0.03884712);
       Canvas[i]->SetTopMargin(0.08536585);
       Canvas[i]->SetBottomMargin(0.1287263);
       Canvas[i]->SetFrameLineWidth(3);
       Canvas[i]->SetFrameBorderMode(0);
    }

   TMultiGraph mg_event_rate("event rate","Event Rate");
   TMultiGraph mg_track_rate("track rate","Track Rate");
   TMultiGraph mg_track_rate_PIX("track rate pixel","Track Rate PIXEL");
   TMultiGraph mg_track_rate_FPIX("track rate fpix","Track Rate FPIX");
   TMultiGraph mg_track_rate_BPIX("track rate bpix","Track Rate BPIX");
   TMultiGraph mg_track_rate_TIB("track rate tib","Track Rate TIB");
   TMultiGraph mg_track_rate_TID("track rate tid","Track Rate TID");
   TMultiGraph mg_track_rate_TOB("track rate tob","Track Rate TOB");
   TMultiGraph mg_track_rate_TEC("track rate tec","Track Rate TEC");
   
   FILE * pFile;
   pFile =  fopen ("tracksInfo_Detailed.txt","w");
   
   double  run_time;
   unsigned int runnum;
   int     number_of_events;
   int     number_of_tracks;
   int     number_of_tracks_PIX;
   int     number_of_tracks_FPIX;
   int     number_of_tracks_BPIX;
   int     number_of_tracks_TID;
   int     number_of_tracks_TIDM;
   int     number_of_tracks_TIDP;
   int     number_of_tracks_TIB;
   int     number_of_tracks_TEC;
   int     number_of_tracks_TECP;
   int     number_of_tracks_TECM;
   int     number_of_tracks_TOB;
   
   tree->SetBranchAddress("run_time", &run_time);
   tree->SetBranchAddress("runnum", &runnum);
   tree->SetBranchAddress("number_of_events", &number_of_events);
   tree->SetBranchAddress("number_of_tracks", &number_of_tracks);
   tree->SetBranchAddress("number_of_tracks_PIX", &number_of_tracks_PIX);
   tree->SetBranchAddress("number_of_tracks_FPIX", &number_of_tracks_FPIX);
   tree->SetBranchAddress("number_of_tracks_BPIX", &number_of_tracks_BPIX);
   tree->SetBranchAddress("number_of_tracks_TID", &number_of_tracks_TID);
   tree->SetBranchAddress("number_of_tracks_TIDM", &number_of_tracks_TIDM);
   tree->SetBranchAddress("number_of_tracks_TIDP", &number_of_tracks_TIDP);
   tree->SetBranchAddress("number_of_tracks_TIB", &number_of_tracks_TIB);
   tree->SetBranchAddress("number_of_tracks_TEC", &number_of_tracks_TEC);
   tree->SetBranchAddress("number_of_tracks_TECP", &number_of_tracks_TECP);
   tree->SetBranchAddress("number_of_tracks_TECM", &number_of_tracks_TECM);
   tree->SetBranchAddress("number_of_tracks_TOB", &number_of_tracks_TOB);
   
   //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
   //		Various Rates Declerations				
   //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

   vector<double>  events               ;
   vector<double>  event_rate 		;
   vector<double>  event_rate_err	;
   vector<double>  track_rate 		;
   vector<double>  track_rate_err	;
   vector<double>  runNumber  		;
   vector<double>  runNumber_err	;
   vector<double>  track_rate_PIX 	;
   vector<double>  track_rate_PIX_err 	;
   vector<double>  track_rate_FPIX	;
   vector<double>  track_rate_FPIX_err	;
   vector<double>  track_rate_BPIX 	;
   vector<double>  track_rate_BPIX_err	;
   vector<double>  track_rate_TOB 	;
   vector<double>  track_rate_TOB_err 	;
   vector<double>  track_rate_TIB 	;
   vector<double>  track_rate_TIB_err 	;
   vector<double>  track_rate_TID 	;
   vector<double>  track_rate_TID_err 	;
   vector<double>  track_rate_TEC 	;
   vector<double>  track_rate_TEC_err 	;
   vector<double>  track_rate_TECP 	;
   vector<double>  track_rate_TECP_err	;
   vector<double>  track_rate_TECM 	;
   vector<double>  track_rate_TECM_err	;
   vector<double>  tracks		;
   vector<double>  tracks_err		;
   vector<double>  tracks_bpix		;
   vector<double>  tracks_fpix		;
   vector<double>  tracks_pix		;
   vector<double>  tracks_tec		;
   vector<double>  weight		;

   
   string Bar_Xtitle[8] = {"Event","Track","FPIX","BPIX","TIB","TID","TOB","TEC"};
   double Bar_Ytitle[8] = {0};
  
   int j=0;
   double total_tracks = 0;
   double bpix_tracks = 0;
   double fpix_tracks = 0;
   double pix_tracks = 0;
   double tracks_TECoff = 0;
   
   fprintf(pFile,"##################################################\n");
   fprintf(pFile,"         Track rate for each run number           \n");
   fprintf(pFile,"##################################################\n");

   // File with Magnetic field values for each Run
   // FILE *MagFields_for_Run = fopen("Events_per_Run.csv","r");
   int Run_Number, Events_in_Run; float Mag_Field;
   
   Long64_t n = tree->GetEntriesFast();
   std::cout<<"Total Runs in this files: "<<n<<endl;

   int i=0;
   int Color[3]={1,632,880};
   
   for (auto& it : available_Mag_Field)
     {
       std::cout<<"Magnetic Field for this loop is: "<<it<<std::endl;
       FILE *MagFields_for_Run = fopen("Events_per_Run.csv","r");
       
       for (Long64_t jentry=0; jentry<n;jentry++) // Loop over all Runs
	 {
	   tree->GetEntry(jentry);  // Get run 
	   if (run_time == 0 || run_time < 0) continue;
	   
	   //=================  Get the magnetic field for that Run ==================//
	   fscanf(MagFields_for_Run,"%i,%i,%f\n",&Run_Number,&Events_in_Run,&Mag_Field);
	   std::cout<<" Run No: "<<Run_Number<<" : "<<"Events: "<<Events_in_Run<<" : "<<"M Field: "<<Mag_Field<<std::endl;
	   std::cout<<"Run no from CSV: "<<Run_Number<<" : From loop : "<<runnum<<std::endl;

	   if(Run_Number!=runnum)
	     {
	       std::cout<<"CAUTION: Run numbers don't match !!!"<<std::endl;
	       continue;
	     }
	   
	   // Caluculate rate only for field 3.8T by removing 0T runs
	   if( (Mag_Field-it)>1e-3 ) 
	     {
	       std::cout<<"Mag Filed is not equal to "<<it<<std::endl;
	       j++;
	       continue;
	     }

	   std::cout<<"Mag Filed is equal to "<<it<<std::endl;
	   std::cout<<"Value of j is: "<<j<<std::endl;
	   
	   //=================  Get the magnetic field for that Run ==================//
	   //   events                .push_back( number_of_events);
	   event_rate	         .push_back( number_of_events/run_time );
	   runNumber 	         .push_back( runnum );
	   track_rate	         .push_back( number_of_tracks/run_time );
	   track_rate_PIX	 .push_back( number_of_tracks_PIX/run_time );
	   track_rate_FPIX	 .push_back( number_of_tracks_FPIX/run_time );
	   track_rate_BPIX	 .push_back( number_of_tracks_BPIX/run_time );
	   track_rate_TOB	 .push_back( number_of_tracks_TOB/run_time );
	   track_rate_TIB	 .push_back( number_of_tracks_TIB/run_time );
	   track_rate_TID	 .push_back( number_of_tracks_TID/run_time );
	   track_rate_TEC	 .push_back( number_of_tracks_TEC/run_time );
	   track_rate_TECP	 .push_back( number_of_tracks_TECP/run_time );
	   track_rate_TECM	 .push_back( number_of_tracks_TECM/run_time );
	   tracks	 	 .push_back( number_of_tracks );
	   tracks_bpix	         .push_back( number_of_tracks_BPIX );
	   tracks_fpix	         .push_back( number_of_tracks_FPIX );
	   tracks_pix	         .push_back( number_of_tracks_PIX );
	   tracks_tec	         .push_back( number_of_tracks_TECM );
	   total_tracks          += tracks[j];
	   bpix_tracks 	         += tracks_bpix[j];
	   fpix_tracks 	         += tracks_fpix[j];
	   pix_tracks 	         += tracks_pix[j];
	       
	   fprintf(pFile,"runnum :%-7.0lf, # of tracks :%-10.0lf, track rates :%-10.2lf\n",runNumber.at(j),tracks.at(j),track_rate.at(j));
	   track_rate_err	 	.push_back( sqrt(float(number_of_tracks))/run_time );
	   event_rate_err	 	.push_back( sqrt(float(number_of_events))/run_time );
	   track_rate_PIX_err 	.push_back( sqrt(float(number_of_tracks_PIX))/run_time );
	   track_rate_FPIX_err 	.push_back( sqrt(float(number_of_tracks_FPIX))/run_time );
	   track_rate_BPIX_err 	.push_back( sqrt(float(number_of_tracks_BPIX))/run_time );
	   track_rate_TOB_err 	.push_back( sqrt(float(number_of_tracks_TOB))/run_time );
	   track_rate_TIB_err 	.push_back( sqrt(float(number_of_tracks_TIB))/run_time );
	   track_rate_TID_err 	.push_back( sqrt(float(number_of_tracks_TID))/run_time );
	   track_rate_TEC_err 	.push_back( sqrt(float(number_of_tracks_TEC))/run_time );
	   track_rate_TECP_err 	.push_back( sqrt(float(number_of_tracks_TECP))/run_time );
	   track_rate_TECM_err 	.push_back( sqrt(float(number_of_tracks_TECM))/run_time );
	   
	   runNumber_err.push_back(0);   
	   j++;
	 }// Loop over Runs
       
       //   fclose(MagFields_for_Run); 
       
       fprintf(pFile,"\n\n");
       fprintf(pFile,"##################################################\n");
       fprintf(pFile,"    Some information on total number of tracks    \n");
       fprintf(pFile,"##################################################\n");
       fprintf(pFile,"Total # of tracks   : %-10.0lf\n",total_tracks);
       fprintf(pFile,"# of tracks in BPIX : %-10.0lf\n",bpix_tracks);
       fprintf(pFile,"# of tracks in FPIX : %-10.0lf\n",fpix_tracks);
       fprintf(pFile,"# of tracks in PIX  : %-10.0lf\n",pix_tracks);
       fprintf(pFile,"\n\n");
       
       //-----------------------------------    PLOTTING  -------------------------------------------

       // xxxxxxxxLinking vectors to TVectorD
       TVectorD  runNumber_VecD 	        	;
       TVectorD  runNumber_err_VecD		;
       TVectorD  event_rate_VecD 		;
       TVectorD  event_rate_err_VecD    	        ;
       TVectorD  track_rate_VecD 		;
       TVectorD  track_rate_err_VecD	        ;
       TVectorD  track_rate_PIX_VecD      	;
       TVectorD  track_rate_PIX_err_VecD 	;
       TVectorD  track_rate_FPIX_VecD    	;
       TVectorD  track_rate_FPIX_err_VecD	;
       TVectorD  track_rate_BPIX_VecD    	;
       TVectorD  track_rate_BPIX_err_VecD	;
       TVectorD  track_rate_TIB_VecD     	;
       TVectorD  track_rate_TIB_err_VecD 	;
       TVectorD  track_rate_TID_VecD 	        ;
       TVectorD  track_rate_TID_err_VecD 	;
       TVectorD  track_rate_TIDM_VecD 	        ;
       TVectorD  track_rate_TIDM_err_VecD 	;
       TVectorD  track_rate_TIDP_VecD 	        ;
       TVectorD  track_rate_TIDP_err_VecD 	;
       TVectorD  track_rate_TOB_VecD     	;
       TVectorD  track_rate_TOB_err_VecD 	;
       TVectorD  track_rate_TEC_VecD 	        ;
       TVectorD  track_rate_TEC_err_VecD 	;
       TVectorD  track_rate_TECP_VecD    	;
       TVectorD  track_rate_TECP_err_VecD	;
       TVectorD  track_rate_TECM_VecD    	;
       TVectorD  track_rate_TECM_err_VecD	;
       
       runNumber_VecD.Use(runNumber.size(),&(runNumber[0]));
       runNumber_err_VecD.Use(runNumber_err.size(),&(runNumber_err[0]));
       event_rate_VecD.Use(event_rate.size(),&(event_rate[0]));
       event_rate_err_VecD.Use(event_rate_err.size(),&(event_rate_err[0]));
       
       track_rate_VecD.Use(track_rate.size(),&(track_rate[0]));
       track_rate_err_VecD.Use(track_rate_err.size(),&(track_rate_err[0]));
       
       track_rate_PIX_VecD.Use(track_rate_PIX.size(),&(track_rate_PIX[0]));
       track_rate_PIX_err_VecD.Use(track_rate_PIX_err.size(),&(track_rate_PIX_err[0]));
       track_rate_FPIX_VecD.Use(track_rate_FPIX.size(),&(track_rate_FPIX[0]));
       track_rate_FPIX_err_VecD.Use(track_rate_FPIX_err.size(),&(track_rate_FPIX_err[0]));
       track_rate_BPIX_VecD.Use(track_rate_BPIX.size(),&(track_rate_BPIX[0]));
       track_rate_BPIX_err_VecD.Use(track_rate_BPIX_err.size(),&(track_rate_BPIX_err[0]));
       track_rate_TOB_VecD.Use(track_rate_TOB.size(),&(track_rate_TOB[0]));
       track_rate_TOB_err_VecD.Use(track_rate_TOB_err.size(),&(track_rate_TOB_err[0]));
       track_rate_TIB_VecD.Use(track_rate_TIB.size(),&(track_rate_TIB[0]));
       track_rate_TIB_err_VecD.Use(track_rate_TIB_err.size(),&(track_rate_TIB_err[0]));
       track_rate_TID_VecD.Use(track_rate_TID.size(),&(track_rate_TID[0]));
       track_rate_TID_err_VecD.Use(track_rate_TID_err.size(),&(track_rate_TID_err[0]));
       track_rate_TEC_VecD.Use(track_rate_TEC.size(),&(track_rate_TEC[0]));
       track_rate_TEC_err_VecD.Use(track_rate_TEC_err.size(),&(track_rate_TEC_err[0]));
       track_rate_TECP_VecD.Use(track_rate_TECP.size(),&(track_rate_TECP[0]));
       track_rate_TECP_err_VecD.Use(track_rate_TECP_err.size(),&(track_rate_TECP_err[0]));
       track_rate_TECM_VecD.Use(track_rate_TECM.size(),&(track_rate_TECM[0]));
       track_rate_TECM_err_VecD.Use(track_rate_TECM_err.size(),&(track_rate_TECM_err[0]));
       
       TGraphErrors *gr_event_rate, *gr_track_rate, *gr_track_rate_PIX, *gr_track_rate_BPIX, *gr_track_rate_TIB, *gr_track_rate_TID, *gr_track_rate_TOB, *gr_track_rate_TEC;
       //+++++++++++++++++++++++++++++  Overall event rate  +++++++++++++++++++++++++++++++++++++
       Canvas[0]->cd();
       gr_event_rate = Get_RateGraph(runNumber_VecD,event_rate_VecD,runNumber_err_VecD,event_rate_err_VecD, "Event_Rate" , "Event Rate (Hz)", "Event Rate", Color[i]);
       // gr_event_rate->Draw();
       mg_event_rate.Add(gr_event_rate);
       mg_event_rate.Draw("AP");
       //   Canvas[0]->SaveAs("event_rate1.png");
       //-----------------------------------------------------------------------------------------------
       
       //++++++++++++++++++++++++++++++  Overall track rate  +++++++++++++++++++++++++++++++++++++++++++
       Canvas[1]->cd();
       gr_track_rate = Get_RateGraph(runNumber_VecD,track_rate_VecD,runNumber_err_VecD,track_rate_err_VecD, "Track_Rate" , "Track Rate (Hz)", "Track Rate", Color[i]);
       mg_track_rate.Add(gr_track_rate);
       mg_track_rate.Draw("AP");
       //-----------------------------------------------------------------------------------------------
       
       //+++++++++++++++++++++++++++++++  Total Pixel track rate +++++++++++++++++++++++++++++++++++++++
       Canvas[2]->cd();
       gr_track_rate_PIX = Get_RateGraph(runNumber_VecD,track_rate_PIX_VecD,runNumber_err_VecD,track_rate_PIX_err_VecD, "Track_Rate_PIXEL" , "Track Rate (Hz)", "PIXEL", Color[i]);
       mg_track_rate_PIX.Add(gr_track_rate_PIX);
       mg_track_rate_PIX.Draw("AP");
       //-----------------------------------------------------------------------------------------------
       
       //++++++++++++++++++++++++++++++++  FPIX track rate  ++++++++++++++++++++++++++++++++++++++++++++ 
       //gr_track_rate_FPIX[i] = Get_RateGraph(runNumber_VecD,track_rate_FPIX_VecD,runNumber_err_VecD,track_rate_FPIX_err_VecD, "Track_Rate_FPIX" , "Track Rate (Hz)", "FPIX", Color[i]);  
       //-----------------------------------------------------------------------------------------------

       //++++++++++++++++++++++++++++++++  BPIX track rate  ++++++++++++++++++++++++++++++++++++++++++++
       Canvas[3]->cd();
       gr_track_rate_BPIX = Get_RateGraph(runNumber_VecD,track_rate_BPIX_VecD,runNumber_err_VecD,track_rate_BPIX_err_VecD, "Track_Rate_BPIX" , "Track Rate (Hz)", "BPIX", Color[i]);
       mg_track_rate_BPIX.Add(gr_track_rate_BPIX);
       mg_track_rate_BPIX.Draw("AP");
       //-----------------------------------------------------------------------------------------------
       
       //++++++++++++++++++++++++++++++++  TIB track rate  ++++++++++++++++++++++++++++++++++++++++++++
       Canvas[4]->cd();
       gr_track_rate_TIB = Get_RateGraph(runNumber_VecD,track_rate_TIB_VecD,runNumber_err_VecD,track_rate_TIB_err_VecD, "Track_Rate_TIB" , "Track Rate (Hz)", "TIB", Color[i]);
       mg_track_rate_TIB.Add(gr_track_rate_TIB);
       mg_track_rate_TIB.Draw("AP");
       //-----------------------------------------------------------------------------------------------
       
       //++++++++++++++++++++++++++++++++  TID track rate  ++++++++++++++++++++++++++++++++++++++++++++
       Canvas[5]->cd();
       gr_track_rate_TID = Get_RateGraph(runNumber_VecD,track_rate_TID_VecD,runNumber_err_VecD,track_rate_TID_err_VecD, "Track_Rate_TID" , "Track Rate (Hz)", "TID", Color[i]);
       mg_track_rate_TID.Add(gr_track_rate_TID);
       mg_track_rate_TID.Draw("AP");
       //-----------------------------------------------------------------------------------------------
       
       //++++++++++++++++++++++++++++++++  TOB track rate  ++++++++++++++++++++++++++++++++++++++++++++
       Canvas[6]->cd();
       gr_track_rate_TOB = Get_RateGraph(runNumber_VecD,track_rate_TOB_VecD,runNumber_err_VecD,track_rate_TOB_err_VecD, "Track_Rate_TOB" , "Track Rate (Hz)", "TOB", Color[i]);
       mg_track_rate_TOB.Add(gr_track_rate_TOB);
       mg_track_rate_TOB.Draw("AP");
       //-----------------------------------------------------------------------------------------------
       
       //++++++++++++++++++++++++++++++++  TEC track rate  ++++++++++++++++++++++++++++++++++++++++++++
       Canvas[7]->cd();
       gr_track_rate_TEC = Get_RateGraph(runNumber_VecD,track_rate_TEC_VecD,runNumber_err_VecD,track_rate_TEC_err_VecD, "Track_Rate_TEC" , "Track Rate (Hz)", "TEC", Color[i]);
       mg_track_rate_TEC.Add(gr_track_rate_TEC);
       mg_track_rate_TEC.Draw("AP");
       //-----------------------------------------------------------------------------------------------

       i++; // incremented at magfield loop
       runNumber.clear();
       runNumber_err.clear();
       events.clear();
       event_rate.clear();		
       event_rate_err.clear();	        ;
       track_rate.clear();
       track_rate_err.clear();
       track_rate_PIX.clear();
       track_rate_PIX_err.clear();
       track_rate_FPIX.clear();
       track_rate_FPIX_err.clear();
       track_rate_BPIX.clear();
       track_rate_BPIX_err.clear();
       track_rate_TIB.clear();
       track_rate_TIB_err.clear();
       track_rate_TID.clear();
       track_rate_TID_err.clear();
       track_rate_TOB.clear();
       track_rate_TOB_err.clear();
       track_rate_TEC.clear();
       track_rate_TEC_err.clear();
       // weights.clear();

       fclose(MagFields_for_Run); 
       
     } //Mag Field loop


   Canvas[0]->SaveAs("event_rate.png");
   Canvas[1]->SaveAs("track_rate.png");
   Canvas[2]->SaveAs("track_rate_PIX.png");
   Canvas[3]->SaveAs("track_rate_FPIX.png");
   Canvas[4]->SaveAs("track_rate_BPIX.png");
   Canvas[5]->SaveAs("track_rate_TIB.png");
   Canvas[6]->SaveAs("track_rate_TID.png");
   Canvas[7]->SaveAs("track_rate_TIDM.png");
   
   gSystem->Exec("mv event_rate.png Rate_Plots");
   gSystem->Exec("mv event_rate1.png Rate_Plots");
   gSystem->Exec("mv track_rate.png Rate_Plots");
   gSystem->Exec("mv track_rate_PIX.png Rate_Plots");
   gSystem->Exec("mv track_rate_FPIX.png Rate_Plots");
   gSystem->Exec("mv track_rate_BPIX.png Rate_Plots");
   gSystem->Exec("mv track_rate_TIB.png Rate_Plots");
   gSystem->Exec("mv track_rate_TID.png Rate_Plots");
   gSystem->Exec("mv track_rate_TIDP.png Rate_Plots");
   gSystem->Exec("mv track_rate_TIDM.png Rate_Plots");

   /*
   //-----------------------------------------------------------------------------------------------
   //					Weighted Mean calculation
   //-----------------------------------------------------------------------------------------------  
   
   double total_weight		= 0;
   double weighted_mean_track_rate;
   double weighted_mean_track_rate_TEC;
   double weighted_mean_track_rate_TOB;
   double weighted_mean_track_rate_TIB;
   double weighted_mean_track_rate_TID;
   double weighted_mean_track_rate_FPIX;
   double weighted_mean_track_rate_BPIX;
   double weighted_mean_event_rate;
   
   for (int k = 0; k < j; k++)
     {
       weight.push_back( tracks.at(k)/total_tracks );
       fprintf(pFile,"%i Run \t Tracks: %f \t Weight: %lf \t Events: %f \t EventRate: %lf \n",k,tracks.at(k),weight.at(k),events.at(k), event_rate.at(k));
     }

   fprintf(pFile,"\n\n");		
   fprintf(pFile,"##################################################\n");	
   fprintf(pFile,"               Weight per Subdetector             \n");	
   fprintf(pFile,"##################################################\n");
   
   for (int a = 0; a < j ; a++)
     {
       weighted_mean_track_rate 		+= track_rate.at(a)     * weight.at(a) ; 		
       weighted_mean_track_rate_TEC 		+= track_rate_TEC.at(a) * weight.at(a) ; 	
       weighted_mean_track_rate_TOB 		+= track_rate_TOB.at(a) * weight.at(a) ; 	
       weighted_mean_track_rate_TIB 		+= track_rate_TIB.at(a) * weight.at(a) ;	
       weighted_mean_track_rate_TID 		+= track_rate_TID.at(a) * weight.at(a) ;	
       weighted_mean_track_rate_FPIX     	+= track_rate_FPIX.at(a)* weight.at(a) ;	
       weighted_mean_track_rate_BPIX    	+= track_rate_BPIX.at(a)* weight.at(a) ; 	
       weighted_mean_event_rate 		+= event_rate.at(a)     * weight.at(a) ; 		
       total_weight			    	+= weight.at(a) ;

       fprintf(pFile,"Total # of tracks   : %-10.0lf\n",total_tracks);
       fprintf(pFile,"# of tracks in BPIX : %-10.0lf\n",bpix_tracks);
       fprintf(pFile,"# of tracks in FPIX : %-10.0lf\n",fpix_tracks);       
       fprintf(pFile,"Track Rate BPIX %i event  : %lf\n",a,track_rate_BPIX.at(a));       
       fprintf(pFile,"Track Rate FPIX %i event  : %lf\n",a,track_rate_FPIX.at(a));       
       fprintf(pFile,"No of total tracks in %i event  : %-10.0lf\n",a,tracks.at(a));       
       fprintf(pFile,"No of BPIX tracks in %i event  : %-10.0lf\n",a,tracks_bpix.at(a));       
       fprintf(pFile,"# Weight for %i RunNumber : %lf\n",a,weight.at(a));                  
     }

   fprintf(pFile,"Weighted mean for Event Rate : %lf\n",weighted_mean_event_rate );	
   fprintf(pFile,"Weighted mean for Total Track Rate : %lf\n",weighted_mean_track_rate );   
   fprintf(pFile,"Weighted mean for BPIX Track Rate : %lf\n",weighted_mean_track_rate_BPIX );   
   fprintf(pFile,"Weighted mean for FPIX Track Rate : %lf\n",weighted_mean_track_rate_FPIX );   
   fprintf(pFile,"Weighted mean for TIB Track Rate: %lf\n",weighted_mean_track_rate_TIB );   
   fprintf(pFile,"Weighted mean for TOB Track Rate: %lf\n",weighted_mean_track_rate_TOB );   
   fprintf(pFile,"Weighted mean for TID Track Rate: %lf\n",weighted_mean_track_rate_TID );   
   fprintf(pFile,"Weighted mean for TEC Track Rate: %lf\n",weighted_mean_track_rate_TEC );   
   fprintf(pFile,"Total Weight : %lf\n",total_weight );
   
   fclose (pFile);
   
   //-----------------------------------------------------------------------------------------------
   //			Summary Plot for track rate in each Subdetector				 
   //-----------------------------------------------------------------------------------------------
     
   TH1F h1b("h1b","rate summary",8,0,8);
   h1b.SetFillColor(4);
   h1b.SetBarWidth(0.3);
   h1b.SetBarOffset(0.35);
   h1b.SetStats(0);
   
   Bar_Ytitle[0] = weighted_mean_event_rate;     
   Bar_Ytitle[1] = weighted_mean_track_rate;     
   Bar_Ytitle[2] = weighted_mean_track_rate_FPIX;     
   Bar_Ytitle[3] = weighted_mean_track_rate_BPIX; 
   Bar_Ytitle[4] = weighted_mean_track_rate_TIB; 
   Bar_Ytitle[5] = weighted_mean_track_rate_TID;
   Bar_Ytitle[6] = weighted_mean_track_rate_TOB; 
   Bar_Ytitle[7] = weighted_mean_track_rate_TEC;
   
   for (int i=1; i<=8; i++)
     {
       h1b.SetBinContent(i, Bar_Ytitle[i-1]);
       h1b.GetXaxis()->SetBinLabel(i,Bar_Xtitle[i-1].c_str());
     }
   
   gStyle->SetPaintTextFormat("1.4f");
   h1b.LabelsOption("d");
   h1b.SetLabelSize(0.04);
   h1b.GetYaxis()->SetTitle("Average Rate (Hz)");
   h1b.Draw("bTEXT");
   c.SaveAs("Summary_Chart.png");
   c.SaveAs("Summary_Chart.C");
   c.Close();
   gSystem->Exec("mv Summary_Chart.png Rate_Plots");
   gSystem->Exec("mv Summary_Chart.C Rate_Plots");
   */
}


TGraphErrors *Get_RateGraph(TVectorD X_Vector, TVectorD Y_Vector, TVectorD X_err_Vector, TVectorD Y_err_Vector, TString Title, TString Y_Title, TString Detector, int Graph_color)
{
  // Declare canvas
  /* TCanvas *c = new TCanvas("c", "c",513,87,800,794);
  c->Range(298435.9,-0.8918666,299415.6,7.221623);
  c->SetFillColor(0);
  c->SetBorderMode(0);
  c->SetBorderSize(2);
  c->SetGridx();
  c->SetGridy();
  c->SetLeftMargin(0.1466165);
  c->SetRightMargin(0.03884712);
  c->SetTopMargin(0.08536585);
  c->SetBottomMargin(0.1287263);
  c->SetFrameBorderMode(0);
  c->SetFrameLineWidth(3);
  c->SetFrameBorderMode(0);*/
  
  static TGraphErrors gre(X_Vector, Y_Vector, X_err_Vector, Y_err_Vector);
  gre.SetTitle("");
  gre.GetXaxis()->SetTitle("Run Number");
  gre.GetXaxis()->SetLabelSize(0.03);
  gre.GetXaxis()->SetTitleSize(0.05);
  gre.GetXaxis()->SetNoExponent();
  gre.GetYaxis()->SetTitle(Y_Title.Data());
  gre.GetYaxis()->SetLabelSize(0.05);
  gre.GetYaxis()->SetTitleSize(0.05);
  gre.GetYaxis()->SetTitleFont(42);
  gre.SetMarkerStyle(20);
  gre.SetMarkerSize(1.4);
  gre.SetMarkerColor(Graph_color);
  //gre.Draw("AP");

  // ============== Titles or Texts on Plots ============ //
  TLatex top_right_Title = TLatex();
  top_right_Title.SetTextFont(42);
  top_right_Title.SetTextSize(0.035);

  TLatex detector = TLatex();
  detector.SetTextFont(62);
  detector.SetTextSize(0.047);

  top_right_Title.DrawLatexNDC(0.47, 0.94, "Cosmic rays 2017 (Commissioning)");
  detector.DrawLatexNDC(0.18, 0.85, Detector.Data());
  /*
  c->SetGrid();
  
  //============== Saving as PDF, png and C ============= //
  TString PlotFormat[] = {"png", "pdf", "C"};
  for(int k=0; k<3; k++)
    {
      TString Format = Title + "." + PlotFormat[k];
      c->SaveAs(Format.Data());
      TString mv_folder_string = "mv " + Format + " Rate_Plots";
      gSystem->Exec(mv_folder_string.Data());
    }
   c->Close();
   //  return gre;*/
  
  return &gre;
}
