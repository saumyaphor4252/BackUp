void tib_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug  3 18:11:26 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(343311.3,-0.3177181,344128.7,2.137376);
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
   multigraph->SetName("track rate TIB");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1051[2] = {
   343772,
   343774};
   Double_t Graph_fy1051[2] = {
   0.9528181,
   1.112641};
   Double_t Graph_fex1051[2] = {
   0,
   0};
   Double_t Graph_fey1051[2] = {
   0.02597093,
   0.005301355};
   TGraphErrors *gre = new TGraphErrors(2,Graph_fx1051,Graph_fy1051,Graph_fex1051,Graph_fey1051);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f5601b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1051 = new TH1F("Graph_Graph1051","",100,343771.8,343774.2);
   Graph_Graph1051->SetMinimum(0.9077377);
   Graph_Graph1051->SetMaximum(1.137051);
   Graph_Graph1051->SetDirectory(0);
   Graph_Graph1051->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1051->SetLineColor(ci);
   Graph_Graph1051->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1051->GetXaxis()->SetNoExponent();
   Graph_Graph1051->GetXaxis()->SetNdivisions(5);
   Graph_Graph1051->GetXaxis()->SetLabelFont(42);
   Graph_Graph1051->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1051->GetXaxis()->SetTitleFont(42);
   Graph_Graph1051->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1051->GetYaxis()->SetLabelFont(42);
   Graph_Graph1051->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1051->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1051->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1051->GetYaxis()->SetTitleFont(42);
   Graph_Graph1051->GetZaxis()->SetLabelFont(42);
   Graph_Graph1051->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1051->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1051->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1051);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1052[9] = {
   343854,
   343860,
   343862,
   343864,
   343866,
   343932,
   343934,
   343936,
   343937};
   Double_t Graph_fy1052[9] = {
   0.02921573,
   1.290733,
   1.278777,
   1.267519,
   0.02654959,
   0.001418555,
   1.216978,
   1.265991,
   1.288098};
   Double_t Graph_fex1052[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1052[9] = {
   0.01104251,
   0.03418036,
   0.005752382,
   0.01612354,
   0.006257799,
   0.001418555,
   0.02273633,
   0.01191471,
   0.005734461};
   gre = new TGraphErrors(9,Graph_fx1052,Graph_fy1052,Graph_fex1052,Graph_fey1052);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#196f3d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1052 = new TH1F("Graph_Graph1052","",100,343845.7,343945.3);
   Graph_Graph1052->SetMinimum(0);
   Graph_Graph1052->SetMaximum(1.457405);
   Graph_Graph1052->SetDirectory(0);
   Graph_Graph1052->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1052->SetLineColor(ci);
   Graph_Graph1052->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1052->GetXaxis()->SetNoExponent();
   Graph_Graph1052->GetXaxis()->SetNdivisions(5);
   Graph_Graph1052->GetXaxis()->SetLabelFont(42);
   Graph_Graph1052->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1052->GetXaxis()->SetTitleFont(42);
   Graph_Graph1052->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1052->GetYaxis()->SetLabelFont(42);
   Graph_Graph1052->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1052->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1052->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1052->GetYaxis()->SetTitleFont(42);
   Graph_Graph1052->GetZaxis()->SetLabelFont(42);
   Graph_Graph1052->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1052->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1052->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1052);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1053[5] = {
   343644,
   343648,
   343650,
   343652,
   343663};
   Double_t Graph_fy1053[5] = {
   1.100337,
   1.084806,
   1.618318,
   1.32032,
   1.099254};
   Double_t Graph_fex1053[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1053[5] = {
   0.009721519,
   0.01621463,
   0.2124956,
   0.1215453,
   0.04027356};
   gre = new TGraphErrors(5,Graph_fx1053,Graph_fy1053,Graph_fex1053,Graph_fey1053);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e317ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1053 = new TH1F("Graph_Graph1053","",100,343642.1,343664.9);
   Graph_Graph1053->SetMinimum(0.9817976);
   Graph_Graph1053->SetMaximum(1.907997);
   Graph_Graph1053->SetDirectory(0);
   Graph_Graph1053->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1053->SetLineColor(ci);
   Graph_Graph1053->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1053->GetXaxis()->SetNoExponent();
   Graph_Graph1053->GetXaxis()->SetNdivisions(5);
   Graph_Graph1053->GetXaxis()->SetLabelFont(42);
   Graph_Graph1053->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1053->GetXaxis()->SetTitleFont(42);
   Graph_Graph1053->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1053->GetYaxis()->SetLabelFont(42);
   Graph_Graph1053->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1053->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1053->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1053->GetYaxis()->SetTitleFont(42);
   Graph_Graph1053->GetZaxis()->SetLabelFont(42);
   Graph_Graph1053->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1053->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1053->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1053);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1054[5] = {
   343638,
   343668,
   343673,
   343677,
   343680};
   Double_t Graph_fy1054[5] = {
   1.113048,
   1.110346,
   0.03002686,
   1.111665,
   1.110991};
   Double_t Graph_fex1054[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1054[5] = {
   0.01189354,
   0.01372367,
   0.008025015,
   0.007475162,
   0.006284816};
   gre = new TGraphErrors(5,Graph_fx1054,Graph_fy1054,Graph_fex1054,Graph_fey1054);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0bf9f4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1054 = new TH1F("Graph_Graph1054","",100,343633.8,343684.2);
   Graph_Graph1054->SetMinimum(0.01980166);
   Graph_Graph1054->SetMaximum(1.235235);
   Graph_Graph1054->SetDirectory(0);
   Graph_Graph1054->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1054->SetLineColor(ci);
   Graph_Graph1054->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1054->GetXaxis()->SetNoExponent();
   Graph_Graph1054->GetXaxis()->SetNdivisions(5);
   Graph_Graph1054->GetXaxis()->SetLabelFont(42);
   Graph_Graph1054->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1054->GetXaxis()->SetTitleFont(42);
   Graph_Graph1054->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1054->GetYaxis()->SetLabelFont(42);
   Graph_Graph1054->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1054->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1054->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1054->GetYaxis()->SetTitleFont(42);
   Graph_Graph1054->GetZaxis()->SetLabelFont(42);
   Graph_Graph1054->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1054->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1054->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1054);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1055[2] = {
   343640,
   343642};
   Double_t Graph_fy1055[2] = {
   0.9400606,
   1.119511};
   Double_t Graph_fex1055[2] = {
   0,
   0};
   Double_t Graph_fey1055[2] = {
   0.01036041,
   0.005098545};
   gre = new TGraphErrors(2,Graph_fx1055,Graph_fy1055,Graph_fex1055,Graph_fey1055);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2cf90b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1055 = new TH1F("Graph_Graph1055","",100,343639.8,343642.2);
   Graph_Graph1055->SetMinimum(0.9102092);
   Graph_Graph1055->SetMaximum(1.1441);
   Graph_Graph1055->SetDirectory(0);
   Graph_Graph1055->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1055->SetLineColor(ci);
   Graph_Graph1055->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1055->GetXaxis()->SetNoExponent();
   Graph_Graph1055->GetXaxis()->SetNdivisions(5);
   Graph_Graph1055->GetXaxis()->SetLabelFont(42);
   Graph_Graph1055->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1055->GetXaxis()->SetTitleFont(42);
   Graph_Graph1055->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1055->GetYaxis()->SetLabelFont(42);
   Graph_Graph1055->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1055->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1055->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1055->GetYaxis()->SetTitleFont(42);
   Graph_Graph1055->GetZaxis()->SetLabelFont(42);
   Graph_Graph1055->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1055->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1055->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1055);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1056[4] = {
   343623,
   343625,
   343627,
   343629};
   Double_t Graph_fy1056[4] = {
   1.164528,
   1.102311,
   1.11539,
   1.494995};
   Double_t Graph_fex1056[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1056[4] = {
   0.02182893,
   0.006914475,
   0.08178433,
   0.1525823};
   gre = new TGraphErrors(4,Graph_fx1056,Graph_fy1056,Graph_fex1056,Graph_fey1056);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#f90b28");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1056 = new TH1F("Graph_Graph1056","",100,343622.4,343629.6);
   Graph_Graph1056->SetMinimum(0.972208);
   Graph_Graph1056->SetMaximum(1.708974);
   Graph_Graph1056->SetDirectory(0);
   Graph_Graph1056->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1056->SetLineColor(ci);
   Graph_Graph1056->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1056->GetXaxis()->SetNoExponent();
   Graph_Graph1056->GetXaxis()->SetNdivisions(5);
   Graph_Graph1056->GetXaxis()->SetLabelFont(42);
   Graph_Graph1056->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1056->GetXaxis()->SetTitleFont(42);
   Graph_Graph1056->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1056->GetYaxis()->SetLabelFont(42);
   Graph_Graph1056->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1056->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1056->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1056->GetYaxis()->SetTitleFont(42);
   Graph_Graph1056->GetZaxis()->SetLabelFont(42);
   Graph_Graph1056->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1056->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1056->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1056);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1057[2] = {
   343619,
   343621};
   Double_t Graph_fy1057[2] = {
   1.108255,
   1.126765};
   Double_t Graph_fex1057[2] = {
   0,
   0};
   Double_t Graph_fey1057[2] = {
   0.006824848,
   0.009269154};
   gre = new TGraphErrors(2,Graph_fx1057,Graph_fy1057,Graph_fex1057,Graph_fey1057);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#1b38f5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1057 = new TH1F("Graph_Graph1057","",100,343618.8,343621.2);
   Graph_Graph1057->SetMinimum(1.09797);
   Graph_Graph1057->SetMaximum(1.139494);
   Graph_Graph1057->SetDirectory(0);
   Graph_Graph1057->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1057->SetLineColor(ci);
   Graph_Graph1057->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1057->GetXaxis()->SetNoExponent();
   Graph_Graph1057->GetXaxis()->SetNdivisions(5);
   Graph_Graph1057->GetXaxis()->SetLabelFont(42);
   Graph_Graph1057->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1057->GetXaxis()->SetTitleFont(42);
   Graph_Graph1057->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1057->GetYaxis()->SetLabelFont(42);
   Graph_Graph1057->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1057->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1057->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1057->GetYaxis()->SetTitleFont(42);
   Graph_Graph1057->GetZaxis()->SetLabelFont(42);
   Graph_Graph1057->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1057->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1057->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1057);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1058[4] = {
   343494,
   343496,
   343498,
   343501};
   Double_t Graph_fy1058[4] = {
   1.25846,
   1.281455,
   1.260964,
   1.338728};
   Double_t Graph_fex1058[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1058[4] = {
   0.03001441,
   0.01148975,
   0.006437935,
   0.07036196};
   gre = new TGraphErrors(4,Graph_fx1058,Graph_fy1058,Graph_fex1058,Graph_fey1058);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffc300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1058 = new TH1F("Graph_Graph1058","",100,343493.3,343501.7);
   Graph_Graph1058->SetMinimum(1.210381);
   Graph_Graph1058->SetMaximum(1.427154);
   Graph_Graph1058->SetDirectory(0);
   Graph_Graph1058->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1058->SetLineColor(ci);
   Graph_Graph1058->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1058->GetXaxis()->SetNoExponent();
   Graph_Graph1058->GetXaxis()->SetNdivisions(5);
   Graph_Graph1058->GetXaxis()->SetLabelFont(42);
   Graph_Graph1058->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1058->GetXaxis()->SetTitleFont(42);
   Graph_Graph1058->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1058->GetYaxis()->SetLabelFont(42);
   Graph_Graph1058->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1058->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1058->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1058->GetYaxis()->SetTitleFont(42);
   Graph_Graph1058->GetZaxis()->SetLabelFont(42);
   Graph_Graph1058->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1058->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1058->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1058);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1059[1] = {
   344068};
   Double_t Graph_fy1059[1] = {
   1.293954};
   Double_t Graph_fex1059[1] = {
   0};
   Double_t Graph_fey1059[1] = {
   0.006061954};
   gre = new TGraphErrors(1,Graph_fx1059,Graph_fy1059,Graph_fex1059,Graph_fey1059);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1059 = new TH1F("Graph_Graph1059","",100,344067.9,344069.1);
   Graph_Graph1059->SetMinimum(1.28668);
   Graph_Graph1059->SetMaximum(1.301228);
   Graph_Graph1059->SetDirectory(0);
   Graph_Graph1059->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1059->SetLineColor(ci);
   Graph_Graph1059->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1059->GetXaxis()->SetNoExponent();
   Graph_Graph1059->GetXaxis()->SetNdivisions(5);
   Graph_Graph1059->GetXaxis()->SetLabelFont(42);
   Graph_Graph1059->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1059->GetXaxis()->SetTitleFont(42);
   Graph_Graph1059->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1059->GetYaxis()->SetLabelFont(42);
   Graph_Graph1059->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1059->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1059->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1059->GetYaxis()->SetTitleFont(42);
   Graph_Graph1059->GetZaxis()->SetLabelFont(42);
   Graph_Graph1059->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1059->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1059->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1059);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1060[6] = {
   344058,
   344062,
   344063,
   344064,
   344065,
   344067};
   Double_t Graph_fy1060[6] = {
   0.0007450717,
   1.295615,
   1.287007,
   1.293631,
   1.309956,
   1.286231};
   Double_t Graph_fex1060[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1060[6] = {
   0.0005268452,
   0.0475956,
   0.00414212,
   0.003884357,
   0.01990503,
   0.008653304};
   gre = new TGraphErrors(6,Graph_fx1060,Graph_fy1060,Graph_fex1060,Graph_fey1060);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2fa4e1");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1060 = new TH1F("Graph_Graph1060","",100,344057.1,344067.9);
   Graph_Graph1060->SetMinimum(0.0001964038);
   Graph_Graph1060->SetMaximum(1.47751);
   Graph_Graph1060->SetDirectory(0);
   Graph_Graph1060->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1060->SetLineColor(ci);
   Graph_Graph1060->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1060->GetXaxis()->SetNoExponent();
   Graph_Graph1060->GetXaxis()->SetNdivisions(5);
   Graph_Graph1060->GetXaxis()->SetLabelFont(42);
   Graph_Graph1060->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1060->GetXaxis()->SetTitleFont(42);
   Graph_Graph1060->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1060->GetYaxis()->SetLabelFont(42);
   Graph_Graph1060->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1060->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1060->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1060->GetYaxis()->SetTitleFont(42);
   Graph_Graph1060->GetZaxis()->SetLabelFont(42);
   Graph_Graph1060->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1060->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1060->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1060);
   
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
      tex = new TLatex(0.23,0.83,"TIB");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
