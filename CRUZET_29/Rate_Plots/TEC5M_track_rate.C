void TEC5M_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug  3 18:11:35 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(343311.3,-0.03883515,344128.7,0.2612545);
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
   multigraph->SetName("track rate TEC5-");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1361[2] = {
   343772,
   343774};
   Double_t Graph_fy1361[2] = {
   0.06017054,
   0.09083193};
   Double_t Graph_fex1361[2] = {
   0,
   0};
   Double_t Graph_fey1361[2] = {
   0.006526411,
   0.001514707};
   TGraphErrors *gre = new TGraphErrors(2,Graph_fx1361,Graph_fy1361,Graph_fex1361,Graph_fey1361);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f5601b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1361 = new TH1F("Graph_Graph1361","",100,343771.8,343774.2);
   Graph_Graph1361->SetMinimum(0.04977387);
   Graph_Graph1361->SetMaximum(0.09621689);
   Graph_Graph1361->SetDirectory(0);
   Graph_Graph1361->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1361->SetLineColor(ci);
   Graph_Graph1361->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1361->GetXaxis()->SetNoExponent();
   Graph_Graph1361->GetXaxis()->SetNdivisions(5);
   Graph_Graph1361->GetXaxis()->SetLabelFont(42);
   Graph_Graph1361->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1361->GetXaxis()->SetTitleFont(42);
   Graph_Graph1361->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1361->GetYaxis()->SetLabelFont(42);
   Graph_Graph1361->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1361->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1361->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1361->GetYaxis()->SetTitleFont(42);
   Graph_Graph1361->GetZaxis()->SetLabelFont(42);
   Graph_Graph1361->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1361->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1361->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1361);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1362[9] = {
   343854,
   343860,
   343862,
   343864,
   343866,
   343932,
   343934,
   343936,
   343937};
   Double_t Graph_fy1362[9] = {
   0.0166947,
   0.09503995,
   0.1197551,
   0.1195734,
   0.02949955,
   0,
   0.1112908,
   0.1171799,
   0.1181744};
   Double_t Graph_fex1362[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1362[9] = {
   0.00834735,
   0.00927495,
   0.001760344,
   0.004952225,
   0.0065963,
   0,
   0.00687557,
   0.00362489,
   0.00173692};
   gre = new TGraphErrors(9,Graph_fx1362,Graph_fy1362,Graph_fex1362,Graph_fey1362);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#196f3d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1362 = new TH1F("Graph_Graph1362","",100,343845.7,343945.3);
   Graph_Graph1362->SetMinimum(0);
   Graph_Graph1362->SetMaximum(0.1369782);
   Graph_Graph1362->SetDirectory(0);
   Graph_Graph1362->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1362->SetLineColor(ci);
   Graph_Graph1362->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1362->GetXaxis()->SetNoExponent();
   Graph_Graph1362->GetXaxis()->SetNdivisions(5);
   Graph_Graph1362->GetXaxis()->SetLabelFont(42);
   Graph_Graph1362->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1362->GetXaxis()->SetTitleFont(42);
   Graph_Graph1362->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1362->GetYaxis()->SetLabelFont(42);
   Graph_Graph1362->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1362->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1362->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1362->GetYaxis()->SetTitleFont(42);
   Graph_Graph1362->GetZaxis()->SetLabelFont(42);
   Graph_Graph1362->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1362->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1362->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1362);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1363[5] = {
   343644,
   343648,
   343650,
   343652,
   343663};
   Double_t Graph_fy1363[5] = {
   0.08683479,
   0.08482619,
   0.1116081,
   0.1790264,
   0.07377546};
   Double_t Graph_fex1363[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1363[5] = {
   0.002730978,
   0.004534151,
   0.05580407,
   0.0447566,
   0.01043343};
   gre = new TGraphErrors(5,Graph_fx1363,Graph_fy1363,Graph_fex1363,Graph_fey1363);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e317ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1363 = new TH1F("Graph_Graph1363","",100,343642.1,343664.9);
   Graph_Graph1363->SetMinimum(0.03900617);
   Graph_Graph1363->SetMaximum(0.2405809);
   Graph_Graph1363->SetDirectory(0);
   Graph_Graph1363->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1363->SetLineColor(ci);
   Graph_Graph1363->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1363->GetXaxis()->SetNoExponent();
   Graph_Graph1363->GetXaxis()->SetNdivisions(5);
   Graph_Graph1363->GetXaxis()->SetLabelFont(42);
   Graph_Graph1363->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1363->GetXaxis()->SetTitleFont(42);
   Graph_Graph1363->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1363->GetYaxis()->SetLabelFont(42);
   Graph_Graph1363->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1363->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1363->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1363->GetYaxis()->SetTitleFont(42);
   Graph_Graph1363->GetZaxis()->SetLabelFont(42);
   Graph_Graph1363->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1363->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1363->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1363);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1364[5] = {
   343638,
   343668,
   343673,
   343677,
   343680};
   Double_t Graph_fy1364[5] = {
   0.09391894,
   0.09074778,
   0.01072388,
   0.0906784,
   0.08895324};
   Double_t Graph_fex1364[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1364[5] = {
   0.003454864,
   0.003923369,
   0.004795864,
   0.00213494,
   0.001778354};
   gre = new TGraphErrors(5,Graph_fx1364,Graph_fy1364,Graph_fex1364,Graph_fey1364);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0bf9f4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1364 = new TH1F("Graph_Graph1364","",100,343633.8,343684.2);
   Graph_Graph1364->SetMinimum(0.005335212);
   Graph_Graph1364->SetMaximum(0.1065184);
   Graph_Graph1364->SetDirectory(0);
   Graph_Graph1364->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1364->SetLineColor(ci);
   Graph_Graph1364->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1364->GetXaxis()->SetNoExponent();
   Graph_Graph1364->GetXaxis()->SetNdivisions(5);
   Graph_Graph1364->GetXaxis()->SetLabelFont(42);
   Graph_Graph1364->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1364->GetXaxis()->SetTitleFont(42);
   Graph_Graph1364->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1364->GetYaxis()->SetLabelFont(42);
   Graph_Graph1364->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1364->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1364->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1364->GetYaxis()->SetTitleFont(42);
   Graph_Graph1364->GetZaxis()->SetLabelFont(42);
   Graph_Graph1364->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1364->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1364->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1364);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1365[2] = {
   343640,
   343642};
   Double_t Graph_fy1365[2] = {
   0.0781005,
   0.08825961};
   Double_t Graph_fex1365[2] = {
   0,
   0};
   Double_t Graph_fey1365[2] = {
   0.002986247,
   0.001431572};
   gre = new TGraphErrors(2,Graph_fx1365,Graph_fy1365,Graph_fex1365,Graph_fey1365);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2cf90b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1365 = new TH1F("Graph_Graph1365","",100,343639.8,343642.2);
   Graph_Graph1365->SetMinimum(0.07365656);
   Graph_Graph1365->SetMaximum(0.09114888);
   Graph_Graph1365->SetDirectory(0);
   Graph_Graph1365->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1365->SetLineColor(ci);
   Graph_Graph1365->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1365->GetXaxis()->SetNoExponent();
   Graph_Graph1365->GetXaxis()->SetNdivisions(5);
   Graph_Graph1365->GetXaxis()->SetLabelFont(42);
   Graph_Graph1365->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1365->GetXaxis()->SetTitleFont(42);
   Graph_Graph1365->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1365->GetYaxis()->SetLabelFont(42);
   Graph_Graph1365->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1365->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1365->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1365->GetYaxis()->SetTitleFont(42);
   Graph_Graph1365->GetZaxis()->SetLabelFont(42);
   Graph_Graph1365->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1365->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1365->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1365);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1366[4] = {
   343623,
   343625,
   343627,
   343629};
   Double_t Graph_fy1366[4] = {
   0.09779417,
   0.0918629,
   0.1259311,
   0.1713015};
   Double_t Graph_fex1366[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1366[4] = {
   0.006325779,
   0.001996076,
   0.02748041,
   0.05164934};
   gre = new TGraphErrors(4,Graph_fx1366,Graph_fy1366,Graph_fex1366,Graph_fey1366);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#f90b28");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1366 = new TH1F("Graph_Graph1366","",100,343622.4,343629.6);
   Graph_Graph1366->SetMinimum(0.07655842);
   Graph_Graph1366->SetMaximum(0.2362592);
   Graph_Graph1366->SetDirectory(0);
   Graph_Graph1366->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1366->SetLineColor(ci);
   Graph_Graph1366->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1366->GetXaxis()->SetNoExponent();
   Graph_Graph1366->GetXaxis()->SetNdivisions(5);
   Graph_Graph1366->GetXaxis()->SetLabelFont(42);
   Graph_Graph1366->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1366->GetXaxis()->SetTitleFont(42);
   Graph_Graph1366->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1366->GetYaxis()->SetLabelFont(42);
   Graph_Graph1366->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1366->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1366->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1366->GetYaxis()->SetTitleFont(42);
   Graph_Graph1366->GetZaxis()->SetLabelFont(42);
   Graph_Graph1366->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1366->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1366->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1366);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1367[2] = {
   343619,
   343621};
   Double_t Graph_fy1367[2] = {
   0.09103421,
   0.08791769};
   Double_t Graph_fex1367[2] = {
   0,
   0};
   Double_t Graph_fey1367[2] = {
   0.00195603,
   0.002589176};
   gre = new TGraphErrors(2,Graph_fx1367,Graph_fy1367,Graph_fex1367,Graph_fey1367);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#1b38f5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1367 = new TH1F("Graph_Graph1367","",100,343618.8,343621.2);
   Graph_Graph1367->SetMinimum(0.08456234);
   Graph_Graph1367->SetMaximum(0.09375641);
   Graph_Graph1367->SetDirectory(0);
   Graph_Graph1367->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1367->SetLineColor(ci);
   Graph_Graph1367->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1367->GetXaxis()->SetNoExponent();
   Graph_Graph1367->GetXaxis()->SetNdivisions(5);
   Graph_Graph1367->GetXaxis()->SetLabelFont(42);
   Graph_Graph1367->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1367->GetXaxis()->SetTitleFont(42);
   Graph_Graph1367->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1367->GetYaxis()->SetLabelFont(42);
   Graph_Graph1367->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1367->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1367->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1367->GetYaxis()->SetTitleFont(42);
   Graph_Graph1367->GetZaxis()->SetLabelFont(42);
   Graph_Graph1367->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1367->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1367->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1367);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1368[4] = {
   343494,
   343496,
   343498,
   343501};
   Double_t Graph_fy1368[4] = {
   0.09592354,
   0.1073459,
   0.1027823,
   0.103548};
   Double_t Graph_fex1368[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1368[4] = {
   0.008286532,
   0.00332546,
   0.001838037,
   0.01956873};
   gre = new TGraphErrors(4,Graph_fx1368,Graph_fy1368,Graph_fex1368,Graph_fey1368);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffc300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1368 = new TH1F("Graph_Graph1368","",100,343493.3,343501.7);
   Graph_Graph1368->SetMinimum(0.08006552);
   Graph_Graph1368->SetMaximum(0.1270305);
   Graph_Graph1368->SetDirectory(0);
   Graph_Graph1368->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1368->SetLineColor(ci);
   Graph_Graph1368->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1368->GetXaxis()->SetNoExponent();
   Graph_Graph1368->GetXaxis()->SetNdivisions(5);
   Graph_Graph1368->GetXaxis()->SetLabelFont(42);
   Graph_Graph1368->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1368->GetXaxis()->SetTitleFont(42);
   Graph_Graph1368->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1368->GetYaxis()->SetLabelFont(42);
   Graph_Graph1368->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1368->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1368->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1368->GetYaxis()->SetTitleFont(42);
   Graph_Graph1368->GetZaxis()->SetLabelFont(42);
   Graph_Graph1368->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1368->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1368->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1368);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1369[1] = {
   344068};
   Double_t Graph_fy1369[1] = {
   0.1196459};
   Double_t Graph_fex1369[1] = {
   0};
   Double_t Graph_fey1369[1] = {
   0.001843326};
   gre = new TGraphErrors(1,Graph_fx1369,Graph_fy1369,Graph_fex1369,Graph_fey1369);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1369 = new TH1F("Graph_Graph1369","",100,344067.9,344069.1);
   Graph_Graph1369->SetMinimum(0.1174339);
   Graph_Graph1369->SetMaximum(0.1218579);
   Graph_Graph1369->SetDirectory(0);
   Graph_Graph1369->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1369->SetLineColor(ci);
   Graph_Graph1369->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1369->GetXaxis()->SetNoExponent();
   Graph_Graph1369->GetXaxis()->SetNdivisions(5);
   Graph_Graph1369->GetXaxis()->SetLabelFont(42);
   Graph_Graph1369->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1369->GetXaxis()->SetTitleFont(42);
   Graph_Graph1369->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1369->GetYaxis()->SetLabelFont(42);
   Graph_Graph1369->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1369->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1369->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1369->GetYaxis()->SetTitleFont(42);
   Graph_Graph1369->GetZaxis()->SetLabelFont(42);
   Graph_Graph1369->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1369->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1369->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1369);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1370[6] = {
   344058,
   344062,
   344063,
   344064,
   344065,
   344067};
   Double_t Graph_fy1370[6] = {
   0.0003725359,
   0.09791421,
   0.118753,
   0.1198539,
   0.1122128,
   0.1136383};
   Double_t Graph_fex1370[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1370[6] = {
   0.0003725359,
   0.01308434,
   0.001258214,
   0.001182333,
   0.005825801,
   0.002572081};
   gre = new TGraphErrors(6,Graph_fx1370,Graph_fy1370,Graph_fex1370,Graph_fey1370);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2fa4e1");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1370 = new TH1F("Graph_Graph1370","",100,344057.1,344067.9);
   Graph_Graph1370->SetMinimum(0);
   Graph_Graph1370->SetMaximum(0.1331398);
   Graph_Graph1370->SetDirectory(0);
   Graph_Graph1370->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1370->SetLineColor(ci);
   Graph_Graph1370->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1370->GetXaxis()->SetNoExponent();
   Graph_Graph1370->GetXaxis()->SetNdivisions(5);
   Graph_Graph1370->GetXaxis()->SetLabelFont(42);
   Graph_Graph1370->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1370->GetXaxis()->SetTitleFont(42);
   Graph_Graph1370->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1370->GetYaxis()->SetLabelFont(42);
   Graph_Graph1370->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1370->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1370->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1370->GetYaxis()->SetTitleFont(42);
   Graph_Graph1370->GetZaxis()->SetLabelFont(42);
   Graph_Graph1370->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1370->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1370->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1370);
   
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
      tex = new TLatex(0.23,0.83,"TEC 5-");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
