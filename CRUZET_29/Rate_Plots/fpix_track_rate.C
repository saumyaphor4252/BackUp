void fpix_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug  3 18:11:26 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(343311.3,-0.01363934,344128.7,0.09175553);
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
   multigraph->SetName("track rate FPIX");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1031[2] = {
   343772,
   343774};
   Double_t Graph_fy1031[2] = {
   0.04459699,
   0.05450926};
   Double_t Graph_fex1031[2] = {
   0,
   0};
   Double_t Graph_fey1031[2] = {
   0.005618692,
   0.001173396};
   TGraphErrors *gre = new TGraphErrors(2,Graph_fx1031,Graph_fy1031,Graph_fex1031,Graph_fey1031);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f5601b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1031 = new TH1F("Graph_Graph1031","",100,343771.8,343774.2);
   Graph_Graph1031->SetMinimum(0.03730786);
   Graph_Graph1031->SetMaximum(0.05735309);
   Graph_Graph1031->SetDirectory(0);
   Graph_Graph1031->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1031->SetLineColor(ci);
   Graph_Graph1031->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1031->GetXaxis()->SetNoExponent();
   Graph_Graph1031->GetXaxis()->SetNdivisions(5);
   Graph_Graph1031->GetXaxis()->SetLabelFont(42);
   Graph_Graph1031->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1031->GetXaxis()->SetTitleFont(42);
   Graph_Graph1031->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1031->GetYaxis()->SetLabelFont(42);
   Graph_Graph1031->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1031->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1031->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1031->GetYaxis()->SetTitleFont(42);
   Graph_Graph1031->GetZaxis()->SetLabelFont(42);
   Graph_Graph1031->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1031->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1031);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1032[9] = {
   343854,
   343860,
   343862,
   343864,
   343866,
   343932,
   343934,
   343936,
   343937};
   Double_t Graph_fy1032[9] = {
   0.004173675,
   0.07060111,
   0.05845437,
   0.06399127,
   0.002949955,
   0,
   0.0641409,
   0.05774893,
   0.06104017};
   Double_t Graph_fex1032[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1032[9] = {
   0.004173675,
   0.007994001,
   0.001229869,
   0.003622792,
   0.002085933,
   0,
   0.005219712,
   0.002544722,
   0.00124832};
   gre = new TGraphErrors(9,Graph_fx1032,Graph_fy1032,Graph_fex1032,Graph_fey1032);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#196f3d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1032 = new TH1F("Graph_Graph1032","",100,343845.7,343945.3);
   Graph_Graph1032->SetMinimum(0);
   Graph_Graph1032->SetMaximum(0.08645462);
   Graph_Graph1032->SetDirectory(0);
   Graph_Graph1032->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1032->SetLineColor(ci);
   Graph_Graph1032->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1032->GetXaxis()->SetNoExponent();
   Graph_Graph1032->GetXaxis()->SetNdivisions(5);
   Graph_Graph1032->GetXaxis()->SetLabelFont(42);
   Graph_Graph1032->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1032->GetXaxis()->SetTitleFont(42);
   Graph_Graph1032->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1032->GetYaxis()->SetLabelFont(42);
   Graph_Graph1032->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1032->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1032->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1032->GetYaxis()->SetTitleFont(42);
   Graph_Graph1032->GetZaxis()->SetLabelFont(42);
   Graph_Graph1032->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1032->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1032->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1032);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1033[5] = {
   343644,
   343648,
   343650,
   343652,
   343663};
   Double_t Graph_fy1033[5] = {
   0.00377916,
   0.004120129,
   0,
   0,
   0.0162306};
   Double_t Graph_fex1033[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1033[5] = {
   0.0005697298,
   0.0009992781,
   0,
   0,
   0.004893711};
   gre = new TGraphErrors(5,Graph_fx1033,Graph_fy1033,Graph_fex1033,Graph_fey1033);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e317ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1033 = new TH1F("Graph_Graph1033","",100,343642.1,343664.9);
   Graph_Graph1033->SetMinimum(0);
   Graph_Graph1033->SetMaximum(0.02323674);
   Graph_Graph1033->SetDirectory(0);
   Graph_Graph1033->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1033->SetLineColor(ci);
   Graph_Graph1033->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1033->GetXaxis()->SetNoExponent();
   Graph_Graph1033->GetXaxis()->SetNdivisions(5);
   Graph_Graph1033->GetXaxis()->SetLabelFont(42);
   Graph_Graph1033->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1033->GetXaxis()->SetTitleFont(42);
   Graph_Graph1033->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1033->GetYaxis()->SetLabelFont(42);
   Graph_Graph1033->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1033->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1033->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1033->GetYaxis()->SetTitleFont(42);
   Graph_Graph1033->GetZaxis()->SetLabelFont(42);
   Graph_Graph1033->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1033->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1033);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1034[5] = {
   343638,
   343668,
   343673,
   343677,
   343680};
   Double_t Graph_fy1034[5] = {
   0.01092967,
   0.01594447,
   0,
   0.01427531,
   0.01418559};
   Double_t Graph_fex1034[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1034[5] = {
   0.001178577,
   0.001644547,
   0,
   0.000847084,
   0.0007101678};
   gre = new TGraphErrors(5,Graph_fx1034,Graph_fy1034,Graph_fex1034,Graph_fey1034);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0bf9f4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1034 = new TH1F("Graph_Graph1034","",100,343633.8,343684.2);
   Graph_Graph1034->SetMinimum(0);
   Graph_Graph1034->SetMaximum(0.01934792);
   Graph_Graph1034->SetDirectory(0);
   Graph_Graph1034->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1034->SetLineColor(ci);
   Graph_Graph1034->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1034->GetXaxis()->SetNoExponent();
   Graph_Graph1034->GetXaxis()->SetNdivisions(5);
   Graph_Graph1034->GetXaxis()->SetLabelFont(42);
   Graph_Graph1034->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1034->GetXaxis()->SetTitleFont(42);
   Graph_Graph1034->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1034->GetYaxis()->SetLabelFont(42);
   Graph_Graph1034->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1034->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1034->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1034->GetYaxis()->SetTitleFont(42);
   Graph_Graph1034->GetZaxis()->SetLabelFont(42);
   Graph_Graph1034->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1034->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1034->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1034);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1035[2] = {
   343640,
   343642};
   Double_t Graph_fy1035[2] = {
   0.03882189,
   0.04583648};
   Double_t Graph_fex1035[2] = {
   0,
   0};
   Double_t Graph_fey1035[2] = {
   0.002105412,
   0.001031663};
   gre = new TGraphErrors(2,Graph_fx1035,Graph_fy1035,Graph_fex1035,Graph_fey1035);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2cf90b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1035 = new TH1F("Graph_Graph1035","",100,343639.8,343642.2);
   Graph_Graph1035->SetMinimum(0.03570131);
   Graph_Graph1035->SetMaximum(0.04788331);
   Graph_Graph1035->SetDirectory(0);
   Graph_Graph1035->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1035->SetLineColor(ci);
   Graph_Graph1035->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1035->GetXaxis()->SetNoExponent();
   Graph_Graph1035->GetXaxis()->SetNdivisions(5);
   Graph_Graph1035->GetXaxis()->SetLabelFont(42);
   Graph_Graph1035->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1035->GetXaxis()->SetTitleFont(42);
   Graph_Graph1035->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1035->GetYaxis()->SetLabelFont(42);
   Graph_Graph1035->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1035->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1035->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1035->GetYaxis()->SetTitleFont(42);
   Graph_Graph1035->GetZaxis()->SetLabelFont(42);
   Graph_Graph1035->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1035->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1035);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1036[4] = {
   343623,
   343625,
   343627,
   343629};
   Double_t Graph_fy1036[4] = {
   0.05728529,
   0.01032265,
   0.01199344,
   0.01557286};
   Double_t Graph_fex1036[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1036[4] = {
   0.004841491,
   0.0006691179,
   0.00848064,
   0.01557286};
   gre = new TGraphErrors(4,Graph_fx1036,Graph_fy1036,Graph_fex1036,Graph_fey1036);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#f90b28");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1036 = new TH1F("Graph_Graph1036","",100,343622.4,343629.6);
   Graph_Graph1036->SetMinimum(0);
   Graph_Graph1036->SetMaximum(0.06833946);
   Graph_Graph1036->SetDirectory(0);
   Graph_Graph1036->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1036->SetLineColor(ci);
   Graph_Graph1036->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1036->GetXaxis()->SetNoExponent();
   Graph_Graph1036->GetXaxis()->SetNdivisions(5);
   Graph_Graph1036->GetXaxis()->SetLabelFont(42);
   Graph_Graph1036->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1036->GetXaxis()->SetTitleFont(42);
   Graph_Graph1036->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1036->GetYaxis()->SetLabelFont(42);
   Graph_Graph1036->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1036->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1036->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1036->GetYaxis()->SetTitleFont(42);
   Graph_Graph1036->GetZaxis()->SetLabelFont(42);
   Graph_Graph1036->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1036->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1036->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1036);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1037[2] = {
   343619,
   343621};
   Double_t Graph_fy1037[2] = {
   0.0564866,
   0.05703593};
   Double_t Graph_fex1037[2] = {
   0,
   0};
   Double_t Graph_fey1037[2] = {
   0.001540798,
   0.00208544};
   gre = new TGraphErrors(2,Graph_fx1037,Graph_fy1037,Graph_fex1037,Graph_fey1037);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#1b38f5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1037 = new TH1F("Graph_Graph1037","",100,343618.8,343621.2);
   Graph_Graph1037->SetMinimum(0.05452825);
   Graph_Graph1037->SetMaximum(0.05953893);
   Graph_Graph1037->SetDirectory(0);
   Graph_Graph1037->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1037->SetLineColor(ci);
   Graph_Graph1037->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1037->GetXaxis()->SetNoExponent();
   Graph_Graph1037->GetXaxis()->SetNdivisions(5);
   Graph_Graph1037->GetXaxis()->SetLabelFont(42);
   Graph_Graph1037->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1037->GetXaxis()->SetTitleFont(42);
   Graph_Graph1037->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1037->GetYaxis()->SetLabelFont(42);
   Graph_Graph1037->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1037->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1037->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1037->GetYaxis()->SetTitleFont(42);
   Graph_Graph1037->GetZaxis()->SetLabelFont(42);
   Graph_Graph1037->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1037->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1037);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1038[4] = {
   343494,
   343496,
   343498,
   343501};
   Double_t Graph_fy1038[4] = {
   0.02863389,
   0.02606384,
   0.025901,
   0.02218886};
   Double_t Graph_fex1038[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1038[4] = {
   0.004527416,
   0.001638619,
   0.0009226848,
   0.009058563};
   gre = new TGraphErrors(4,Graph_fx1038,Graph_fy1038,Graph_fex1038,Graph_fey1038);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffc300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1038 = new TH1F("Graph_Graph1038","",100,343493.3,343501.7);
   Graph_Graph1038->SetMinimum(0.01112719);
   Graph_Graph1038->SetMaximum(0.03516441);
   Graph_Graph1038->SetDirectory(0);
   Graph_Graph1038->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1038->SetLineColor(ci);
   Graph_Graph1038->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1038->GetXaxis()->SetNoExponent();
   Graph_Graph1038->GetXaxis()->SetNdivisions(5);
   Graph_Graph1038->GetXaxis()->SetLabelFont(42);
   Graph_Graph1038->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1038->GetXaxis()->SetTitleFont(42);
   Graph_Graph1038->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1038->GetYaxis()->SetLabelFont(42);
   Graph_Graph1038->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1038->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1038->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1038->GetYaxis()->SetTitleFont(42);
   Graph_Graph1038->GetZaxis()->SetLabelFont(42);
   Graph_Graph1038->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1038->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1038->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1038);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1039[1] = {
   344068};
   Double_t Graph_fy1039[1] = {
   0.06159792};
   Double_t Graph_fex1039[1] = {
   0};
   Double_t Graph_fey1039[1] = {
   0.001322624};
   gre = new TGraphErrors(1,Graph_fx1039,Graph_fy1039,Graph_fex1039,Graph_fey1039);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1039 = new TH1F("Graph_Graph1039","",100,344067.9,344069.1);
   Graph_Graph1039->SetMinimum(0.06001077);
   Graph_Graph1039->SetMaximum(0.06318507);
   Graph_Graph1039->SetDirectory(0);
   Graph_Graph1039->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1039->SetLineColor(ci);
   Graph_Graph1039->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1039->GetXaxis()->SetNoExponent();
   Graph_Graph1039->GetXaxis()->SetNdivisions(5);
   Graph_Graph1039->GetXaxis()->SetLabelFont(42);
   Graph_Graph1039->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1039->GetXaxis()->SetTitleFont(42);
   Graph_Graph1039->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1039->GetYaxis()->SetLabelFont(42);
   Graph_Graph1039->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1039->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1039->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1039->GetYaxis()->SetTitleFont(42);
   Graph_Graph1039->GetZaxis()->SetLabelFont(42);
   Graph_Graph1039->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1039->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1039);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1040[6] = {
   344058,
   344062,
   344063,
   344064,
   344065,
   344067};
   Double_t Graph_fy1040[6] = {
   0,
   0.0437117,
   0.05997642,
   0.05996192,
   0.05958472,
   0.05932243};
   Double_t Graph_fex1040[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1040[6] = {
   0,
   0.00874234,
   0.000894175,
   0.00083628,
   0.004245235,
   0.001858369};
   gre = new TGraphErrors(6,Graph_fx1040,Graph_fy1040,Graph_fex1040,Graph_fey1040);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2fa4e1");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1040 = new TH1F("Graph_Graph1040","",100,344057.1,344067.9);
   Graph_Graph1040->SetMinimum(0);
   Graph_Graph1040->SetMaximum(0.07021295);
   Graph_Graph1040->SetDirectory(0);
   Graph_Graph1040->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1040->SetLineColor(ci);
   Graph_Graph1040->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1040->GetXaxis()->SetNoExponent();
   Graph_Graph1040->GetXaxis()->SetNdivisions(5);
   Graph_Graph1040->GetXaxis()->SetLabelFont(42);
   Graph_Graph1040->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1040->GetXaxis()->SetTitleFont(42);
   Graph_Graph1040->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1040->GetYaxis()->SetLabelFont(42);
   Graph_Graph1040->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1040->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1040->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1040->GetYaxis()->SetTitleFont(42);
   Graph_Graph1040->GetZaxis()->SetLabelFont(42);
   Graph_Graph1040->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1040->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1040);
   
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
      tex = new TLatex(0.23,0.83,"FPIX");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
