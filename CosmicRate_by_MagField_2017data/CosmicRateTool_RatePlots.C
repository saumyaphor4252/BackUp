void CosmicRateTool_RatePlots()
{
   TFile *file = new TFile("Prompt2017_Bv1.root");
   
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

    TCanvas *c = new TCanvas("c", "c",372,57,856,842);
      c->Range(-1.553285,-0.7217677,8.420438,5.067103);
      c->SetFillColor(0);
      c->SetBorderMode(0);
      c->SetBorderSize(2);
      c->SetGridx();
      c->SetGridy();
      c->SetTickx(1);
      c->SetTicky(1);
      c->SetLeftMargin(0.1557377);
      c->SetRightMargin(0.04215457);
      c->SetBottomMargin(0.1246819);
      c->SetFrameLineWidth(3);
      c->SetFrameBorderMode(0);
      c->SetFrameLineWidth(3);
      c->SetFrameBorderMode(0);
      
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

   Long64_t n = tree->GetEntriesFast();
   std::cout<<"Total Runs in this files: "<<n<<endl;
   for (Long64_t jentry=0; jentry<n;jentry++) 
   {
     tree->GetEntry(jentry);
     if (run_time == 0 || run_time < 0) continue;

     events              .push_back( number_of_events);
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
     tracks_bpix	 .push_back( number_of_tracks_BPIX );
     tracks_fpix	 .push_back( number_of_tracks_FPIX );
     tracks_pix	         .push_back( number_of_tracks_PIX );
     tracks_tec	         .push_back( number_of_tracks_TECM );
     total_tracks        += tracks[j];
     bpix_tracks 	 += tracks_bpix[j];
     fpix_tracks 	 += tracks_fpix[j];
     pix_tracks 	 += tracks_pix[j];
     
     
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
     if (number_of_tracks_TECM == 0)
       {
	 tracks_TECoff += tracks.at(j);
       }    
     j++;    
   }
   
   fprintf(pFile,"\n\n");
   fprintf(pFile,"##################################################\n");
   fprintf(pFile,"    Some information on total number of tracks    \n");
   fprintf(pFile,"##################################################\n");
   fprintf(pFile,"Total # of tracks   : %-10.0lf\n",total_tracks);
   fprintf(pFile,"# of tracks in BPIX : %-10.0lf\n",bpix_tracks);
   fprintf(pFile,"# of tracks in FPIX : %-10.0lf\n",fpix_tracks);
   fprintf(pFile,"# of tracks in PIX  : %-10.0lf\n",pix_tracks);
   fprintf(pFile,"\n\n");

   
   //+++++++++++++++++++++++++++++       Make Directory     +++++++++++++++++++++++++++++++++++++
   gSystem->Exec("mkdir -p Rate_Plots");
   
   //-----------------------------------    PLOTTING  -------------------------------------------
 
   
   TVectorD  event_rate_VecD 		;
   TVectorD  event_rate_err_VecD	;
   TVectorD  track_rate_VecD 		;
   TVectorD  track_rate_err_VecD	;
   TVectorD  runNumber_VecD 		;
   TVectorD  runNumber_err_VecD		;
   TVectorD  track_rate_PIX_VecD 	;
   TVectorD  track_rate_PIX_err_VecD 	;
   TVectorD  track_rate_FPIX_VecD	;
   TVectorD  track_rate_FPIX_err_VecD	;
   TVectorD  track_rate_BPIX_VecD 	;
   TVectorD  track_rate_BPIX_err_VecD	;
   TVectorD  track_rate_TOB_VecD 	;
   TVectorD  track_rate_TOB_err_VecD 	;
   TVectorD  track_rate_TIB_VecD 	;
   TVectorD  track_rate_TIB_err_VecD 	;
   TVectorD  track_rate_TID_VecD 	;
   TVectorD  track_rate_TID_err_VecD 	;
   TVectorD  track_rate_TEC_VecD 	;
   TVectorD  track_rate_TEC_err_VecD 	;
   TVectorD  track_rate_TECP_VecD 	;
   TVectorD  track_rate_TECP_err_VecD	;
   TVectorD  track_rate_TECM_VecD 	;
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

   std::cout<<" Weighted mean Event Rate : "<<weighted_mean_event_rate<<std::endl; 
   std::cout<<" Weighted mean Total Track Rate : "<<weighted_mean_track_rate<<std::endl; 
   std::cout<<" Weighted mean Track Rate BPIX: "<<weighted_mean_track_rate_BPIX<<std::endl;              
   std::cout<<" Weighted mean Track Rate FPIX : "<<weighted_mean_track_rate_FPIX <<std::endl;      	       
   std::cout<<" Weighted mean Track Rate TIB: "<<weighted_mean_track_rate_TIB<<std::endl; 
   std::cout<<" Weighted mean Track Rate TOB: "<<weighted_mean_track_rate_TOB<<std::endl; 
   std::cout<<" Weighted mean Track Rate TID: "<<weighted_mean_track_rate_TID<<std::endl;   
   std::cout<<" Weighted mean Track Rate TEC: "<<weighted_mean_track_rate_TEC<<std::endl; 

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
   
   TH1F h1b("h1b","Rate Summary",8,0,8);
      h1b.SetFillColor(6);
      h1b.SetBarWidth(0.6);
      h1b.SetBarOffset(0.25);
      // h1b.SetMaximum(5);
      h1b.SetStats(0);
      h1b.GetXaxis()->SetLabelFont(42);
      h1b.GetXaxis()->SetLabelOffset(0.012);
      h1b.GetXaxis()->SetLabelSize(0.07);
      h1b.GetXaxis()->SetTitleSize(0.05);
      h1b.GetXaxis()->SetTitleFont(42);
      h1b.GetYaxis()->SetTitle("Average Rate (Hz)");
      h1b.GetYaxis()->SetLabelFont(42);
      h1b.GetYaxis()->SetLabelSize(0.05);
      h1b.GetYaxis()->SetTitleSize(0.05);
      h1b.GetYaxis()->SetTitleOffset(0);
     
      gStyle->SetPaintTextFormat("1.2f");
      h1b.LabelsOption("d");

        TLatex tex;
      tex.DrawLatexNDC(0.4,0.8,"Rate Summary");
      tex.SetLineWidth(2);
      tex.SetTextFont(62);
      tex.Draw();
      
      
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
   
    h1b.Draw("bTEXT");
      TString summary_chart_title = Form("SummaryChart");
      TString Format[3] = {"png","pdf","C"};
     
      for(int i =0; i<3 ; i++)
	{
	  TString filename= summary_chart_title + "." + Format[i]; 
	  c->SaveAs(filename.Data());
	  TString mv_cmd = "mv " + filename + " Rate_Plots_SummaryCharts";
	  gSystem->Exec(mv_cmd.Data());
	}
	c->Close();
   
}
