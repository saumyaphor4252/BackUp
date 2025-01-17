void tec_1_plus_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Jul 30 11:10:10 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(342633.5,-0.1480191,344087.4,0.9957647);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.1883886);
   c1->SetRightMargin(0.03909953);
   c1->SetTopMargin(0.0875817);
   c1->SetBottomMargin(0.1294118);
   c1->SetFrameLineWidth(3);
   c1->SetFrameBorderMode(0);
   c1->SetFrameLineWidth(3);
   c1->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1028[83] = {
   343001,
   343004,
   343005,
   343007,
   343009,
   343018,
   343025,
   343034,
   343037,
   343040,
   343042,
   343045,
   343046,
   343059,
   343068,
   343070,
   343080,
   343082,
   343164,
   343167,
   343169,
   343170,
   343171,
   343259,
   343260,
   343266,
   343268,
   343375,
   343380,
   343384,
   343385,
   343386,
   343387,
   343494,
   343496,
   343498,
   343501,
   343609,
   343619,
   343621,
   343623,
   343625,
   343627,
   343629,
   343638,
   343640,
   343642,
   343644,
   343646,
   343648,
   343650,
   343652,
   343663,
   343668,
   343673,
   343677,
   343680,
   343762,
   343763,
   343767,
   343769,
   343772,
   343774,
   343854,
   343860,
   343862,
   343864,
   343866,
   343874,
   343875,
   343876,
   343877,
   343878,
   343881,
   343921,
   343923,
   343925,
   343927,
   343928,
   343932,
   343934,
   343936,
   343937};
   Double_t Graph0_fy1028[83] = {
   0.06687275,
   0.09376072,
   0.08651213,
   0.02571958,
   0.08897174,
   0.09264204,
   0.5161649,
   0.07951252,
   0,
   0,
   0.07694385,
   0.07392636,
   0.07444383,
   0.0698594,
   0.0733321,
   0.07013784,
   0.07663989,
   0.0704506,
   0.07882998,
   0.06780698,
   0.07569393,
   0.07789433,
   0.06887185,
   0.0759426,
   0.04182497,
   0.07282039,
   0.06975305,
   0.1319075,
   0.1063616,
   0.1003911,
   0.1384272,
   0.1146199,
   0.1324779,
   0.1660766,
   0.172454,
   0.1768039,
   0.1664164,
   0.1603896,
   0.1626091,
   0.1660752,
   0.1620355,
   0.1598709,
   0.1139376,
   0.2180201,
   0.1570823,
   0.1300533,
   0.1606135,
   0.167915,
   0.1597956,
   0.1519601,
   0.1953142,
   0.1678373,
   0.1431244,
   0.1608017,
   0.03002686,
   0.1615523,
   0.1586724,
   0.04028533,
   0.02678368,
   0.1692095,
   0.188539,
   0.140162,
   0.1583749,
   0.04173675,
   0.1837439,
   0.1902678,
   0.1932044,
   0.04867426,
   0.00380766,
   0.007671053,
   0.0216363,
   0,
   0.005344633,
   0.003270933,
   0.04339271,
   0.02247928,
   0.03839592,
   0,
   0.001223983,
   0.00283711,
   0.1686353,
   0.1920853,
   0.1862902};
   Double_t Graph0_fex1028[83] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1028[83] = {
   0.02016289,
   0.01632165,
   0.01385303,
   0.001927764,
   0.007803338,
   0.005576395,
   0.2980079,
   0.001321178,
   0,
   0,
   0.0038281,
   0.01397077,
   0.003151459,
   0.007910019,
   0.002567137,
   0.007013784,
   0.003546471,
   0.001357331,
   0.02035381,
   0.005536416,
   0.009047155,
   0.021604,
   0.003372669,
   0.01489357,
   0.01322622,
   0.001484894,
   0.00301851,
   0.0211221,
   0.01140316,
   0.01932027,
   0.01849811,
   0.01201543,
   0.001821271,
   0.01090346,
   0.004214981,
   0.002410688,
   0.02480789,
   0.005695601,
   0.002614241,
   0.003558573,
   0.008142592,
   0.002633248,
   0.02613909,
   0.05826832,
   0.00446805,
   0.003853537,
   0.001931181,
   0.003797659,
   0.01020896,
   0.006068701,
   0.07382184,
   0.0433354,
   0.01453208,
   0.005222595,
   0.008025015,
   0.002849642,
   0.002375133,
   0.01342844,
   0.008075584,
   0.006752193,
   0.01529253,
   0.009960876,
   0.002000104,
   0.01319832,
   0.01289629,
   0.002218876,
   0.006294939,
   0.008473101,
   0.00380766,
   0.007671053,
   0.01249172,
   0,
   0.005344633,
   0.002312899,
   0.009469066,
   0.01123964,
   0.009598979,
   0,
   0.001223983,
   0.00200614,
   0.008463565,
   0.004641041,
   0.00275993};
   TGraphErrors *gre = new TGraphErrors(83,Graph0_fx1028,Graph0_fy1028,Graph0_fex1028,Graph0_fey1028);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1028 = new TH1F("Graph_Graph1028","",100,342907.4,344030.6);
   Graph_Graph1028->SetMinimum(0);
   Graph_Graph1028->SetMaximum(0.8955902);
   Graph_Graph1028->SetDirectory(0);
   Graph_Graph1028->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1028->SetLineColor(ci);
   Graph_Graph1028->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1028->GetXaxis()->SetNoExponent();
   Graph_Graph1028->GetXaxis()->SetNdivisions(5);
   Graph_Graph1028->GetXaxis()->SetLabelFont(42);
   Graph_Graph1028->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1028->GetXaxis()->SetTitleFont(42);
   Graph_Graph1028->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1028->GetYaxis()->SetLabelFont(42);
   Graph_Graph1028->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1028->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1028->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1028->GetYaxis()->SetTitleFont(42);
   Graph_Graph1028->GetZaxis()->SetLabelFont(42);
   Graph_Graph1028->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1028->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1028->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1028);
   
   gre->Draw("ap");
   TLatex *   tex = new TLatex(0.64,0.94,"0T cosmic rays (2021)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03717);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23,0.83,"TEC 1+");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
