void Compare_Normalized_Kinematic_Plots(TH1D, TH1D, TString);

void CosmicRateTool_KinematicPlots_ByField()
{
        
  TFile *file = new TFile("Prompt_2018_Dv2.root");
  //TFile *file = new TFile("Commissioning2018.root");
  float GivenField_1=0.0, GivenField_2=3.8112; 

   bool IsFileExist;
   IsFileExist = file->IsZombie();
   if(IsFileExist)
   {   
      cout<<endl<<"====================================================================================================="<<endl;
      cout<<"File not found. Check the file!"<<endl;
      cout<<"====================================================================================================="<<endl<<endl;
      exit (EXIT_FAILURE);
   }

   TTree *tree = (TTree*)file->Get("demo/Event");
	
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
   float magField;
   
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
   tree->SetBranchAddress("magField", &magField);

   Long64_t n = tree->GetEntriesFast();

   //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
   //					Various Kinematical Histograms Declerations				
   //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
   
   TH1D h_pt_1 		("h_pt_1","h_pt_1",100,0,100);
   TH1D h_charge_1 	("h_charge_1","h_charge_1",10,-5,5);
   TH1D h_chi2_1 	("h_chi2_1","h_chi2_1",200,0,100);
   TH1D h_chi2_ndof_1 	("h_chi2_ndof_1","h_chi2_ndof_1",100,0,10);
   TH1D h_eta_1 	("h_eta_1","h_eta_1",500,-3,3);
   TH1D h_theta_1 	("h_theta_1","h_theta_1",500,-3,3);
   TH1D h_phi_1 	("h_phi_1","h_phi_1",400,-3.5,3.5);
   TH1D h_d0_1 		("h_d0_1","h_d0_1",1000,-85,85);
   TH1D h_dz_1 		("h_dz_1","h_dz_1",1500,-350,350);
   
   TH1D h_pt_2 		("h_pt_2","h_pt_2",100,0,100);
   TH1D h_charge_2 	("h_charge_2","h_charge_2",10,-5,5);
   TH1D h_chi2_2 	("h_chi2_2","h_chi2_2",200,0,100);
   TH1D h_chi2_ndof_2 	("h_chi2_ndof_2","h_chi2_ndof_2",100,0,10);
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

       if( abs(magField-GivenField_1) < 1e-2 )
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
       
       else if( abs(magField-GivenField_2) <1e-2 )
	 {
	   for (int k = 0; k < pt->size() ; k++)			// Loop over tracks 
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
	       
	       nTracks_MagField_2++;
	       nTotalTracks++;
	     }
	   nEvents_MagField_2++;
	 }// MagField 2
       
       else
	 std::cout<<"Field matches none and is: "<<magField<<std::endl;
       
       
       nTotalEvents++;
       
     }	// Event Loop						


   std::cout<<"Total Events: "<<nTotalEvents<<std::endl;
   std::cout<<"Total Tracks: "<<nTotalTracks<<std::endl;
   std::cout<<"   Total Events with field 1 : "<<nEvents_MagField_1<<std::endl;
   std::cout<<"   Total Events with field 2 : "<<nEvents_MagField_2<<std::endl;
   std::cout<<"   Total Tracks with field 1 : "<<nTracks_MagField_1<<std::endl;
   std::cout<<"   Total Tracks with field 2 : "<<nTracks_MagField_2<<std::endl;
  
   //++++++++++++++++++++++++++++++++++       Make Directory     ++++++++++++++++++++++++++++++++++++++  
   gSystem->Exec("mkdir -p Kinematic_Plots");
   
   //---------------------------------------------------------------------------------------------------
}

