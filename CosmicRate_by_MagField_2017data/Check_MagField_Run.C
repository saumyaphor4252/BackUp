void Check_MagField_Run() 
{ 

    TFile *file = new TFile("Prompt2017_Bv2.root");
    
    TTree *tree;
    tree = (TTree*)file->Get("cosmicRateAnalyzer/Event");
    vector<double> *MagField;
        
    tree->SetBranchAddress("MagField", &MagField);
    
    MagField=0;
  
    Long64_t n = tree->GetEntriesFast();
    std::cout<<"Events: "<<n<<std::endl;

    double mField;
    int nEventsInRun=0, nTotalEvents=0;
    
    for (Long64_t jentry=0; jentry<n; jentry++) //Loop on events
    {
      nTotalEvents++;
      tree->GetEntry(jentry);

      for (int k = 0; k < MagField->size() ; k++)      // Loop to calculate Kinematical distributions
      {
	if(jentry==0)
	  {
	    mField=MagField->at(k);
	    nEventsInRun++;
	  }
	else{
	          // std::cout<<"MagField: "<<MagField->at(k)<<" Vs "<<"mField: "<<mField<<std::endl;
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
	
       }     
           
    }

    std::cout<<"nEvents last magnetic field "<<nEventsInRun<<std::endl;
    std::cout<<"Total Events: "<<nTotalEvents<<std::endl;

  
} 
