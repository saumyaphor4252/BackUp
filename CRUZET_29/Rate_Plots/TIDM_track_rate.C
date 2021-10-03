void TIDM_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug  3 18:11:27 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(343311.3,-0.04179179,344128.7,0.2811447);
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
   multigraph->SetName("track rate TID-");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1071[2] = {
   343772,
   343774};
   Double_t Graph_fy1071[2] = {
   0.1295436,
   0.1466041};
   Double_t Graph_fex1071[2] = {
   0,
   0};
   Double_t Graph_fey1071[2] = {
   0.00957614,
   0.001924343};
   TGraphErrors *gre = new TGraphErrors(2,Graph_fx1071,Graph_fy1071,Graph_fex1071,Graph_fey1071);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f5601b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1071 = new TH1F("Graph_Graph1071","",100,343771.8,343774.2);
   Graph_Graph1071->SetMinimum(0.1171114);
   Graph_Graph1071->SetMaximum(0.1513846);
   Graph_Graph1071->SetDirectory(0);
   Graph_Graph1071->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1071->SetLineColor(ci);
   Graph_Graph1071->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1071->GetXaxis()->SetNoExponent();
   Graph_Graph1071->GetXaxis()->SetNdivisions(5);
   Graph_Graph1071->GetXaxis()->SetLabelFont(42);
   Graph_Graph1071->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1071->GetXaxis()->SetTitleFont(42);
   Graph_Graph1071->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1071->GetYaxis()->SetLabelFont(42);
   Graph_Graph1071->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1071->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1071->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1071->GetYaxis()->SetTitleFont(42);
   Graph_Graph1071->GetZaxis()->SetLabelFont(42);
   Graph_Graph1071->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1071->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1071->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1071);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1072[9] = {
   343854,
   343860,
   343862,
   343864,
   343866,
   343932,
   343934,
   343936,
   343937};
   Double_t Graph_fy1072[9] = {
   0,
   0.1710719,
   0.1680919,
   0.1722842,
   0.01179982,
   0,
   0.1609894,
   0.1674158,
   0.1716324};
   Double_t Graph_fex1072[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1072[9] = {
   0,
   0.01244365,
   0.002085565,
   0.005944369,
   0.004171866,
   0,
   0.00826947,
   0.00433278,
   0.002093234};
   gre = new TGraphErrors(9,Graph_fx1072,Graph_fy1072,Graph_fex1072,Graph_fey1072);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#196f3d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1072 = new TH1F("Graph_Graph1072","",100,343845.7,343945.3);
   Graph_Graph1072->SetMinimum(0);
   Graph_Graph1072->SetMaximum(0.2018671);
   Graph_Graph1072->SetDirectory(0);
   Graph_Graph1072->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1072->SetLineColor(ci);
   Graph_Graph1072->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1072->GetXaxis()->SetNoExponent();
   Graph_Graph1072->GetXaxis()->SetNdivisions(5);
   Graph_Graph1072->GetXaxis()->SetLabelFont(42);
   Graph_Graph1072->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1072->GetXaxis()->SetTitleFont(42);
   Graph_Graph1072->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1072->GetYaxis()->SetLabelFont(42);
   Graph_Graph1072->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1072->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1072->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1072->GetYaxis()->SetTitleFont(42);
   Graph_Graph1072->GetZaxis()->SetLabelFont(42);
   Graph_Graph1072->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1072->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1072->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1072);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1073[5] = {
   343644,
   343648,
   343650,
   343652,
   343663};
   Double_t Graph_fy1073[5] = {
   0.1461848,
   0.142508,
   0.05580407,
   0.1790264,
   0.1386979};
   Double_t Graph_fex1073[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1073[5] = {
   0.003543418,
   0.005876931,
   0.03945944,
   0.0447566,
   0.01430559};
   gre = new TGraphErrors(5,Graph_fx1073,Graph_fy1073,Graph_fex1073,Graph_fey1073);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e317ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1073 = new TH1F("Graph_Graph1073","",100,343642.1,343664.9);
   Graph_Graph1073->SetMinimum(0.01471017);
   Graph_Graph1073->SetMaximum(0.2445269);
   Graph_Graph1073->SetDirectory(0);
   Graph_Graph1073->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1073->SetLineColor(ci);
   Graph_Graph1073->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1073->GetXaxis()->SetNoExponent();
   Graph_Graph1073->GetXaxis()->SetNdivisions(5);
   Graph_Graph1073->GetXaxis()->SetLabelFont(42);
   Graph_Graph1073->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1073->GetXaxis()->SetTitleFont(42);
   Graph_Graph1073->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1073->GetYaxis()->SetLabelFont(42);
   Graph_Graph1073->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1073->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1073->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1073->GetYaxis()->SetTitleFont(42);
   Graph_Graph1073->GetZaxis()->SetLabelFont(42);
   Graph_Graph1073->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1073->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1073->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1073);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1074[5] = {
   343638,
   343668,
   343673,
   343677,
   343680};
   Double_t Graph_fy1074[5] = {
   0.1429754,
   0.1575789,
   0.01501343,
   0.1469252,
   0.1424958};
   Double_t Graph_fex1074[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1074[5] = {
   0.004262702,
   0.005169995,
   0.005674542,
   0.002717576,
   0.002250807};
   gre = new TGraphErrors(5,Graph_fx1074,Graph_fy1074,Graph_fex1074,Graph_fey1074);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0bf9f4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1074 = new TH1F("Graph_Graph1074","",100,343633.8,343684.2);
   Graph_Graph1074->SetMinimum(0.008404997);
   Graph_Graph1074->SetMaximum(0.1780898);
   Graph_Graph1074->SetDirectory(0);
   Graph_Graph1074->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1074->SetLineColor(ci);
   Graph_Graph1074->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1074->GetXaxis()->SetNoExponent();
   Graph_Graph1074->GetXaxis()->SetNdivisions(5);
   Graph_Graph1074->GetXaxis()->SetLabelFont(42);
   Graph_Graph1074->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1074->GetXaxis()->SetTitleFont(42);
   Graph_Graph1074->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1074->GetYaxis()->SetLabelFont(42);
   Graph_Graph1074->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1074->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1074->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1074->GetYaxis()->SetTitleFont(42);
   Graph_Graph1074->GetZaxis()->SetLabelFont(42);
   Graph_Graph1074->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1074->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1074->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1074);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1075[2] = {
   343640,
   343642};
   Double_t Graph_fy1075[2] = {
   0.1241159,
   0.1451953};
   Double_t Graph_fex1075[2] = {
   0,
   0};
   Double_t Graph_fey1075[2] = {
   0.003764545,
   0.001836151};
   gre = new TGraphErrors(2,Graph_fx1075,Graph_fy1075,Graph_fex1075,Graph_fey1075);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2cf90b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1075 = new TH1F("Graph_Graph1075","",100,343639.8,343642.2);
   Graph_Graph1075->SetMinimum(0.1176833);
   Graph_Graph1075->SetMaximum(0.1496995);
   Graph_Graph1075->SetDirectory(0);
   Graph_Graph1075->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1075->SetLineColor(ci);
   Graph_Graph1075->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1075->GetXaxis()->SetNoExponent();
   Graph_Graph1075->GetXaxis()->SetNdivisions(5);
   Graph_Graph1075->GetXaxis()->SetLabelFont(42);
   Graph_Graph1075->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1075->GetXaxis()->SetTitleFont(42);
   Graph_Graph1075->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1075->GetYaxis()->SetLabelFont(42);
   Graph_Graph1075->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1075->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1075->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1075->GetYaxis()->SetTitleFont(42);
   Graph_Graph1075->GetZaxis()->SetLabelFont(42);
   Graph_Graph1075->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1075->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1075->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1075);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1076[4] = {
   343623,
   343625,
   343627,
   343629};
   Double_t Graph_fy1076[4] = {
   0.1436224,
   0.1425653,
   0.1679081,
   0.1868743};
   Double_t Graph_fex1076[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1076[4] = {
   0.007665997,
   0.002486646,
   0.03173165,
   0.05394598};
   gre = new TGraphErrors(4,Graph_fx1076,Graph_fy1076,Graph_fex1076,Graph_fey1076);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#f90b28");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1076 = new TH1F("Graph_Graph1076","",100,343622.4,343629.6);
   Graph_Graph1076->SetMinimum(0.1221392);
   Graph_Graph1076->SetMaximum(0.2516095);
   Graph_Graph1076->SetDirectory(0);
   Graph_Graph1076->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1076->SetLineColor(ci);
   Graph_Graph1076->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1076->GetXaxis()->SetNoExponent();
   Graph_Graph1076->GetXaxis()->SetNdivisions(5);
   Graph_Graph1076->GetXaxis()->SetLabelFont(42);
   Graph_Graph1076->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1076->GetXaxis()->SetTitleFont(42);
   Graph_Graph1076->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1076->GetYaxis()->SetLabelFont(42);
   Graph_Graph1076->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1076->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1076->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1076->GetYaxis()->SetTitleFont(42);
   Graph_Graph1076->GetZaxis()->SetLabelFont(42);
   Graph_Graph1076->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1076->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1076->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1076);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1077[2] = {
   343619,
   343621};
   Double_t Graph_fy1077[2] = {
   0.1465962,
   0.1438861};
   Double_t Graph_fex1077[2] = {
   0,
   0};
   Double_t Graph_fey1077[2] = {
   0.002482187,
   0.003312325};
   gre = new TGraphErrors(2,Graph_fx1077,Graph_fy1077,Graph_fex1077,Graph_fey1077);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#1b38f5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1077 = new TH1F("Graph_Graph1077","",100,343618.8,343621.2);
   Graph_Graph1077->SetMinimum(0.1397233);
   Graph_Graph1077->SetMaximum(0.1499288);
   Graph_Graph1077->SetDirectory(0);
   Graph_Graph1077->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1077->SetLineColor(ci);
   Graph_Graph1077->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1077->GetXaxis()->SetNoExponent();
   Graph_Graph1077->GetXaxis()->SetNdivisions(5);
   Graph_Graph1077->GetXaxis()->SetLabelFont(42);
   Graph_Graph1077->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1077->GetXaxis()->SetTitleFont(42);
   Graph_Graph1077->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1077->GetYaxis()->SetLabelFont(42);
   Graph_Graph1077->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1077->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1077->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1077->GetYaxis()->SetTitleFont(42);
   Graph_Graph1077->GetZaxis()->SetLabelFont(42);
   Graph_Graph1077->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1077->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1077->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1077);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1078[4] = {
   343494,
   343496,
   343498,
   343501};
   Double_t Graph_fy1078[4] = {
   0.1582023,
   0.1630793,
   0.1631303,
   0.1701146};
   Double_t Graph_fex1078[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1078[4] = {
   0.01064184,
   0.004098815,
   0.002315594,
   0.02508202};
   gre = new TGraphErrors(4,Graph_fx1078,Graph_fy1078,Graph_fex1078,Graph_fey1078);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffc300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1078 = new TH1F("Graph_Graph1078","",100,343493.3,343501.7);
   Graph_Graph1078->SetMinimum(0.1400161);
   Graph_Graph1078->SetMaximum(0.200213);
   Graph_Graph1078->SetDirectory(0);
   Graph_Graph1078->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1078->SetLineColor(ci);
   Graph_Graph1078->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1078->GetXaxis()->SetNoExponent();
   Graph_Graph1078->GetXaxis()->SetNdivisions(5);
   Graph_Graph1078->GetXaxis()->SetLabelFont(42);
   Graph_Graph1078->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1078->GetXaxis()->SetTitleFont(42);
   Graph_Graph1078->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1078->GetYaxis()->SetLabelFont(42);
   Graph_Graph1078->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1078->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1078->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1078->GetYaxis()->SetTitleFont(42);
   Graph_Graph1078->GetZaxis()->SetLabelFont(42);
   Graph_Graph1078->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1078->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1078->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1078);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1079[1] = {
   344068};
   Double_t Graph_fy1079[1] = {
   0.1709065};
   Double_t Graph_fex1079[1] = {
   0};
   Double_t Graph_fey1079[1] = {
   0.002203092};
   gre = new TGraphErrors(1,Graph_fx1079,Graph_fy1079,Graph_fex1079,Graph_fey1079);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1079 = new TH1F("Graph_Graph1079","",100,344067.9,344069.1);
   Graph_Graph1079->SetMinimum(0.1682628);
   Graph_Graph1079->SetMaximum(0.1735503);
   Graph_Graph1079->SetDirectory(0);
   Graph_Graph1079->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1079->SetLineColor(ci);
   Graph_Graph1079->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1079->GetXaxis()->SetNoExponent();
   Graph_Graph1079->GetXaxis()->SetNdivisions(5);
   Graph_Graph1079->GetXaxis()->SetLabelFont(42);
   Graph_Graph1079->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1079->GetXaxis()->SetTitleFont(42);
   Graph_Graph1079->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1079->GetYaxis()->SetLabelFont(42);
   Graph_Graph1079->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1079->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1079->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1079->GetYaxis()->SetTitleFont(42);
   Graph_Graph1079->GetZaxis()->SetLabelFont(42);
   Graph_Graph1079->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1079->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1079->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1079);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1080[6] = {
   344058,
   344062,
   344063,
   344064,
   344065,
   344067};
   Double_t Graph_fy1080[6] = {
   0,
   0.1783437,
   0.171584,
   0.1718146,
   0.1796615,
   0.1705156};
   Double_t Graph_fex1080[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1080[6] = {
   0,
   0.01765866,
   0.001512414,
   0.001415611,
   0.007371602,
   0.003150681};
   gre = new TGraphErrors(6,Graph_fx1080,Graph_fy1080,Graph_fex1080,Graph_fey1080);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2fa4e1");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1080 = new TH1F("Graph_Graph1080","",100,344057.1,344067.9);
   Graph_Graph1080->SetMinimum(0);
   Graph_Graph1080->SetMaximum(0.2156026);
   Graph_Graph1080->SetDirectory(0);
   Graph_Graph1080->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1080->SetLineColor(ci);
   Graph_Graph1080->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1080->GetXaxis()->SetNoExponent();
   Graph_Graph1080->GetXaxis()->SetNdivisions(5);
   Graph_Graph1080->GetXaxis()->SetLabelFont(42);
   Graph_Graph1080->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1080->GetXaxis()->SetTitleFont(42);
   Graph_Graph1080->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1080->GetYaxis()->SetLabelFont(42);
   Graph_Graph1080->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1080->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1080->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1080->GetYaxis()->SetTitleFont(42);
   Graph_Graph1080->GetZaxis()->SetLabelFont(42);
   Graph_Graph1080->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1080->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1080->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1080);
   
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
      tex = new TLatex(0.23,0.83,"TID-");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
