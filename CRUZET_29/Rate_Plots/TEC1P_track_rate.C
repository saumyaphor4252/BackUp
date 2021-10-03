void TEC1P_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug  3 18:11:31 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(343311.3,-0.04794299,344128.7,0.3225254);
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
   multigraph->SetName("track rate TEC1+");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1231[2] = {
   343772,
   343774};
   Double_t Graph_fy1231[2] = {
   0.140162,
   0.1583749};
   Double_t Graph_fex1231[2] = {
   0,
   0};
   Double_t Graph_fey1231[2] = {
   0.009960876,
   0.002000104};
   TGraphErrors *gre = new TGraphErrors(2,Graph_fx1231,Graph_fy1231,Graph_fex1231,Graph_fey1231);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f5601b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1231 = new TH1F("Graph_Graph1231","",100,343771.8,343774.2);
   Graph_Graph1231->SetMinimum(0.1271837);
   Graph_Graph1231->SetMaximum(0.1633924);
   Graph_Graph1231->SetDirectory(0);
   Graph_Graph1231->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1231->SetLineColor(ci);
   Graph_Graph1231->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1231->GetXaxis()->SetNoExponent();
   Graph_Graph1231->GetXaxis()->SetNdivisions(5);
   Graph_Graph1231->GetXaxis()->SetLabelFont(42);
   Graph_Graph1231->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1231->GetXaxis()->SetTitleFont(42);
   Graph_Graph1231->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1231->GetYaxis()->SetLabelFont(42);
   Graph_Graph1231->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1231->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1231->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1231->GetYaxis()->SetTitleFont(42);
   Graph_Graph1231->GetZaxis()->SetLabelFont(42);
   Graph_Graph1231->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1231->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1231->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1231);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1232[9] = {
   343854,
   343860,
   343862,
   343864,
   343866,
   343932,
   343934,
   343936,
   343937};
   Double_t Graph_fy1232[9] = {
   0.04173675,
   0.1837439,
   0.1902678,
   0.1932044,
   0.04867426,
   0.00283711,
   0.1686353,
   0.1920853,
   0.1872307};
   Double_t Graph_fex1232[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1232[9] = {
   0.01319832,
   0.01289629,
   0.002218876,
   0.006294939,
   0.008473101,
   0.00200614,
   0.008463565,
   0.004641041,
   0.002186284};
   gre = new TGraphErrors(9,Graph_fx1232,Graph_fy1232,Graph_fex1232,Graph_fey1232);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#196f3d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1232 = new TH1F("Graph_Graph1232","",100,343845.7,343945.3);
   Graph_Graph1232->SetMinimum(0.0007478733);
   Graph_Graph1232->SetMaximum(0.2193662);
   Graph_Graph1232->SetDirectory(0);
   Graph_Graph1232->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1232->SetLineColor(ci);
   Graph_Graph1232->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1232->GetXaxis()->SetNoExponent();
   Graph_Graph1232->GetXaxis()->SetNdivisions(5);
   Graph_Graph1232->GetXaxis()->SetLabelFont(42);
   Graph_Graph1232->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1232->GetXaxis()->SetTitleFont(42);
   Graph_Graph1232->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1232->GetYaxis()->SetLabelFont(42);
   Graph_Graph1232->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1232->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1232->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1232->GetYaxis()->SetTitleFont(42);
   Graph_Graph1232->GetZaxis()->SetLabelFont(42);
   Graph_Graph1232->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1232->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1232->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1232);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1233[5] = {
   343644,
   343648,
   343650,
   343652,
   343663};
   Double_t Graph_fy1233[5] = {
   0.167915,
   0.1519601,
   0.1953142,
   0.1678373,
   0.1431244};
   Double_t Graph_fex1233[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1233[5] = {
   0.003797659,
   0.006068701,
   0.07382184,
   0.0433354,
   0.01453208};
   gre = new TGraphErrors(5,Graph_fx1233,Graph_fy1233,Graph_fex1233,Graph_fey1233);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e317ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1233 = new TH1F("Graph_Graph1233","",100,343642.1,343664.9);
   Graph_Graph1233->SetMinimum(0.106728);
   Graph_Graph1233->SetMaximum(0.2839005);
   Graph_Graph1233->SetDirectory(0);
   Graph_Graph1233->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1233->SetLineColor(ci);
   Graph_Graph1233->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1233->GetXaxis()->SetNoExponent();
   Graph_Graph1233->GetXaxis()->SetNdivisions(5);
   Graph_Graph1233->GetXaxis()->SetLabelFont(42);
   Graph_Graph1233->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1233->GetXaxis()->SetTitleFont(42);
   Graph_Graph1233->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1233->GetYaxis()->SetLabelFont(42);
   Graph_Graph1233->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1233->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1233->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1233->GetYaxis()->SetTitleFont(42);
   Graph_Graph1233->GetZaxis()->SetLabelFont(42);
   Graph_Graph1233->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1233->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1233->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1233);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1234[5] = {
   343638,
   343668,
   343673,
   343677,
   343680};
   Double_t Graph_fy1234[5] = {
   0.1570823,
   0.1608017,
   0.03002686,
   0.1615523,
   0.1586724};
   Double_t Graph_fex1234[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1234[5] = {
   0.00446805,
   0.005222595,
   0.008025015,
   0.002849642,
   0.002375133};
   gre = new TGraphErrors(5,Graph_fx1234,Graph_fy1234,Graph_fex1234,Graph_fey1234);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0bf9f4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1234 = new TH1F("Graph_Graph1234","",100,343633.8,343684.2);
   Graph_Graph1234->SetMinimum(0.007599598);
   Graph_Graph1234->SetMaximum(0.1804265);
   Graph_Graph1234->SetDirectory(0);
   Graph_Graph1234->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1234->SetLineColor(ci);
   Graph_Graph1234->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1234->GetXaxis()->SetNoExponent();
   Graph_Graph1234->GetXaxis()->SetNdivisions(5);
   Graph_Graph1234->GetXaxis()->SetLabelFont(42);
   Graph_Graph1234->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1234->GetXaxis()->SetTitleFont(42);
   Graph_Graph1234->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1234->GetYaxis()->SetLabelFont(42);
   Graph_Graph1234->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1234->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1234->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1234->GetYaxis()->SetTitleFont(42);
   Graph_Graph1234->GetZaxis()->SetLabelFont(42);
   Graph_Graph1234->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1234->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1234->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1234);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1235[2] = {
   343640,
   343642};
   Double_t Graph_fy1235[2] = {
   0.1300533,
   0.1606135};
   Double_t Graph_fex1235[2] = {
   0,
   0};
   Double_t Graph_fey1235[2] = {
   0.003853537,
   0.001931181};
   gre = new TGraphErrors(2,Graph_fx1235,Graph_fy1235,Graph_fex1235,Graph_fey1235);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2cf90b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1235 = new TH1F("Graph_Graph1235","",100,343639.8,343642.2);
   Graph_Graph1235->SetMinimum(0.1225653);
   Graph_Graph1235->SetMaximum(0.1661791);
   Graph_Graph1235->SetDirectory(0);
   Graph_Graph1235->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1235->SetLineColor(ci);
   Graph_Graph1235->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1235->GetXaxis()->SetNoExponent();
   Graph_Graph1235->GetXaxis()->SetNdivisions(5);
   Graph_Graph1235->GetXaxis()->SetLabelFont(42);
   Graph_Graph1235->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1235->GetXaxis()->SetTitleFont(42);
   Graph_Graph1235->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1235->GetYaxis()->SetLabelFont(42);
   Graph_Graph1235->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1235->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1235->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1235->GetYaxis()->SetTitleFont(42);
   Graph_Graph1235->GetZaxis()->SetLabelFont(42);
   Graph_Graph1235->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1235->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1235->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1235);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1236[4] = {
   343623,
   343625,
   343627,
   343629};
   Double_t Graph_fy1236[4] = {
   0.1620355,
   0.1598709,
   0.1139376,
   0.2180201};
   Double_t Graph_fex1236[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1236[4] = {
   0.008142592,
   0.002633248,
   0.02613909,
   0.05826832};
   gre = new TGraphErrors(4,Graph_fx1236,Graph_fy1236,Graph_fex1236,Graph_fey1236);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#f90b28");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1236 = new TH1F("Graph_Graph1236","",100,343622.4,343629.6);
   Graph_Graph1236->SetMinimum(0.06894957);
   Graph_Graph1236->SetMaximum(0.2951374);
   Graph_Graph1236->SetDirectory(0);
   Graph_Graph1236->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1236->SetLineColor(ci);
   Graph_Graph1236->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1236->GetXaxis()->SetNoExponent();
   Graph_Graph1236->GetXaxis()->SetNdivisions(5);
   Graph_Graph1236->GetXaxis()->SetLabelFont(42);
   Graph_Graph1236->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1236->GetXaxis()->SetTitleFont(42);
   Graph_Graph1236->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1236->GetYaxis()->SetLabelFont(42);
   Graph_Graph1236->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1236->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1236->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1236->GetYaxis()->SetTitleFont(42);
   Graph_Graph1236->GetZaxis()->SetLabelFont(42);
   Graph_Graph1236->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1236->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1236->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1236);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1237[2] = {
   343619,
   343621};
   Double_t Graph_fy1237[2] = {
   0.1626091,
   0.1660752};
   Double_t Graph_fex1237[2] = {
   0,
   0};
   Double_t Graph_fey1237[2] = {
   0.002614241,
   0.003558573};
   gre = new TGraphErrors(2,Graph_fx1237,Graph_fy1237,Graph_fex1237,Graph_fey1237);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#1b38f5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1237 = new TH1F("Graph_Graph1237","",100,343618.8,343621.2);
   Graph_Graph1237->SetMinimum(0.159031);
   Graph_Graph1237->SetMaximum(0.1705977);
   Graph_Graph1237->SetDirectory(0);
   Graph_Graph1237->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1237->SetLineColor(ci);
   Graph_Graph1237->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1237->GetXaxis()->SetNoExponent();
   Graph_Graph1237->GetXaxis()->SetNdivisions(5);
   Graph_Graph1237->GetXaxis()->SetLabelFont(42);
   Graph_Graph1237->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1237->GetXaxis()->SetTitleFont(42);
   Graph_Graph1237->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1237->GetYaxis()->SetLabelFont(42);
   Graph_Graph1237->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1237->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1237->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1237->GetYaxis()->SetTitleFont(42);
   Graph_Graph1237->GetZaxis()->SetLabelFont(42);
   Graph_Graph1237->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1237->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1237->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1237);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1238[4] = {
   343494,
   343496,
   343498,
   343501};
   Double_t Graph_fy1238[4] = {
   0.1660766,
   0.172454,
   0.1768039,
   0.1664164};
   Double_t Graph_fex1238[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1238[4] = {
   0.01090346,
   0.004214981,
   0.002410688,
   0.02480789};
   gre = new TGraphErrors(4,Graph_fx1238,Graph_fy1238,Graph_fex1238,Graph_fey1238);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffc300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1238 = new TH1F("Graph_Graph1238","",100,343493.3,343501.7);
   Graph_Graph1238->SetMinimum(0.1366469);
   Graph_Graph1238->SetMaximum(0.1961859);
   Graph_Graph1238->SetDirectory(0);
   Graph_Graph1238->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1238->SetLineColor(ci);
   Graph_Graph1238->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1238->GetXaxis()->SetNoExponent();
   Graph_Graph1238->GetXaxis()->SetNdivisions(5);
   Graph_Graph1238->GetXaxis()->SetLabelFont(42);
   Graph_Graph1238->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1238->GetXaxis()->SetTitleFont(42);
   Graph_Graph1238->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1238->GetYaxis()->SetLabelFont(42);
   Graph_Graph1238->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1238->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1238->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1238->GetYaxis()->SetTitleFont(42);
   Graph_Graph1238->GetZaxis()->SetLabelFont(42);
   Graph_Graph1238->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1238->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1238->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1238);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1239[1] = {
   344068};
   Double_t Graph_fy1239[1] = {
   0.1947619};
   Double_t Graph_fex1239[1] = {
   0};
   Double_t Graph_fey1239[1] = {
   0.002351826};
   gre = new TGraphErrors(1,Graph_fx1239,Graph_fy1239,Graph_fex1239,Graph_fey1239);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1239 = new TH1F("Graph_Graph1239","",100,344067.9,344069.1);
   Graph_Graph1239->SetMinimum(0.1919397);
   Graph_Graph1239->SetMaximum(0.1975841);
   Graph_Graph1239->SetDirectory(0);
   Graph_Graph1239->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1239->SetLineColor(ci);
   Graph_Graph1239->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1239->GetXaxis()->SetNoExponent();
   Graph_Graph1239->GetXaxis()->SetNdivisions(5);
   Graph_Graph1239->GetXaxis()->SetLabelFont(42);
   Graph_Graph1239->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1239->GetXaxis()->SetTitleFont(42);
   Graph_Graph1239->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1239->GetYaxis()->SetLabelFont(42);
   Graph_Graph1239->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1239->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1239->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1239->GetYaxis()->SetTitleFont(42);
   Graph_Graph1239->GetZaxis()->SetLabelFont(42);
   Graph_Graph1239->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1239->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1239->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1239);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1240[6] = {
   344058,
   344062,
   344063,
   344064,
   344065,
   344067};
   Double_t Graph_fy1240[6] = {
   0.001117608,
   0.1923315,
   0.1919939,
   0.1933921,
   0.1996239,
   0.1917064};
   Double_t Graph_fex1240[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1240[6] = {
   0.000645251,
   0.01833809,
   0.001599838,
   0.001501873,
   0.007770351,
   0.003340724};
   gre = new TGraphErrors(6,Graph_fx1240,Graph_fy1240,Graph_fex1240,Graph_fey1240);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2fa4e1");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1240 = new TH1F("Graph_Graph1240","",100,344057.1,344067.9);
   Graph_Graph1240->SetMinimum(0.0004251209);
   Graph_Graph1240->SetMaximum(0.2316893);
   Graph_Graph1240->SetDirectory(0);
   Graph_Graph1240->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1240->SetLineColor(ci);
   Graph_Graph1240->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1240->GetXaxis()->SetNoExponent();
   Graph_Graph1240->GetXaxis()->SetNdivisions(5);
   Graph_Graph1240->GetXaxis()->SetLabelFont(42);
   Graph_Graph1240->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1240->GetXaxis()->SetTitleFont(42);
   Graph_Graph1240->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1240->GetYaxis()->SetLabelFont(42);
   Graph_Graph1240->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1240->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1240->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1240->GetYaxis()->SetTitleFont(42);
   Graph_Graph1240->GetZaxis()->SetLabelFont(42);
   Graph_Graph1240->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1240->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1240->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1240);
   
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
      tex = new TLatex(0.23,0.83,"TEC 1+");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
