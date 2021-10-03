void TEC5P_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug  3 18:11:35 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(343311.3,-0.03869073,344128.7,0.260283);
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
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("track rate TEC5+");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1351[2] = {
   343772,
   343774};
   Double_t Graph_fy1351[2] = {
   0.0622942,
   0.07565118};
   Double_t Graph_fex1351[2] = {
   0,
   0};
   Double_t Graph_fey1351[2] = {
   0.006640584,
   0.001382348};
   TGraphErrors *gre = new TGraphErrors(2,Graph_fx1351,Graph_fy1351,Graph_fex1351,Graph_fey1351);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f5601b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1351 = new TH1F("Graph_Graph1351","",100,343771.8,343774.2);
   Graph_Graph1351->SetMinimum(0.05351563);
   Graph_Graph1351->SetMaximum(0.07917151);
   Graph_Graph1351->SetDirectory(0);
   Graph_Graph1351->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1351->SetLineColor(ci);
   Graph_Graph1351->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1351->GetXaxis()->SetNoExponent();
   Graph_Graph1351->GetXaxis()->SetNdivisions(5);
   Graph_Graph1351->GetXaxis()->SetLabelFont(42);
   Graph_Graph1351->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1351->GetXaxis()->SetTitleFont(42);
   Graph_Graph1351->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1351->GetYaxis()->SetLabelFont(42);
   Graph_Graph1351->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1351->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1351->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1351->GetYaxis()->SetTitleFont(42);
   Graph_Graph1351->GetZaxis()->SetLabelFont(42);
   Graph_Graph1351->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1351->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1351->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1351);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1352[9] = {
   343854,
   343860,
   343862,
   343864,
   343866,
   343932,
   343934,
   343936,
   343937};
   Double_t Graph_fy1352[9] = {
   0.0333894,
   0.1185737,
   0.1001151,
   0.1072674,
   0.02359964,
   0.001418555,
   0.08283096,
   0.1039481,
   0.1000232};
   Double_t Graph_fex1352[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1352[9] = {
   0.01180494,
   0.01035983,
   0.001609534,
   0.004690477,
   0.00589991,
   0.001418555,
   0.005931648,
   0.003414102,
   0.001597969};
   gre = new TGraphErrors(9,Graph_fx1352,Graph_fy1352,Graph_fex1352,Graph_fey1352);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#196f3d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1352 = new TH1F("Graph_Graph1352","",100,343845.7,343945.3);
   Graph_Graph1352->SetMinimum(0);
   Graph_Graph1352->SetMaximum(0.1418268);
   Graph_Graph1352->SetDirectory(0);
   Graph_Graph1352->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1352->SetLineColor(ci);
   Graph_Graph1352->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1352->GetXaxis()->SetNoExponent();
   Graph_Graph1352->GetXaxis()->SetNdivisions(5);
   Graph_Graph1352->GetXaxis()->SetLabelFont(42);
   Graph_Graph1352->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1352->GetXaxis()->SetTitleFont(42);
   Graph_Graph1352->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1352->GetYaxis()->SetLabelFont(42);
   Graph_Graph1352->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1352->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1352->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1352->GetYaxis()->SetTitleFont(42);
   Graph_Graph1352->GetZaxis()->SetLabelFont(42);
   Graph_Graph1352->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1352->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1352->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1352);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1353[5] = {
   343644,
   343648,
   343650,
   343652,
   343663};
   Double_t Graph_fy1353[5] = {
   0.07919058,
   0.07101164,
   0.05580407,
   0.05594575,
   0.07820199};
   Double_t Graph_fex1353[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1353[5] = {
   0.002608003,
   0.004148544,
   0.03945944,
   0.0250197,
   0.01074187};
   gre = new TGraphErrors(5,Graph_fx1353,Graph_fy1353,Graph_fex1353,Graph_fey1353);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e317ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1353 = new TH1F("Graph_Graph1353","",100,343642.1,343664.9);
   Graph_Graph1353->SetMinimum(0.008452747);
   Graph_Graph1353->SetMaximum(0.1031554);
   Graph_Graph1353->SetDirectory(0);
   Graph_Graph1353->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1353->SetLineColor(ci);
   Graph_Graph1353->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1353->GetXaxis()->SetNoExponent();
   Graph_Graph1353->GetXaxis()->SetNdivisions(5);
   Graph_Graph1353->GetXaxis()->SetLabelFont(42);
   Graph_Graph1353->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1353->GetXaxis()->SetTitleFont(42);
   Graph_Graph1353->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1353->GetYaxis()->SetLabelFont(42);
   Graph_Graph1353->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1353->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1353->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1353->GetYaxis()->SetTitleFont(42);
   Graph_Graph1353->GetZaxis()->SetLabelFont(42);
   Graph_Graph1353->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1353->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1353->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1353);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1354[5] = {
   343638,
   343668,
   343673,
   343677,
   343680};
   Double_t Graph_fy1354[5] = {
   0.07612645,
   0.07717802,
   0.01930298,
   0.0795698,
   0.0747321};
   Double_t Graph_fex1354[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1354[5] = {
   0.003110442,
   0.003618161,
   0.006434326,
   0.001999898,
   0.001630012};
   gre = new TGraphErrors(5,Graph_fx1354,Graph_fy1354,Graph_fex1354,Graph_fey1354);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0bf9f4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1354 = new TH1F("Graph_Graph1354","",100,343633.8,343684.2);
   Graph_Graph1354->SetMinimum(0.005998548);
   Graph_Graph1354->SetMaximum(0.0884398);
   Graph_Graph1354->SetDirectory(0);
   Graph_Graph1354->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1354->SetLineColor(ci);
   Graph_Graph1354->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1354->GetXaxis()->SetNoExponent();
   Graph_Graph1354->GetXaxis()->SetNdivisions(5);
   Graph_Graph1354->GetXaxis()->SetLabelFont(42);
   Graph_Graph1354->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1354->GetXaxis()->SetTitleFont(42);
   Graph_Graph1354->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1354->GetYaxis()->SetLabelFont(42);
   Graph_Graph1354->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1354->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1354->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1354->GetYaxis()->SetTitleFont(42);
   Graph_Graph1354->GetZaxis()->SetLabelFont(42);
   Graph_Graph1354->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1354->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1354->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1354);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1355[2] = {
   343640,
   343642};
   Double_t Graph_fy1355[2] = {
   0.05994556,
   0.07604584};
   Double_t Graph_fex1355[2] = {
   0,
   0};
   Double_t Graph_fey1355[2] = {
   0.002616239,
   0.001328831};
   gre = new TGraphErrors(2,Graph_fx1355,Graph_fy1355,Graph_fex1355,Graph_fey1355);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2cf90b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1355 = new TH1F("Graph_Graph1355","",100,343639.8,343642.2);
   Graph_Graph1355->SetMinimum(0.05532479);
   Graph_Graph1355->SetMaximum(0.0793792);
   Graph_Graph1355->SetDirectory(0);
   Graph_Graph1355->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1355->SetLineColor(ci);
   Graph_Graph1355->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1355->GetXaxis()->SetNoExponent();
   Graph_Graph1355->GetXaxis()->SetNdivisions(5);
   Graph_Graph1355->GetXaxis()->SetLabelFont(42);
   Graph_Graph1355->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1355->GetXaxis()->SetTitleFont(42);
   Graph_Graph1355->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1355->GetYaxis()->SetLabelFont(42);
   Graph_Graph1355->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1355->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1355->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1355->GetYaxis()->SetTitleFont(42);
   Graph_Graph1355->GetZaxis()->SetLabelFont(42);
   Graph_Graph1355->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1355->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1355->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1355);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1356[4] = {
   343623,
   343625,
   343627,
   343629};
   Double_t Graph_fy1356[4] = {
   0.0761076,
   0.0776801,
   0.05397046,
   0.1713015};
   Double_t Graph_fex1356[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1356[4] = {
   0.00558048,
   0.001835532,
   0.01799015,
   0.05164934};
   gre = new TGraphErrors(4,Graph_fx1356,Graph_fy1356,Graph_fex1356,Graph_fey1356);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#f90b28");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1356 = new TH1F("Graph_Graph1356","",100,343622.4,343629.6);
   Graph_Graph1356->SetMinimum(0.01728326);
   Graph_Graph1356->SetMaximum(0.2416479);
   Graph_Graph1356->SetDirectory(0);
   Graph_Graph1356->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1356->SetLineColor(ci);
   Graph_Graph1356->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1356->GetXaxis()->SetNoExponent();
   Graph_Graph1356->GetXaxis()->SetNdivisions(5);
   Graph_Graph1356->GetXaxis()->SetLabelFont(42);
   Graph_Graph1356->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1356->GetXaxis()->SetTitleFont(42);
   Graph_Graph1356->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1356->GetYaxis()->SetLabelFont(42);
   Graph_Graph1356->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1356->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1356->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1356->GetYaxis()->SetTitleFont(42);
   Graph_Graph1356->GetZaxis()->SetLabelFont(42);
   Graph_Graph1356->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1356->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1356->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1356);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1357[2] = {
   343619,
   343621};
   Double_t Graph_fy1357[2] = {
   0.07569373,
   0.07876754};
   Double_t Graph_fex1357[2] = {
   0,
   0};
   Double_t Graph_fey1357[2] = {
   0.001783623,
   0.002450739};
   gre = new TGraphErrors(2,Graph_fx1357,Graph_fy1357,Graph_fex1357,Graph_fey1357);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#1b38f5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1357 = new TH1F("Graph_Graph1357","",100,343618.8,343621.2);
   Graph_Graph1357->SetMinimum(0.07317929);
   Graph_Graph1357->SetMaximum(0.0819491);
   Graph_Graph1357->SetDirectory(0);
   Graph_Graph1357->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1357->SetLineColor(ci);
   Graph_Graph1357->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1357->GetXaxis()->SetNoExponent();
   Graph_Graph1357->GetXaxis()->SetNdivisions(5);
   Graph_Graph1357->GetXaxis()->SetLabelFont(42);
   Graph_Graph1357->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1357->GetXaxis()->SetTitleFont(42);
   Graph_Graph1357->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1357->GetYaxis()->SetLabelFont(42);
   Graph_Graph1357->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1357->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1357->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1357->GetYaxis()->SetTitleFont(42);
   Graph_Graph1357->GetZaxis()->SetLabelFont(42);
   Graph_Graph1357->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1357->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1357->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1357);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1358[4] = {
   343494,
   343496,
   343498,
   343501};
   Double_t Graph_fy1358[4] = {
   0.08804922,
   0.08550587,
   0.09094932,
   0.09984985};
   Double_t Graph_fex1358[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1358[4] = {
   0.00793913,
   0.002967952,
   0.001728999,
   0.01921611};
   gre = new TGraphErrors(4,Graph_fx1358,Graph_fy1358,Graph_fex1358,Graph_fey1358);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffc300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1358 = new TH1F("Graph_Graph1358","",100,343493.3,343501.7);
   Graph_Graph1358->SetMinimum(0.0762145);
   Graph_Graph1358->SetMaximum(0.1229615);
   Graph_Graph1358->SetDirectory(0);
   Graph_Graph1358->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1358->SetLineColor(ci);
   Graph_Graph1358->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1358->GetXaxis()->SetNoExponent();
   Graph_Graph1358->GetXaxis()->SetNdivisions(5);
   Graph_Graph1358->GetXaxis()->SetLabelFont(42);
   Graph_Graph1358->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1358->GetXaxis()->SetTitleFont(42);
   Graph_Graph1358->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1358->GetYaxis()->SetLabelFont(42);
   Graph_Graph1358->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1358->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1358->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1358->GetYaxis()->SetTitleFont(42);
   Graph_Graph1358->GetZaxis()->SetLabelFont(42);
   Graph_Graph1358->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1358->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1358->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1358);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1359[1] = {
   344068};
   Double_t Graph_fy1359[1] = {
   0.1030324};
   Double_t Graph_fex1359[1] = {
   0};
   Double_t Graph_fey1359[1] = {
   0.001710567};
   gre = new TGraphErrors(1,Graph_fx1359,Graph_fy1359,Graph_fex1359,Graph_fey1359);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1359 = new TH1F("Graph_Graph1359","",100,344067.9,344069.1);
   Graph_Graph1359->SetMinimum(0.1009797);
   Graph_Graph1359->SetMaximum(0.1050851);
   Graph_Graph1359->SetDirectory(0);
   Graph_Graph1359->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1359->SetLineColor(ci);
   Graph_Graph1359->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1359->GetXaxis()->SetNoExponent();
   Graph_Graph1359->GetXaxis()->SetNdivisions(5);
   Graph_Graph1359->GetXaxis()->SetLabelFont(42);
   Graph_Graph1359->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1359->GetXaxis()->SetTitleFont(42);
   Graph_Graph1359->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1359->GetYaxis()->SetLabelFont(42);
   Graph_Graph1359->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1359->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1359->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1359->GetYaxis()->SetTitleFont(42);
   Graph_Graph1359->GetZaxis()->SetLabelFont(42);
   Graph_Graph1359->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1359->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1359->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1359);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1360[6] = {
   344058,
   344062,
   344063,
   344064,
   344065,
   344067};
   Double_t Graph_fy1360[6] = {
   0.002607751,
   0.09092034,
   0.1040755,
   0.1044231,
   0.1034415,
   0.1056044};
   Double_t Graph_fex1360[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1360[6] = {
   0.0009856372,
   0.01260838,
   0.001177895,
   0.001103601,
   0.005593475,
   0.002479496};
   gre = new TGraphErrors(6,Graph_fx1360,Graph_fy1360,Graph_fex1360,Graph_fey1360);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2fa4e1");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1360 = new TH1F("Graph_Graph1360","",100,344057.1,344067.9);
   Graph_Graph1360->SetMinimum(0.001459902);
   Graph_Graph1360->SetMaximum(0.1197763);
   Graph_Graph1360->SetDirectory(0);
   Graph_Graph1360->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1360->SetLineColor(ci);
   Graph_Graph1360->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1360->GetXaxis()->SetNoExponent();
   Graph_Graph1360->GetXaxis()->SetNdivisions(5);
   Graph_Graph1360->GetXaxis()->SetLabelFont(42);
   Graph_Graph1360->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1360->GetXaxis()->SetTitleFont(42);
   Graph_Graph1360->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1360->GetYaxis()->SetLabelFont(42);
   Graph_Graph1360->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1360->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1360->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1360->GetYaxis()->SetTitleFont(42);
   Graph_Graph1360->GetZaxis()->SetLabelFont(42);
   Graph_Graph1360->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1360->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1360->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1360);
   
   multigraph->Add(gre,"");
   multigraph->Draw("AP");
   multigraph->GetXaxis()->SetTitle("Run Number");
   multigraph->GetXaxis()->SetNoExponent();
   multigraph->GetXaxis()->SetNdivisions(5);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleSize(0.05);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("Track Rate (Hz)");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.05);
   multigraph->GetYaxis()->SetTitleSize(0.05);
   multigraph->GetYaxis()->SetTitleOffset(0);
   multigraph->GetYaxis()->SetTitleFont(42);
   TLatex *   tex = new TLatex(0.64,0.94,"0T cosmic rays (2021)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03717);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23,0.83,"TEC 5+");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
