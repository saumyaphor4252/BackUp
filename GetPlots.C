
{

  //First prepare the ROOT files for CTF & CosmicTF to be read

//Prepare the CSV file with event Indices i(CTF) and j(CosmicTF) CHeck!!

//Loop over the CSV file to loop over events and perform track matching, and hence store the track indices along with the event indices 

  /*
  //First prepare the ROOT files for CTF & CosmicTF to be read

  TFile *file1 = new TFile("CRAB_CTF_Residuals.root"); //CTF
  TFile *file2 = new TFile("CRAB_CosmicTF_Residuals.root"); //CosmicTF

  TTree *tree1, *tree2;
  tree1 = (TTree*)file1->Get("demo/Event");
  tree2 = (TTree*)file2->Get("demo/Event");
  Long64_t n1 = tree1->GetEntriesFast();
  Long64_t n2 = tree2->GetEntriesFast();
  std::cout<<"Events in CTF :"<<n1<<std::endl;
  std::cout<<"Events in CosmicTF: "<<n2<<std::endl;
  
    //========================Local varibles to store parameters from tree===================//
  vector<double>  *pt_CTF;
  vector<double>  *charge_CTF;
  vector<double>  *chi2_CTF;
  vector<double>  *chi2_ndof_CTF;
  vector<double>  *eta_CTF;
  vector<double>  *theta_CTF;
  vector<double>  *phi_CTF;
  vector<double>  *d0_CTF;
  vector<double>  *dz_CTF;
  vector<int>  *nHitsValid_CTF;
  vector<int>  *nHitsPIXEL_CTF;
  vector<int>  *nHitsBPIX_CTF;
  vector<int>  *nHitsFPIX_CTF;
  vector<int>  *nHitsTIB_CTF;
  vector<int>  *nHitsTID_CTF;
  vector<int>  *nHitsTOB_CTF;
  vector<int>  *nHitsTEC_CTF;
  
  pt_CTF=0; charge_CTF=0; chi2_CTF=0; chi2_ndof_CTF=0; eta_CTF=0; theta_CTF=0; phi_CTF=0;  d0_CTF=0; dz_CTF=0;
  nHitsValid_CTF=0; nHitsPIXEL_CTF=0; nHitsBPIX_CTF=0;  nHitsFPIX_CTF=0;  nHitsTIB_CTF=0;  nHitsTID_CTF=0;  nHitsTOB_CTF=0;  nHitsTEC_CTF=0;

  //=======tree2======//
  vector<double>  *pt_CosmicTF;
  vector<double>  *charge_CosmicTF;
  vector<double>  *chi2_CosmicTF;
  vector<double>  *chi2_ndof_CosmicTF;
  vector<double>  *eta_CosmicTF;
  vector<double>  *theta_CosmicTF;
  vector<double>  *phi_CosmicTF;
  vector<double>  *d0_CosmicTF;
  vector<double>  *dz_CosmicTF;
  vector<int>  *nHitsValid_CosmicTF;
  vector<int>  *nHitsPIXEL_CosmicTF;
  vector<int>  *nHitsBPIX_CosmicTF;
  vector<int>  *nHitsFPIX_CosmicTF;
  vector<int>  *nHitsTIB_CosmicTF;
  vector<int>  *nHitsTOB_CosmicTF;
  vector<int>  *nHitsTID_CosmicTF;
  vector<int>  *nHitsTEC_CosmicTF;
  
  pt_CosmicTF=0; charge_CosmicTF=0; chi2_CosmicTF=0; chi2_ndof_CosmicTF=0; eta_CosmicTF=0; theta_CosmicTF=0; phi_CosmicTF=0; d0_CosmicTF=0; dz_CosmicTF=0;
  nHitsValid_CosmicTF=0; nHitsPIXEL_CosmicTF=0; nHitsBPIX_CosmicTF=0;  nHitsFPIX_CosmicTF=0;  nHitsTIB_CosmicTF=0;  nHitsTID_CosmicTF=0;  nHitsTOB_CosmicTF=0;  nHitsTEC_CosmicTF=0;

   //==============================Setting tree branches to local varibles================//
  tree1->SetBranchAddress("pt", &pt_CTF);
  tree1->SetBranchAddress("charge", &charge_CTF);
  tree1->SetBranchAddress("chi2", &chi2_CTF);
  tree1->SetBranchAddress("chi2_ndof", &chi2_ndof_CTF);
  tree1->SetBranchAddress("eta", &eta_CTF);
  tree1->SetBranchAddress("theta", &theta_CTF);
  tree1->SetBranchAddress("phi", &phi_CTF);
  tree1->SetBranchAddress("d0", &d0_CTF);
  tree1->SetBranchAddress("dz", &dz_CTF);
  tree1->SetBranchAddress("nHitsValid", &nHitsValid_CTF);
  tree1->SetBranchAddress("nHitsPIXEL", &nHitsPIXEL_CTF);
  tree1->SetBranchAddress("nHitsBPIX", &nHitsBPIX_CTF);
  tree1->SetBranchAddress("nHitsFPIX", &nHitsFPIX_CTF);
  tree1->SetBranchAddress("nHitsTIB", &nHitsTIB_CTF);
  tree1->SetBranchAddress("nHitsTID", &nHitsTID_CTF);
  tree1->SetBranchAddress("nHitsTOB", &nHitsTOB_CTF);
  tree1->SetBranchAddress("nHitsTEC", &nHitsTEC_CTF);
  
  tree2->SetBranchAddress("pt", &pt_CosmicTF);
  tree2->SetBranchAddress("charge", &charge_CosmicTF);
  tree2->SetBranchAddress("chi2", &chi2_CosmicTF);
  tree2->SetBranchAddress("chi2_ndof", &chi2_ndof_CosmicTF);
  tree2->SetBranchAddress("eta", &eta_CosmicTF);
  tree2->SetBranchAddress("theta", &theta_CosmicTF);
  tree2->SetBranchAddress("phi", &phi_CosmicTF);
  tree2->SetBranchAddress("d0", &d0_CosmicTF);
  tree2->SetBranchAddress("dz", &dz_CosmicTF);
  tree2->SetBranchAddress("nHitsValid", &nHitsValid_CosmicTF);
  tree2->SetBranchAddress("nHitsPIXEL", &nHitsPIXEL_CosmicTF);
  tree2->SetBranchAddress("nHitsBPIX", &nHitsBPIX_CosmicTF);
  tree2->SetBranchAddress("nHitsFPIX", &nHitsFPIX_CosmicTF);
  tree2->SetBranchAddress("nHitsTIB", &nHitsTIB_CosmicTF);
  tree2->SetBranchAddress("nHitsTOB", &nHitsTOB_CosmicTF);
  tree2->SetBranchAddress("nHitsTID", &nHitsTID_CosmicTF);
  tree2->SetBranchAddress("nHitsTEC", &nHitsTEC_CosmicTF);
*/
  //Prepare the CSV file with event Indices i(CTF) and j(CosmicTF) CHeck!!

  FILE *pFile;  // csv got by python filtering: has i(CTF) j(CosmicTF) event indices which are common in both collections
  pFile = fopen("Output_Residuals_CosmicTF_Residuals_CTF.csv","r");  //CosmicTF followed CTF

  int noef=0;
  while(!feof(pFile))
    {
      neof++;
    }


  std::cout<<"No of lines: "<<neof<<std::endl;


}
