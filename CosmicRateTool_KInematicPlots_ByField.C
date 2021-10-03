void CosmicRateTool_Kinematics()
{
        
  TFile *file = new TFile("Commissioning2017.root");

   bool IsFileExist;
   IsFileExist = file->IsZombie();
   if(IsFileExist)
   {   
      cout<<endl<<"====================================================================================================="<<endl;
      cout<<"File not found. Check the file!"<<endl;
      cout<<"====================================================================================================="<<endl<<endl;
      exit (EXIT_FAILURE);
   }

   TTree *tree = (TTree*)file->Get("cosmicRateAnalyzer/Event");
	
   vector<double>  *pt;
   vector<double>  *charge;
   vector<double>  *chi2;
   vector<double>  *chi2_ndof;
   vector<double>  *eta;
   vector<double>  *theta;
   vector<double>  *phi;
   vector<double>  *p;
   vector<double>  *d0;
   vector<double>  *dz;
   vector<double>  *nvh;
   vector<double>  *MagField;
   
   pt = 0;
   charge = 0;
   chi2 = 0;
   chi2_ndof = 0;
   eta = 0;
   theta = 0;
   phi = 0;
   p = 0;
   d0 = 0;
   dz = 0;
   nvh = 0;
   MagField = 0;

   tree->SetBranchAddress("pt", &pt);
   tree->SetBranchAddress("charge", &charge);
   tree->SetBranchAddress("chi2", &chi2);
   tree->SetBranchAddress("chi2_ndof", &chi2_ndof);
   tree->SetBranchAddress("eta", &eta);
   tree->SetBranchAddress("theta", &theta);
   tree->SetBranchAddress("phi", &phi);
   tree->SetBranchAddress("p", &p);
   tree->SetBranchAddress("d0", &d0);
   tree->SetBranchAddress("dz", &dz);
   tree->SetBranchAddress("nvh", &nvh);
   tree->SetBranchAddress("MagField", &MagField);

   Long64_t n = tree->GetEntriesFast();

   //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
   //					Various Kinematical Histograms Declerations				
   //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
   
   TH1D h_pt_1 		("h_pt_1","h_pt_1",200,0,200);
   TH1D h_charge_1 	("h_charge_1","h_charge_1",10,-5,5);
   TH1D h_chi2_1 	("h_chi2_1","h_chi2_1",200,0,100);
   TH1D h_chi2_ndof_1 	("h_chi2_ndof_1","h_chi2_ndof_1",200,0,20);
   TH1D h_eta_1 	("h_eta_1","h_eta_1",500,-3,3);
   TH1D h_theta_1 	("h_theta_1","h_theta_1",500,-3,3);
   TH1D h_phi_1 	("h_phi_1","h_phi_1",400,-3.5,3.5);
   TH1D h_d0_1 		("h_d0_1","h_d0_1",1000,-85,85);
   TH1D h_dz_1 		("h_dz_1","h_dz_1",1500,-350,350);
   TH1D h_pt_2 		("h_pt_2","h_pt_2",200,0,200);
   TH1D h_charge_2 	("h_charge_2","h_charge_2",10,-5,5);
   TH1D h_chi2_2 	("h_chi2_2","h_chi2_2",200,0,100);
   TH1D h_chi2_ndof_2 	("h_chi2_ndof_2","h_chi2_ndof_2",200,0,20);
   TH1D h_eta_2 	("h_eta_2","h_eta_2",500,-3,3);
   TH1D h_theta_2 	("h_theta_2","h_theta_2",500,-3,3);
   TH1D h_phi_2 	("h_phi_2","h_phi_2",400,-3.5,3.5);
   TH1D h_d0_2 		("h_d0_2","h_d0_2",1000,-85,85);
   TH1D h_dz_2 		("h_dz_2","h_dz_2",1500,-350,350);
   
   //----------------------------------------------------------------------------------------------------------------

   int nTotalEvents=0, nTotalTracks=0, nEvents_MagField_1=0, nEvents_MagField_2=0, nTracks_MagField_1=0, nTracks_MagField_2=0;
   
   for (Long64_t jentry=0; jentry<n;jentry++)                   // Loop over events
     {
       tree->GetEntry(jentry);

       for (int i = 0; i < MagField->size() ; i++)			// MagField Total 
	 {

	   if( (MagField->at(i)-GivenField_1) < 1e-3)
	     {
	       for (int k = 0; k < pt->size() ; k++)			// Loop over tracks 
		 {
		   h_pt_1.Fill(pt->at(k));
		   h_charge_1.Fill(charge->at(k));
		   h_chi2_1.Fill(chi2->at(k));
		   h_chi2_ndof_1.Fill(chi2_ndof->at(k));
		   h_eta_1.Fill(eta->at(k));
		   h_theta_1.Fill(theta->at(k));
		   h_phi_1.Fill(phi->at(k));
		   h_d0_1.Fill(d0->at(k));
		   h_dz_1.Fill(dz->at(k));
		   
		   nTracks_MagField_1++;
		   nTotalTracks++;
		 }
	       nEvents_MagField_1++;
	     }// MagField 1

	   else if( (MagField->at(i)-GivenField_2) < 1e-3)
	     {
	       for (k = 0; k < pt->size() ; k++)			// Loop over tracks 
		 {
		   h_pt_2.Fill(pt->at(k));
		   h_charge_2.Fill(charge->at(k));
		   h_chi2_2.Fill(chi2->at(k));
		   h_chi2_ndof_2.Fill(chi2_ndof->at(k));
		   h_eta_2.Fill(eta->at(k));
		   h_theta_2.Fill(theta->at(k));
		   h_phi_2.Fill(phi->at(k));
		   h_d0_2.Fill(d0->at(k));
		   h_dz_2.Fill(dz->at(k));
		   
		   nTracks_MagField_1++;
		   nTotalTracks++;
		 }
	       nEvents_MagField_2++;
	     }// MagField 2
	   
	   else
	     std::cout<<"Field matches none and is: "MagField->at(i)<<std::endl;
	   
	 }  // MagField total
       
       nTotalEvents++;
       
     }	// Event Loop						


   std::cout<<"Total Events: "<<nTotalEvents<<std::endl;
   std::cout<<"Total Tracks: "<<nTotalTracks<<std::endl;
   std::cout<<"   Total Events with field 1 : "<<nEvents_MagField_1<<std::endl;
   std::cout<<"   Total Events with field 2 : "<<nEvents_MagField_2<<std::endl;
   std::cout<<"   Total Tracks with field 1 : "<<nTracks_MagField_1<<std::endl;
   std::cout<<"   Total Tracks with field 2 : "<<nTracks_MagField_2<<std::endl;

   /*   
   //++++++++++++++++++++++++++++++++++       Make Directory     ++++++++++++++++++++++++++++++++++++++  
   gSystem->Exec("mkdir -p Kinematical_Plots");
   
   //---------------------------------------------------------------------------------------------------
   
   TCanvas c("c","c",800,600);    // Declare canvas
   
   //+++++++++++++++++++++++++++++++       pT Distribution      ++++++++++++++++++++++++++++++++++++++++     
   h_pt.SetLineColor(kBlue);
   h_pt.SetLineWidth(2);
   h_pt.SetXTitle("Track p_{T} [GeV]");
   h_pt.Draw();
   h_pt.SetStats();
   c.SetGrid();
   c.SaveAs("pt.png");
   c.Clear();
   gSystem->Exec("mv pt.png Kinematical_Plots");
   //---------------------------------------------------------------------------------------------------
   
   
   //+++++++++++++++++++++++++++++++       charge Distribution      ++++++++++++++++++++++++++++++++++++++++       
   h_charge.SetLineColor(kBlue);
   h_charge.SetLineWidth(2);
   h_charge.SetXTitle("");
   h_charge.Draw();
   c.SetGrid();
   c.SaveAs("charge.png");
   c.Clear();
   gSystem->Exec("mv charge.png Kinematical_Plots");
   //---------------------------------------------------------------------------------------------------
   
   
   //+++++++++++++++++++++++++++++++       chi2 Distribution      ++++++++++++++++++++++++++++++++++++++++     
   
   h_chi2.SetLineColor(kBlue);
   h_chi2.SetLineWidth(2); 
   h_chi2.SetTitle("chi2 distribution");
   h_chi2.SetXTitle("");
   h_chi2.Draw();
   c.SetGrid();                         
   c.SaveAs("chi2.png");                                                                                                                  
   c.Clear();      
   gSystem->Exec("mv chi2.png Kinematical_Plots");
   //---------------------------------------------------------------------------------------------------
   
   
   //+++++++++++++++++++++++++++++++       chi2/ndof Distribution      ++++++++++++++++++++++++++++++++++++++++     
   
   h_chi2_ndof.SetLineColor(kBlue);
   h_chi2_ndof.SetLineWidth(2); 
   h_chi2_ndof.SetTitle("chi2 per ndof");
   h_chi2_ndof.SetXTitle("");
   h_chi2_ndof.Draw();
   c.SetGrid();    
   c.SaveAs("chi2_ndof.png");                                                                                                             
   c.Clear();
   gSystem->Exec("mv chi2_ndof.png Kinematical_Plots");
   //---------------------------------------------------------------------------------------------------
   
   
   //+++++++++++++++++++++++++++++++       eta Distribution      ++++++++++++++++++++++++++++++++++++++++     
   
   h_eta.SetLineColor(kBlue);
   h_eta.SetLineWidth(2); 
   h_eta.SetTitle("eta Distribution");
   h_eta.SetXTitle("#eta");
   h_eta.Draw();
   c.SetGrid();                            
   c.SaveAs("eta.png");                                                                                                                  
   c.Clear();      
   gSystem->Exec("mv eta.png Kinematical_Plots");
   //---------------------------------------------------------------------------------------------------
   
   
   //+++++++++++++++++++++++++++++++       theta Distribution      ++++++++++++++++++++++++++++++++++++++++     
   
   h_theta.SetLineColor(kBlue);
   h_theta.SetLineWidth(2); 
   h_theta.SetTitle("theta distribution");
   h_theta.SetXTitle("#theta");
   h_theta.Draw();
   c.SetGrid();    
   c.SaveAs("theta.png");                                                                                                                  
   c.Clear();      
   gSystem->Exec("mv theta.png Kinematical_Plots");
   //---------------------------------------------------------------------------------------------------
   
   
   //+++++++++++++++++++++++++++++++       phi Distribution      ++++++++++++++++++++++++++++++++++++++++     
   
   h_phi.SetLineColor(kBlue);
   h_phi.SetLineWidth(2); 
   h_phi.SetTitle("phi distribution");
   h_phi.SetXTitle("#phi");
   h_phi.Draw();
   c.SetGrid();    
   c.SaveAs("phi.png");                                                                                                                  
   c.Clear();      
   gSystem->Exec("mv phi.png Kinematical_Plots");
   //---------------------------------------------------------------------------------------------------
   
   
   //+++++++++++++++++++++++++++++++       d0 Distribution      ++++++++++++++++++++++++++++++++++++++++     
   
   h_d0.SetLineColor(kBlue);
   h_d0.SetLineWidth(2); 
   h_d0.SetTitle("d0 distribution");
   h_d0.SetXTitle("d0");
   h_d0.Draw();
   c.SetGrid();                         
   c.SaveAs("d0.png");                                                                                                                  
   c.Clear();      
   gSystem->Exec("mv d0.png Kinematical_Plots");
   //---------------------------------------------------------------------------------------------------
   
   
   //+++++++++++++++++++++++++++++++       dz Distribution      ++++++++++++++++++++++++++++++++++++++++     
   
   h_dz.SetLineColor(kBlue);
   h_dz.SetLineWidth(2); 
   h_dz.SetTitle("dz distribution");
   h_dz.SetXTitle("dz");
   h_dz.Draw();
   c.SetGrid();                         
   c.SaveAs("dz.png");                                                                                                                  
   c.Close();      
   gSystem->Exec("mv dz.png Kinematical_Plots");
   //---------------------------------------------------------------------------------------------------
   */
}
