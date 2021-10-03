void TEC8M_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug  3 18:11:38 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(343311.3,-0.01653196,344128.7,0.111215);
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
   multigraph->SetName("track rate TEC8-");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1451[2] = {
   343772,
   343774};
   Double_t Graph_fy1451[2] = {
   0.02336033,
   0.03094247};
   Double_t Graph_fex1451[2] = {
   0,
   0};
   Double_t Graph_fey1451[2] = {
   0.004066511,
   0.0008840705};
   TGraphErrors *gre = new TGraphErrors(2,Graph_fx1451,Graph_fy1451,Graph_fex1451,Graph_fey1451);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f5601b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1451 = new TH1F("Graph_Graph1451","",100,343771.8,343774.2);
   Graph_Graph1451->SetMinimum(0.01804054);
   Graph_Graph1451->SetMaximum(0.03307981);
   Graph_Graph1451->SetDirectory(0);
   Graph_Graph1451->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1451->SetLineColor(ci);
   Graph_Graph1451->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1451->GetXaxis()->SetNoExponent();
   Graph_Graph1451->GetXaxis()->SetNdivisions(5);
   Graph_Graph1451->GetXaxis()->SetLabelFont(42);
   Graph_Graph1451->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1451->GetXaxis()->SetTitleFont(42);
   Graph_Graph1451->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1451->GetYaxis()->SetLabelFont(42);
   Graph_Graph1451->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1451->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1451->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1451->GetYaxis()->SetTitleFont(42);
   Graph_Graph1451->GetZaxis()->SetLabelFont(42);
   Graph_Graph1451->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1451->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1451->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1451);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1452[9] = {
   343854,
   343860,
   343862,
   343864,
   343866,
   343932,
   343934,
   343936,
   343937};
   Double_t Graph_fy1452[9] = {
   0.004173675,
   0.04706741,
   0.04696533,
   0.04553225,
   0.01032484,
   0,
   0.03907922,
   0.04832968,
   0.04901595};
   Double_t Graph_fex1452[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1452[9] = {
   0.004173675,
   0.006527075,
   0.0011024,
   0.003055924,
   0.003902424,
   0,
   0.004074291,
   0.002327959,
   0.001118631};
   gre = new TGraphErrors(9,Graph_fx1452,Graph_fy1452,Graph_fex1452,Graph_fey1452);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#196f3d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1452 = new TH1F("Graph_Graph1452","",100,343845.7,343945.3);
   Graph_Graph1452->SetMinimum(0);
   Graph_Graph1452->SetMaximum(0.05895393);
   Graph_Graph1452->SetDirectory(0);
   Graph_Graph1452->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1452->SetLineColor(ci);
   Graph_Graph1452->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1452->GetXaxis()->SetNoExponent();
   Graph_Graph1452->GetXaxis()->SetNdivisions(5);
   Graph_Graph1452->GetXaxis()->SetLabelFont(42);
   Graph_Graph1452->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1452->GetXaxis()->SetTitleFont(42);
   Graph_Graph1452->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1452->GetYaxis()->SetLabelFont(42);
   Graph_Graph1452->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1452->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1452->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1452->GetYaxis()->SetTitleFont(42);
   Graph_Graph1452->GetZaxis()->SetLabelFont(42);
   Graph_Graph1452->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1452->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1452->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1452);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1453[5] = {
   343644,
   343648,
   343650,
   343652,
   343663};
   Double_t Graph_fy1453[5] = {
   0.02980383,
   0.03029507,
   0.05580407,
   0.05594575,
   0.01475509};
   Double_t Graph_fex1453[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1453[5] = {
   0.001599953,
   0.002709673,
   0.03945944,
   0.0250197,
   0.00466597};
   gre = new TGraphErrors(5,Graph_fx1453,Graph_fy1453,Graph_fex1453,Graph_fey1453);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e317ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1453 = new TH1F("Graph_Graph1453","",100,343642.1,343664.9);
   Graph_Graph1453->SetMinimum(0.001571685);
   Graph_Graph1453->SetMaximum(0.1037809);
   Graph_Graph1453->SetDirectory(0);
   Graph_Graph1453->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1453->SetLineColor(ci);
   Graph_Graph1453->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1453->GetXaxis()->SetNoExponent();
   Graph_Graph1453->GetXaxis()->SetNdivisions(5);
   Graph_Graph1453->GetXaxis()->SetLabelFont(42);
   Graph_Graph1453->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1453->GetXaxis()->SetTitleFont(42);
   Graph_Graph1453->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1453->GetYaxis()->SetLabelFont(42);
   Graph_Graph1453->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1453->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1453->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1453->GetYaxis()->SetTitleFont(42);
   Graph_Graph1453->GetZaxis()->SetLabelFont(42);
   Graph_Graph1453->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1453->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1453->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1453);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1454[5] = {
   343638,
   343668,
   343673,
   343677,
   343680};
   Double_t Graph_fy1454[5] = {
   0.03024724,
   0.03205856,
   0.004289551,
   0.03166707,
   0.03000661};
   Double_t Graph_fex1454[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1454[5] = {
   0.001960637,
   0.002331917,
   0.00303317,
   0.001261646,
   0.00103287};
   gre = new TGraphErrors(5,Graph_fx1454,Graph_fy1454,Graph_fex1454,Graph_fey1454);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0bf9f4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1454 = new TH1F("Graph_Graph1454","",100,343633.8,343684.2);
   Graph_Graph1454->SetMinimum(0.001130742);
   Graph_Graph1454->SetMaximum(0.03770389);
   Graph_Graph1454->SetDirectory(0);
   Graph_Graph1454->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1454->SetLineColor(ci);
   Graph_Graph1454->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1454->GetXaxis()->SetNoExponent();
   Graph_Graph1454->GetXaxis()->SetNdivisions(5);
   Graph_Graph1454->GetXaxis()->SetLabelFont(42);
   Graph_Graph1454->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1454->GetXaxis()->SetTitleFont(42);
   Graph_Graph1454->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1454->GetYaxis()->SetLabelFont(42);
   Graph_Graph1454->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1454->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1454->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1454->GetYaxis()->SetTitleFont(42);
   Graph_Graph1454->GetZaxis()->SetLabelFont(42);
   Graph_Graph1454->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1454->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1454->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1454);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1455[2] = {
   343640,
   343642};
   Double_t Graph_fy1455[2] = {
   0.02591932,
   0.03009325};
   Double_t Graph_fex1455[2] = {
   0,
   0};
   Double_t Graph_fey1455[2] = {
   0.001720326,
   0.0008359237};
   gre = new TGraphErrors(2,Graph_fx1455,Graph_fy1455,Graph_fex1455,Graph_fey1455);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2cf90b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1455 = new TH1F("Graph_Graph1455","",100,343639.8,343642.2);
   Graph_Graph1455->SetMinimum(0.02352597);
   Graph_Graph1455->SetMaximum(0.0316022);
   Graph_Graph1455->SetDirectory(0);
   Graph_Graph1455->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1455->SetLineColor(ci);
   Graph_Graph1455->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1455->GetXaxis()->SetNoExponent();
   Graph_Graph1455->GetXaxis()->SetNdivisions(5);
   Graph_Graph1455->GetXaxis()->SetLabelFont(42);
   Graph_Graph1455->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1455->GetXaxis()->SetTitleFont(42);
   Graph_Graph1455->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1455->GetYaxis()->SetLabelFont(42);
   Graph_Graph1455->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1455->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1455->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1455->GetYaxis()->SetTitleFont(42);
   Graph_Graph1455->GetZaxis()->SetLabelFont(42);
   Graph_Graph1455->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1455->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1455->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1455);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1456[4] = {
   343623,
   343625,
   343627,
   343629};
   Double_t Graph_fy1456[4] = {
   0.02864265,
   0.03196551,
   0.04197703,
   0.01557286};
   Double_t Graph_fex1456[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1456[4] = {
   0.003423451,
   0.001177465,
   0.01586582,
   0.01557286};
   gre = new TGraphErrors(4,Graph_fx1456,Graph_fy1456,Graph_fex1456,Graph_fey1456);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#f90b28");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1456 = new TH1F("Graph_Graph1456","",100,343622.4,343629.6);
   Graph_Graph1456->SetMinimum(0);
   Graph_Graph1456->SetMaximum(0.06362714);
   Graph_Graph1456->SetDirectory(0);
   Graph_Graph1456->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1456->SetLineColor(ci);
   Graph_Graph1456->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1456->GetXaxis()->SetNoExponent();
   Graph_Graph1456->GetXaxis()->SetNdivisions(5);
   Graph_Graph1456->GetXaxis()->SetLabelFont(42);
   Graph_Graph1456->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1456->GetXaxis()->SetTitleFont(42);
   Graph_Graph1456->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1456->GetYaxis()->SetLabelFont(42);
   Graph_Graph1456->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1456->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1456->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1456->GetYaxis()->SetTitleFont(42);
   Graph_Graph1456->GetZaxis()->SetLabelFont(42);
   Graph_Graph1456->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1456->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1456->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1456);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1457[2] = {
   343619,
   343621};
   Double_t Graph_fy1457[2] = {
   0.03194183,
   0.03194927};
   Double_t Graph_fex1457[2] = {
   0,
   0};
   Double_t Graph_fey1457[2] = {
   0.001158652,
   0.001560824};
   gre = new TGraphErrors(2,Graph_fx1457,Graph_fy1457,Graph_fex1457,Graph_fey1457);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#1b38f5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1457 = new TH1F("Graph_Graph1457","",100,343618.8,343621.2);
   Graph_Graph1457->SetMinimum(0.03007628);
   Graph_Graph1457->SetMaximum(0.03382226);
   Graph_Graph1457->SetDirectory(0);
   Graph_Graph1457->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1457->SetLineColor(ci);
   Graph_Graph1457->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1457->GetXaxis()->SetNoExponent();
   Graph_Graph1457->GetXaxis()->SetNdivisions(5);
   Graph_Graph1457->GetXaxis()->SetLabelFont(42);
   Graph_Graph1457->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1457->GetXaxis()->SetTitleFont(42);
   Graph_Graph1457->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1457->GetYaxis()->SetLabelFont(42);
   Graph_Graph1457->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1457->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1457->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1457->GetYaxis()->SetTitleFont(42);
   Graph_Graph1457->GetZaxis()->SetLabelFont(42);
   Graph_Graph1457->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1457->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1457->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1457);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1458[4] = {
   343494,
   343496,
   343498,
   343501};
   Double_t Graph_fy1458[4] = {
   0.03793991,
   0.04316501,
   0.04115235,
   0.051774};
   Double_t Graph_fex1458[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1458[4] = {
   0.005211447,
   0.002108749,
   0.001163034,
   0.01383718};
   gre = new TGraphErrors(4,Graph_fx1458,Graph_fy1458,Graph_fex1458,Graph_fey1458);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffc300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1458 = new TH1F("Graph_Graph1458","",100,343493.3,343501.7);
   Graph_Graph1458->SetMinimum(0.02944019);
   Graph_Graph1458->SetMaximum(0.06889945);
   Graph_Graph1458->SetDirectory(0);
   Graph_Graph1458->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1458->SetLineColor(ci);
   Graph_Graph1458->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1458->GetXaxis()->SetNoExponent();
   Graph_Graph1458->GetXaxis()->SetNdivisions(5);
   Graph_Graph1458->GetXaxis()->SetLabelFont(42);
   Graph_Graph1458->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1458->GetXaxis()->SetTitleFont(42);
   Graph_Graph1458->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1458->GetYaxis()->SetLabelFont(42);
   Graph_Graph1458->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1458->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1458->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1458->GetYaxis()->SetTitleFont(42);
   Graph_Graph1458->GetZaxis()->SetLabelFont(42);
   Graph_Graph1458->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1458->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1458->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1458);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1459[1] = {
   344068};
   Double_t Graph_fy1459[1] = {
   0.04751191};
   Double_t Graph_fex1459[1] = {
   0};
   Double_t Graph_fey1459[1] = {
   0.001161594};
   gre = new TGraphErrors(1,Graph_fx1459,Graph_fy1459,Graph_fex1459,Graph_fey1459);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1459 = new TH1F("Graph_Graph1459","",100,344067.9,344069.1);
   Graph_Graph1459->SetMinimum(0.04611799);
   Graph_Graph1459->SetMaximum(0.04890582);
   Graph_Graph1459->SetDirectory(0);
   Graph_Graph1459->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1459->SetLineColor(ci);
   Graph_Graph1459->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1459->GetXaxis()->SetNoExponent();
   Graph_Graph1459->GetXaxis()->SetNdivisions(5);
   Graph_Graph1459->GetXaxis()->SetLabelFont(42);
   Graph_Graph1459->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1459->GetXaxis()->SetTitleFont(42);
   Graph_Graph1459->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1459->GetYaxis()->SetLabelFont(42);
   Graph_Graph1459->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1459->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1459->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1459->GetYaxis()->SetTitleFont(42);
   Graph_Graph1459->GetZaxis()->SetLabelFont(42);
   Graph_Graph1459->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1459->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1459->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1459);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1460[6] = {
   344058,
   344062,
   344063,
   344064,
   344065,
   344067};
   Double_t Graph_fy1460[6] = {
   0.0003725359,
   0.03322089,
   0.04685866,
   0.04931317,
   0.045974,
   0.04686414};
   Double_t Graph_fex1460[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1460[6] = {
   0.0003725359,
   0.007621396,
   0.000790364,
   0.0007583949,
   0.003728983,
   0.001651744};
   gre = new TGraphErrors(6,Graph_fx1460,Graph_fy1460,Graph_fex1460,Graph_fey1460);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2fa4e1");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1460 = new TH1F("Graph_Graph1460","",100,344057.1,344067.9);
   Graph_Graph1460->SetMinimum(0);
   Graph_Graph1460->SetMaximum(0.05507872);
   Graph_Graph1460->SetDirectory(0);
   Graph_Graph1460->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1460->SetLineColor(ci);
   Graph_Graph1460->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1460->GetXaxis()->SetNoExponent();
   Graph_Graph1460->GetXaxis()->SetNdivisions(5);
   Graph_Graph1460->GetXaxis()->SetLabelFont(42);
   Graph_Graph1460->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1460->GetXaxis()->SetTitleFont(42);
   Graph_Graph1460->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1460->GetYaxis()->SetLabelFont(42);
   Graph_Graph1460->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1460->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1460->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1460->GetYaxis()->SetTitleFont(42);
   Graph_Graph1460->GetZaxis()->SetLabelFont(42);
   Graph_Graph1460->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1460->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1460->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1460);
   
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
      tex = new TLatex(0.23,0.83,"TEC 8-");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
