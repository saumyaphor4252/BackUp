void MagFieldTracks() 
{ 

    TFile *file = new TFile("Commissioning2018.root");
    
    //Map containers 
    map<double, int> magTracks;
    map<double, int> magMap; 
    
    TTree *tree;
    tree = (TTree*)file->Get("cosmicRateAnalyzer/Event");
    vector<double> *MagField;
    int ntrk;
    tree->SetBranchAddress("MagField", &MagField);
    tree->SetBranchAddress("ntrk", &ntrk);
    MagField=0;
  
    Long64_t n = tree->GetEntriesFast();
    std::cout<<"Total Events: "<<n<<std::endl;
    int nTotalTracks=0;
    
    for (Long64_t jentry=0; jentry<n; jentry++) 
    {
      tree->GetEntry(jentry);
      nTotalTracks=ntrk+nTotalTracks;

      for (int k = 0; k < MagField->size() ; k++)			// Loop to calculate Kinematical distributions
      {
	auto search = magTracks.find(MagField->at(k));
        if (search!= magTracks.end())   //Key found
        {
	  magMap[MagField->at(k)]=magMap[MagField->at(k)]+1;
	  magTracks[MagField->at(k)]=magTracks[MagField->at(k)]+ntrk;  
        }
        else                         //Key not found
        {
	  magMap[MagField->at(k)]=1;
	  magTracks[MagField->at(k)]=ntrk;
        }

      }	
           
    }

    std::cout<<"Total Tracks: "<<nTotalTracks<<std::endl;
    
    cout << "The events map is : \n"; 
    cout << "\t KEY \t ELEMENT\n"; 
    for (auto itr = magMap.begin(); itr!= magMap.end(); ++itr)
    { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
    cout << endl;
 
    cout << "The Tracks map is : \n"; 
    cout << "\t KEY \t ELEMENT\n"; 
    for (auto itr2 = magTracks.begin(); itr2!= magTracks.end(); ++itr2)
    { 
        cout << '\t' << itr2->first 
             << '\t' << itr2->second << '\n'; 
    } 
    cout << endl;
    
  
} 
