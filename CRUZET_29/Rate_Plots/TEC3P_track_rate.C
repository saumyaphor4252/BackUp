void TEC3P_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug  3 18:11:33 2021) by ROOT version6.10/04
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
   multigraph->SetName("track rate TEC3+");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1291[2] = {
   343772,
   343774};
   Double_t Graph_fy1291[2] = {
   0.09627286,
   0.1128327};
   Double_t Graph_fex1291[2] = {
   0,
   0};
   Double_t Graph_fey1291[2] = {
   0.008255329,
   0.001688211};
   TGraphErrors *gre = new TGraphErrors(2,Graph_fx1291,Graph_fy1291,Graph_fex1291,Graph_fey1291);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f5601b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1291 = new TH1F("Graph_Graph1291","",100,343771.8,343774.2);
   Graph_Graph1291->SetMinimum(0.08536719);
   Graph_Graph1291->SetMaximum(0.1171712);
   Graph_Graph1291->SetDirectory(0);
   Graph_Graph1291->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1291->SetLineColor(ci);
   Graph_Graph1291->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1291->GetXaxis()->SetNoExponent();
   Graph_Graph1291->GetXaxis()->SetNdivisions(5);
   Graph_Graph1291->GetXaxis()->SetLabelFont(42);
   Graph_Graph1291->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1291->GetXaxis()->SetTitleFont(42);
   Graph_Graph1291->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1291->GetYaxis()->SetLabelFont(42);
   Graph_Graph1291->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1291->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1291->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1291->GetYaxis()->SetTitleFont(42);
   Graph_Graph1291->GetZaxis()->SetLabelFont(42);
   Graph_Graph1291->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1291->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1291->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1291);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1292[9] = {
   343854,
   343860,
   343862,
   343864,
   343866,
   343932,
   343934,
   343936,
   343937};
   Double_t Graph_fy1292[9] = {
   0.04591043,
   0.1439176,
   0.1441823,
   0.1484926,
   0.03834941,
   0.001418555,
   0.1214854,
   0.1439798,
   0.1422994};
   Double_t Graph_fex1292[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1292[9] = {
   0.01384251,
   0.01141341,
   0.001931552,
   0.005518682,
   0.007520939,
   0.001418555,
   0.007183583,
   0.004018086,
   0.001905986};
   gre = new TGraphErrors(9,Graph_fx1292,Graph_fy1292,Graph_fex1292,Graph_fey1292);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#196f3d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1292 = new TH1F("Graph_Graph1292","",100,343845.7,343945.3);
   Graph_Graph1292->SetMinimum(0);
   Graph_Graph1292->SetMaximum(0.1708642);
   Graph_Graph1292->SetDirectory(0);
   Graph_Graph1292->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1292->SetLineColor(ci);
   Graph_Graph1292->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1292->GetXaxis()->SetNoExponent();
   Graph_Graph1292->GetXaxis()->SetNdivisions(5);
   Graph_Graph1292->GetXaxis()->SetLabelFont(42);
   Graph_Graph1292->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1292->GetXaxis()->SetTitleFont(42);
   Graph_Graph1292->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1292->GetYaxis()->SetLabelFont(42);
   Graph_Graph1292->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1292->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1292->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1292->GetYaxis()->SetTitleFont(42);
   Graph_Graph1292->GetZaxis()->SetLabelFont(42);
   Graph_Graph1292->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1292->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1292->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1292);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1293[5] = {
   343644,
   343648,
   343650,
   343652,
   343663};
   Double_t Graph_fy1293[5] = {
   0.119473,
   0.109547,
   0.1395102,
   0.08951321,
   0.1150897};
   Double_t Graph_fex1293[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1293[5] = {
   0.003203363,
   0.005152656,
   0.06239085,
   0.0316477,
   0.01303134};
   gre = new TGraphErrors(5,Graph_fx1293,Graph_fy1293,Graph_fex1293,Graph_fey1293);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e317ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1293 = new TH1F("Graph_Graph1293","",100,343642.1,343664.9);
   Graph_Graph1293->SetMinimum(0.04346196);
   Graph_Graph1293->SetMaximum(0.2163046);
   Graph_Graph1293->SetDirectory(0);
   Graph_Graph1293->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1293->SetLineColor(ci);
   Graph_Graph1293->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1293->GetXaxis()->SetNoExponent();
   Graph_Graph1293->GetXaxis()->SetNdivisions(5);
   Graph_Graph1293->GetXaxis()->SetLabelFont(42);
   Graph_Graph1293->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1293->GetXaxis()->SetTitleFont(42);
   Graph_Graph1293->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1293->GetYaxis()->SetLabelFont(42);
   Graph_Graph1293->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1293->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1293->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1293->GetYaxis()->SetTitleFont(42);
   Graph_Graph1293->GetZaxis()->SetLabelFont(42);
   Graph_Graph1293->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1293->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1293->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1293);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1294[5] = {
   343638,
   343668,
   343673,
   343677,
   343680};
   Double_t Graph_fy1294[5] = {
   0.1117114,
   0.1107632,
   0.02359253,
   0.1159115,
   0.1139469};
   Double_t Graph_fex1294[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1294[5] = {
   0.003767933,
   0.004334498,
   0.007113415,
   0.002413776,
   0.002012744};
   gre = new TGraphErrors(5,Graph_fx1294,Graph_fy1294,Graph_fex1294,Graph_fey1294);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0bf9f4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1294 = new TH1F("Graph_Graph1294","",100,343633.8,343684.2);
   Graph_Graph1294->SetMinimum(0.006294495);
   Graph_Graph1294->SetMaximum(0.1285099);
   Graph_Graph1294->SetDirectory(0);
   Graph_Graph1294->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1294->SetLineColor(ci);
   Graph_Graph1294->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1294->GetXaxis()->SetNoExponent();
   Graph_Graph1294->GetXaxis()->SetNdivisions(5);
   Graph_Graph1294->GetXaxis()->SetLabelFont(42);
   Graph_Graph1294->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1294->GetXaxis()->SetTitleFont(42);
   Graph_Graph1294->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1294->GetYaxis()->SetLabelFont(42);
   Graph_Graph1294->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1294->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1294->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1294->GetYaxis()->SetTitleFont(42);
   Graph_Graph1294->GetZaxis()->SetLabelFont(42);
   Graph_Graph1294->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1294->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1294->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1294);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1295[2] = {
   343640,
   343642};
   Double_t Graph_fy1295[2] = {
   0.0939718,
   0.1128033};
   Double_t Graph_fex1295[2] = {
   0,
   0};
   Double_t Graph_fey1295[2] = {
   0.003275651,
   0.001618426};
   gre = new TGraphErrors(2,Graph_fx1295,Graph_fy1295,Graph_fex1295,Graph_fey1295);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2cf90b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1295 = new TH1F("Graph_Graph1295","",100,343639.8,343642.2);
   Graph_Graph1295->SetMinimum(0.0883236);
   Graph_Graph1295->SetMaximum(0.1167942);
   Graph_Graph1295->SetDirectory(0);
   Graph_Graph1295->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1295->SetLineColor(ci);
   Graph_Graph1295->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1295->GetXaxis()->SetNoExponent();
   Graph_Graph1295->GetXaxis()->SetNdivisions(5);
   Graph_Graph1295->GetXaxis()->SetLabelFont(42);
   Graph_Graph1295->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1295->GetXaxis()->SetTitleFont(42);
   Graph_Graph1295->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1295->GetYaxis()->SetLabelFont(42);
   Graph_Graph1295->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1295->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1295->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1295->GetYaxis()->SetTitleFont(42);
   Graph_Graph1295->GetZaxis()->SetLabelFont(42);
   Graph_Graph1295->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1295->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1295->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1295);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1296[4] = {
   343623,
   343625,
   343627,
   343629};
   Double_t Graph_fy1296[4] = {
   0.113343,
   0.1140262,
   0.08995077,
   0.1713015};
   Double_t Graph_fex1296[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1296[4] = {
   0.006810123,
   0.00222387,
   0.02322519,
   0.05164934};
   gre = new TGraphErrors(4,Graph_fx1296,Graph_fy1296,Graph_fex1296,Graph_fey1296);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#f90b28");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1296 = new TH1F("Graph_Graph1296","",100,343622.4,343629.6);
   Graph_Graph1296->SetMinimum(0.05110306);
   Graph_Graph1296->SetMaximum(0.2385733);
   Graph_Graph1296->SetDirectory(0);
   Graph_Graph1296->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1296->SetLineColor(ci);
   Graph_Graph1296->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1296->GetXaxis()->SetNoExponent();
   Graph_Graph1296->GetXaxis()->SetNdivisions(5);
   Graph_Graph1296->GetXaxis()->SetLabelFont(42);
   Graph_Graph1296->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1296->GetXaxis()->SetTitleFont(42);
   Graph_Graph1296->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1296->GetYaxis()->SetLabelFont(42);
   Graph_Graph1296->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1296->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1296->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1296->GetYaxis()->SetTitleFont(42);
   Graph_Graph1296->GetZaxis()->SetLabelFont(42);
   Graph_Graph1296->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1296->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1296->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1296);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1297[2] = {
   343619,
   343621};
   Double_t Graph_fy1297[2] = {
   0.1106616,
   0.1216207};
   Double_t Graph_fex1297[2] = {
   0,
   0};
   Double_t Graph_fey1297[2] = {
   0.00215661,
   0.003045281};
   gre = new TGraphErrors(2,Graph_fx1297,Graph_fy1297,Graph_fex1297,Graph_fey1297);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#1b38f5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1297 = new TH1F("Graph_Graph1297","",100,343618.8,343621.2);
   Graph_Graph1297->SetMinimum(0.1068889);
   Graph_Graph1297->SetMaximum(0.1262821);
   Graph_Graph1297->SetDirectory(0);
   Graph_Graph1297->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1297->SetLineColor(ci);
   Graph_Graph1297->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1297->GetXaxis()->SetNoExponent();
   Graph_Graph1297->GetXaxis()->SetNdivisions(5);
   Graph_Graph1297->GetXaxis()->SetLabelFont(42);
   Graph_Graph1297->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1297->GetXaxis()->SetTitleFont(42);
   Graph_Graph1297->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1297->GetYaxis()->SetLabelFont(42);
   Graph_Graph1297->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1297->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1297->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1297->GetYaxis()->SetTitleFont(42);
   Graph_Graph1297->GetZaxis()->SetLabelFont(42);
   Graph_Graph1297->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1297->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1297->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1297);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1298[4] = {
   343494,
   343496,
   343498,
   343501};
   Double_t Graph_fy1298[4] = {
   0.1317159,
   0.1288769,
   0.1326604,
   0.1072461};
   Double_t Graph_fex1298[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1298[4] = {
   0.009710225,
   0.003643733,
   0.00208817,
   0.01991511};
   gre = new TGraphErrors(4,Graph_fx1298,Graph_fy1298,Graph_fex1298,Graph_fey1298);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffc300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1298 = new TH1F("Graph_Graph1298","",100,343493.3,343501.7);
   Graph_Graph1298->SetMinimum(0.08192152);
   Graph_Graph1298->SetMaximum(0.1468356);
   Graph_Graph1298->SetDirectory(0);
   Graph_Graph1298->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1298->SetLineColor(ci);
   Graph_Graph1298->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1298->GetXaxis()->SetNoExponent();
   Graph_Graph1298->GetXaxis()->SetNdivisions(5);
   Graph_Graph1298->GetXaxis()->SetLabelFont(42);
   Graph_Graph1298->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1298->GetXaxis()->SetTitleFont(42);
   Graph_Graph1298->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1298->GetYaxis()->SetLabelFont(42);
   Graph_Graph1298->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1298->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1298->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1298->GetYaxis()->SetTitleFont(42);
   Graph_Graph1298->GetZaxis()->SetLabelFont(42);
   Graph_Graph1298->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1298->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1298->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1298);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1299[1] = {
   344068};
   Double_t Graph_fy1299[1] = {
   0.1484996};
   Double_t Graph_fex1299[1] = {
   0};
   Double_t Graph_fey1299[1] = {
   0.0020536};
   gre = new TGraphErrors(1,Graph_fx1299,Graph_fy1299,Graph_fex1299,Graph_fey1299);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1299 = new TH1F("Graph_Graph1299","",100,344067.9,344069.1);
   Graph_Graph1299->SetMinimum(0.1460352);
   Graph_Graph1299->SetMaximum(0.1509639);
   Graph_Graph1299->SetDirectory(0);
   Graph_Graph1299->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1299->SetLineColor(ci);
   Graph_Graph1299->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1299->GetXaxis()->SetNoExponent();
   Graph_Graph1299->GetXaxis()->SetNdivisions(5);
   Graph_Graph1299->GetXaxis()->SetLabelFont(42);
   Graph_Graph1299->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1299->GetXaxis()->SetTitleFont(42);
   Graph_Graph1299->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1299->GetYaxis()->SetLabelFont(42);
   Graph_Graph1299->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1299->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1299->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1299->GetYaxis()->SetTitleFont(42);
   Graph_Graph1299->GetZaxis()->SetLabelFont(42);
   Graph_Graph1299->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1299->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1299->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1299);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1300[6] = {
   344058,
   344062,
   344063,
   344064,
   344065,
   344067};
   Double_t Graph_fy1300[6] = {
   0.002235215,
   0.134632,
   0.1472148,
   0.1458867,
   0.1460884,
   0.1433868};
   Double_t Graph_fex1300[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1300[6] = {
   0.0009125228,
   0.01534274,
   0.001400903,
   0.001304433,
   0.006647253,
   0.002889196};
   gre = new TGraphErrors(6,Graph_fx1300,Graph_fy1300,Graph_fex1300,Graph_fey1300);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2fa4e1");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1300 = new TH1F("Graph_Graph1300","",100,344057.1,344067.9);
   Graph_Graph1300->SetMinimum(0.001190423);
   Graph_Graph1300->SetMaximum(0.167877);
   Graph_Graph1300->SetDirectory(0);
   Graph_Graph1300->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1300->SetLineColor(ci);
   Graph_Graph1300->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1300->GetXaxis()->SetNoExponent();
   Graph_Graph1300->GetXaxis()->SetNdivisions(5);
   Graph_Graph1300->GetXaxis()->SetLabelFont(42);
   Graph_Graph1300->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1300->GetXaxis()->SetTitleFont(42);
   Graph_Graph1300->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1300->GetYaxis()->SetLabelFont(42);
   Graph_Graph1300->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1300->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1300->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1300->GetYaxis()->SetTitleFont(42);
   Graph_Graph1300->GetZaxis()->SetLabelFont(42);
   Graph_Graph1300->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1300->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1300->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1300);
   
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
      tex = new TLatex(0.23,0.83,"TEC 3+");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
