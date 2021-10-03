void TEC6M_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug  3 18:11:36 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(343311.3,-0.0290526,344128.7,0.1954447);
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
   multigraph->SetName("track rate TEC6-");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1391[2] = {
   343772,
   343774};
   Double_t Graph_fy1391[2] = {
   0.05450743,
   0.06981631};
   Double_t Graph_fex1391[2] = {
   0,
   0};
   Double_t Graph_fey1391[2] = {
   0.006211698,
   0.001327969};
   TGraphErrors *gre = new TGraphErrors(2,Graph_fx1391,Graph_fy1391,Graph_fex1391,Graph_fey1391);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f5601b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1391 = new TH1F("Graph_Graph1391","",100,343771.8,343774.2);
   Graph_Graph1391->SetMinimum(0.04601087);
   Graph_Graph1391->SetMaximum(0.07342913);
   Graph_Graph1391->SetDirectory(0);
   Graph_Graph1391->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1391->SetLineColor(ci);
   Graph_Graph1391->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1391->GetXaxis()->SetNoExponent();
   Graph_Graph1391->GetXaxis()->SetNdivisions(5);
   Graph_Graph1391->GetXaxis()->SetLabelFont(42);
   Graph_Graph1391->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1391->GetXaxis()->SetTitleFont(42);
   Graph_Graph1391->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1391->GetYaxis()->SetLabelFont(42);
   Graph_Graph1391->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1391->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1391->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1391->GetYaxis()->SetTitleFont(42);
   Graph_Graph1391->GetZaxis()->SetLabelFont(42);
   Graph_Graph1391->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1391->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1391->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1391);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1392[9] = {
   343854,
   343860,
   343862,
   343864,
   343866,
   343932,
   343934,
   343936,
   343937};
   Double_t Graph_fy1392[9] = {
   0.01252103,
   0.08236796,
   0.09563849,
   0.09229509,
   0.02507462,
   0.001418555,
   0.08410528,
   0.09273468,
   0.09455993};
   Double_t Graph_fex1392[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1392[9] = {
   0.007229017,
   0.008634509,
   0.001573138,
   0.004350832,
   0.006081488,
   0.001418555,
   0.005977102,
   0.003224701,
   0.001553716};
   gre = new TGraphErrors(9,Graph_fx1392,Graph_fy1392,Graph_fex1392,Graph_fey1392);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#196f3d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1392 = new TH1F("Graph_Graph1392","",100,343845.7,343945.3);
   Graph_Graph1392->SetMinimum(0);
   Graph_Graph1392->SetMaximum(0.1069328);
   Graph_Graph1392->SetDirectory(0);
   Graph_Graph1392->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1392->SetLineColor(ci);
   Graph_Graph1392->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1392->GetXaxis()->SetNoExponent();
   Graph_Graph1392->GetXaxis()->SetNdivisions(5);
   Graph_Graph1392->GetXaxis()->SetLabelFont(42);
   Graph_Graph1392->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1392->GetXaxis()->SetTitleFont(42);
   Graph_Graph1392->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1392->GetYaxis()->SetLabelFont(42);
   Graph_Graph1392->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1392->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1392->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1392->GetYaxis()->SetTitleFont(42);
   Graph_Graph1392->GetZaxis()->SetLabelFont(42);
   Graph_Graph1392->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1392->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1392->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1392);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1393[5] = {
   343644,
   343648,
   343650,
   343652,
   343663};
   Double_t Graph_fy1393[5] = {
   0.06759543,
   0.06495263,
   0.1116081,
   0.08951321,
   0.05754486};
   Double_t Graph_fex1393[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1393[5] = {
   0.002409517,
   0.003967613,
   0.05580407,
   0.0316477,
   0.009214553};
   gre = new TGraphErrors(5,Graph_fx1393,Graph_fy1393,Graph_fex1393,Graph_fey1393);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e317ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1393 = new TH1F("Graph_Graph1393","",100,343642.1,343664.9);
   Graph_Graph1393->SetMinimum(0.03642212);
   Graph_Graph1393->SetMaximum(0.1793204);
   Graph_Graph1393->SetDirectory(0);
   Graph_Graph1393->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1393->SetLineColor(ci);
   Graph_Graph1393->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1393->GetXaxis()->SetNoExponent();
   Graph_Graph1393->GetXaxis()->SetNdivisions(5);
   Graph_Graph1393->GetXaxis()->SetLabelFont(42);
   Graph_Graph1393->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1393->GetXaxis()->SetTitleFont(42);
   Graph_Graph1393->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1393->GetYaxis()->SetLabelFont(42);
   Graph_Graph1393->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1393->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1393->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1393->GetYaxis()->SetTitleFont(42);
   Graph_Graph1393->GetZaxis()->SetLabelFont(42);
   Graph_Graph1393->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1393->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1393->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1393);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1394[5] = {
   343638,
   343668,
   343673,
   343677,
   343680};
   Double_t Graph_fy1394[5] = {
   0.07345758,
   0.06954503,
   0.01072388,
   0.07203002,
   0.06875922};
   Double_t Graph_fex1394[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1394[5] = {
   0.003055432,
   0.003434584,
   0.004795864,
   0.001902788,
   0.001563517};
   gre = new TGraphErrors(5,Graph_fx1394,Graph_fy1394,Graph_fex1394,Graph_fey1394);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0bf9f4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1394 = new TH1F("Graph_Graph1394","",100,343633.8,343684.2);
   Graph_Graph1394->SetMinimum(0.005335212);
   Graph_Graph1394->SetMaximum(0.08357151);
   Graph_Graph1394->SetDirectory(0);
   Graph_Graph1394->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1394->SetLineColor(ci);
   Graph_Graph1394->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1394->GetXaxis()->SetNoExponent();
   Graph_Graph1394->GetXaxis()->SetNdivisions(5);
   Graph_Graph1394->GetXaxis()->SetLabelFont(42);
   Graph_Graph1394->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1394->GetXaxis()->SetTitleFont(42);
   Graph_Graph1394->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1394->GetYaxis()->SetLabelFont(42);
   Graph_Graph1394->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1394->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1394->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1394->GetYaxis()->SetTitleFont(42);
   Graph_Graph1394->GetZaxis()->SetLabelFont(42);
   Graph_Graph1394->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1394->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1394->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1394);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1395[2] = {
   343640,
   343642};
   Double_t Graph_fy1395[2] = {
   0.05948883,
   0.06759372};
   Double_t Graph_fex1395[2] = {
   0,
   0};
   Double_t Graph_fey1395[2] = {
   0.002606253,
   0.00125281};
   gre = new TGraphErrors(2,Graph_fx1395,Graph_fy1395,Graph_fex1395,Graph_fey1395);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2cf90b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1395 = new TH1F("Graph_Graph1395","",100,343639.8,343642.2);
   Graph_Graph1395->SetMinimum(0.05568618);
   Graph_Graph1395->SetMaximum(0.07004293);
   Graph_Graph1395->SetDirectory(0);
   Graph_Graph1395->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1395->SetLineColor(ci);
   Graph_Graph1395->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1395->GetXaxis()->SetNoExponent();
   Graph_Graph1395->GetXaxis()->SetNdivisions(5);
   Graph_Graph1395->GetXaxis()->SetLabelFont(42);
   Graph_Graph1395->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1395->GetXaxis()->SetTitleFont(42);
   Graph_Graph1395->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1395->GetYaxis()->SetLabelFont(42);
   Graph_Graph1395->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1395->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1395->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1395->GetYaxis()->SetTitleFont(42);
   Graph_Graph1395->GetZaxis()->SetLabelFont(42);
   Graph_Graph1395->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1395->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1395->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1395);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1396[4] = {
   343623,
   343625,
   343627,
   343629};
   Double_t Graph_fy1396[4] = {
   0.06628726,
   0.07100074,
   0.1139376,
   0.07786431};
   Double_t Graph_fex1396[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1396[4] = {
   0.00520802,
   0.001754844,
   0.02613909,
   0.03482198};
   gre = new TGraphErrors(4,Graph_fx1396,Graph_fy1396,Graph_fex1396,Graph_fey1396);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#f90b28");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1396 = new TH1F("Graph_Graph1396","",100,343622.4,343629.6);
   Graph_Graph1396->SetMinimum(0.03333889);
   Graph_Graph1396->SetMaximum(0.1497802);
   Graph_Graph1396->SetDirectory(0);
   Graph_Graph1396->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1396->SetLineColor(ci);
   Graph_Graph1396->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1396->GetXaxis()->SetNoExponent();
   Graph_Graph1396->GetXaxis()->SetNdivisions(5);
   Graph_Graph1396->GetXaxis()->SetLabelFont(42);
   Graph_Graph1396->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1396->GetXaxis()->SetTitleFont(42);
   Graph_Graph1396->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1396->GetYaxis()->SetLabelFont(42);
   Graph_Graph1396->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1396->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1396->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1396->GetYaxis()->SetTitleFont(42);
   Graph_Graph1396->GetZaxis()->SetLabelFont(42);
   Graph_Graph1396->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1396->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1396->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1396);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1397[2] = {
   343619,
   343621};
   Double_t Graph_fy1397[2] = {
   0.07014594,
   0.06923613};
   Double_t Graph_fex1397[2] = {
   0,
   0};
   Double_t Graph_fey1397[2] = {
   0.001717016,
   0.002297682};
   gre = new TGraphErrors(2,Graph_fx1397,Graph_fy1397,Graph_fex1397,Graph_fey1397);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#1b38f5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1397 = new TH1F("Graph_Graph1397","",100,343618.8,343621.2);
   Graph_Graph1397->SetMinimum(0.066446);
   Graph_Graph1397->SetMaximum(0.0723554);
   Graph_Graph1397->SetDirectory(0);
   Graph_Graph1397->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1397->SetLineColor(ci);
   Graph_Graph1397->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1397->GetXaxis()->SetNoExponent();
   Graph_Graph1397->GetXaxis()->SetNdivisions(5);
   Graph_Graph1397->GetXaxis()->SetLabelFont(42);
   Graph_Graph1397->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1397->GetXaxis()->SetTitleFont(42);
   Graph_Graph1397->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1397->GetYaxis()->SetLabelFont(42);
   Graph_Graph1397->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1397->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1397->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1397->GetYaxis()->SetTitleFont(42);
   Graph_Graph1397->GetZaxis()->SetLabelFont(42);
   Graph_Graph1397->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1397->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1397->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1397);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1398[4] = {
   343494,
   343496,
   343498,
   343501};
   Double_t Graph_fy1398[4] = {
   0.0787432,
   0.08560889,
   0.08237043,
   0.07026471};
   Double_t Graph_fex1398[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1398[4] = {
   0.00750787,
   0.002969739,
   0.001645435,
   0.01611983};
   gre = new TGraphErrors(4,Graph_fx1398,Graph_fy1398,Graph_fex1398,Graph_fey1398);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffc300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1398 = new TH1F("Graph_Graph1398","",100,343493.3,343501.7);
   Graph_Graph1398->SetMinimum(0.0507015);
   Graph_Graph1398->SetMaximum(0.092022);
   Graph_Graph1398->SetDirectory(0);
   Graph_Graph1398->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1398->SetLineColor(ci);
   Graph_Graph1398->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1398->GetXaxis()->SetNoExponent();
   Graph_Graph1398->GetXaxis()->SetNdivisions(5);
   Graph_Graph1398->GetXaxis()->SetLabelFont(42);
   Graph_Graph1398->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1398->GetXaxis()->SetTitleFont(42);
   Graph_Graph1398->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1398->GetYaxis()->SetLabelFont(42);
   Graph_Graph1398->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1398->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1398->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1398->GetYaxis()->SetTitleFont(42);
   Graph_Graph1398->GetZaxis()->SetLabelFont(42);
   Graph_Graph1398->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1398->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1398->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1398);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1399[1] = {
   344068};
   Double_t Graph_fy1399[1] = {
   0.09630178};
   Double_t Graph_fex1399[1] = {
   0};
   Double_t Graph_fey1399[1] = {
   0.001653752};
   gre = new TGraphErrors(1,Graph_fx1399,Graph_fy1399,Graph_fex1399,Graph_fey1399);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1399 = new TH1F("Graph_Graph1399","",100,344067.9,344069.1);
   Graph_Graph1399->SetMinimum(0.09431727);
   Graph_Graph1399->SetMaximum(0.09828628);
   Graph_Graph1399->SetDirectory(0);
   Graph_Graph1399->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1399->SetLineColor(ci);
   Graph_Graph1399->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1399->GetXaxis()->SetNoExponent();
   Graph_Graph1399->GetXaxis()->SetNdivisions(5);
   Graph_Graph1399->GetXaxis()->SetLabelFont(42);
   Graph_Graph1399->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1399->GetXaxis()->SetTitleFont(42);
   Graph_Graph1399->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1399->GetYaxis()->SetLabelFont(42);
   Graph_Graph1399->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1399->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1399->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1399->GetYaxis()->SetTitleFont(42);
   Graph_Graph1399->GetZaxis()->SetLabelFont(42);
   Graph_Graph1399->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1399->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1399->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1399);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1400[6] = {
   344058,
   344062,
   344063,
   344064,
   344065,
   344067};
   Double_t Graph_fy1400[6] = {
   0,
   0.07868106,
   0.09450385,
   0.09641028,
   0.08983077,
   0.09198179};
   Double_t Graph_fex1400[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1400[6] = {
   0,
   0.01172908,
   0.001122424,
   0.001060414,
   0.00521251,
   0.002314053};
   gre = new TGraphErrors(6,Graph_fx1400,Graph_fy1400,Graph_fex1400,Graph_fey1400);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2fa4e1");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1400 = new TH1F("Graph_Graph1400","",100,344057.1,344067.9);
   Graph_Graph1400->SetMinimum(0);
   Graph_Graph1400->SetMaximum(0.1072178);
   Graph_Graph1400->SetDirectory(0);
   Graph_Graph1400->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1400->SetLineColor(ci);
   Graph_Graph1400->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1400->GetXaxis()->SetNoExponent();
   Graph_Graph1400->GetXaxis()->SetNdivisions(5);
   Graph_Graph1400->GetXaxis()->SetLabelFont(42);
   Graph_Graph1400->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1400->GetXaxis()->SetTitleFont(42);
   Graph_Graph1400->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1400->GetYaxis()->SetLabelFont(42);
   Graph_Graph1400->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1400->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1400->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1400->GetYaxis()->SetTitleFont(42);
   Graph_Graph1400->GetZaxis()->SetLabelFont(42);
   Graph_Graph1400->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1400->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1400->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1400);
   
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
      tex = new TLatex(0.23,0.83,"TEC 6-");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
