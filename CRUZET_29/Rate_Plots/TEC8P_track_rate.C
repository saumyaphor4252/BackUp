void TEC8P_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug  3 18:11:38 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(343311.3,-0.0195555,344128.7,0.1315551);
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
   multigraph->SetName("track rate TEC8+");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1441[2] = {
   343772,
   343774};
   Double_t Graph_fy1441[2] = {
   0.01911299,
   0.02452664};
   Double_t Graph_fex1441[2] = {
   0,
   0};
   Double_t Graph_fey1441[2] = {
   0.003678297,
   0.0007870974};
   TGraphErrors *gre = new TGraphErrors(2,Graph_fx1441,Graph_fy1441,Graph_fex1441,Graph_fey1441);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f5601b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1441 = new TH1F("Graph_Graph1441","",100,343771.8,343774.2);
   Graph_Graph1441->SetMinimum(0.01444679);
   Graph_Graph1441->SetMaximum(0.02630164);
   Graph_Graph1441->SetDirectory(0);
   Graph_Graph1441->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1441->SetLineColor(ci);
   Graph_Graph1441->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1441->GetXaxis()->SetNoExponent();
   Graph_Graph1441->GetXaxis()->SetNdivisions(5);
   Graph_Graph1441->GetXaxis()->SetLabelFont(42);
   Graph_Graph1441->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1441->GetXaxis()->SetTitleFont(42);
   Graph_Graph1441->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1441->GetYaxis()->SetLabelFont(42);
   Graph_Graph1441->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1441->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1441->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1441->GetYaxis()->SetTitleFont(42);
   Graph_Graph1441->GetZaxis()->SetLabelFont(42);
   Graph_Graph1441->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1441->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1441->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1441);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1442[9] = {
   343854,
   343860,
   343862,
   343864,
   343866,
   343932,
   343934,
   343936,
   343937};
   Double_t Graph_fy1442[9] = {
   0.01252103,
   0.05883426,
   0.04215236,
   0.03896904,
   0.00589991,
   0.001418555,
   0.03483148,
   0.04003178,
   0.0405658};
   Double_t Graph_fex1442[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1442[9] = {
   0.007229017,
   0.007297491,
   0.001044387,
   0.002827111,
   0.002949955,
   0.001418555,
   0.003846494,
   0.002118706,
   0.001017649};
   gre = new TGraphErrors(9,Graph_fx1442,Graph_fy1442,Graph_fex1442,Graph_fey1442);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#196f3d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1442 = new TH1F("Graph_Graph1442","",100,343845.7,343945.3);
   Graph_Graph1442->SetMinimum(0);
   Graph_Graph1442->SetMaximum(0.07274492);
   Graph_Graph1442->SetDirectory(0);
   Graph_Graph1442->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1442->SetLineColor(ci);
   Graph_Graph1442->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1442->GetXaxis()->SetNoExponent();
   Graph_Graph1442->GetXaxis()->SetNdivisions(5);
   Graph_Graph1442->GetXaxis()->SetLabelFont(42);
   Graph_Graph1442->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1442->GetXaxis()->SetTitleFont(42);
   Graph_Graph1442->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1442->GetYaxis()->SetLabelFont(42);
   Graph_Graph1442->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1442->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1442->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1442->GetYaxis()->SetTitleFont(42);
   Graph_Graph1442->GetZaxis()->SetLabelFont(42);
   Graph_Graph1442->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1442->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1442->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1442);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1443[5] = {
   343644,
   343648,
   343650,
   343652,
   343663};
   Double_t Graph_fy1443[5] = {
   0.02611056,
   0.02375133,
   0,
   0.01118915,
   0.0309857};
   Double_t Graph_fex1443[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1443[5] = {
   0.001497543,
   0.002399247,
   0,
   0.01118915,
   0.006761633};
   gre = new TGraphErrors(5,Graph_fx1443,Graph_fy1443,Graph_fex1443,Graph_fey1443);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e317ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1443 = new TH1F("Graph_Graph1443","",100,343642.1,343664.9);
   Graph_Graph1443->SetMinimum(0);
   Graph_Graph1443->SetMaximum(0.04152206);
   Graph_Graph1443->SetDirectory(0);
   Graph_Graph1443->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1443->SetLineColor(ci);
   Graph_Graph1443->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1443->GetXaxis()->SetNoExponent();
   Graph_Graph1443->GetXaxis()->SetNdivisions(5);
   Graph_Graph1443->GetXaxis()->SetLabelFont(42);
   Graph_Graph1443->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1443->GetXaxis()->SetTitleFont(42);
   Graph_Graph1443->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1443->GetYaxis()->SetLabelFont(42);
   Graph_Graph1443->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1443->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1443->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1443->GetYaxis()->SetTitleFont(42);
   Graph_Graph1443->GetZaxis()->SetLabelFont(42);
   Graph_Graph1443->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1443->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1443->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1443);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1444[5] = {
   343638,
   343668,
   343673,
   343677,
   343680};
   Double_t Graph_fy1444[5] = {
   0.0259262,
   0.02408633,
   0.006434326,
   0.0261379,
   0.02595358};
   Double_t Graph_fex1444[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1444[5] = {
   0.001815197,
   0.00202128,
   0.00371486,
   0.001146223,
   0.0009605853};
   gre = new TGraphErrors(5,Graph_fx1444,Graph_fy1444,Graph_fex1444,Graph_fey1444);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0bf9f4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1444 = new TH1F("Graph_Graph1444","",100,343633.8,343684.2);
   Graph_Graph1444->SetMinimum(0.0002172728);
   Graph_Graph1444->SetMaximum(0.03024359);
   Graph_Graph1444->SetDirectory(0);
   Graph_Graph1444->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1444->SetLineColor(ci);
   Graph_Graph1444->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1444->GetXaxis()->SetNoExponent();
   Graph_Graph1444->GetXaxis()->SetNdivisions(5);
   Graph_Graph1444->GetXaxis()->SetLabelFont(42);
   Graph_Graph1444->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1444->GetXaxis()->SetTitleFont(42);
   Graph_Graph1444->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1444->GetYaxis()->SetLabelFont(42);
   Graph_Graph1444->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1444->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1444->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1444->GetYaxis()->SetTitleFont(42);
   Graph_Graph1444->GetZaxis()->SetLabelFont(42);
   Graph_Graph1444->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1444->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1444->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1444);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1445[2] = {
   343640,
   343642};
   Double_t Graph_fy1445[2] = {
   0.02135204,
   0.02447399};
   Double_t Graph_fex1445[2] = {
   0,
   0};
   Double_t Graph_fey1445[2] = {
   0.001561416,
   0.0007538492};
   gre = new TGraphErrors(2,Graph_fx1445,Graph_fy1445,Graph_fex1445,Graph_fey1445);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2cf90b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1445 = new TH1F("Graph_Graph1445","",100,343639.8,343642.2);
   Graph_Graph1445->SetMinimum(0.0192469);
   Graph_Graph1445->SetMaximum(0.02577156);
   Graph_Graph1445->SetDirectory(0);
   Graph_Graph1445->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1445->SetLineColor(ci);
   Graph_Graph1445->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1445->GetXaxis()->SetNoExponent();
   Graph_Graph1445->GetXaxis()->SetNdivisions(5);
   Graph_Graph1445->GetXaxis()->SetLabelFont(42);
   Graph_Graph1445->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1445->GetXaxis()->SetTitleFont(42);
   Graph_Graph1445->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1445->GetYaxis()->SetLabelFont(42);
   Graph_Graph1445->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1445->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1445->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1445->GetYaxis()->SetTitleFont(42);
   Graph_Graph1445->GetZaxis()->SetLabelFont(42);
   Graph_Graph1445->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1445->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1445->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1445);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1446[4] = {
   343623,
   343625,
   343627,
   343629};
   Double_t Graph_fy1446[4] = {
   0.02577838,
   0.02424521,
   0.02398687,
   0.07786431};
   Double_t Graph_fex1446[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1446[4] = {
   0.003247771,
   0.001025463,
   0.01199344,
   0.03482198};
   gre = new TGraphErrors(4,Graph_fx1446,Graph_fy1446,Graph_fex1446,Graph_fey1446);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#f90b28");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1446 = new TH1F("Graph_Graph1446","",100,343622.4,343629.6);
   Graph_Graph1446->SetMinimum(0.001924151);
   Graph_Graph1446->SetMaximum(0.1227556);
   Graph_Graph1446->SetDirectory(0);
   Graph_Graph1446->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1446->SetLineColor(ci);
   Graph_Graph1446->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1446->GetXaxis()->SetNoExponent();
   Graph_Graph1446->GetXaxis()->SetNdivisions(5);
   Graph_Graph1446->GetXaxis()->SetLabelFont(42);
   Graph_Graph1446->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1446->GetXaxis()->SetTitleFont(42);
   Graph_Graph1446->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1446->GetYaxis()->SetLabelFont(42);
   Graph_Graph1446->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1446->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1446->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1446->GetYaxis()->SetTitleFont(42);
   Graph_Graph1446->GetZaxis()->SetLabelFont(42);
   Graph_Graph1446->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1446->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1446->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1446);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1447[2] = {
   343619,
   343621};
   Double_t Graph_fy1447[2] = {
   0.02525926,
   0.02638293};
   Double_t Graph_fex1447[2] = {
   0,
   0};
   Double_t Graph_fey1447[2] = {
   0.001030347,
   0.001418355};
   gre = new TGraphErrors(2,Graph_fx1447,Graph_fy1447,Graph_fex1447,Graph_fey1447);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#1b38f5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1447 = new TH1F("Graph_Graph1447","",100,343618.8,343621.2);
   Graph_Graph1447->SetMinimum(0.02387168);
   Graph_Graph1447->SetMaximum(0.02815853);
   Graph_Graph1447->SetDirectory(0);
   Graph_Graph1447->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1447->SetLineColor(ci);
   Graph_Graph1447->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1447->GetXaxis()->SetNoExponent();
   Graph_Graph1447->GetXaxis()->SetNdivisions(5);
   Graph_Graph1447->GetXaxis()->SetLabelFont(42);
   Graph_Graph1447->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1447->GetXaxis()->SetTitleFont(42);
   Graph_Graph1447->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1447->GetYaxis()->SetLabelFont(42);
   Graph_Graph1447->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1447->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1447->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1447->GetYaxis()->SetTitleFont(42);
   Graph_Graph1447->GetZaxis()->SetLabelFont(42);
   Graph_Graph1447->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1447->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1447->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1447);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1448[4] = {
   343494,
   343496,
   343498,
   343501};
   Double_t Graph_fy1448[4] = {
   0.03006559,
   0.03574763,
   0.03806263,
   0.02958514};
   Double_t Graph_fex1448[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1448[4] = {
   0.004639221,
   0.001919033,
   0.001118522,
   0.01045993};
   gre = new TGraphErrors(4,Graph_fx1448,Graph_fy1448,Graph_fex1448,Graph_fey1448);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffc300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1448 = new TH1F("Graph_Graph1448","",100,343493.3,343501.7);
   Graph_Graph1448->SetMinimum(0.01703323);
   Graph_Graph1448->SetMaximum(0.04213705);
   Graph_Graph1448->SetDirectory(0);
   Graph_Graph1448->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1448->SetLineColor(ci);
   Graph_Graph1448->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1448->GetXaxis()->SetNoExponent();
   Graph_Graph1448->GetXaxis()->SetNdivisions(5);
   Graph_Graph1448->GetXaxis()->SetLabelFont(42);
   Graph_Graph1448->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1448->GetXaxis()->SetTitleFont(42);
   Graph_Graph1448->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1448->GetYaxis()->SetLabelFont(42);
   Graph_Graph1448->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1448->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1448->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1448->GetYaxis()->SetTitleFont(42);
   Graph_Graph1448->GetZaxis()->SetLabelFont(42);
   Graph_Graph1448->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1448->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1448->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1448);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1449[1] = {
   344068};
   Double_t Graph_fy1449[1] = {
   0.04109368};
   Double_t Graph_fex1449[1] = {
   0};
   Double_t Graph_fey1449[1] = {
   0.001080291};
   gre = new TGraphErrors(1,Graph_fx1449,Graph_fy1449,Graph_fex1449,Graph_fey1449);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1449 = new TH1F("Graph_Graph1449","",100,344067.9,344069.1);
   Graph_Graph1449->SetMinimum(0.03979733);
   Graph_Graph1449->SetMaximum(0.04239003);
   Graph_Graph1449->SetDirectory(0);
   Graph_Graph1449->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1449->SetLineColor(ci);
   Graph_Graph1449->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1449->GetXaxis()->SetNoExponent();
   Graph_Graph1449->GetXaxis()->SetNdivisions(5);
   Graph_Graph1449->GetXaxis()->SetLabelFont(42);
   Graph_Graph1449->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1449->GetXaxis()->SetTitleFont(42);
   Graph_Graph1449->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1449->GetYaxis()->SetLabelFont(42);
   Graph_Graph1449->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1449->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1449->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1449->GetYaxis()->SetTitleFont(42);
   Graph_Graph1449->GetZaxis()->SetLabelFont(42);
   Graph_Graph1449->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1449->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1449->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1449);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1450[6] = {
   344058,
   344062,
   344063,
   344064,
   344065,
   344067};
   Double_t Graph_fy1450[6] = {
   0.001490143,
   0.03322089,
   0.0415529,
   0.04062388,
   0.04325185,
   0.04447727};
   Double_t Graph_fex1450[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1450[6] = {
   0.0007450717,
   0.007621396,
   0.0007442741,
   0.0006883426,
   0.003616901,
   0.001609131};
   gre = new TGraphErrors(6,Graph_fx1450,Graph_fy1450,Graph_fex1450,Graph_fey1450);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2fa4e1");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1450 = new TH1F("Graph_Graph1450","",100,344057.1,344067.9);
   Graph_Graph1450->SetMinimum(0.0006705645);
   Graph_Graph1450->SetMaximum(0.05148112);
   Graph_Graph1450->SetDirectory(0);
   Graph_Graph1450->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1450->SetLineColor(ci);
   Graph_Graph1450->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1450->GetXaxis()->SetNoExponent();
   Graph_Graph1450->GetXaxis()->SetNdivisions(5);
   Graph_Graph1450->GetXaxis()->SetLabelFont(42);
   Graph_Graph1450->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1450->GetXaxis()->SetTitleFont(42);
   Graph_Graph1450->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1450->GetYaxis()->SetLabelFont(42);
   Graph_Graph1450->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1450->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1450->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1450->GetYaxis()->SetTitleFont(42);
   Graph_Graph1450->GetZaxis()->SetLabelFont(42);
   Graph_Graph1450->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1450->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1450->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1450);
   
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
      tex = new TLatex(0.23,0.83,"TEC 8+");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
