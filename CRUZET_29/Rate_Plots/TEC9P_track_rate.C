void TEC9P_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug  3 18:11:39 2021) by ROOT version6.10/04
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
   multigraph->SetName("track rate TEC9+");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1471[2] = {
   343772,
   343774};
   Double_t Graph_fy1471[2] = {
   0.01061833,
   0.01346313};
   Double_t Graph_fex1471[2] = {
   0,
   0};
   Double_t Graph_fey1471[2] = {
   0.002741641,
   0.0005831529};
   TGraphErrors *gre = new TGraphErrors(2,Graph_fx1471,Graph_fy1471,Graph_fex1471,Graph_fey1471);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f5601b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1471 = new TH1F("Graph_Graph1471","",100,343771.8,343774.2);
   Graph_Graph1471->SetMinimum(0.007259729);
   Graph_Graph1471->SetMaximum(0.01466324);
   Graph_Graph1471->SetDirectory(0);
   Graph_Graph1471->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1471->SetLineColor(ci);
   Graph_Graph1471->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1471->GetXaxis()->SetNoExponent();
   Graph_Graph1471->GetXaxis()->SetNdivisions(5);
   Graph_Graph1471->GetXaxis()->SetLabelFont(42);
   Graph_Graph1471->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1471->GetXaxis()->SetTitleFont(42);
   Graph_Graph1471->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1471->GetYaxis()->SetLabelFont(42);
   Graph_Graph1471->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1471->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1471->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1471->GetYaxis()->SetTitleFont(42);
   Graph_Graph1471->GetZaxis()->SetLabelFont(42);
   Graph_Graph1471->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1471->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1471->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1471);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1472[9] = {
   343854,
   343860,
   343862,
   343864,
   343866,
   343932,
   343934,
   343936,
   343937};
   Double_t Graph_fy1472[9] = {
   0.00834735,
   0.02262856,
   0.0243754,
   0.02153552,
   0.00589991,
   0.001418555,
   0.02208826,
   0.02455731,
   0.02343575};
   Double_t Graph_fex1472[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1472[9] = {
   0.005902468,
   0.004525712,
   0.0007941933,
   0.002101652,
   0.002949955,
   0.001418555,
   0.00306309,
   0.001659429,
   0.000773495};
   gre = new TGraphErrors(9,Graph_fx1472,Graph_fy1472,Graph_fex1472,Graph_fey1472);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#196f3d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1472 = new TH1F("Graph_Graph1472","",100,343845.7,343945.3);
   Graph_Graph1472->SetMinimum(0);
   Graph_Graph1472->SetMaximum(0.0298697);
   Graph_Graph1472->SetDirectory(0);
   Graph_Graph1472->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1472->SetLineColor(ci);
   Graph_Graph1472->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1472->GetXaxis()->SetNoExponent();
   Graph_Graph1472->GetXaxis()->SetNdivisions(5);
   Graph_Graph1472->GetXaxis()->SetLabelFont(42);
   Graph_Graph1472->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1472->GetXaxis()->SetTitleFont(42);
   Graph_Graph1472->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1472->GetYaxis()->SetLabelFont(42);
   Graph_Graph1472->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1472->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1472->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1472->GetYaxis()->SetTitleFont(42);
   Graph_Graph1472->GetZaxis()->SetLabelFont(42);
   Graph_Graph1472->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1472->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1472->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1472);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1473[5] = {
   343644,
   343648,
   343650,
   343652,
   343663};
   Double_t Graph_fy1473[5] = {
   0.01382829,
   0.01429927,
   0,
   0.01118915,
   0.01918162};
   Double_t Graph_fex1473[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1473[5] = {
   0.001089822,
   0.001861607,
   0,
   0.01118915,
   0.005320024};
   gre = new TGraphErrors(5,Graph_fx1473,Graph_fy1473,Graph_fex1473,Graph_fey1473);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e317ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1473 = new TH1F("Graph_Graph1473","",100,343642.1,343664.9);
   Graph_Graph1473->SetMinimum(0);
   Graph_Graph1473->SetMaximum(0.02695181);
   Graph_Graph1473->SetDirectory(0);
   Graph_Graph1473->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1473->SetLineColor(ci);
   Graph_Graph1473->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1473->GetXaxis()->SetNoExponent();
   Graph_Graph1473->GetXaxis()->SetNdivisions(5);
   Graph_Graph1473->GetXaxis()->SetLabelFont(42);
   Graph_Graph1473->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1473->GetXaxis()->SetTitleFont(42);
   Graph_Graph1473->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1473->GetYaxis()->SetLabelFont(42);
   Graph_Graph1473->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1473->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1473->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1473->GetYaxis()->SetTitleFont(42);
   Graph_Graph1473->GetZaxis()->SetLabelFont(42);
   Graph_Graph1473->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1473->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1473->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1473);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1474[5] = {
   343638,
   343668,
   343673,
   343677,
   343680};
   Double_t Graph_fy1474[5] = {
   0.01639451,
   0.01187354,
   0.004289551,
   0.0148785,
   0.01386561};
   Double_t Graph_fex1474[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1474[5] = {
   0.001443456,
   0.00141916,
   0.00303317,
   0.0008647951,
   0.0007021126};
   gre = new TGraphErrors(5,Graph_fx1474,Graph_fy1474,Graph_fex1474,Graph_fey1474);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0bf9f4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1474 = new TH1F("Graph_Graph1474","",100,343633.8,343684.2);
   Graph_Graph1474->SetMinimum(0.001130742);
   Graph_Graph1474->SetMaximum(0.01949613);
   Graph_Graph1474->SetDirectory(0);
   Graph_Graph1474->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1474->SetLineColor(ci);
   Graph_Graph1474->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1474->GetXaxis()->SetNoExponent();
   Graph_Graph1474->GetXaxis()->SetNdivisions(5);
   Graph_Graph1474->GetXaxis()->SetLabelFont(42);
   Graph_Graph1474->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1474->GetXaxis()->SetTitleFont(42);
   Graph_Graph1474->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1474->GetYaxis()->SetLabelFont(42);
   Graph_Graph1474->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1474->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1474->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1474->GetYaxis()->SetTitleFont(42);
   Graph_Graph1474->GetZaxis()->SetLabelFont(42);
   Graph_Graph1474->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1474->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1474->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1474);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1475[2] = {
   343640,
   343642};
   Double_t Graph_fy1475[2] = {
   0.01210329,
   0.01307292};
   Double_t Graph_fex1475[2] = {
   0,
   0};
   Double_t Graph_fey1475[2] = {
   0.001175576,
   0.0005509578};
   gre = new TGraphErrors(2,Graph_fx1475,Graph_fy1475,Graph_fex1475,Graph_fey1475);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2cf90b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1475 = new TH1F("Graph_Graph1475","",100,343639.8,343642.2);
   Graph_Graph1475->SetMinimum(0.0106581);
   Graph_Graph1475->SetMaximum(0.01389349);
   Graph_Graph1475->SetDirectory(0);
   Graph_Graph1475->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1475->SetLineColor(ci);
   Graph_Graph1475->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1475->GetXaxis()->SetNoExponent();
   Graph_Graph1475->GetXaxis()->SetNdivisions(5);
   Graph_Graph1475->GetXaxis()->SetLabelFont(42);
   Graph_Graph1475->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1475->GetXaxis()->SetTitleFont(42);
   Graph_Graph1475->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1475->GetYaxis()->SetLabelFont(42);
   Graph_Graph1475->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1475->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1475->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1475->GetYaxis()->SetTitleFont(42);
   Graph_Graph1475->GetZaxis()->SetLabelFont(42);
   Graph_Graph1475->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1475->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1475->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1475);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1476[4] = {
   343623,
   343625,
   343627,
   343629};
   Double_t Graph_fy1476[4] = {
   0.0126846,
   0.01357558,
   0.01799015,
   0.07786431};
   Double_t Graph_fex1476[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1476[4] = {
   0.002278221,
   0.0007673374,
   0.01038662,
   0.03482198};
   gre = new TGraphErrors(4,Graph_fx1476,Graph_fy1476,Graph_fex1476,Graph_fey1476);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#f90b28");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1476 = new TH1F("Graph_Graph1476","",100,343622.4,343629.6);
   Graph_Graph1476->SetMinimum(0.006843181);
   Graph_Graph1476->SetMaximum(0.1231946);
   Graph_Graph1476->SetDirectory(0);
   Graph_Graph1476->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1476->SetLineColor(ci);
   Graph_Graph1476->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1476->GetXaxis()->SetNoExponent();
   Graph_Graph1476->GetXaxis()->SetNdivisions(5);
   Graph_Graph1476->GetXaxis()->SetLabelFont(42);
   Graph_Graph1476->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1476->GetXaxis()->SetTitleFont(42);
   Graph_Graph1476->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1476->GetYaxis()->SetLabelFont(42);
   Graph_Graph1476->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1476->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1476->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1476->GetYaxis()->SetTitleFont(42);
   Graph_Graph1476->GetZaxis()->SetLabelFont(42);
   Graph_Graph1476->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1476->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1476->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1476);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1477[2] = {
   343619,
   343621};
   Double_t Graph_fy1477[2] = {
   0.01353325,
   0.01410648};
   Double_t Graph_fex1477[2] = {
   0,
   0};
   Double_t Graph_fey1477[2] = {
   0.0007541785,
   0.001037129};
   gre = new TGraphErrors(2,Graph_fx1477,Graph_fy1477,Graph_fex1477,Graph_fey1477);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#1b38f5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1477 = new TH1F("Graph_Graph1477","",100,343618.8,343621.2);
   Graph_Graph1477->SetMinimum(0.01254262);
   Graph_Graph1477->SetMaximum(0.01538006);
   Graph_Graph1477->SetDirectory(0);
   Graph_Graph1477->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1477->SetLineColor(ci);
   Graph_Graph1477->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1477->GetXaxis()->SetNoExponent();
   Graph_Graph1477->GetXaxis()->SetNdivisions(5);
   Graph_Graph1477->GetXaxis()->SetLabelFont(42);
   Graph_Graph1477->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1477->GetXaxis()->SetTitleFont(42);
   Graph_Graph1477->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1477->GetYaxis()->SetLabelFont(42);
   Graph_Graph1477->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1477->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1477->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1477->GetYaxis()->SetTitleFont(42);
   Graph_Graph1477->GetZaxis()->SetLabelFont(42);
   Graph_Graph1477->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1477->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1477->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1477);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1478[4] = {
   343494,
   343496,
   343498,
   343501};
   Double_t Graph_fy1478[4] = {
   0.01574864,
   0.01957363,
   0.02175947,
   0.02218886};
   Double_t Graph_fex1478[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1478[4] = {
   0.003357621,
   0.001420021,
   0.0008457058,
   0.009058563};
   gre = new TGraphErrors(4,Graph_fx1478,Graph_fy1478,Graph_fex1478,Graph_fey1478);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffc300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1478 = new TH1F("Graph_Graph1478","",100,343493.3,343501.7);
   Graph_Graph1478->SetMinimum(0.01050538);
   Graph_Graph1478->SetMaximum(0.03313306);
   Graph_Graph1478->SetDirectory(0);
   Graph_Graph1478->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1478->SetLineColor(ci);
   Graph_Graph1478->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1478->GetXaxis()->SetNoExponent();
   Graph_Graph1478->GetXaxis()->SetNdivisions(5);
   Graph_Graph1478->GetXaxis()->SetLabelFont(42);
   Graph_Graph1478->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1478->GetXaxis()->SetTitleFont(42);
   Graph_Graph1478->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1478->GetYaxis()->SetLabelFont(42);
   Graph_Graph1478->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1478->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1478->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1478->GetYaxis()->SetTitleFont(42);
   Graph_Graph1478->GetZaxis()->SetLabelFont(42);
   Graph_Graph1478->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1478->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1478->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1478);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1479[1] = {
   344068};
   Double_t Graph_fy1479[1] = {
   0.02402575};
   Double_t Graph_fex1479[1] = {
   0};
   Double_t Graph_fey1479[1] = {
   0.0008260221};
   gre = new TGraphErrors(1,Graph_fx1479,Graph_fy1479,Graph_fex1479,Graph_fey1479);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1479 = new TH1F("Graph_Graph1479","",100,344067.9,344069.1);
   Graph_Graph1479->SetMinimum(0.02303452);
   Graph_Graph1479->SetMaximum(0.02501697);
   Graph_Graph1479->SetDirectory(0);
   Graph_Graph1479->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1479->SetLineColor(ci);
   Graph_Graph1479->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1479->GetXaxis()->SetNoExponent();
   Graph_Graph1479->GetXaxis()->SetNdivisions(5);
   Graph_Graph1479->GetXaxis()->SetLabelFont(42);
   Graph_Graph1479->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1479->GetXaxis()->SetTitleFont(42);
   Graph_Graph1479->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1479->GetYaxis()->SetLabelFont(42);
   Graph_Graph1479->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1479->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1479->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1479->GetYaxis()->SetTitleFont(42);
   Graph_Graph1479->GetZaxis()->SetLabelFont(42);
   Graph_Graph1479->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1479->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1479->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1479);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1480[6] = {
   344058,
   344062,
   344063,
   344064,
   344065,
   344067};
   Double_t Graph_fy1480[6] = {
   0.001117608,
   0.01398774,
   0.02470244,
   0.02402676,
   0.02752391,
   0.02759454};
   Double_t Graph_fex1480[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1480[6] = {
   0.000645251,
   0.004945414,
   0.0005738551,
   0.0005293727,
   0.002885289,
   0.001267459};
   gre = new TGraphErrors(6,Graph_fx1480,Graph_fy1480,Graph_fex1480,Graph_fey1480);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2fa4e1");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1480 = new TH1F("Graph_Graph1480","",100,344057.1,344067.9);
   Graph_Graph1480->SetMinimum(0.0004251209);
   Graph_Graph1480->SetMaximum(0.03340288);
   Graph_Graph1480->SetDirectory(0);
   Graph_Graph1480->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1480->SetLineColor(ci);
   Graph_Graph1480->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1480->GetXaxis()->SetNoExponent();
   Graph_Graph1480->GetXaxis()->SetNdivisions(5);
   Graph_Graph1480->GetXaxis()->SetLabelFont(42);
   Graph_Graph1480->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1480->GetXaxis()->SetTitleFont(42);
   Graph_Graph1480->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1480->GetYaxis()->SetLabelFont(42);
   Graph_Graph1480->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1480->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1480->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1480->GetYaxis()->SetTitleFont(42);
   Graph_Graph1480->GetZaxis()->SetLabelFont(42);
   Graph_Graph1480->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1480->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1480->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1480);
   
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
      tex = new TLatex(0.23,0.83," TEC 9+");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
