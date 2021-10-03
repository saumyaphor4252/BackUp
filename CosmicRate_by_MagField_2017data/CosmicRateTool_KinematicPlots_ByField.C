void Compare_Normalized_Kinematic_Plots(TH1D, TH1D, TString);

void CosmicRateTool_KinematicPlots_ByField()
{
        
  //TFile *file = new TFile("Prompt2017_Bv1.root");
  TFile *file = new TFile("Commissioning2017.root");
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

       for (int i = 0; i < MagField->size() ; i++)			// MagField Total 
	 {

	   if( abs(MagField->at(i)-GivenField_1) < 1e-2 )
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

	   else if( abs(MagField->at(i)-GivenField_2) <1e-2 )
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
	     std::cout<<"Field matches none and is: "<<MagField->at(i)<<std::endl;
	   
	 }  // MagField total
       
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
   Compare_Normalized_Kinematic_Plots(h_pt_1, h_pt_2, "pt");
   Compare_Normalized_Kinematic_Plots(h_eta_1, h_eta_2, "eta");
   Compare_Normalized_Kinematic_Plots(h_phi_1, h_phi_2, "phi");
   Compare_Normalized_Kinematic_Plots(h_theta_1, h_theta_2, "theta");
   Compare_Normalized_Kinematic_Plots(h_d0_1, h_d0_2, "d0");
   Compare_Normalized_Kinematic_Plots(h_dz_1, h_dz_2, "dz");
   Compare_Normalized_Kinematic_Plots(h_chi2_1, h_chi2_2, "chi2");
   Compare_Normalized_Kinematic_Plots(h_chi2_ndof_1, h_chi2_ndof_2, "chi2_ndof");
   Compare_Normalized_Kinematic_Plots(h_charge_1, h_charge_2, "charge");
   
}

void Compare_Normalized_Kinematic_Plots(TH1D h1, TH1D h2, TString variable)
{
  TCanvas c("c", "c",556,214,661,641);
  gStyle->SetOptStat(0);
  gStyle->SetOptTitle(0); // Dont show Title
  c.Range(-7.156863,-810349,5.764706,4951034);
  c.SetFillColor(0);
  c.SetBorderMode(0);
  c.SetBorderSize(3);
  c.SetGridx();
  c.SetGridy();
  c.SetTickx(1);
  c.SetTicky(1);
  c.SetLeftMargin(0.1669196);
  c.SetRightMargin(0.05918058);
  c.SetTopMargin(0.08233276);
  c.SetBottomMargin(0.1406518);
  c.SetFrameLineWidth(3);
  c.SetFrameBorderMode(0);
  c.SetFrameLineWidth(3);
  c.SetFrameBorderMode(0);
  
  TGaxis::SetMaxDigits(3);

  h1.SetLineColor(kBlue);
  h1.SetLineWidth(3);

  TString TempEta="eta", TempChi2="chi2";
  if(variable.Contains("pt"))
    {
      h1.SetXTitle("Track p_{T} (GeV)");
    }
  else if(variable.Contains("charge"))
    {
      h1.SetXTitle("Track charge (e)");
    }
  else if(variable.Data()==TempEta)
    {
      h1.SetXTitle("Track #eta");
    }
  else if(variable.Contains("phi"))
    {
      h1.SetXTitle("Track #phi (rad)");
    }
  else if(variable.Contains("theta"))
    {
      h1.SetXTitle("Track #theta (rad)");
    }
  else if(variable.Contains("d0"))
    {
      h1.SetXTitle("Track d_{0} (cm)");
    }
  else if(variable.Contains("dz"))
    {
      h1.SetXTitle("Track d_{z} (cm)");
    }
  else if(variable.Data()==TempChi2)
    {
      h1.SetXTitle("Track #chi^{2}");
    }
  else if(variable.Contains("ndof"))
    {
      h1.SetXTitle("Track #chi^{2} per NDF");
    }
  else
    { std::cout<<"Title does not match anything in the categories defined!"<<std::endl;
    }

  
  h1.SetYTitle("a.u.");
  h1.SetLabelSize(0.05);
  h1.GetXaxis()->SetLabelSize(0.05);
  h1.GetXaxis()->SetTitleSize(0.05); 
  h1.GetYaxis()->SetLabelSize(0.05);
  h1.GetYaxis()->SetTitleSize(0.06);
  h1.GetXaxis()->SetTitleOffset(1.12);
  // h1.DrawNormalized();
  
  h2.SetLineColor(kRed);
  h2.SetLineWidth(3);
  //  h2.DrawNormalized("SAME");

    h2.SetYTitle("a.u.");
    h2.SetXTitle("Track d_{0} (cm)");
  h2.SetLabelSize(0.05);
  h2.GetXaxis()->SetTitleSize(0.05); 
  h2.GetXaxis()->SetLabelSize(0.05);
  h2.GetYaxis()->SetTitleSize(0.06);
  h2.GetYaxis()->SetLabelSize(0.05);
  h2.GetXaxis()->SetTitleOffset(1.12);  
  h2.DrawNormalized();
  h1.DrawNormalized("same");

  // Titles & text on plot //
  TLatex Title = TLatex();
  Title.SetTextFont(42);
  Title.SetTextSize(0.035);
  Title.DrawLatexNDC(0.48, 0.94, "cosmic rays 2017 (Commissioning)");
  // Title.DrawLatexNDC(0.69, 0.94, "cosmic rays (2017)");//Bv1

  //Legend
  TLegend *leg = new TLegend(0.660091,0.7287582,0.9028832,0.879085,NULL,"brNDC");
  // TLegend *leg = new TLegend(0.2094082,0.7238562,0.4522003,0.874183,NULL,"brNDC");//Bv1 theta
  leg->SetBorderSize(1);
  leg->SetTextSize(0.03921569);
  leg->SetLineColor(1);
  leg->SetLineStyle(1);
  leg->SetLineWidth(2);
  leg->SetFillColor(0);
  leg->SetFillStyle(1001);
  TLegendEntry *entry=leg->AddEntry("NULL","Magnetic Field","h");
  entry->SetLineColor(1);
  entry->SetLineStyle(1);
  entry->SetLineWidth(1);
  entry->SetMarkerColor(1);
  entry->SetMarkerStyle(21);
  entry->SetMarkerSize(1);
  entry->SetTextFont(42);
  entry=leg->AddEntry("h_eta_1__3","0 T","lpf");
  entry->SetFillStyle(1001);
  entry->SetLineColor(4);
  entry->SetLineStyle(1);
  entry->SetLineWidth(3);
  entry->SetMarkerColor(4);
  entry->SetMarkerStyle(1);
  entry->SetMarkerSize(1);
  entry->SetTextFont(42);
  entry=leg->AddEntry("h_eta_2__4","3.8 T","lpflpf");
  entry->SetFillStyle(1001);
  entry->SetLineColor(2);
  entry->SetLineStyle(1);
  entry->SetLineWidth(3);
  entry->SetMarkerColor(2);
  entry->SetMarkerStyle(1);
  entry->SetMarkerSize(1);
  entry->SetTextFont(42);
  leg->Draw();
  
  //============== Saving as PDF, png and C ============= //
  TString PlotFormat[] = {"png", "pdf", "C"};
  for(int k=0; k<3; k++)
    {
      TString Format = variable + "." + PlotFormat[k];
      c.SaveAs(Format.Data());
      TString mv_folder_string = "mv " + Format + " Kinematic_Plots";
      gSystem->Exec(mv_folder_string.Data());
    }
   c.Close();
}

