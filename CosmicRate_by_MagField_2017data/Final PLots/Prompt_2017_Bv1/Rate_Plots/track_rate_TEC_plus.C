void track_rate_TEC_plus()
{
//=========Macro generated from canvas: Canvas11/Canvas11
//=========  (Thu Jun 24 11:10:45 2021) by ROOT version6.10/04
   TCanvas *Canvas11 = new TCanvas("Canvas11", "Canvas11",604,112,856,836);
   gStyle->SetOptStat(0);
   Canvas11->Range(297790.9,0.09745244,298440.2,0.3762893);
   Canvas11->SetFillColor(0);
   Canvas11->SetBorderMode(0);
   Canvas11->SetBorderSize(2);
   Canvas11->SetGridx();
   Canvas11->SetGridy();
   Canvas11->SetTickx(1);
   Canvas11->SetTicky(1);
   Canvas11->SetLeftMargin(0.1883886);
   Canvas11->SetRightMargin(0.03909953);
   Canvas11->SetTopMargin(0.0875817);
   Canvas11->SetBottomMargin(0.1294118);
   Canvas11->SetFrameLineWidth(3);
   Canvas11->SetFrameBorderMode(0);
   Canvas11->SetFrameLineWidth(3);
   Canvas11->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("track rate tec plus");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1023[29] = {
   298019,
   298030,
   297938,
   298211,
   298208,
   298020,
   298392,
   298025,
   297943,
   297944,
   297939,
   298023,
   298214,
   298022,
   298215,
   298024,
   297937,
   297940,
   298037,
   298036,
   298386,
   298035,
   298034,
   298029,
   298197,
   298034,
   298021,
   297936,
   298216};
   Double_t Graph_fy1023[29] = {
   0.1616482,
   0.2993188,
   0.1967006,
   0.2124909,
   0.1908808,
   0.1764728,
   0.2061667,
   0.2172269,
   0.2118638,
   0.1984609,
   0.200165,
   0.2159399,
   0.1967072,
   0.2593488,
   0.2038143,
   0.2463555,
   0.2144929,
   0.207907,
   0.2314845,
   0.1953299,
   0.2120544,
   0.2428153,
   0.2933318,
   0.2824925,
   0.2000633,
   0.292678,
   0.2027522,
   0.1930616,
   0.2136187};
   Double_t Graph_fex1023[29] = {
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
   Double_t Graph_fey1023[29] = {
   0.01818684,
   0.008822595,
   0.007418704,
   0.01034389,
   0.01237296,
   0.0175597,
   0.002247057,
   0.01319559,
   0.00385016,
   0.01653841,
   0.01179483,
   0.006699235,
   0.008913655,
   0.02248839,
   0.002586359,
   0.04105925,
   0.0047042,
   0.005901783,
   0.02095763,
   0.0156389,
   0.01204388,
   0.09912892,
   0.04758471,
   0.01879112,
   0.007290713,
   0.003222474,
   0.01373211,
   0.03310978,
   0.01215234};
   TGraphErrors *gre = new TGraphErrors(29,Graph_fx1023,Graph_fy1023,Graph_fex1023,Graph_fey1023);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3113ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1023 = new TH1F("Graph_Graph1023","Graph",100,297890.4,298437.6);
   Graph_Graph1023->SetMinimum(0.1236131);
   Graph_Graph1023->SetMaximum(0.3617925);
   Graph_Graph1023->SetDirectory(0);
   Graph_Graph1023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1023->SetLineColor(ci);
   Graph_Graph1023->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1023->GetXaxis()->SetNoExponent();
   Graph_Graph1023->GetXaxis()->SetLabelFont(42);
   Graph_Graph1023->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1023->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1023->GetXaxis()->SetTitleFont(42);
   Graph_Graph1023->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1023->GetYaxis()->SetLabelFont(42);
   Graph_Graph1023->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1023->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1023->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1023->GetYaxis()->SetTitleFont(42);
   Graph_Graph1023->GetZaxis()->SetLabelFont(42);
   Graph_Graph1023->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1023->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1023);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1024[51] = {
   297642,
   297104,
   297439,
   297725,
   297724,
   297633,
   297508,
   297344,
   297463,
   297638,
   297667,
   297117,
   297393,
   297720,
   297345,
   297506,
   297360,
   297719,
   297414,
   297385,
   297464,
   297051,
   297452,
   297686,
   297475,
   297392,
   297119,
   297415,
   297389,
   297437,
   297510,
   297120,
   297103,
   297726,
   297436,
   297118,
   297121,
   297362,
   297446,
   297622,
   297365,
   297443,
   297624,
   297384,
   297449,
   297364,
   297608,
   297623,
   297361,
   297680,
   297368};
   Double_t Graph_fy1024[51] = {
   0.2844739,
   0.3161288,
   0.3030935,
   0.3526031,
   0.356448,
   0.3677911,
   0.287631,
   0.3345766,
   0.3999337,
   0.3130154,
   0.3396667,
   0.3507582,
   0.2097375,
   0.318494,
   0.1335953,
   0.3184723,
   0.369715,
   0.3444602,
   0.3256349,
   0.3340498,
   0.3221892,
   0.2847915,
   0.3798262,
   0.003479169,
   0.3386689,
   0.3274232,
   0.3575386,
   0.1804423,
   0.2211935,
   0.297647,
   0.3641573,
   0.3101035,
   0.3462615,
   0.3671598,
   0.3631512,
   0.3479633,
   0.3328235,
   0.3778022,
   0.5974385,
   0.3085833,
   0.3560209,
   0.3338788,
   0.3169503,
   0.3099016,
   0.353494,
   0.3535694,
   0.2974595,
   0.3361061,
   0.3766192,
   0.3227387,
   0.3478731};
   Double_t Graph_fex1024[51] = {
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
   Double_t Graph_fey1024[51] = {
   0.01896493,
   0.006490928,
   0.01315314,
   0.009131608,
   0.02236553,
   0.02525999,
   0.04109014,
   0.01928467,
   0.05833632,
   0.02115162,
   0.01116214,
   0.007082052,
   0.09379747,
   0.008843645,
   0.007563346,
   0.016579,
   0.01338458,
   0.01149479,
   0.02274333,
   0.01236374,
   0.01010797,
   0.01021684,
   0.01353075,
   0.001555932,
   0.04137499,
   0.02275749,
   0.003221069,
   0.02273359,
   0.04515094,
   0.01372943,
   0.02365456,
   0.03511231,
   0.005935717,
   0.01518019,
   0.01691364,
   0.005446243,
   0.01893367,
   0.01661572,
   0.1273743,
   0.03539693,
   0.01868625,
   0.01329151,
   0.01339359,
   0.01417457,
   0.01443133,
   0.02946412,
   0.007193326,
   0.02498257,
   0.01146016,
   0.02142092,
   0.04099724};
   gre = new TGraphErrors(51,Graph_fx1024,Graph_fy1024,Graph_fex1024,Graph_fey1024);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#de0b1d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1024 = new TH1F("Graph_Graph1024","Graph",100,296983.5,297793.5);
   Graph_Graph1024->SetMinimum(0.001730914);
   Graph_Graph1024->SetMaximum(0.7971018);
   Graph_Graph1024->SetDirectory(0);
   Graph_Graph1024->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1024->SetLineColor(ci);
   Graph_Graph1024->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1024->GetXaxis()->SetNoExponent();
   Graph_Graph1024->GetXaxis()->SetLabelFont(42);
   Graph_Graph1024->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1024->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1024->GetXaxis()->SetTitleFont(42);
   Graph_Graph1024->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1024->GetYaxis()->SetLabelFont(42);
   Graph_Graph1024->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1024->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1024->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1024->GetYaxis()->SetTitleFont(42);
   Graph_Graph1024->GetZaxis()->SetLabelFont(42);
   Graph_Graph1024->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1024->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1024);
   
   multigraph->Add(gre,"");
   multigraph->Draw("AP");
   multigraph->GetXaxis()->SetTitle("Run Number");
   multigraph->GetXaxis()->SetNoExponent();
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.03);
   multigraph->GetXaxis()->SetTitleSize(0.05);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("Track Rate (Hz)");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.05);
   multigraph->GetYaxis()->SetTitleSize(0.05);
   multigraph->GetYaxis()->SetTitleOffset(0);
   multigraph->GetYaxis()->SetTitleFont(42);
   TLatex *   tex = new TLatex(0.685,0.94,"cosmic rays (2017)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03717);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23,0.83,"TEC+");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.6978923,0.7320513,0.9262295,0.874359,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.03660131);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("NULL","Magnetic Field","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","0 T","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#3113ba");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","3.8 T","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#de0b1d");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(42);
   leg->Draw();
   Canvas11->Modified();
   Canvas11->cd();
   Canvas11->SetSelected(Canvas11);
}
