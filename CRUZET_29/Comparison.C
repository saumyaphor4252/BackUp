void Compare_Normalized_Kinematic_Plots(TH1D, TH1D, TString);

void Comparison()
{
  TFile *file1 = new TFile("StreamExpress_2020.root");
  TFile *file2 = new TFile("CRUZET_StreamExpress_2021_3Aug.root");
 

  TTree *tree1 = (TTree*)file1->Get("cosmicRateAnalyzer/Event");
  TTree *tree2 = (TTree*)file2->Get("cosmicRateAnalyzer/Event");
	
  vector<double>  *pt_1;
  vector<double>  *charge_1;
  vector<double>  *chi2_1;
  vector<double>  *chi2_ndof_1;
  vector<double>  *eta_1;
  vector<double>  *theta_1;
  vector<double>  *phi_1;
  vector<double>  *p_1;
  vector<double>  *d0_1;
  vector<double>  *dz_1;   
  
  pt_1 = 0;
  charge_1 = 0;
  chi2_1 = 0;
  chi2_ndof_1 = 0;
  eta_1 = 0;
  theta_1 = 0;
  phi_1 = 0;
  p_1 = 0;
  d0_1 = 0;
  dz_1 = 0;
  
  tree1->SetBranchAddress("pt", &pt_1);
  tree1->SetBranchAddress("charge", &charge_1);
  tree1->SetBranchAddress("chi2", &chi2_1);
  tree1->SetBranchAddress("chi2_ndof", &chi2_ndof_1);
  tree1->SetBranchAddress("eta", &eta_1);
  tree1->SetBranchAddress("theta", &theta_1);
  tree1->SetBranchAddress("phi", &phi_1);
  tree1->SetBranchAddress("p", &p_1);
  tree1->SetBranchAddress("d0", &d0_1);
  tree1->SetBranchAddress("dz", &dz_1);
  
  Long64_t n1 = tree1->GetEntriesFast();
  
  vector<double>  *pt_2;
  vector<double>  *charge_2;
  vector<double>  *chi2_2;
  vector<double>  *chi2_ndof_2;
  vector<double>  *eta_2;
  vector<double>  *theta_2;
  vector<double>  *phi_2;
  vector<double>  *p_2;
  vector<double>  *d0_2;
  vector<double>  *dz_2;   
  
  pt_2 = 0;
  charge_2 = 0;
  chi2_2 = 0;
  chi2_ndof_2 = 0;
  eta_2 = 0;
  theta_2 = 0;
  phi_2 = 0;
  p_2 = 0;
  d0_2 = 0;
  dz_2 = 0;
  
  tree2->SetBranchAddress("pt", &pt_2);
  tree2->SetBranchAddress("charge", &charge_2);
  tree2->SetBranchAddress("chi2", &chi2_2);
  tree2->SetBranchAddress("chi2_ndof", &chi2_ndof_2);
  tree2->SetBranchAddress("eta", &eta_2);
  tree2->SetBranchAddress("theta", &theta_2);
  tree2->SetBranchAddress("phi", &phi_2);
  tree2->SetBranchAddress("p", &p_2);
  tree2->SetBranchAddress("d0", &d0_2);
  tree2->SetBranchAddress("dz", &dz_2);
  
  Long64_t n2 = tree2->GetEntriesFast();
  
  
  
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
  
  int nTracks1=0, nTracks2=0;
  
  for (Long64_t jentry=0; jentry<n1;jentry++)                   // Loop over events
     {
       tree1->GetEntry(jentry);
       
       for (int k = 0; k < pt_1->size() ; k++)			// Loop over tracks 
	 {
	   h_pt_1.Fill(pt_1->at(k));
	   h_charge_1.Fill(charge_1->at(k));
	   h_chi2_1.Fill(chi2_1->at(k));
	   h_chi2_ndof_1.Fill(chi2_ndof_1->at(k));
	   h_eta_1.Fill(eta_1->at(k));
	   h_theta_1.Fill(theta_1->at(k));
	   h_phi_1.Fill(phi_1->at(k));
	   h_d0_1.Fill(d0_1->at(k));
	   h_dz_1.Fill(dz_1->at(k));
	   nTracks1++;
	 }      
     }// 1

     for (Long64_t jentry=0; jentry<n2;jentry++)                   // Loop over events
     {
       tree2->GetEntry(jentry);

       for (int k = 0; k < pt_2->size() ; k++)			// Loop over tracks 
	 {
	   h_pt_2.Fill(pt_2->at(k));
	   h_charge_2.Fill(charge_2->at(k));
	   h_chi2_2.Fill(chi2_2->at(k));
	   h_chi2_ndof_2.Fill(chi2_ndof_2->at(k));
	   h_eta_2.Fill(eta_2->at(k));
	   h_theta_2.Fill(theta_2->at(k));
	   h_phi_2.Fill(phi_2->at(k));
	   h_d0_2.Fill(d0_2->at(k));
	   h_dz_2.Fill(dz_2->at(k));
	   nTracks2++;
	 }      
     }// 2


     std::cout<<"Events in  2020: "<<n1<<std::endl;
     std::cout<<"Events in 2021: "<<n2<<std::endl;
   std::cout<<"Tracks in  2020: "<<nTracks1<<std::endl;
     std::cout<<"Tracks in 2021: "<<nTracks2<<std::endl;
     
 					
   //++++++++++++++++++++++++++++++++++       Make Directory     ++++++++++++++++++++++++++++++++++++++  
     // gSystem->Exec("mkdir -p Kinematic_Plots");
   
   //---------------------------------------------------------------------------------------------------

  //++++++++++++++++++++++++++++++++++         Plotting         ++++++++++++++++++++++++++++++++++++++
  Compare_Normalized_Kinematic_Plots(h_pt_1, h_pt_2,"pt");
  Compare_Normalized_Kinematic_Plots(h_eta_1, h_eta_2, "eta");
  Compare_Normalized_Kinematic_Plots(h_phi_1, h_phi_2, "phi");
  Compare_Normalized_Kinematic_Plots(h_theta_1, h_theta_2, "theta");
  Compare_Normalized_Kinematic_Plots(h_d0_1, h_d0_2, "d0");
  Compare_Normalized_Kinematic_Plots(h_dz_1, h_dz_2, "dz");
  Compare_Normalized_Kinematic_Plots(h_chi2_1, h_chi2_2, "chi2");
  Compare_Normalized_Kinematic_Plots(h_chi2_ndof_1, h_chi2_ndof_2, "chi2_ndof");
  Compare_Normalized_Kinematic_Plots(h_charge_1, h_charge_2,"charge");
  
}

void Compare_Normalized_Kinematic_Plots(TH1D h1, TH1D h2, TString variable)
{

  TCanvas c("c1", "c1", 604, 82, 856, 836);  // Declare canvas
  gStyle->SetOptStat(0);   // Dont show statistics
  gStyle->SetOptTitle(0);  // Dont show Title
  c.Range(298434.4, -0.2989256, 299381.3, 2.010954);
  c.SetFillColor(0);
  c.SetBorderMode(0);
  c.SetBorderSize(3);
  c.SetTickx(1);
  c.SetTicky(1);
  c.SetGrid();
  c.SetLeftMargin(0.1883886);
  c.SetRightMargin(0.03909953);
  c.SetTopMargin(0.0875817);
  c.SetBottomMargin(0.1294118);
  c.SetFrameLineWidth(3);
  c.SetFrameBorderMode(0);

    TGaxis::SetMaxDigits(3);
//  TGaxis::SetMaxDigits(2);

  h1.SetLineColor(kBlue);
  h1.SetLineWidth(3);

    h2.SetLineColor(kRed);
  h2.SetLineWidth(3);


  //---- X-axis Titles -----//
  TString TempEta = "eta", TempChi2 = "chi2";
  if (variable.Contains("pt")) {
    h1.SetXTitle("Track p_{T} (GeV)");
  } else if (variable.Contains("charge")) {
    h1.SetXTitle("Track charge (e)");
  } else if (variable.Data() == TempEta) {
    h1.SetXTitle("Track #eta");
  } else if (variable.Contains("phi")) {
    h1.SetXTitle("Track #phi (rad)");
  } else if (variable.Contains("theta")) {
    h1.SetXTitle("Track #theta (rad)");
  } else if (variable.Contains("d0")) {
    h1.SetXTitle("Track d_{0} (cm)");

      } else if (variable.Contains("dz")) {
    h1.SetXTitle("Track d_{z} (cm)");
  } else if (variable.Data() == TempChi2) {
    h1.SetXTitle("Track #chi^{2}");
    // h1.GetYaxis()->SetRangeUser(0, 0.04);
  } else if (variable.Contains("ndof")) {
    h1.SetXTitle("Track #chi^{2} per NDF" );
    //h1.GetYaxis()->SetRangeUser(0, 0.04);
		
  } else {
    std::cout << "Title does not match anything in the categories defined!" << std::endl;
  }

  h1.SetYTitle("a.u.");
  h1.SetLabelSize(0.05);
  h1.GetXaxis()->SetLabelSize(0.05);
  h1.GetXaxis()->SetTitleSize(0.05);
  h1.GetYaxis()->SetLabelSize(0.05);
  h1.GetYaxis()->SetTitleSize(0.06);
  h1.GetXaxis()->SetTitleOffset(1.12);
  h1.DrawNormalized();

   h2.SetYTitle("a.u.");
  h2.SetLabelSize(0.05);
  h2.GetXaxis()->SetLabelSize(0.05);
  h2.GetXaxis()->SetTitleSize(0.05);
  h2.GetYaxis()->SetLabelSize(0.05);
  h2.GetYaxis()->SetTitleSize(0.06);
  h2.GetXaxis()->SetTitleOffset(1.12);
  h2.DrawNormalized("SAME");

  // Text on upper right corner of plot //
  TLatex Title = TLatex();
  Title.SetTextFont(42);
  Title.SetTextSize(0.039);
  // Title.DrawLatexNDC(0.63, 0.94, "0T cosmic rays (2021)");  //Bv1
  Title.DrawLatexNDC(0.74, 0.94, "0T cosmic rays");  //Bv1

   TLegend *leg = new TLegend(0.7470726,0.7496902,0.9168618,0.8711276,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.04337051);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("h1","2020","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(kBlue);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(kBlue);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h2","2021","lpflpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(kRed);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(kRed);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();

   //============== Saving as PDF, png and C ============= //
  TString PlotFormat[] = {"png", "pdf", "C"};
  for (int k = 0; k < 3; k++) {
    TString Format = variable + "." + PlotFormat[k];
    c.SaveAs(Format.Data());
    //  TString mv_folder_string = "mv " + Format + " Kinematic_Plots";
    //gSystem->Exec(mv_folder_string.Data());
  }
  c.Close();
}





