void TEC6P_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug  3 18:11:36 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(343311.3,-0.0355711,344128.7,0.2392964);
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
   multigraph->SetName("track rate TEC6+");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1381[2] = {
   343772,
   343774};
   Double_t Graph_fy1381[2] = {
   0.04742854,
   0.05645422};
   Double_t Graph_fex1381[2] = {
   0,
   0};
   Double_t Graph_fey1381[2] = {
   0.005794318,
   0.001194147};
   TGraphErrors *gre = new TGraphErrors(2,Graph_fx1381,Graph_fy1381,Graph_fex1381,Graph_fey1381);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f5601b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1381 = new TH1F("Graph_Graph1381","",100,343771.8,343774.2);
   Graph_Graph1381->SetMinimum(0.04003281);
   Graph_Graph1381->SetMaximum(0.05924978);
   Graph_Graph1381->SetDirectory(0);
   Graph_Graph1381->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1381->SetLineColor(ci);
   Graph_Graph1381->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1381->GetXaxis()->SetNoExponent();
   Graph_Graph1381->GetXaxis()->SetNdivisions(5);
   Graph_Graph1381->GetXaxis()->SetLabelFont(42);
   Graph_Graph1381->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1381->GetXaxis()->SetTitleFont(42);
   Graph_Graph1381->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1381->GetYaxis()->SetLabelFont(42);
   Graph_Graph1381->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1381->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1381->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1381->GetYaxis()->SetTitleFont(42);
   Graph_Graph1381->GetZaxis()->SetLabelFont(42);
   Graph_Graph1381->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1381->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1381->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1381);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1382[9] = {
   343854,
   343860,
   343862,
   343864,
   343866,
   343932,
   343934,
   343936,
   343937};
   Double_t Graph_fy1382[9] = {
   0.02086838,
   0.09775538,
   0.08016452,
   0.08716759,
   0.02064968,
   0.001418555,
   0.0739107,
   0.08163343,
   0.08087631};
   Double_t Graph_fex1382[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1382[9] = {
   0.009332621,
   0.009406515,
   0.001440262,
   0.004228249,
   0.005518861,
   0.001418555,
   0.005603156,
   0.003025536,
   0.001436907};
   gre = new TGraphErrors(9,Graph_fx1382,Graph_fy1382,Graph_fex1382,Graph_fey1382);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#196f3d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1382 = new TH1F("Graph_Graph1382","",100,343845.7,343945.3);
   Graph_Graph1382->SetMinimum(0);
   Graph_Graph1382->SetMaximum(0.1178781);
   Graph_Graph1382->SetDirectory(0);
   Graph_Graph1382->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1382->SetLineColor(ci);
   Graph_Graph1382->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1382->GetXaxis()->SetNoExponent();
   Graph_Graph1382->GetXaxis()->SetNdivisions(5);
   Graph_Graph1382->GetXaxis()->SetLabelFont(42);
   Graph_Graph1382->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1382->GetXaxis()->SetTitleFont(42);
   Graph_Graph1382->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1382->GetYaxis()->SetLabelFont(42);
   Graph_Graph1382->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1382->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1382->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1382->GetYaxis()->SetTitleFont(42);
   Graph_Graph1382->GetZaxis()->SetLabelFont(42);
   Graph_Graph1382->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1382->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1382->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1382);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1383[5] = {
   343644,
   343648,
   343650,
   343652,
   343663};
   Double_t Graph_fy1383[5] = {
   0.05874876,
   0.05501585,
   0.05580407,
   0.05594575,
   0.0634469};
   Double_t Graph_fex1383[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1383[5] = {
   0.002246315,
   0.00365153,
   0.03945944,
   0.0250197,
   0.009675561};
   gre = new TGraphErrors(5,Graph_fx1383,Graph_fy1383,Graph_fex1383,Graph_fey1383);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e317ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1383 = new TH1F("Graph_Graph1383","",100,343642.1,343664.9);
   Graph_Graph1383->SetMinimum(0.008452747);
   Graph_Graph1383->SetMaximum(0.1031554);
   Graph_Graph1383->SetDirectory(0);
   Graph_Graph1383->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1383->SetLineColor(ci);
   Graph_Graph1383->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1383->GetXaxis()->SetNoExponent();
   Graph_Graph1383->GetXaxis()->SetNdivisions(5);
   Graph_Graph1383->GetXaxis()->SetLabelFont(42);
   Graph_Graph1383->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1383->GetXaxis()->SetTitleFont(42);
   Graph_Graph1383->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1383->GetYaxis()->SetLabelFont(42);
   Graph_Graph1383->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1383->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1383->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1383->GetYaxis()->SetTitleFont(42);
   Graph_Graph1383->GetZaxis()->SetLabelFont(42);
   Graph_Graph1383->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1383->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1383->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1383);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1384[5] = {
   343638,
   343668,
   343673,
   343677,
   343680};
   Double_t Graph_fy1384[5] = {
   0.05579217,
   0.05953733,
   0.01072388,
   0.06051929,
   0.05848445};
   Double_t Graph_fex1384[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1384[5] = {
   0.002662815,
   0.003177868,
   0.004795864,
   0.001744137,
   0.001441974};
   gre = new TGraphErrors(5,Graph_fx1384,Graph_fy1384,Graph_fex1384,Graph_fey1384);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0bf9f4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1384 = new TH1F("Graph_Graph1384","",100,343633.8,343684.2);
   Graph_Graph1384->SetMinimum(0.0002492952);
   Graph_Graph1384->SetMaximum(0.06839391);
   Graph_Graph1384->SetDirectory(0);
   Graph_Graph1384->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1384->SetLineColor(ci);
   Graph_Graph1384->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1384->GetXaxis()->SetNoExponent();
   Graph_Graph1384->GetXaxis()->SetNdivisions(5);
   Graph_Graph1384->GetXaxis()->SetLabelFont(42);
   Graph_Graph1384->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1384->GetXaxis()->SetTitleFont(42);
   Graph_Graph1384->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1384->GetYaxis()->SetLabelFont(42);
   Graph_Graph1384->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1384->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1384->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1384->GetYaxis()->SetTitleFont(42);
   Graph_Graph1384->GetZaxis()->SetLabelFont(42);
   Graph_Graph1384->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1384->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1384->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1384);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1385[2] = {
   343640,
   343642};
   Double_t Graph_fy1385[2] = {
   0.04578699,
   0.05598367};
   Double_t Graph_fex1385[2] = {
   0,
   0};
   Double_t Graph_fey1385[2] = {
   0.002286493,
   0.001140152};
   gre = new TGraphErrors(2,Graph_fx1385,Graph_fy1385,Graph_fex1385,Graph_fey1385);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2cf90b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1385 = new TH1F("Graph_Graph1385","",100,343639.8,343642.2);
   Graph_Graph1385->SetMinimum(0.04213816);
   Graph_Graph1385->SetMaximum(0.05848615);
   Graph_Graph1385->SetDirectory(0);
   Graph_Graph1385->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1385->SetLineColor(ci);
   Graph_Graph1385->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1385->GetXaxis()->SetNoExponent();
   Graph_Graph1385->GetXaxis()->SetNdivisions(5);
   Graph_Graph1385->GetXaxis()->SetLabelFont(42);
   Graph_Graph1385->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1385->GetXaxis()->SetTitleFont(42);
   Graph_Graph1385->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1385->GetYaxis()->SetLabelFont(42);
   Graph_Graph1385->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1385->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1385->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1385->GetYaxis()->SetTitleFont(42);
   Graph_Graph1385->GetZaxis()->SetLabelFont(42);
   Graph_Graph1385->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1385->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1385->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1385);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1386[4] = {
   343623,
   343625,
   343627,
   343629};
   Double_t Graph_fy1386[4] = {
   0.06219546,
   0.05651433,
   0.04197703,
   0.1557286};
   Double_t Graph_fex1386[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1386[4] = {
   0.005044718,
   0.00156562,
   0.01586582,
   0.04924571};
   gre = new TGraphErrors(4,Graph_fx1386,Graph_fy1386,Graph_fex1386,Graph_fey1386);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#f90b28");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1386 = new TH1F("Graph_Graph1386","",100,343622.4,343629.6);
   Graph_Graph1386->SetMinimum(0.008224889);
   Graph_Graph1386->SetMaximum(0.2228606);
   Graph_Graph1386->SetDirectory(0);
   Graph_Graph1386->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1386->SetLineColor(ci);
   Graph_Graph1386->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1386->GetXaxis()->SetNoExponent();
   Graph_Graph1386->GetXaxis()->SetNdivisions(5);
   Graph_Graph1386->GetXaxis()->SetLabelFont(42);
   Graph_Graph1386->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1386->GetXaxis()->SetTitleFont(42);
   Graph_Graph1386->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1386->GetYaxis()->SetLabelFont(42);
   Graph_Graph1386->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1386->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1386->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1386->GetYaxis()->SetTitleFont(42);
   Graph_Graph1386->GetZaxis()->SetLabelFont(42);
   Graph_Graph1386->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1386->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1386->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1386);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1387[2] = {
   343619,
   343621};
   Double_t Graph_fy1387[2] = {
   0.05728515,
   0.06008598};
   Double_t Graph_fex1387[2] = {
   0,
   0};
   Double_t Graph_fey1387[2] = {
   0.001551651,
   0.002140475};
   gre = new TGraphErrors(2,Graph_fx1387,Graph_fy1387,Graph_fex1387,Graph_fey1387);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#1b38f5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1387 = new TH1F("Graph_Graph1387","",100,343618.8,343621.2);
   Graph_Graph1387->SetMinimum(0.0550842);
   Graph_Graph1387->SetMaximum(0.06287576);
   Graph_Graph1387->SetDirectory(0);
   Graph_Graph1387->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1387->SetLineColor(ci);
   Graph_Graph1387->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1387->GetXaxis()->SetNoExponent();
   Graph_Graph1387->GetXaxis()->SetNdivisions(5);
   Graph_Graph1387->GetXaxis()->SetLabelFont(42);
   Graph_Graph1387->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1387->GetXaxis()->SetTitleFont(42);
   Graph_Graph1387->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1387->GetYaxis()->SetLabelFont(42);
   Graph_Graph1387->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1387->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1387->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1387->GetYaxis()->SetTitleFont(42);
   Graph_Graph1387->GetZaxis()->SetLabelFont(42);
   Graph_Graph1387->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1387->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1387->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1387);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1388[4] = {
   343494,
   343496,
   343498,
   343501};
   Double_t Graph_fy1388[4] = {
   0.07444812,
   0.0722164,
   0.07366007,
   0.08505728};
   Double_t Graph_fex1388[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1388[4] = {
   0.007300239,
   0.002727576,
   0.001556006,
   0.01773567};
   gre = new TGraphErrors(4,Graph_fx1388,Graph_fy1388,Graph_fex1388,Graph_fey1388);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffc300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1388 = new TH1F("Graph_Graph1388","",100,343493.3,343501.7);
   Graph_Graph1388->SetMinimum(0.06358337);
   Graph_Graph1388->SetMaximum(0.1063575);
   Graph_Graph1388->SetDirectory(0);
   Graph_Graph1388->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1388->SetLineColor(ci);
   Graph_Graph1388->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1388->GetXaxis()->SetNoExponent();
   Graph_Graph1388->GetXaxis()->SetNdivisions(5);
   Graph_Graph1388->GetXaxis()->SetLabelFont(42);
   Graph_Graph1388->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1388->GetXaxis()->SetTitleFont(42);
   Graph_Graph1388->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1388->GetYaxis()->SetLabelFont(42);
   Graph_Graph1388->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1388->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1388->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1388->GetYaxis()->SetTitleFont(42);
   Graph_Graph1388->GetZaxis()->SetLabelFont(42);
   Graph_Graph1388->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1388->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1388->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1388);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1389[1] = {
   344068};
   Double_t Graph_fy1389[1] = {
   0.08122179};
   Double_t Graph_fex1389[1] = {
   0};
   Double_t Graph_fey1389[1] = {
   0.001518761};
   gre = new TGraphErrors(1,Graph_fx1389,Graph_fy1389,Graph_fex1389,Graph_fey1389);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1389 = new TH1F("Graph_Graph1389","",100,344067.9,344069.1);
   Graph_Graph1389->SetMinimum(0.07939927);
   Graph_Graph1389->SetMaximum(0.0830443);
   Graph_Graph1389->SetDirectory(0);
   Graph_Graph1389->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1389->SetLineColor(ci);
   Graph_Graph1389->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1389->GetXaxis()->SetNoExponent();
   Graph_Graph1389->GetXaxis()->SetNdivisions(5);
   Graph_Graph1389->GetXaxis()->SetLabelFont(42);
   Graph_Graph1389->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1389->GetXaxis()->SetTitleFont(42);
   Graph_Graph1389->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1389->GetYaxis()->SetLabelFont(42);
   Graph_Graph1389->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1389->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1389->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1389->GetYaxis()->SetTitleFont(42);
   Graph_Graph1389->GetZaxis()->SetLabelFont(42);
   Graph_Graph1389->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1389->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1389->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1389);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1390[6] = {
   344058,
   344062,
   344063,
   344064,
   344065,
   344067};
   Double_t Graph_fy1390[6] = {
   0.002607751,
   0.07343566,
   0.08241258,
   0.0806296,
   0.08257172,
   0.0845301};
   Double_t Graph_fex1390[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1390[6] = {
   0.0009856372,
   0.01133137,
   0.001048163,
   0.0009697532,
   0.004997467,
   0.00221834};
   gre = new TGraphErrors(6,Graph_fx1390,Graph_fy1390,Graph_fex1390,Graph_fey1390);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2fa4e1");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1390 = new TH1F("Graph_Graph1390","",100,344057.1,344067.9);
   Graph_Graph1390->SetMinimum(0.001459902);
   Graph_Graph1390->SetMaximum(0.09616389);
   Graph_Graph1390->SetDirectory(0);
   Graph_Graph1390->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1390->SetLineColor(ci);
   Graph_Graph1390->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1390->GetXaxis()->SetNoExponent();
   Graph_Graph1390->GetXaxis()->SetNdivisions(5);
   Graph_Graph1390->GetXaxis()->SetLabelFont(42);
   Graph_Graph1390->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1390->GetXaxis()->SetTitleFont(42);
   Graph_Graph1390->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1390->GetYaxis()->SetLabelFont(42);
   Graph_Graph1390->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1390->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1390->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1390->GetYaxis()->SetTitleFont(42);
   Graph_Graph1390->GetZaxis()->SetLabelFont(42);
   Graph_Graph1390->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1390->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1390->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1390);
   
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
      tex = new TLatex(0.23,0.83,"TEC 6+");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
