void tec_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug  3 18:11:38 2021) by ROOT version6.10/04
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
   multigraph->SetName("track rate TEC9");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1461[2] = {
   343772,
   343774};
   Double_t Graph_fy1461[2] = {
   0.0247761,
   0.03094247};
   Double_t Graph_fex1461[2] = {
   0,
   0};
   Double_t Graph_fey1461[2] = {
   0.004187926,
   0.0008840705};
   TGraphErrors *gre = new TGraphErrors(2,Graph_fx1461,Graph_fy1461,Graph_fex1461,Graph_fey1461);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f5601b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1461 = new TH1F("Graph_Graph1461","",100,343771.8,343774.2);
   Graph_Graph1461->SetMinimum(0.01946434);
   Graph_Graph1461->SetMaximum(0.03295037);
   Graph_Graph1461->SetDirectory(0);
   Graph_Graph1461->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1461->SetLineColor(ci);
   Graph_Graph1461->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1461->GetXaxis()->SetNoExponent();
   Graph_Graph1461->GetXaxis()->SetNdivisions(5);
   Graph_Graph1461->GetXaxis()->SetLabelFont(42);
   Graph_Graph1461->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1461->GetXaxis()->SetTitleFont(42);
   Graph_Graph1461->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1461->GetYaxis()->SetLabelFont(42);
   Graph_Graph1461->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1461->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1461->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1461->GetYaxis()->SetTitleFont(42);
   Graph_Graph1461->GetZaxis()->SetLabelFont(42);
   Graph_Graph1461->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1461->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1461->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1461);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1462[9] = {
   343854,
   343860,
   343862,
   343864,
   343866,
   343932,
   343934,
   343936,
   343937};
   Double_t Graph_fy1462[9] = {
   0.01252103,
   0.04797255,
   0.05260635,
   0.04860875,
   0.01032484,
   0.001418555,
   0.04162787,
   0.05326357,
   0.05320273};
   Double_t Graph_fex1462[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1462[9] = {
   0.007229017,
   0.006589536,
   0.001166728,
   0.003157478,
   0.003902424,
   0.001418555,
   0.00420505,
   0.0024439,
   0.001165427};
   gre = new TGraphErrors(9,Graph_fx1462,Graph_fy1462,Graph_fex1462,Graph_fey1462);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#196f3d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1462 = new TH1F("Graph_Graph1462","",100,343845.7,343945.3);
   Graph_Graph1462->SetMinimum(0);
   Graph_Graph1462->SetMaximum(0.06127822);
   Graph_Graph1462->SetDirectory(0);
   Graph_Graph1462->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1462->SetLineColor(ci);
   Graph_Graph1462->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1462->GetXaxis()->SetNoExponent();
   Graph_Graph1462->GetXaxis()->SetNdivisions(5);
   Graph_Graph1462->GetXaxis()->SetLabelFont(42);
   Graph_Graph1462->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1462->GetXaxis()->SetTitleFont(42);
   Graph_Graph1462->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1462->GetYaxis()->SetLabelFont(42);
   Graph_Graph1462->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1462->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1462->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1462->GetYaxis()->SetTitleFont(42);
   Graph_Graph1462->GetZaxis()->SetLabelFont(42);
   Graph_Graph1462->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1462->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1462->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1462);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1463[5] = {
   343644,
   343648,
   343650,
   343652,
   343663};
   Double_t Graph_fy1463[5] = {
   0.03074862,
   0.02859855,
   0.02790203,
   0.05594575,
   0.02951019};
   Double_t Graph_fex1463[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1463[5] = {
   0.001625115,
   0.00263271,
   0.02790203,
   0.0250197,
   0.006598678};
   gre = new TGraphErrors(5,Graph_fx1463,Graph_fy1463,Graph_fex1463,Graph_fey1463);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e317ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1463 = new TH1F("Graph_Graph1463","",100,343642.1,343664.9);
   Graph_Graph1463->SetMinimum(0);
   Graph_Graph1463->SetMaximum(0.089062);
   Graph_Graph1463->SetDirectory(0);
   Graph_Graph1463->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1463->SetLineColor(ci);
   Graph_Graph1463->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1463->GetXaxis()->SetNoExponent();
   Graph_Graph1463->GetXaxis()->SetNdivisions(5);
   Graph_Graph1463->GetXaxis()->SetLabelFont(42);
   Graph_Graph1463->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1463->GetXaxis()->SetTitleFont(42);
   Graph_Graph1463->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1463->GetYaxis()->SetLabelFont(42);
   Graph_Graph1463->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1463->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1463->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1463->GetYaxis()->SetTitleFont(42);
   Graph_Graph1463->GetZaxis()->SetLabelFont(42);
   Graph_Graph1463->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1463->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1463->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1463);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1464[5] = {
   343638,
   343668,
   343673,
   343677,
   343680};
   Double_t Graph_fy1464[5] = {
   0.03329738,
   0.0269699,
   0.006434326,
   0.03287343,
   0.03068211};
   Double_t Graph_fex1464[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1464[5] = {
   0.002057119,
   0.002138852,
   0.00371486,
   0.001285453,
   0.001044431};
   gre = new TGraphErrors(5,Graph_fx1464,Graph_fy1464,Graph_fex1464,Graph_fey1464);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0bf9f4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1464 = new TH1F("Graph_Graph1464","",100,343633.8,343684.2);
   Graph_Graph1464->SetMinimum(0.00244752);
   Graph_Graph1464->SetMaximum(0.038618);
   Graph_Graph1464->SetDirectory(0);
   Graph_Graph1464->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1464->SetLineColor(ci);
   Graph_Graph1464->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1464->GetXaxis()->SetNoExponent();
   Graph_Graph1464->GetXaxis()->SetNdivisions(5);
   Graph_Graph1464->GetXaxis()->SetLabelFont(42);
   Graph_Graph1464->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1464->GetXaxis()->SetTitleFont(42);
   Graph_Graph1464->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1464->GetYaxis()->SetLabelFont(42);
   Graph_Graph1464->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1464->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1464->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1464->GetYaxis()->SetTitleFont(42);
   Graph_Graph1464->GetZaxis()->SetLabelFont(42);
   Graph_Graph1464->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1464->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1464->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1464);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1465[2] = {
   343640,
   343642};
   Double_t Graph_fy1465[2] = {
   0.02637605,
   0.02962885};
   Double_t Graph_fex1465[2] = {
   0,
   0};
   Double_t Graph_fey1465[2] = {
   0.001735416,
   0.0008294486};
   gre = new TGraphErrors(2,Graph_fx1465,Graph_fy1465,Graph_fex1465,Graph_fey1465);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2cf90b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1465 = new TH1F("Graph_Graph1465","",100,343639.8,343642.2);
   Graph_Graph1465->SetMinimum(0.02405886);
   Graph_Graph1465->SetMaximum(0.03104007);
   Graph_Graph1465->SetDirectory(0);
   Graph_Graph1465->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1465->SetLineColor(ci);
   Graph_Graph1465->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1465->GetXaxis()->SetNoExponent();
   Graph_Graph1465->GetXaxis()->SetNdivisions(5);
   Graph_Graph1465->GetXaxis()->SetLabelFont(42);
   Graph_Graph1465->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1465->GetXaxis()->SetTitleFont(42);
   Graph_Graph1465->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1465->GetYaxis()->SetLabelFont(42);
   Graph_Graph1465->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1465->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1465->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1465->GetYaxis()->SetTitleFont(42);
   Graph_Graph1465->GetZaxis()->SetLabelFont(42);
   Graph_Graph1465->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1465->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1465->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1465);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1466[4] = {
   343623,
   343625,
   343627,
   343629};
   Double_t Graph_fy1466[4] = {
   0.02987019,
   0.03179202,
   0.04797374,
   0.09343717};
   Double_t Graph_fex1466[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1466[4] = {
   0.003496041,
   0.001174265,
   0.01696128,
   0.03814557};
   gre = new TGraphErrors(4,Graph_fx1466,Graph_fy1466,Graph_fex1466,Graph_fey1466);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#f90b28");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1466 = new TH1F("Graph_Graph1466","",100,343622.4,343629.6);
   Graph_Graph1466->SetMinimum(0.01585329);
   Graph_Graph1466->SetMaximum(0.1421036);
   Graph_Graph1466->SetDirectory(0);
   Graph_Graph1466->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1466->SetLineColor(ci);
   Graph_Graph1466->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1466->GetXaxis()->SetNoExponent();
   Graph_Graph1466->GetXaxis()->SetNdivisions(5);
   Graph_Graph1466->GetXaxis()->SetLabelFont(42);
   Graph_Graph1466->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1466->GetXaxis()->SetTitleFont(42);
   Graph_Graph1466->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1466->GetYaxis()->SetLabelFont(42);
   Graph_Graph1466->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1466->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1466->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1466->GetYaxis()->SetTitleFont(42);
   Graph_Graph1466->GetZaxis()->SetLabelFont(42);
   Graph_Graph1466->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1466->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1466->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1466);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1467[2] = {
   343619,
   343621};
   Double_t Graph_fy1467[2] = {
   0.032194,
   0.03194927};
   Double_t Graph_fex1467[2] = {
   0,
   0};
   Double_t Graph_fey1467[2] = {
   0.001163216,
   0.001560824};
   gre = new TGraphErrors(2,Graph_fx1467,Graph_fy1467,Graph_fex1467,Graph_fey1467);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#1b38f5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1467 = new TH1F("Graph_Graph1467","",100,343618.8,343621.2);
   Graph_Graph1467->SetMinimum(0.03007628);
   Graph_Graph1467->SetMaximum(0.03382226);
   Graph_Graph1467->SetDirectory(0);
   Graph_Graph1467->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1467->SetLineColor(ci);
   Graph_Graph1467->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1467->GetXaxis()->SetNoExponent();
   Graph_Graph1467->GetXaxis()->SetNdivisions(5);
   Graph_Graph1467->GetXaxis()->SetLabelFont(42);
   Graph_Graph1467->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1467->GetXaxis()->SetTitleFont(42);
   Graph_Graph1467->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1467->GetYaxis()->SetLabelFont(42);
   Graph_Graph1467->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1467->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1467->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1467->GetYaxis()->SetTitleFont(42);
   Graph_Graph1467->GetZaxis()->SetLabelFont(42);
   Graph_Graph1467->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1467->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1467->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1467);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1468[4] = {
   343494,
   343496,
   343498,
   343501};
   Double_t Graph_fy1468[4] = {
   0.03507652,
   0.04532841,
   0.04591839,
   0.04437771};
   Double_t Graph_fex1468[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1468[4] = {
   0.005010931,
   0.002160947,
   0.001228538,
   0.01281074};
   gre = new TGraphErrors(4,Graph_fx1468,Graph_fy1468,Graph_fex1468,Graph_fey1468);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffc300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1468 = new TH1F("Graph_Graph1468","",100,343493.3,343501.7);
   Graph_Graph1468->SetMinimum(0.0273533);
   Graph_Graph1468->SetMaximum(0.05990074);
   Graph_Graph1468->SetDirectory(0);
   Graph_Graph1468->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1468->SetLineColor(ci);
   Graph_Graph1468->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1468->GetXaxis()->SetNoExponent();
   Graph_Graph1468->GetXaxis()->SetNdivisions(5);
   Graph_Graph1468->GetXaxis()->SetLabelFont(42);
   Graph_Graph1468->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1468->GetXaxis()->SetTitleFont(42);
   Graph_Graph1468->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1468->GetYaxis()->SetLabelFont(42);
   Graph_Graph1468->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1468->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1468->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1468->GetYaxis()->SetTitleFont(42);
   Graph_Graph1468->GetZaxis()->SetLabelFont(42);
   Graph_Graph1468->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1468->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1468->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1468);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1469[1] = {
   344068};
   Double_t Graph_fy1469[1] = {
   0.05262377};
   Double_t Graph_fex1469[1] = {
   0};
   Double_t Graph_fey1469[1] = {
   0.001222487};
   gre = new TGraphErrors(1,Graph_fx1469,Graph_fy1469,Graph_fex1469,Graph_fey1469);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1469 = new TH1F("Graph_Graph1469","",100,344067.9,344069.1);
   Graph_Graph1469->SetMinimum(0.05115678);
   Graph_Graph1469->SetMaximum(0.05409075);
   Graph_Graph1469->SetDirectory(0);
   Graph_Graph1469->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1469->SetLineColor(ci);
   Graph_Graph1469->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1469->GetXaxis()->SetNoExponent();
   Graph_Graph1469->GetXaxis()->SetNdivisions(5);
   Graph_Graph1469->GetXaxis()->SetLabelFont(42);
   Graph_Graph1469->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1469->GetXaxis()->SetTitleFont(42);
   Graph_Graph1469->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1469->GetYaxis()->SetLabelFont(42);
   Graph_Graph1469->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1469->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1469->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1469->GetYaxis()->SetTitleFont(42);
   Graph_Graph1469->GetZaxis()->SetLabelFont(42);
   Graph_Graph1469->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1469->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1469->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1469);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1470[6] = {
   344058,
   344062,
   344063,
   344064,
   344065,
   344067};
   Double_t Graph_fy1470[6] = {
   0.001117608,
   0.03322089,
   0.05300427,
   0.05289385,
   0.05656011,
   0.05612054};
   Double_t Graph_fex1470[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1470[6] = {
   0.000645251,
   0.007621396,
   0.0008405967,
   0.0007854464,
   0.004136085,
   0.001807521};
   gre = new TGraphErrors(6,Graph_fx1470,Graph_fy1470,Graph_fex1470,Graph_fey1470);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2fa4e1");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1470 = new TH1F("Graph_Graph1470","",100,344057.1,344067.9);
   Graph_Graph1470->SetMinimum(0.0004251209);
   Graph_Graph1470->SetMaximum(0.06671858);
   Graph_Graph1470->SetDirectory(0);
   Graph_Graph1470->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1470->SetLineColor(ci);
   Graph_Graph1470->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1470->GetXaxis()->SetNoExponent();
   Graph_Graph1470->GetXaxis()->SetNdivisions(5);
   Graph_Graph1470->GetXaxis()->SetLabelFont(42);
   Graph_Graph1470->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1470->GetXaxis()->SetTitleFont(42);
   Graph_Graph1470->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1470->GetYaxis()->SetLabelFont(42);
   Graph_Graph1470->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1470->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1470->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1470->GetYaxis()->SetTitleFont(42);
   Graph_Graph1470->GetZaxis()->SetLabelFont(42);
   Graph_Graph1470->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1470->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1470->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1470);
   
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
      tex = new TLatex(0.23,0.83," TEC 9");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
