void tob_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug  3 18:11:28 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(343311.3,-0.5833942,344128.7,3.924651);
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
   multigraph->SetName("track rate TOB");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1091[2] = {
   343772,
   343774};
   Double_t Graph_fy1091[2] = {
   1.849713,
   2.158976};
   Double_t Graph_fex1091[2] = {
   0,
   0};
   Double_t Graph_fey1091[2] = {
   0.03618551,
   0.007384708};
   TGraphErrors *gre = new TGraphErrors(2,Graph_fx1091,Graph_fy1091,Graph_fex1091,Graph_fey1091);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f5601b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1091 = new TH1F("Graph_Graph1091","",100,343771.8,343774.2);
   Graph_Graph1091->SetMinimum(1.778244);
   Graph_Graph1091->SetMaximum(2.201644);
   Graph_Graph1091->SetDirectory(0);
   Graph_Graph1091->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1091->SetLineColor(ci);
   Graph_Graph1091->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1091->GetXaxis()->SetNoExponent();
   Graph_Graph1091->GetXaxis()->SetNdivisions(5);
   Graph_Graph1091->GetXaxis()->SetLabelFont(42);
   Graph_Graph1091->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1091->GetXaxis()->SetTitleFont(42);
   Graph_Graph1091->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1091->GetYaxis()->SetLabelFont(42);
   Graph_Graph1091->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1091->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1091->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1091->GetYaxis()->SetTitleFont(42);
   Graph_Graph1091->GetZaxis()->SetLabelFont(42);
   Graph_Graph1091->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1091->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1091->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1091);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1092[9] = {
   343854,
   343860,
   343862,
   343864,
   343866,
   343932,
   343934,
   343936,
   343937};
   Double_t Graph_fy1092[9] = {
   0.09599453,
   2.588707,
   2.520499,
   2.541192,
   0.1076734,
   0.00567422,
   2.421637,
   2.50821,
   2.53512};
   Double_t Graph_fex1092[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1092[9] = {
   0.02001624,
   0.04840608,
   0.00807595,
   0.02282978,
   0.01260221,
   0.00283711,
   0.03207256,
   0.01677066,
   0.008044839};
   gre = new TGraphErrors(9,Graph_fx1092,Graph_fy1092,Graph_fex1092,Graph_fey1092);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#196f3d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1092 = new TH1F("Graph_Graph1092","",100,343845.7,343945.3);
   Graph_Graph1092->SetMinimum(0.002553399);
   Graph_Graph1092->SetMaximum(2.900541);
   Graph_Graph1092->SetDirectory(0);
   Graph_Graph1092->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1092->SetLineColor(ci);
   Graph_Graph1092->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1092->GetXaxis()->SetNoExponent();
   Graph_Graph1092->GetXaxis()->SetNdivisions(5);
   Graph_Graph1092->GetXaxis()->SetLabelFont(42);
   Graph_Graph1092->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1092->GetXaxis()->SetTitleFont(42);
   Graph_Graph1092->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1092->GetYaxis()->SetLabelFont(42);
   Graph_Graph1092->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1092->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1092->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1092->GetYaxis()->SetTitleFont(42);
   Graph_Graph1092->GetZaxis()->SetLabelFont(42);
   Graph_Graph1092->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1092->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1092->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1092);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1093[5] = {
   343644,
   343648,
   343650,
   343652,
   343663};
   Double_t Graph_fy1093[5] = {
   2.165373,
   2.12429,
   3.069224,
   2.551126,
   2.08637};
   Double_t Graph_fex1093[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1093[5] = {
   0.01363759,
   0.02269018,
   0.292639,
   0.1689525,
   0.05548386};
   gre = new TGraphErrors(5,Graph_fx1093,Graph_fy1093,Graph_fex1093,Graph_fey1093);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e317ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1093 = new TH1F("Graph_Graph1093","",100,343642.1,343664.9);
   Graph_Graph1093->SetMinimum(1.897789);
   Graph_Graph1093->SetMaximum(3.49496);
   Graph_Graph1093->SetDirectory(0);
   Graph_Graph1093->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1093->SetLineColor(ci);
   Graph_Graph1093->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1093->GetXaxis()->SetNoExponent();
   Graph_Graph1093->GetXaxis()->SetNdivisions(5);
   Graph_Graph1093->GetXaxis()->SetLabelFont(42);
   Graph_Graph1093->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1093->GetXaxis()->SetTitleFont(42);
   Graph_Graph1093->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1093->GetYaxis()->SetLabelFont(42);
   Graph_Graph1093->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1093->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1093->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1093->GetYaxis()->SetTitleFont(42);
   Graph_Graph1093->GetZaxis()->SetLabelFont(42);
   Graph_Graph1093->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1093->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1093->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1093);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1094[5] = {
   343638,
   343668,
   343673,
   343677,
   343680};
   Double_t Graph_fy1094[5] = {
   2.141581,
   2.168278,
   0.09651489,
   2.169797,
   2.154041};
   Double_t Graph_fex1094[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1094[5] = {
   0.01649763,
   0.01917779,
   0.01438759,
   0.01044343,
   0.008751132};
   gre = new TGraphErrors(5,Graph_fx1094,Graph_fy1094,Graph_fex1094,Graph_fey1094);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0bf9f4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1094 = new TH1F("Graph_Graph1094","",100,343633.8,343684.2);
   Graph_Graph1094->SetMinimum(0.07391457);
   Graph_Graph1094->SetMaximum(2.397989);
   Graph_Graph1094->SetDirectory(0);
   Graph_Graph1094->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1094->SetLineColor(ci);
   Graph_Graph1094->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1094->GetXaxis()->SetNoExponent();
   Graph_Graph1094->GetXaxis()->SetNdivisions(5);
   Graph_Graph1094->GetXaxis()->SetLabelFont(42);
   Graph_Graph1094->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1094->GetXaxis()->SetTitleFont(42);
   Graph_Graph1094->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1094->GetYaxis()->SetLabelFont(42);
   Graph_Graph1094->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1094->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1094->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1094->GetYaxis()->SetTitleFont(42);
   Graph_Graph1094->GetZaxis()->SetLabelFont(42);
   Graph_Graph1094->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1094->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1094->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1094);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1095[2] = {
   343640,
   343642};
   Double_t Graph_fy1095[2] = {
   1.837417,
   2.176606};
   Double_t Graph_fex1095[2] = {
   0,
   0};
   Double_t Graph_fey1095[2] = {
   0.01448447,
   0.007109221};
   gre = new TGraphErrors(2,Graph_fx1095,Graph_fy1095,Graph_fex1095,Graph_fey1095);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2cf90b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1095 = new TH1F("Graph_Graph1095","",100,343639.8,343642.2);
   Graph_Graph1095->SetMinimum(1.786854);
   Graph_Graph1095->SetMaximum(2.219794);
   Graph_Graph1095->SetDirectory(0);
   Graph_Graph1095->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1095->SetLineColor(ci);
   Graph_Graph1095->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1095->GetXaxis()->SetNoExponent();
   Graph_Graph1095->GetXaxis()->SetNdivisions(5);
   Graph_Graph1095->GetXaxis()->SetLabelFont(42);
   Graph_Graph1095->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1095->GetXaxis()->SetTitleFont(42);
   Graph_Graph1095->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1095->GetYaxis()->SetLabelFont(42);
   Graph_Graph1095->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1095->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1095->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1095->GetYaxis()->SetTitleFont(42);
   Graph_Graph1095->GetZaxis()->SetLabelFont(42);
   Graph_Graph1095->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1095->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1095->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1095);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1096[4] = {
   343623,
   343625,
   343627,
   343629};
   Double_t Graph_fy1096[4] = {
   2.198528,
   2.141429,
   2.134832,
   2.974417};
   Double_t Graph_fex1096[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1096[4] = {
   0.02999325,
   0.009637379,
   0.1131458,
   0.2152212};
   gre = new TGraphErrors(4,Graph_fx1096,Graph_fy1096,Graph_fex1096,Graph_fey1096);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#f90b28");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1096 = new TH1F("Graph_Graph1096","",100,343622.4,343629.6);
   Graph_Graph1096->SetMinimum(1.904891);
   Graph_Graph1096->SetMaximum(3.306433);
   Graph_Graph1096->SetDirectory(0);
   Graph_Graph1096->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1096->SetLineColor(ci);
   Graph_Graph1096->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1096->GetXaxis()->SetNoExponent();
   Graph_Graph1096->GetXaxis()->SetNdivisions(5);
   Graph_Graph1096->GetXaxis()->SetLabelFont(42);
   Graph_Graph1096->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1096->GetXaxis()->SetTitleFont(42);
   Graph_Graph1096->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1096->GetYaxis()->SetLabelFont(42);
   Graph_Graph1096->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1096->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1096->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1096->GetYaxis()->SetTitleFont(42);
   Graph_Graph1096->GetZaxis()->SetLabelFont(42);
   Graph_Graph1096->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1096->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1096->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1096);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1097[2] = {
   343619,
   343621};
   Double_t Graph_fy1097[2] = {
   2.159015,
   2.171026};
   Double_t Graph_fex1097[2] = {
   0,
   0};
   Double_t Graph_fey1097[2] = {
   0.009525789,
   0.01286637};
   gre = new TGraphErrors(2,Graph_fx1097,Graph_fy1097,Graph_fex1097,Graph_fey1097);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#1b38f5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1097 = new TH1F("Graph_Graph1097","",100,343618.8,343621.2);
   Graph_Graph1097->SetMinimum(2.146049);
   Graph_Graph1097->SetMaximum(2.187332);
   Graph_Graph1097->SetDirectory(0);
   Graph_Graph1097->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1097->SetLineColor(ci);
   Graph_Graph1097->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1097->GetXaxis()->SetNoExponent();
   Graph_Graph1097->GetXaxis()->SetNdivisions(5);
   Graph_Graph1097->GetXaxis()->SetLabelFont(42);
   Graph_Graph1097->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1097->GetXaxis()->SetTitleFont(42);
   Graph_Graph1097->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1097->GetYaxis()->SetLabelFont(42);
   Graph_Graph1097->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1097->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1097->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1097->GetYaxis()->SetTitleFont(42);
   Graph_Graph1097->GetZaxis()->SetLabelFont(42);
   Graph_Graph1097->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1097->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1097->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1097);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1098[4] = {
   343494,
   343496,
   343498,
   343501};
   Double_t Graph_fy1098[4] = {
   2.450345,
   2.500171,
   2.473611,
   2.603492};
   Double_t Graph_fex1098[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1098[4] = {
   0.04188165,
   0.01604884,
   0.009016975,
   0.09812281};
   gre = new TGraphErrors(4,Graph_fx1098,Graph_fy1098,Graph_fex1098,Graph_fey1098);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffc300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1098 = new TH1F("Graph_Graph1098","",100,343493.3,343501.7);
   Graph_Graph1098->SetMinimum(2.379148);
   Graph_Graph1098->SetMaximum(2.73093);
   Graph_Graph1098->SetDirectory(0);
   Graph_Graph1098->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1098->SetLineColor(ci);
   Graph_Graph1098->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1098->GetXaxis()->SetNoExponent();
   Graph_Graph1098->GetXaxis()->SetNdivisions(5);
   Graph_Graph1098->GetXaxis()->SetLabelFont(42);
   Graph_Graph1098->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1098->GetXaxis()->SetTitleFont(42);
   Graph_Graph1098->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1098->GetYaxis()->SetLabelFont(42);
   Graph_Graph1098->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1098->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1098->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1098->GetYaxis()->SetTitleFont(42);
   Graph_Graph1098->GetZaxis()->SetLabelFont(42);
   Graph_Graph1098->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1098->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1098->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1098);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1099[1] = {
   344068};
   Double_t Graph_fy1099[1] = {
   2.55062};
   Double_t Graph_fex1099[1] = {
   0};
   Double_t Graph_fey1099[1] = {
   0.008510912};
   gre = new TGraphErrors(1,Graph_fx1099,Graph_fy1099,Graph_fex1099,Graph_fey1099);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1099 = new TH1F("Graph_Graph1099","",100,344067.9,344069.1);
   Graph_Graph1099->SetMinimum(2.540407);
   Graph_Graph1099->SetMaximum(2.560833);
   Graph_Graph1099->SetDirectory(0);
   Graph_Graph1099->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1099->SetLineColor(ci);
   Graph_Graph1099->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1099->GetXaxis()->SetNoExponent();
   Graph_Graph1099->GetXaxis()->SetNdivisions(5);
   Graph_Graph1099->GetXaxis()->SetLabelFont(42);
   Graph_Graph1099->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1099->GetXaxis()->SetTitleFont(42);
   Graph_Graph1099->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1099->GetYaxis()->SetLabelFont(42);
   Graph_Graph1099->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1099->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1099->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1099->GetYaxis()->SetTitleFont(42);
   Graph_Graph1099->GetZaxis()->SetLabelFont(42);
   Graph_Graph1099->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1099->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1099->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1099);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1100[6] = {
   344058,
   344062,
   344063,
   344064,
   344065,
   344067};
   Double_t Graph_fy1100[6] = {
   0.003725359,
   2.615708,
   2.5339,
   2.546183,
   2.54339,
   2.537708};
   Double_t Graph_fex1100[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1100[6] = {
   0.001178062,
   0.06762752,
   0.005812019,
   0.005449527,
   0.02773581,
   0.01215467};
   gre = new TGraphErrors(6,Graph_fx1100,Graph_fy1100,Graph_fex1100,Graph_fey1100);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2fa4e1");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1100 = new TH1F("Graph_Graph1100","",100,344057.1,344067.9);
   Graph_Graph1100->SetMinimum(0.002292567);
   Graph_Graph1100->SetMaximum(2.951415);
   Graph_Graph1100->SetDirectory(0);
   Graph_Graph1100->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1100->SetLineColor(ci);
   Graph_Graph1100->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1100->GetXaxis()->SetNoExponent();
   Graph_Graph1100->GetXaxis()->SetNdivisions(5);
   Graph_Graph1100->GetXaxis()->SetLabelFont(42);
   Graph_Graph1100->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1100->GetXaxis()->SetTitleFont(42);
   Graph_Graph1100->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1100->GetYaxis()->SetLabelFont(42);
   Graph_Graph1100->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1100->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1100->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1100->GetYaxis()->SetTitleFont(42);
   Graph_Graph1100->GetZaxis()->SetLabelFont(42);
   Graph_Graph1100->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1100->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1100->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1100);
   
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
      tex = new TLatex(0.23,0.83,"TOB");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
