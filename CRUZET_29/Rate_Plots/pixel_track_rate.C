void pixel_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug  3 18:11:26 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(343311.3,-0.06373306,344128.7,0.4287495);
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
   multigraph->SetName("track rate PIX");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1021[2] = {
   343772,
   343774};
   Double_t Graph_fy1021[2] = {
   0.1833432,
   0.2101309};
   Double_t Graph_fex1021[2] = {
   0,
   0};
   Double_t Graph_fey1021[2] = {
   0.01139239,
   0.002303851};
   TGraphErrors *gre = new TGraphErrors(2,Graph_fx1021,Graph_fy1021,Graph_fex1021,Graph_fey1021);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f5601b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1021 = new TH1F("Graph_Graph1021","",100,343771.8,343774.2);
   Graph_Graph1021->SetMinimum(0.1679024);
   Graph_Graph1021->SetMaximum(0.2164832);
   Graph_Graph1021->SetDirectory(0);
   Graph_Graph1021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1021->SetLineColor(ci);
   Graph_Graph1021->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1021->GetXaxis()->SetNoExponent();
   Graph_Graph1021->GetXaxis()->SetNdivisions(5);
   Graph_Graph1021->GetXaxis()->SetLabelFont(42);
   Graph_Graph1021->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1021->GetXaxis()->SetTitleFont(42);
   Graph_Graph1021->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1021->GetYaxis()->SetLabelFont(42);
   Graph_Graph1021->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1021->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1021->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1021->GetYaxis()->SetTitleFont(42);
   Graph_Graph1021->GetZaxis()->SetLabelFont(42);
   Graph_Graph1021->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1021->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1021);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1022[9] = {
   343854,
   343860,
   343862,
   343864,
   343866,
   343932,
   343934,
   343936,
   343937};
   Double_t Graph_fy1022[9] = {
   0.004173675,
   0.2552502,
   0.2253301,
   0.229302,
   0.004424932,
   0,
   0.2187587,
   0.2255011,
   0.2311153};
   Double_t Graph_fex1022[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1022[9] = {
   0.004173675,
   0.01519993,
   0.002414682,
   0.006857835,
   0.002554736,
   0,
   0.009639659,
   0.005028549,
   0.002429028};
   gre = new TGraphErrors(9,Graph_fx1022,Graph_fy1022,Graph_fex1022,Graph_fey1022);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#196f3d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1022 = new TH1F("Graph_Graph1022","",100,343845.7,343945.3);
   Graph_Graph1022->SetMinimum(0);
   Graph_Graph1022->SetMaximum(0.2974951);
   Graph_Graph1022->SetDirectory(0);
   Graph_Graph1022->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1022->SetLineColor(ci);
   Graph_Graph1022->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1022->GetXaxis()->SetNoExponent();
   Graph_Graph1022->GetXaxis()->SetNdivisions(5);
   Graph_Graph1022->GetXaxis()->SetLabelFont(42);
   Graph_Graph1022->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1022->GetXaxis()->SetTitleFont(42);
   Graph_Graph1022->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1022->GetYaxis()->SetLabelFont(42);
   Graph_Graph1022->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1022->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1022->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1022->GetYaxis()->SetTitleFont(42);
   Graph_Graph1022->GetZaxis()->SetLabelFont(42);
   Graph_Graph1022->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1022->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1022);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1023[5] = {
   343644,
   343648,
   343650,
   343652,
   343663};
   Double_t Graph_fy1023[5] = {
   0.1458412,
   0.1442045,
   0.2790203,
   0.1678373,
   0.0162306};
   Double_t Graph_fex1023[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1023[5] = {
   0.003539252,
   0.005911809,
   0.08823398,
   0.0433354,
   0.004893711};
   gre = new TGraphErrors(5,Graph_fx1023,Graph_fy1023,Graph_fex1023,Graph_fey1023);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e317ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1023 = new TH1F("Graph_Graph1023","",100,343642.1,343664.9);
   Graph_Graph1023->SetMinimum(0.0102032);
   Graph_Graph1023->SetMaximum(0.4028461);
   Graph_Graph1023->SetDirectory(0);
   Graph_Graph1023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1023->SetLineColor(ci);
   Graph_Graph1023->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1023->GetXaxis()->SetNoExponent();
   Graph_Graph1023->GetXaxis()->SetNdivisions(5);
   Graph_Graph1023->GetXaxis()->SetLabelFont(42);
   Graph_Graph1023->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1023->GetXaxis()->SetTitleFont(42);
   Graph_Graph1023->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1023->GetYaxis()->SetLabelFont(42);
   Graph_Graph1023->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1023->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1023->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1023->GetYaxis()->SetTitleFont(42);
   Graph_Graph1023->GetZaxis()->SetLabelFont(42);
   Graph_Graph1023->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1023->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1023);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1024[5] = {
   343638,
   343668,
   343673,
   343677,
   343680};
   Double_t Graph_fy1024[5] = {
   0.1727143,
   0.01594447,
   0,
   0.01432558,
   0.01422114};
   Double_t Graph_fex1024[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1024[5] = {
   0.004685096,
   0.001644547,
   0,
   0.0008485741,
   0.0007110571};
   gre = new TGraphErrors(5,Graph_fx1024,Graph_fy1024,Graph_fex1024,Graph_fey1024);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0bf9f4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1024 = new TH1F("Graph_Graph1024","",100,343633.8,343684.2);
   Graph_Graph1024->SetMinimum(0);
   Graph_Graph1024->SetMaximum(0.1951393);
   Graph_Graph1024->SetDirectory(0);
   Graph_Graph1024->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1024->SetLineColor(ci);
   Graph_Graph1024->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1024->GetXaxis()->SetNoExponent();
   Graph_Graph1024->GetXaxis()->SetNdivisions(5);
   Graph_Graph1024->GetXaxis()->SetLabelFont(42);
   Graph_Graph1024->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1024->GetXaxis()->SetTitleFont(42);
   Graph_Graph1024->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1024->GetYaxis()->SetLabelFont(42);
   Graph_Graph1024->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1024->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1024->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1024->GetYaxis()->SetTitleFont(42);
   Graph_Graph1024->GetZaxis()->SetLabelFont(42);
   Graph_Graph1024->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1024->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1024);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1025[2] = {
   343640,
   343642};
   Double_t Graph_fy1025[2] = {
   0.04978336,
   0.05935058};
   Double_t Graph_fex1025[2] = {
   0,
   0};
   Double_t Graph_fey1025[2] = {
   0.002384191,
   0.001173936};
   gre = new TGraphErrors(2,Graph_fx1025,Graph_fy1025,Graph_fex1025,Graph_fey1025);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2cf90b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1025 = new TH1F("Graph_Graph1025","",100,343639.8,343642.2);
   Graph_Graph1025->SetMinimum(0.04608663);
   Graph_Graph1025->SetMaximum(0.06183706);
   Graph_Graph1025->SetDirectory(0);
   Graph_Graph1025->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1025->SetLineColor(ci);
   Graph_Graph1025->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1025->GetXaxis()->SetNoExponent();
   Graph_Graph1025->GetXaxis()->SetNdivisions(5);
   Graph_Graph1025->GetXaxis()->SetLabelFont(42);
   Graph_Graph1025->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1025->GetXaxis()->SetTitleFont(42);
   Graph_Graph1025->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1025->GetYaxis()->SetLabelFont(42);
   Graph_Graph1025->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1025->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1025->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1025->GetYaxis()->SetTitleFont(42);
   Graph_Graph1025->GetZaxis()->SetLabelFont(42);
   Graph_Graph1025->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1025->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1025);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1026[4] = {
   343623,
   343625,
   343627,
   343629};
   Double_t Graph_fy1026[4] = {
   0.09411155,
   0.1742272,
   0.1799015,
   0.2024472};
   Double_t Graph_fex1026[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1026[4] = {
   0.006205532,
   0.002748939,
   0.03284538,
   0.05614875};
   gre = new TGraphErrors(4,Graph_fx1026,Graph_fy1026,Graph_fex1026,Graph_fey1026);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#f90b28");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1026 = new TH1F("Graph_Graph1026","",100,343622.4,343629.6);
   Graph_Graph1026->SetMinimum(0.07083702);
   Graph_Graph1026->SetMaximum(0.275665);
   Graph_Graph1026->SetDirectory(0);
   Graph_Graph1026->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1026->SetLineColor(ci);
   Graph_Graph1026->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1026->GetXaxis()->SetNoExponent();
   Graph_Graph1026->GetXaxis()->SetNdivisions(5);
   Graph_Graph1026->GetXaxis()->SetLabelFont(42);
   Graph_Graph1026->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1026->GetXaxis()->SetTitleFont(42);
   Graph_Graph1026->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1026->GetYaxis()->SetLabelFont(42);
   Graph_Graph1026->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1026->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1026->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1026->GetYaxis()->SetTitleFont(42);
   Graph_Graph1026->GetZaxis()->SetLabelFont(42);
   Graph_Graph1026->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1026->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1026->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1026);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1027[2] = {
   343619,
   343621};
   Double_t Graph_fy1027[2] = {
   0.09111827,
   0.09218776};
   Double_t Graph_fex1027[2] = {
   0,
   0};
   Double_t Graph_fey1027[2] = {
   0.001956932,
   0.002651307};
   gre = new TGraphErrors(2,Graph_fx1027,Graph_fy1027,Graph_fex1027,Graph_fey1027);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#1b38f5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1027 = new TH1F("Graph_Graph1027","",100,343618.8,343621.2);
   Graph_Graph1027->SetMinimum(0.08859356);
   Graph_Graph1027->SetMaximum(0.09540684);
   Graph_Graph1027->SetDirectory(0);
   Graph_Graph1027->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1027->SetLineColor(ci);
   Graph_Graph1027->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1027->GetXaxis()->SetNoExponent();
   Graph_Graph1027->GetXaxis()->SetNdivisions(5);
   Graph_Graph1027->GetXaxis()->SetLabelFont(42);
   Graph_Graph1027->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1027->GetXaxis()->SetTitleFont(42);
   Graph_Graph1027->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1027->GetYaxis()->SetLabelFont(42);
   Graph_Graph1027->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1027->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1027->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1027->GetYaxis()->SetTitleFont(42);
   Graph_Graph1027->GetZaxis()->SetLabelFont(42);
   Graph_Graph1027->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1027->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1027);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1028[4] = {
   343494,
   343496,
   343498,
   343501};
   Double_t Graph_fy1028[4] = {
   0.2133225,
   0.1852284,
   0.1910692,
   0.207096};
   Double_t Graph_fex1028[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1028[4] = {
   0.01235744,
   0.004368302,
   0.002506054,
   0.02767437};
   gre = new TGraphErrors(4,Graph_fx1028,Graph_fy1028,Graph_fex1028,Graph_fey1028);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffc300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1028 = new TH1F("Graph_Graph1028","",100,343493.3,343501.7);
   Graph_Graph1028->SetMinimum(0.1738867);
   Graph_Graph1028->SetMaximum(0.2403052);
   Graph_Graph1028->SetDirectory(0);
   Graph_Graph1028->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1028->SetLineColor(ci);
   Graph_Graph1028->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1028->GetXaxis()->SetNoExponent();
   Graph_Graph1028->GetXaxis()->SetNdivisions(5);
   Graph_Graph1028->GetXaxis()->SetLabelFont(42);
   Graph_Graph1028->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1028->GetXaxis()->SetTitleFont(42);
   Graph_Graph1028->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1028->GetYaxis()->SetLabelFont(42);
   Graph_Graph1028->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1028->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1028->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1028->GetYaxis()->SetTitleFont(42);
   Graph_Graph1028->GetZaxis()->SetLabelFont(42);
   Graph_Graph1028->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1028->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1028->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1028);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1029[1] = {
   344068};
   Double_t Graph_fy1029[1] = {
   0.2290682};
   Double_t Graph_fex1029[1] = {
   0};
   Double_t Graph_fey1029[1] = {
   0.00255056};
   gre = new TGraphErrors(1,Graph_fx1029,Graph_fy1029,Graph_fex1029,Graph_fey1029);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1029 = new TH1F("Graph_Graph1029","",100,344067.9,344069.1);
   Graph_Graph1029->SetMinimum(0.2260075);
   Graph_Graph1029->SetMaximum(0.2321288);
   Graph_Graph1029->SetDirectory(0);
   Graph_Graph1029->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1029->SetLineColor(ci);
   Graph_Graph1029->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1029->GetXaxis()->SetNoExponent();
   Graph_Graph1029->GetXaxis()->SetNdivisions(5);
   Graph_Graph1029->GetXaxis()->SetLabelFont(42);
   Graph_Graph1029->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1029->GetXaxis()->SetTitleFont(42);
   Graph_Graph1029->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1029->GetYaxis()->SetLabelFont(42);
   Graph_Graph1029->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1029->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1029->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1029->GetYaxis()->SetTitleFont(42);
   Graph_Graph1029->GetZaxis()->SetLabelFont(42);
   Graph_Graph1029->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1029->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1029);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1030[6] = {
   344058,
   344062,
   344063,
   344064,
   344065,
   344067};
   Double_t Graph_fy1030[6] = {
   0,
   0.19408,
   0.2288542,
   0.2328846,
   0.2292651,
   0.2276258};
   Double_t Graph_fex1030[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1030[6] = {
   0,
   0.01842125,
   0.001746674,
   0.001648103,
   0.008327282,
   0.003640266};
   gre = new TGraphErrors(6,Graph_fx1030,Graph_fy1030,Graph_fex1030,Graph_fey1030);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2fa4e1");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1030 = new TH1F("Graph_Graph1030","",100,344057.1,344067.9);
   Graph_Graph1030->SetMinimum(0);
   Graph_Graph1030->SetMaximum(0.2613516);
   Graph_Graph1030->SetDirectory(0);
   Graph_Graph1030->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1030->SetLineColor(ci);
   Graph_Graph1030->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1030->GetXaxis()->SetNoExponent();
   Graph_Graph1030->GetXaxis()->SetNdivisions(5);
   Graph_Graph1030->GetXaxis()->SetLabelFont(42);
   Graph_Graph1030->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1030->GetXaxis()->SetTitleFont(42);
   Graph_Graph1030->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1030->GetYaxis()->SetLabelFont(42);
   Graph_Graph1030->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1030->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1030->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1030->GetYaxis()->SetTitleFont(42);
   Graph_Graph1030->GetZaxis()->SetLabelFont(42);
   Graph_Graph1030->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1030->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1030->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1030);
   
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
      tex = new TLatex(0.23,0.83,"PIXEL");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
