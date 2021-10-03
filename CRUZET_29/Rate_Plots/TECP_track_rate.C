void TECP_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug  3 18:11:28 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(343311.3,-0.06913013,344128.7,0.4650571);
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
   multigraph->SetName("track rate TEC+");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1111[2] = {
   343772,
   343774};
   Double_t Graph_fy1111[2] = {
   0.1769722,
   0.1983602};
   Double_t Graph_fex1111[2] = {
   0,
   0};
   Double_t Graph_fey1111[2] = {
   0.0111927,
   0.002238395};
   TGraphErrors *gre = new TGraphErrors(2,Graph_fx1111,Graph_fy1111,Graph_fex1111,Graph_fey1111);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f5601b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1111 = new TH1F("Graph_Graph1111","",100,343771.8,343774.2);
   Graph_Graph1111->SetMinimum(0.1622976);
   Graph_Graph1111->SetMaximum(0.2040805);
   Graph_Graph1111->SetDirectory(0);
   Graph_Graph1111->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1111->SetLineColor(ci);
   Graph_Graph1111->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1111->GetXaxis()->SetNoExponent();
   Graph_Graph1111->GetXaxis()->SetNdivisions(5);
   Graph_Graph1111->GetXaxis()->SetLabelFont(42);
   Graph_Graph1111->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1111->GetXaxis()->SetTitleFont(42);
   Graph_Graph1111->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1111->GetYaxis()->SetLabelFont(42);
   Graph_Graph1111->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1111->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1111->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1111->GetYaxis()->SetTitleFont(42);
   Graph_Graph1111->GetZaxis()->SetLabelFont(42);
   Graph_Graph1111->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1111->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1111->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1111);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1112[9] = {
   343854,
   343860,
   343862,
   343864,
   343866,
   343932,
   343934,
   343936,
   343937};
   Double_t Graph_fy1112[9] = {
   0.05843145,
   0.2471039,
   0.2424084,
   0.2401723,
   0.05457417,
   0.00283711,
   0.2136614,
   0.2432183,
   0.2376252};
   Double_t Graph_fex1112[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1112[9] = {
   0.01561646,
   0.01495541,
   0.002504518,
   0.007018504,
   0.008971938,
   0.00200614,
   0.009526691,
   0.005222356,
   0.002463};
   gre = new TGraphErrors(9,Graph_fx1112,Graph_fy1112,Graph_fex1112,Graph_fey1112);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#196f3d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1112 = new TH1F("Graph_Graph1112","",100,343845.7,343945.3);
   Graph_Graph1112->SetMinimum(0.0007478733);
   Graph_Graph1112->SetMaximum(0.2881821);
   Graph_Graph1112->SetDirectory(0);
   Graph_Graph1112->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1112->SetLineColor(ci);
   Graph_Graph1112->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1112->GetXaxis()->SetNoExponent();
   Graph_Graph1112->GetXaxis()->SetNdivisions(5);
   Graph_Graph1112->GetXaxis()->SetLabelFont(42);
   Graph_Graph1112->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1112->GetXaxis()->SetTitleFont(42);
   Graph_Graph1112->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1112->GetYaxis()->SetLabelFont(42);
   Graph_Graph1112->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1112->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1112->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1112->GetYaxis()->SetTitleFont(42);
   Graph_Graph1112->GetZaxis()->SetLabelFont(42);
   Graph_Graph1112->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1112->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1112->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1112);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1113[5] = {
   343644,
   343648,
   343650,
   343652,
   343663};
   Double_t Graph_fy1113[5] = {
   0.207682,
   0.189526,
   0.2790203,
   0.2461613,
   0.1844387};
   Double_t Graph_fex1113[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1113[5] = {
   0.004223483,
   0.006777434,
   0.08823398,
   0.05248177,
   0.0164967};
   gre = new TGraphErrors(5,Graph_fx1113,Graph_fy1113,Graph_fex1113,Graph_fey1113);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e317ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1113 = new TH1F("Graph_Graph1113","",100,343642.1,343664.9);
   Graph_Graph1113->SetMinimum(0.1480107);
   Graph_Graph1113->SetMaximum(0.3871856);
   Graph_Graph1113->SetDirectory(0);
   Graph_Graph1113->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1113->SetLineColor(ci);
   Graph_Graph1113->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1113->GetXaxis()->SetNoExponent();
   Graph_Graph1113->GetXaxis()->SetNdivisions(5);
   Graph_Graph1113->GetXaxis()->SetLabelFont(42);
   Graph_Graph1113->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1113->GetXaxis()->SetTitleFont(42);
   Graph_Graph1113->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1113->GetYaxis()->SetLabelFont(42);
   Graph_Graph1113->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1113->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1113->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1113->GetYaxis()->SetTitleFont(42);
   Graph_Graph1113->GetZaxis()->SetLabelFont(42);
   Graph_Graph1113->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1113->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1113->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1113);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1114[5] = {
   343638,
   343668,
   343673,
   343677,
   343680};
   Double_t Graph_fy1114[5] = {
   0.19648,
   0.1991362,
   0.03646118,
   0.2044285,
   0.1984205};
   Double_t Graph_fex1114[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1114[5] = {
   0.004997048,
   0.005811875,
   0.008843135,
   0.003205564,
   0.002656015};
   gre = new TGraphErrors(5,Graph_fx1114,Graph_fy1114,Graph_fex1114,Graph_fey1114);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0bf9f4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1114 = new TH1F("Graph_Graph1114","",100,343633.8,343684.2);
   Graph_Graph1114->SetMinimum(0.009616442);
   Graph_Graph1114->SetMaximum(0.2256357);
   Graph_Graph1114->SetDirectory(0);
   Graph_Graph1114->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1114->SetLineColor(ci);
   Graph_Graph1114->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1114->GetXaxis()->SetNoExponent();
   Graph_Graph1114->GetXaxis()->SetNdivisions(5);
   Graph_Graph1114->GetXaxis()->SetLabelFont(42);
   Graph_Graph1114->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1114->GetXaxis()->SetTitleFont(42);
   Graph_Graph1114->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1114->GetYaxis()->SetLabelFont(42);
   Graph_Graph1114->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1114->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1114->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1114->GetYaxis()->SetTitleFont(42);
   Graph_Graph1114->GetZaxis()->SetLabelFont(42);
   Graph_Graph1114->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1114->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1114->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1114);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1115[2] = {
   343640,
   343642};
   Double_t Graph_fy1115[2] = {
   0.1644221,
   0.1989963};
   Double_t Graph_fex1115[2] = {
   0,
   0};
   Double_t Graph_fey1115[2] = {
   0.004332903,
   0.002149585};
   gre = new TGraphErrors(2,Graph_fx1115,Graph_fy1115,Graph_fex1115,Graph_fey1115);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2cf90b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1115 = new TH1F("Graph_Graph1115","",100,343639.8,343642.2);
   Graph_Graph1115->SetMinimum(0.1559835);
   Graph_Graph1115->SetMaximum(0.2052515);
   Graph_Graph1115->SetDirectory(0);
   Graph_Graph1115->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1115->SetLineColor(ci);
   Graph_Graph1115->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1115->GetXaxis()->SetNoExponent();
   Graph_Graph1115->GetXaxis()->SetNdivisions(5);
   Graph_Graph1115->GetXaxis()->SetLabelFont(42);
   Graph_Graph1115->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1115->GetXaxis()->SetTitleFont(42);
   Graph_Graph1115->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1115->GetYaxis()->SetLabelFont(42);
   Graph_Graph1115->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1115->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1115->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1115->GetYaxis()->SetTitleFont(42);
   Graph_Graph1115->GetZaxis()->SetLabelFont(42);
   Graph_Graph1115->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1115->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1115->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1115);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1116[4] = {
   343623,
   343625,
   343627,
   343629};
   Double_t Graph_fy1116[4] = {
   0.2029536,
   0.2004676,
   0.1619114,
   0.3270301};
   Double_t Graph_fex1116[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1116[4] = {
   0.009112886,
   0.00294869,
   0.03115986,
   0.07136382};
   gre = new TGraphErrors(4,Graph_fx1116,Graph_fy1116,Graph_fex1116,Graph_fey1116);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#f90b28");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1116 = new TH1F("Graph_Graph1116","",100,343622.4,343629.6);
   Graph_Graph1116->SetMinimum(0.1039873);
   Graph_Graph1116->SetMaximum(0.4251582);
   Graph_Graph1116->SetDirectory(0);
   Graph_Graph1116->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1116->SetLineColor(ci);
   Graph_Graph1116->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1116->GetXaxis()->SetNoExponent();
   Graph_Graph1116->GetXaxis()->SetNdivisions(5);
   Graph_Graph1116->GetXaxis()->SetLabelFont(42);
   Graph_Graph1116->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1116->GetXaxis()->SetTitleFont(42);
   Graph_Graph1116->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1116->GetYaxis()->SetLabelFont(42);
   Graph_Graph1116->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1116->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1116->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1116->GetYaxis()->SetTitleFont(42);
   Graph_Graph1116->GetZaxis()->SetLabelFont(42);
   Graph_Graph1116->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1116->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1116->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1116);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1117[2] = {
   343619,
   343621};
   Double_t Graph_fy1117[2] = {
   0.2003929,
   0.2055734};
   Double_t Graph_fex1117[2] = {
   0,
   0};
   Double_t Graph_fey1117[2] = {
   0.002902113,
   0.003959195};
   gre = new TGraphErrors(2,Graph_fx1117,Graph_fy1117,Graph_fex1117,Graph_fey1117);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#1b38f5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1117 = new TH1F("Graph_Graph1117","",100,343618.8,343621.2);
   Graph_Graph1117->SetMinimum(0.1962867);
   Graph_Graph1117->SetMaximum(0.2107367);
   Graph_Graph1117->SetDirectory(0);
   Graph_Graph1117->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1117->SetLineColor(ci);
   Graph_Graph1117->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1117->GetXaxis()->SetNoExponent();
   Graph_Graph1117->GetXaxis()->SetNdivisions(5);
   Graph_Graph1117->GetXaxis()->SetLabelFont(42);
   Graph_Graph1117->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1117->GetXaxis()->SetTitleFont(42);
   Graph_Graph1117->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1117->GetYaxis()->SetLabelFont(42);
   Graph_Graph1117->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1117->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1117->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1117->GetYaxis()->SetTitleFont(42);
   Graph_Graph1117->GetZaxis()->SetLabelFont(42);
   Graph_Graph1117->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1117->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1117->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1117);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1118[4] = {
   343494,
   343496,
   343498,
   343501};
   Double_t Graph_fy1118[4] = {
   0.2090274,
   0.2171643,
   0.2235112,
   0.2144923};
   Double_t Graph_fex1118[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1118[4] = {
   0.0122324,
   0.004729913,
   0.002710471,
   0.02816422};
   gre = new TGraphErrors(4,Graph_fx1118,Graph_fy1118,Graph_fex1118,Graph_fey1118);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffc300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1118 = new TH1F("Graph_Graph1118","",100,343493.3,343501.7);
   Graph_Graph1118->SetMinimum(0.1806952);
   Graph_Graph1118->SetMaximum(0.2482893);
   Graph_Graph1118->SetDirectory(0);
   Graph_Graph1118->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1118->SetLineColor(ci);
   Graph_Graph1118->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1118->GetXaxis()->SetNoExponent();
   Graph_Graph1118->GetXaxis()->SetNdivisions(5);
   Graph_Graph1118->GetXaxis()->SetLabelFont(42);
   Graph_Graph1118->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1118->GetXaxis()->SetTitleFont(42);
   Graph_Graph1118->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1118->GetYaxis()->SetLabelFont(42);
   Graph_Graph1118->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1118->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1118->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1118->GetYaxis()->SetTitleFont(42);
   Graph_Graph1118->GetZaxis()->SetLabelFont(42);
   Graph_Graph1118->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1118->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1118->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1118);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1119[1] = {
   344068};
   Double_t Graph_fy1119[1] = {
   0.2462213};
   Double_t Graph_fex1119[1] = {
   0};
   Double_t Graph_fey1119[1] = {
   0.002644332};
   gre = new TGraphErrors(1,Graph_fx1119,Graph_fy1119,Graph_fex1119,Graph_fey1119);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1119 = new TH1F("Graph_Graph1119","",100,344067.9,344069.1);
   Graph_Graph1119->SetMinimum(0.2430481);
   Graph_Graph1119->SetMaximum(0.2493945);
   Graph_Graph1119->SetDirectory(0);
   Graph_Graph1119->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1119->SetLineColor(ci);
   Graph_Graph1119->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1119->GetXaxis()->SetNoExponent();
   Graph_Graph1119->GetXaxis()->SetNdivisions(5);
   Graph_Graph1119->GetXaxis()->SetLabelFont(42);
   Graph_Graph1119->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1119->GetXaxis()->SetTitleFont(42);
   Graph_Graph1119->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1119->GetYaxis()->SetLabelFont(42);
   Graph_Graph1119->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1119->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1119->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1119->GetYaxis()->SetTitleFont(42);
   Graph_Graph1119->GetZaxis()->SetLabelFont(42);
   Graph_Graph1119->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1119->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1119->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1119);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1120[6] = {
   344058,
   344062,
   344063,
   344064,
   344065,
   344067};
   Double_t Graph_fy1120[6] = {
   0.002607751,
   0.2360432,
   0.2427585,
   0.2449913,
   0.2465053,
   0.2431696};
   Double_t Graph_fex1120[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1120[6] = {
   0.0009856372,
   0.02031536,
   0.001798952,
   0.001690399,
   0.008634704,
   0.003762504};
   gre = new TGraphErrors(6,Graph_fx1120,Graph_fy1120,Graph_fex1120,Graph_fey1120);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2fa4e1");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1120 = new TH1F("Graph_Graph1120","",100,344057.1,344067.9);
   Graph_Graph1120->SetMinimum(0.001459902);
   Graph_Graph1120->SetMaximum(0.2818322);
   Graph_Graph1120->SetDirectory(0);
   Graph_Graph1120->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1120->SetLineColor(ci);
   Graph_Graph1120->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1120->GetXaxis()->SetNoExponent();
   Graph_Graph1120->GetXaxis()->SetNdivisions(5);
   Graph_Graph1120->GetXaxis()->SetLabelFont(42);
   Graph_Graph1120->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1120->GetXaxis()->SetTitleFont(42);
   Graph_Graph1120->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1120->GetYaxis()->SetLabelFont(42);
   Graph_Graph1120->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1120->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1120->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1120->GetYaxis()->SetTitleFont(42);
   Graph_Graph1120->GetZaxis()->SetLabelFont(42);
   Graph_Graph1120->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1120->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1120->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1120);
   
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
      tex = new TLatex(0.23,0.83,"TEC+");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
