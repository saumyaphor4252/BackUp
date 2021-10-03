void magField() 
{ 

    TFile *file = new TFile("CRUZET_2021_StreamExpress_17Aug_FULL.root");
    
    //Map container 
    map<double, int> magMap; // map<double, int> magTracks;
    map<double, int> magTracks;
    
    TTree *tree;
    tree = (TTree*)file->Get("cosmicRateAnalyzer/Event");
    double magField;
    int ntrk;
    tree->SetBranchAddress("magField", &magField);
    tree->SetBranchAddress("ntrk", &ntrk); 
  
    Long64_t n = tree->GetEntriesFast();
    std::cout<<"Events: "<<n<<std::endl;
    int nTotalTracks=0;
    
    for (Long64_t jentry=0; jentry<n; jentry++) 
    {
      tree->GetEntry(jentry);
      nTotalTracks=ntrk+nTotalTracks;
      //if(jentry<20) std::cout<<magField<<std::endl;

      auto search = magMap.find(magField);
      if (search!= magMap.end())   //Key found
        {
	  magMap[magField]=magMap[magField]+1;
	  magTracks[magField]=magTracks[magField]+ntrk;	  
        }
        else                         //Key not found
        {
	  magMap[magField]=1;
	  magTracks[magField]=ntrk;
        }      
    }

    std::cout<<"Total Tracks: "<<nTotalTracks<<std::endl;
    
    // printing maps 
    std::cout << "The events map is : \n"; 
    std::cout << "\t KEY \t ELEMENT\n"; 
    for (auto itr = magMap.begin(); itr!= magMap.end(); ++itr)
    { 
      std::cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
    std::cout << endl;

    std::cout << "The Tracks map is : \n"; 
    std::cout << "\t KEY \t ELEMENT\n"; 
    for (auto itr2 = magTracks.begin(); itr2!= magTracks.end(); ++itr2)
    { 
      std::cout << '\t' << itr2->first 
             << '\t' << itr2->second << '\n'; 
    } 
    std::cout << endl;
 
} 
