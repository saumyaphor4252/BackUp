void TEC7P_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug  3 18:11:37 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(343311.3,-0.02283478,344128.7,0.1536157);
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
   multigraph->SetName("track rate TEC7+");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1411[2] = {
   343772,
   343774};
   Double_t Graph_fy1411[2] = {
   0.03893388,
   0.03801503};
   Double_t Graph_fex1411[2] = {
   0,
   0};
   Double_t Graph_fey1411[2] = {
   0.005249843,
   0.0009799121};
   TGraphErrors *gre = new TGraphErrors(2,Graph_fx1411,Graph_fy1411,Graph_fex1411,Graph_fey1411);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f5601b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1411 = new TH1F("Graph_Graph1411","",100,343771.8,343774.2);
   Graph_Graph1411->SetMinimum(0.03263407);
   Graph_Graph1411->SetMaximum(0.04523369);
   Graph_Graph1411->SetDirectory(0);
   Graph_Graph1411->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1411->SetLineColor(ci);
   Graph_Graph1411->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1411->GetXaxis()->SetNoExponent();
   Graph_Graph1411->GetXaxis()->SetNdivisions(5);
   Graph_Graph1411->GetXaxis()->SetLabelFont(42);
   Graph_Graph1411->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1411->GetXaxis()->SetTitleFont(42);
   Graph_Graph1411->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1411->GetYaxis()->SetLabelFont(42);
   Graph_Graph1411->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1411->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1411->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1411->GetYaxis()->SetTitleFont(42);
   Graph_Graph1411->GetZaxis()->SetLabelFont(42);
   Graph_Graph1411->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1411->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1411->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1411);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1412[9] = {
   343854,
   343860,
   343862,
   343864,
   343866,
   343932,
   343934,
   343936,
   343937};
   Double_t Graph_fy1412[9] = {
   0.01252103,
   0.07874739,
   0.0569018,
   0.06009436,
   0.01032484,
   0.001418555,
   0.05224722,
   0.05752466,
   0.05749162};
   Double_t Graph_fex1412[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1412[9] = {
   0.007229017,
   0.008442606,
   0.001213426,
   0.00351075,
   0.003902424,
   0.001418555,
   0.004710973,
   0.002539776,
   0.001211492};
   gre = new TGraphErrors(9,Graph_fx1412,Graph_fy1412,Graph_fex1412,Graph_fey1412);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#196f3d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1412 = new TH1F("Graph_Graph1412","",100,343845.7,343945.3);
   Graph_Graph1412->SetMinimum(0);
   Graph_Graph1412->SetMaximum(0.095909);
   Graph_Graph1412->SetDirectory(0);
   Graph_Graph1412->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1412->SetLineColor(ci);
   Graph_Graph1412->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1412->GetXaxis()->SetNoExponent();
   Graph_Graph1412->GetXaxis()->SetNdivisions(5);
   Graph_Graph1412->GetXaxis()->SetLabelFont(42);
   Graph_Graph1412->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1412->GetXaxis()->SetTitleFont(42);
   Graph_Graph1412->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1412->GetYaxis()->SetLabelFont(42);
   Graph_Graph1412->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1412->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1412->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1412->GetYaxis()->SetTitleFont(42);
   Graph_Graph1412->GetZaxis()->SetLabelFont(42);
   Graph_Graph1412->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1412->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1412->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1412);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1413[5] = {
   343644,
   343648,
   343650,
   343652,
   343663};
   Double_t Graph_fy1413[5] = {
   0.04191432,
   0.03732353,
   0,
   0.0447566,
   0.04131426};
   Double_t Graph_fex1413[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1413[5] = {
   0.001897372,
   0.003007615,
   0,
   0.0223783,
   0.007807661};
   gre = new TGraphErrors(5,Graph_fx1413,Graph_fy1413,Graph_fex1413,Graph_fey1413);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e317ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1413 = new TH1F("Graph_Graph1413","",100,343642.1,343664.9);
   Graph_Graph1413->SetMinimum(0);
   Graph_Graph1413->SetMaximum(0.07384839);
   Graph_Graph1413->SetDirectory(0);
   Graph_Graph1413->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1413->SetLineColor(ci);
   Graph_Graph1413->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1413->GetXaxis()->SetNoExponent();
   Graph_Graph1413->GetXaxis()->SetNdivisions(5);
   Graph_Graph1413->GetXaxis()->SetLabelFont(42);
   Graph_Graph1413->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1413->GetXaxis()->SetTitleFont(42);
   Graph_Graph1413->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1413->GetYaxis()->SetLabelFont(42);
   Graph_Graph1413->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1413->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1413->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1413->GetYaxis()->SetTitleFont(42);
   Graph_Graph1413->GetZaxis()->SetLabelFont(42);
   Graph_Graph1413->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1413->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1413->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1413);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1414[5] = {
   343638,
   343668,
   343673,
   343677,
   343680};
   Double_t Graph_fy1414[5] = {
   0.03787259,
   0.03918269,
   0.008579102,
   0.04076507,
   0.03925035};
   Double_t Graph_fex1414[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1414[5] = {
   0.0021939,
   0.002578031,
   0.004289551,
   0.001431455,
   0.001181297};
   gre = new TGraphErrors(5,Graph_fx1414,Graph_fy1414,Graph_fex1414,Graph_fey1414);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0bf9f4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1414 = new TH1F("Graph_Graph1414","",100,343633.8,343684.2);
   Graph_Graph1414->SetMinimum(0.0004988534);
   Graph_Graph1414->SetMaximum(0.04598722);
   Graph_Graph1414->SetDirectory(0);
   Graph_Graph1414->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1414->SetLineColor(ci);
   Graph_Graph1414->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1414->GetXaxis()->SetNoExponent();
   Graph_Graph1414->GetXaxis()->SetNdivisions(5);
   Graph_Graph1414->GetXaxis()->SetLabelFont(42);
   Graph_Graph1414->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1414->GetXaxis()->SetTitleFont(42);
   Graph_Graph1414->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1414->GetYaxis()->SetLabelFont(42);
   Graph_Graph1414->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1414->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1414->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1414->GetYaxis()->SetTitleFont(42);
   Graph_Graph1414->GetZaxis()->SetLabelFont(42);
   Graph_Graph1414->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1414->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1414->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1414);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1415[2] = {
   343640,
   343642};
   Double_t Graph_fy1415[2] = {
   0.03151424,
   0.03701284};
   Double_t Graph_fex1415[2] = {
   0,
   0};
   Double_t Graph_fey1415[2] = {
   0.001896934,
   0.000927061};
   gre = new TGraphErrors(2,Graph_fx1415,Graph_fy1415,Graph_fex1415,Graph_fey1415);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2cf90b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1415 = new TH1F("Graph_Graph1415","",100,343639.8,343642.2);
   Graph_Graph1415->SetMinimum(0.02878504);
   Graph_Graph1415->SetMaximum(0.03877217);
   Graph_Graph1415->SetDirectory(0);
   Graph_Graph1415->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1415->SetLineColor(ci);
   Graph_Graph1415->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1415->GetXaxis()->SetNoExponent();
   Graph_Graph1415->GetXaxis()->SetNdivisions(5);
   Graph_Graph1415->GetXaxis()->SetLabelFont(42);
   Graph_Graph1415->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1415->GetXaxis()->SetTitleFont(42);
   Graph_Graph1415->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1415->GetYaxis()->SetLabelFont(42);
   Graph_Graph1415->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1415->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1415->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1415->GetYaxis()->SetTitleFont(42);
   Graph_Graph1415->GetZaxis()->SetLabelFont(42);
   Graph_Graph1415->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1415->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1415->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1415);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1416[4] = {
   343623,
   343625,
   343627,
   343629};
   Double_t Graph_fy1416[4] = {
   0.04541905,
   0.03756056,
   0.03598031,
   0.09343717};
   Double_t Graph_fex1416[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1416[4] = {
   0.004310986,
   0.00127636,
   0.0146889,
   0.03814557};
   gre = new TGraphErrors(4,Graph_fx1416,Graph_fy1416,Graph_fex1416,Graph_fey1416);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#f90b28");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1416 = new TH1F("Graph_Graph1416","",100,343622.4,343629.6);
   Graph_Graph1416->SetMinimum(0.01026228);
   Graph_Graph1416->SetMaximum(0.1426119);
   Graph_Graph1416->SetDirectory(0);
   Graph_Graph1416->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1416->SetLineColor(ci);
   Graph_Graph1416->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1416->GetXaxis()->SetNoExponent();
   Graph_Graph1416->GetXaxis()->SetNdivisions(5);
   Graph_Graph1416->GetXaxis()->SetLabelFont(42);
   Graph_Graph1416->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1416->GetXaxis()->SetTitleFont(42);
   Graph_Graph1416->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1416->GetYaxis()->SetLabelFont(42);
   Graph_Graph1416->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1416->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1416->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1416->GetYaxis()->SetTitleFont(42);
   Graph_Graph1416->GetZaxis()->SetLabelFont(42);
   Graph_Graph1416->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1416->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1416->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1416);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1417[2] = {
   343619,
   343621};
   Double_t Graph_fy1417[2] = {
   0.0392128,
   0.04216694};
   Double_t Graph_fex1417[2] = {
   0,
   0};
   Double_t Graph_fey1417[2] = {
   0.001283769,
   0.001793121};
   gre = new TGraphErrors(2,Graph_fx1417,Graph_fy1417,Graph_fex1417,Graph_fey1417);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#1b38f5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1417 = new TH1F("Graph_Graph1417","",100,343618.8,343621.2);
   Graph_Graph1417->SetMinimum(0.03732592);
   Graph_Graph1417->SetMaximum(0.04456317);
   Graph_Graph1417->SetDirectory(0);
   Graph_Graph1417->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1417->SetLineColor(ci);
   Graph_Graph1417->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1417->GetXaxis()->SetNoExponent();
   Graph_Graph1417->GetXaxis()->SetNdivisions(5);
   Graph_Graph1417->GetXaxis()->SetLabelFont(42);
   Graph_Graph1417->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1417->GetXaxis()->SetTitleFont(42);
   Graph_Graph1417->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1417->GetYaxis()->SetLabelFont(42);
   Graph_Graph1417->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1417->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1417->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1417->GetYaxis()->SetTitleFont(42);
   Graph_Graph1417->GetZaxis()->SetLabelFont(42);
   Graph_Graph1417->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1417->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1417->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1417);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1418[4] = {
   343494,
   343496,
   343498,
   343501};
   Double_t Graph_fy1418[4] = {
   0.05726778,
   0.05089144,
   0.05334685,
   0.05547214};
   Double_t Graph_fex1418[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1418[4] = {
   0.006402733,
   0.002289714,
   0.001324188,
   0.01432284};
   gre = new TGraphErrors(4,Graph_fx1418,Graph_fy1418,Graph_fex1418,Graph_fey1418);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffc300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1418 = new TH1F("Graph_Graph1418","",100,343493.3,343501.7);
   Graph_Graph1418->SetMinimum(0.03828472);
   Graph_Graph1418->SetMaximum(0.07265955);
   Graph_Graph1418->SetDirectory(0);
   Graph_Graph1418->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1418->SetLineColor(ci);
   Graph_Graph1418->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1418->GetXaxis()->SetNoExponent();
   Graph_Graph1418->GetXaxis()->SetNdivisions(5);
   Graph_Graph1418->GetXaxis()->SetLabelFont(42);
   Graph_Graph1418->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1418->GetXaxis()->SetTitleFont(42);
   Graph_Graph1418->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1418->GetYaxis()->SetLabelFont(42);
   Graph_Graph1418->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1418->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1418->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1418->GetYaxis()->SetTitleFont(42);
   Graph_Graph1418->GetZaxis()->SetLabelFont(42);
   Graph_Graph1418->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1418->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1418->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1418);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1419[1] = {
   344068};
   Double_t Graph_fy1419[1] = {
   0.05949638};
   Double_t Graph_fex1419[1] = {
   0};
   Double_t Graph_fey1419[1] = {
   0.001299866};
   gre = new TGraphErrors(1,Graph_fx1419,Graph_fy1419,Graph_fex1419,Graph_fey1419);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1419 = new TH1F("Graph_Graph1419","",100,344067.9,344069.1);
   Graph_Graph1419->SetMinimum(0.05793654);
   Graph_Graph1419->SetMaximum(0.06105622);
   Graph_Graph1419->SetDirectory(0);
   Graph_Graph1419->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1419->SetLineColor(ci);
   Graph_Graph1419->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1419->GetXaxis()->SetNoExponent();
   Graph_Graph1419->GetXaxis()->SetNdivisions(5);
   Graph_Graph1419->GetXaxis()->SetLabelFont(42);
   Graph_Graph1419->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1419->GetXaxis()->SetTitleFont(42);
   Graph_Graph1419->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1419->GetYaxis()->SetLabelFont(42);
   Graph_Graph1419->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1419->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1419->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1419->GetYaxis()->SetTitleFont(42);
   Graph_Graph1419->GetZaxis()->SetLabelFont(42);
   Graph_Graph1419->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1419->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1419->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1419);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1420[6] = {
   344058,
   344062,
   344063,
   344064,
   344065,
   344067};
   Double_t Graph_fy1420[6] = {
   0.001117608,
   0.05944791,
   0.05909657,
   0.05853898,
   0.06109702,
   0.06182574};
   Double_t Graph_fex1420[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1420[6] = {
   0.000645251,
   0.01019523,
   0.000887592,
   0.0008262977,
   0.004298771,
   0.001897173};
   gre = new TGraphErrors(6,Graph_fx1420,Graph_fy1420,Graph_fex1420,Graph_fey1420);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2fa4e1");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1420 = new TH1F("Graph_Graph1420","",100,344057.1,344067.9);
   Graph_Graph1420->SetMinimum(0.0004251209);
   Graph_Graph1420->SetMaximum(0.07656023);
   Graph_Graph1420->SetDirectory(0);
   Graph_Graph1420->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1420->SetLineColor(ci);
   Graph_Graph1420->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1420->GetXaxis()->SetNoExponent();
   Graph_Graph1420->GetXaxis()->SetNdivisions(5);
   Graph_Graph1420->GetXaxis()->SetLabelFont(42);
   Graph_Graph1420->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1420->GetXaxis()->SetTitleFont(42);
   Graph_Graph1420->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1420->GetYaxis()->SetLabelFont(42);
   Graph_Graph1420->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1420->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1420->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1420->GetYaxis()->SetTitleFont(42);
   Graph_Graph1420->GetZaxis()->SetLabelFont(42);
   Graph_Graph1420->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1420->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1420->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1420);
   
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
      tex = new TLatex(0.23,0.83,"TEC 7+");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
