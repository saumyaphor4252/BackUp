void TEC7M_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug  3 18:11:37 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(343311.3,-0.02102618,344128.7,0.1414488);
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
   multigraph->SetName("track rate TEC7-");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1421[2] = {
   343772,
   343774};
   Double_t Graph_fy1421[2] = {
   0.03822599,
   0.04624952};
   Double_t Graph_fex1421[2] = {
   0,
   0};
   Double_t Graph_fey1421[2] = {
   0.005201898,
   0.001080844};
   TGraphErrors *gre = new TGraphErrors(2,Graph_fx1421,Graph_fy1421,Graph_fex1421,Graph_fey1421);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f5601b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1421 = new TH1F("Graph_Graph1421","",100,343771.8,343774.2);
   Graph_Graph1421->SetMinimum(0.03159346);
   Graph_Graph1421->SetMaximum(0.04876099);
   Graph_Graph1421->SetDirectory(0);
   Graph_Graph1421->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1421->SetLineColor(ci);
   Graph_Graph1421->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1421->GetXaxis()->SetNoExponent();
   Graph_Graph1421->GetXaxis()->SetNdivisions(5);
   Graph_Graph1421->GetXaxis()->SetLabelFont(42);
   Graph_Graph1421->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1421->GetXaxis()->SetTitleFont(42);
   Graph_Graph1421->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1421->GetYaxis()->SetLabelFont(42);
   Graph_Graph1421->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1421->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1421->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1421->GetYaxis()->SetTitleFont(42);
   Graph_Graph1421->GetZaxis()->SetLabelFont(42);
   Graph_Graph1421->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1421->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1421->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1421);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1422[9] = {
   343854,
   343860,
   343862,
   343864,
   343866,
   343932,
   343934,
   343936,
   343937};
   Double_t Graph_fy1422[9] = {
   0.004173675,
   0.06245483,
   0.0665795,
   0.06522187,
   0.0132748,
   0,
   0.05861883,
   0.06716817,
   0.06913291};
   Double_t Graph_fex1422[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1422[9] = {
   0.004173675,
   0.007518677,
   0.001312564,
   0.003657461,
   0.004424932,
   0,
   0.004989966,
   0.002744417,
   0.001328497};
   gre = new TGraphErrors(9,Graph_fx1422,Graph_fy1422,Graph_fex1422,Graph_fey1422);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#196f3d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1422 = new TH1F("Graph_Graph1422","",100,343845.7,343945.3);
   Graph_Graph1422->SetMinimum(0);
   Graph_Graph1422->SetMaximum(0.07750755);
   Graph_Graph1422->SetDirectory(0);
   Graph_Graph1422->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1422->SetLineColor(ci);
   Graph_Graph1422->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1422->GetXaxis()->SetNoExponent();
   Graph_Graph1422->GetXaxis()->SetNdivisions(5);
   Graph_Graph1422->GetXaxis()->SetLabelFont(42);
   Graph_Graph1422->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1422->GetXaxis()->SetTitleFont(42);
   Graph_Graph1422->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1422->GetYaxis()->SetLabelFont(42);
   Graph_Graph1422->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1422->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1422->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1422->GetYaxis()->SetTitleFont(42);
   Graph_Graph1422->GetZaxis()->SetLabelFont(42);
   Graph_Graph1422->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1422->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1422->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1422);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1423[5] = {
   343644,
   343648,
   343650,
   343652,
   343663};
   Double_t Graph_fy1423[5] = {
   0.04526403,
   0.04338254,
   0.05580407,
   0.08951321,
   0.0309857};
   Double_t Graph_fex1423[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1423[5] = {
   0.001971732,
   0.003242563,
   0.03945944,
   0.0316477,
   0.006761633};
   gre = new TGraphErrors(5,Graph_fx1423,Graph_fy1423,Graph_fex1423,Graph_fey1423);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e317ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1423 = new TH1F("Graph_Graph1423","",100,343642.1,343664.9);
   Graph_Graph1423->SetMinimum(0.005863007);
   Graph_Graph1423->SetMaximum(0.1316425);
   Graph_Graph1423->SetDirectory(0);
   Graph_Graph1423->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1423->SetLineColor(ci);
   Graph_Graph1423->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1423->GetXaxis()->SetNoExponent();
   Graph_Graph1423->GetXaxis()->SetNdivisions(5);
   Graph_Graph1423->GetXaxis()->SetLabelFont(42);
   Graph_Graph1423->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1423->GetXaxis()->SetTitleFont(42);
   Graph_Graph1423->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1423->GetYaxis()->SetLabelFont(42);
   Graph_Graph1423->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1423->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1423->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1423->GetYaxis()->SetTitleFont(42);
   Graph_Graph1423->GetZaxis()->SetLabelFont(42);
   Graph_Graph1423->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1423->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1423->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1423);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1424[5] = {
   343638,
   343668,
   343673,
   343677,
   343680};
   Double_t Graph_fy1424[5] = {
   0.05083569,
   0.04732454,
   0.004289551,
   0.04860644,
   0.04671645};
   Double_t Graph_fex1424[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1424[5] = {
   0.002541785,
   0.002833246,
   0.00303317,
   0.001563078,
   0.00128876};
   gre = new TGraphErrors(5,Graph_fx1424,Graph_fy1424,Graph_fex1424,Graph_fey1424);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0bf9f4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1424 = new TH1F("Graph_Graph1424","",100,343633.8,343684.2);
   Graph_Graph1424->SetMinimum(0.001130742);
   Graph_Graph1424->SetMaximum(0.05858959);
   Graph_Graph1424->SetDirectory(0);
   Graph_Graph1424->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1424->SetLineColor(ci);
   Graph_Graph1424->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1424->GetXaxis()->SetNoExponent();
   Graph_Graph1424->GetXaxis()->SetNdivisions(5);
   Graph_Graph1424->GetXaxis()->SetLabelFont(42);
   Graph_Graph1424->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1424->GetXaxis()->SetTitleFont(42);
   Graph_Graph1424->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1424->GetYaxis()->SetLabelFont(42);
   Graph_Graph1424->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1424->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1424->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1424->GetYaxis()->SetTitleFont(42);
   Graph_Graph1424->GetZaxis()->SetLabelFont(42);
   Graph_Graph1424->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1424->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1424->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1424);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1425[2] = {
   343640,
   343642};
   Double_t Graph_fy1425[2] = {
   0.03847934,
   0.04671885};
   Double_t Graph_fex1425[2] = {
   0,
   0};
   Double_t Graph_fey1425[2] = {
   0.002096103,
   0.001041545};
   gre = new TGraphErrors(2,Graph_fx1425,Graph_fy1425,Graph_fex1425,Graph_fey1425);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2cf90b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1425 = new TH1F("Graph_Graph1425","",100,343639.8,343642.2);
   Graph_Graph1425->SetMinimum(0.03524552);
   Graph_Graph1425->SetMaximum(0.04889811);
   Graph_Graph1425->SetDirectory(0);
   Graph_Graph1425->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1425->SetLineColor(ci);
   Graph_Graph1425->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1425->GetXaxis()->SetNoExponent();
   Graph_Graph1425->GetXaxis()->SetNdivisions(5);
   Graph_Graph1425->GetXaxis()->SetLabelFont(42);
   Graph_Graph1425->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1425->GetXaxis()->SetTitleFont(42);
   Graph_Graph1425->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1425->GetYaxis()->SetLabelFont(42);
   Graph_Graph1425->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1425->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1425->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1425->GetYaxis()->SetTitleFont(42);
   Graph_Graph1425->GetZaxis()->SetLabelFont(42);
   Graph_Graph1425->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1425->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1425->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1425);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1426[4] = {
   343623,
   343625,
   343627,
   343629};
   Double_t Graph_fy1426[4] = {
   0.04460069,
   0.04901089,
   0.05996718,
   0.03114572};
   Double_t Graph_fex1426[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1426[4] = {
   0.004271971,
   0.001457986,
   0.01896329,
   0.02202335};
   gre = new TGraphErrors(4,Graph_fx1426,Graph_fy1426,Graph_fex1426,Graph_fey1426);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#f90b28");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1426 = new TH1F("Graph_Graph1426","",100,343622.4,343629.6);
   Graph_Graph1426->SetMinimum(0.002141562);
   Graph_Graph1426->SetMaximum(0.08591128);
   Graph_Graph1426->SetDirectory(0);
   Graph_Graph1426->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1426->SetLineColor(ci);
   Graph_Graph1426->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1426->GetXaxis()->SetNoExponent();
   Graph_Graph1426->GetXaxis()->SetNdivisions(5);
   Graph_Graph1426->GetXaxis()->SetLabelFont(42);
   Graph_Graph1426->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1426->GetXaxis()->SetTitleFont(42);
   Graph_Graph1426->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1426->GetYaxis()->SetLabelFont(42);
   Graph_Graph1426->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1426->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1426->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1426->GetYaxis()->SetTitleFont(42);
   Graph_Graph1426->GetZaxis()->SetLabelFont(42);
   Graph_Graph1426->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1426->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1426->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1426);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1427[2] = {
   343619,
   343621};
   Double_t Graph_fy1427[2] = {
   0.04791274,
   0.04643701};
   Double_t Graph_fex1427[2] = {
   0,
   0};
   Double_t Graph_fey1427[2] = {
   0.001419053,
   0.001881723};
   gre = new TGraphErrors(2,Graph_fx1427,Graph_fy1427,Graph_fex1427,Graph_fey1427);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#1b38f5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1427 = new TH1F("Graph_Graph1427","",100,343618.8,343621.2);
   Graph_Graph1427->SetMinimum(0.04407764);
   Graph_Graph1427->SetMaximum(0.04980945);
   Graph_Graph1427->SetDirectory(0);
   Graph_Graph1427->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1427->SetLineColor(ci);
   Graph_Graph1427->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1427->GetXaxis()->SetNoExponent();
   Graph_Graph1427->GetXaxis()->SetNdivisions(5);
   Graph_Graph1427->GetXaxis()->SetLabelFont(42);
   Graph_Graph1427->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1427->GetXaxis()->SetTitleFont(42);
   Graph_Graph1427->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1427->GetYaxis()->SetLabelFont(42);
   Graph_Graph1427->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1427->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1427->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1427->GetYaxis()->SetTitleFont(42);
   Graph_Graph1427->GetZaxis()->SetLabelFont(42);
   Graph_Graph1427->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1427->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1427->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1427);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1428[4] = {
   343494,
   343496,
   343498,
   343501};
   Double_t Graph_fy1428[4] = {
   0.05512024,
   0.06170845,
   0.05893463,
   0.051774};
   Double_t Graph_fex1428[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1428[4] = {
   0.006281534,
   0.002521339,
   0.001391812,
   0.01383718};
   gre = new TGraphErrors(4,Graph_fx1428,Graph_fy1428,Graph_fex1428,Graph_fey1428);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffc300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1428 = new TH1F("Graph_Graph1428","",100,343493.3,343501.7);
   Graph_Graph1428->SetMinimum(0.03516938);
   Graph_Graph1428->SetMaximum(0.06837862);
   Graph_Graph1428->SetDirectory(0);
   Graph_Graph1428->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1428->SetLineColor(ci);
   Graph_Graph1428->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1428->GetXaxis()->SetNoExponent();
   Graph_Graph1428->GetXaxis()->SetNdivisions(5);
   Graph_Graph1428->GetXaxis()->SetLabelFont(42);
   Graph_Graph1428->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1428->GetXaxis()->SetTitleFont(42);
   Graph_Graph1428->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1428->GetYaxis()->SetLabelFont(42);
   Graph_Graph1428->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1428->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1428->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1428->GetYaxis()->SetTitleFont(42);
   Graph_Graph1428->GetZaxis()->SetLabelFont(42);
   Graph_Graph1428->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1428->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1428->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1428);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1429[1] = {
   344068};
   Double_t Graph_fy1429[1] = {
   0.06821494};
   Double_t Graph_fex1429[1] = {
   0};
   Double_t Graph_fey1429[1] = {
   0.001391852};
   gre = new TGraphErrors(1,Graph_fx1429,Graph_fy1429,Graph_fex1429,Graph_fey1429);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1429 = new TH1F("Graph_Graph1429","",100,344067.9,344069.1);
   Graph_Graph1429->SetMinimum(0.06654472);
   Graph_Graph1429->SetMaximum(0.06988516);
   Graph_Graph1429->SetDirectory(0);
   Graph_Graph1429->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1429->SetLineColor(ci);
   Graph_Graph1429->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1429->GetXaxis()->SetNoExponent();
   Graph_Graph1429->GetXaxis()->SetNdivisions(5);
   Graph_Graph1429->GetXaxis()->SetLabelFont(42);
   Graph_Graph1429->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1429->GetXaxis()->SetTitleFont(42);
   Graph_Graph1429->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1429->GetYaxis()->SetLabelFont(42);
   Graph_Graph1429->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1429->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1429->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1429->GetYaxis()->SetTitleFont(42);
   Graph_Graph1429->GetZaxis()->SetLabelFont(42);
   Graph_Graph1429->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1429->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1429->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1429);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1430[6] = {
   344058,
   344062,
   344063,
   344064,
   344065,
   344067};
   Double_t Graph_fy1430[6] = {
   0.0003725359,
   0.06469332,
   0.06754845,
   0.06918773,
   0.06533147,
   0.0649112};
   Double_t Graph_fex1430[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1430[6] = {
   0.0003725359,
   0.01063552,
   0.0009489426,
   0.0008983147,
   0.004445243,
   0.001943937};
   gre = new TGraphErrors(6,Graph_fx1430,Graph_fy1430,Graph_fex1430,Graph_fey1430);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2fa4e1");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1430 = new TH1F("Graph_Graph1430","",100,344057.1,344067.9);
   Graph_Graph1430->SetMinimum(0);
   Graph_Graph1430->SetMaximum(0.08286172);
   Graph_Graph1430->SetDirectory(0);
   Graph_Graph1430->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1430->SetLineColor(ci);
   Graph_Graph1430->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1430->GetXaxis()->SetNoExponent();
   Graph_Graph1430->GetXaxis()->SetNdivisions(5);
   Graph_Graph1430->GetXaxis()->SetLabelFont(42);
   Graph_Graph1430->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1430->GetXaxis()->SetTitleFont(42);
   Graph_Graph1430->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1430->GetYaxis()->SetLabelFont(42);
   Graph_Graph1430->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1430->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1430->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1430->GetYaxis()->SetTitleFont(42);
   Graph_Graph1430->GetZaxis()->SetLabelFont(42);
   Graph_Graph1430->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1430->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1430->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1430);
   
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
      tex = new TLatex(0.23,0.83,"TEC 7-");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
