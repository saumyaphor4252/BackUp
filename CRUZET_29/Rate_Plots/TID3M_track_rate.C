void TID3M_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug  3 18:11:31 2021) by ROOT version6.10/04
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
   multigraph->SetName("track rate TID3-");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1211[2] = {
   343772,
   343774};
   Double_t Graph_fy1211[2] = {
   0.04318121,
   0.05109928};
   Double_t Graph_fex1211[2] = {
   0,
   0};
   Double_t Graph_fey1211[2] = {
   0.005528787,
   0.001136101};
   TGraphErrors *gre = new TGraphErrors(2,Graph_fx1211,Graph_fy1211,Graph_fex1211,Graph_fey1211);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f5601b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1211 = new TH1F("Graph_Graph1211","",100,343771.8,343774.2);
   Graph_Graph1211->SetMinimum(0.03619413);
   Graph_Graph1211->SetMaximum(0.05369367);
   Graph_Graph1211->SetDirectory(0);
   Graph_Graph1211->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1211->SetLineColor(ci);
   Graph_Graph1211->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1211->GetXaxis()->SetNoExponent();
   Graph_Graph1211->GetXaxis()->SetNdivisions(5);
   Graph_Graph1211->GetXaxis()->SetLabelFont(42);
   Graph_Graph1211->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1211->GetXaxis()->SetTitleFont(42);
   Graph_Graph1211->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1211->GetYaxis()->SetLabelFont(42);
   Graph_Graph1211->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1211->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1211->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1211->GetYaxis()->SetTitleFont(42);
   Graph_Graph1211->GetZaxis()->SetLabelFont(42);
   Graph_Graph1211->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1211->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1211->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1211);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1212[9] = {
   343854,
   343860,
   343862,
   343864,
   343866,
   343932,
   343934,
   343936,
   343937};
   Double_t Graph_fy1212[9] = {
   0,
   0.07060111,
   0.0575487,
   0.06153006,
   0.007374887,
   0,
   0.05479586,
   0.06077654,
   0.06068277};
   Double_t Graph_fex1212[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1212[9] = {
   0,
   0.007994001,
   0.001220304,
   0.00355244,
   0.00329815,
   0,
   0.004824507,
   0.002610576,
   0.00124466};
   gre = new TGraphErrors(9,Graph_fx1212,Graph_fy1212,Graph_fex1212,Graph_fey1212);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#196f3d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1212 = new TH1F("Graph_Graph1212","",100,343845.7,343945.3);
   Graph_Graph1212->SetMinimum(0);
   Graph_Graph1212->SetMaximum(0.08645462);
   Graph_Graph1212->SetDirectory(0);
   Graph_Graph1212->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1212->SetLineColor(ci);
   Graph_Graph1212->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1212->GetXaxis()->SetNoExponent();
   Graph_Graph1212->GetXaxis()->SetNdivisions(5);
   Graph_Graph1212->GetXaxis()->SetLabelFont(42);
   Graph_Graph1212->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1212->GetXaxis()->SetTitleFont(42);
   Graph_Graph1212->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1212->GetYaxis()->SetLabelFont(42);
   Graph_Graph1212->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1212->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1212->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1212->GetYaxis()->SetTitleFont(42);
   Graph_Graph1212->GetZaxis()->SetLabelFont(42);
   Graph_Graph1212->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1212->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1212->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1212);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1213[5] = {
   343644,
   343648,
   343650,
   343652,
   343663};
   Double_t Graph_fy1213[5] = {
   0.04990209,
   0.04895683,
   0.02790203,
   0.0447566,
   0.05902037};
   Double_t Graph_fex1213[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1213[5] = {
   0.002070288,
   0.003444591,
   0.02790203,
   0.0223783,
   0.00933194};
   gre = new TGraphErrors(5,Graph_fx1213,Graph_fy1213,Graph_fex1213,Graph_fey1213);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e317ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1213 = new TH1F("Graph_Graph1213","",100,343642.1,343664.9);
   Graph_Graph1213->SetMinimum(0);
   Graph_Graph1213->SetMaximum(0.07518754);
   Graph_Graph1213->SetDirectory(0);
   Graph_Graph1213->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1213->SetLineColor(ci);
   Graph_Graph1213->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1213->GetXaxis()->SetNoExponent();
   Graph_Graph1213->GetXaxis()->SetNdivisions(5);
   Graph_Graph1213->GetXaxis()->SetLabelFont(42);
   Graph_Graph1213->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1213->GetXaxis()->SetTitleFont(42);
   Graph_Graph1213->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1213->GetYaxis()->SetLabelFont(42);
   Graph_Graph1213->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1213->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1213->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1213->GetYaxis()->SetTitleFont(42);
   Graph_Graph1213->GetZaxis()->SetLabelFont(42);
   Graph_Graph1213->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1213->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1213->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1213);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1214[5] = {
   343638,
   343668,
   343673,
   343677,
   343680};
   Double_t Graph_fy1214[5] = {
   0.05032734,
   0.05444867,
   0.002144775,
   0.05358269,
   0.04995176};
   Double_t Graph_fex1214[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1214[5] = {
   0.002529044,
   0.003039028,
   0.002144775,
   0.001641141,
   0.001332639};
   gre = new TGraphErrors(5,Graph_fx1214,Graph_fy1214,Graph_fex1214,Graph_fey1214);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0bf9f4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1214 = new TH1F("Graph_Graph1214","",100,343633.8,343684.2);
   Graph_Graph1214->SetMinimum(0);
   Graph_Graph1214->SetMaximum(0.06323646);
   Graph_Graph1214->SetDirectory(0);
   Graph_Graph1214->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1214->SetLineColor(ci);
   Graph_Graph1214->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1214->GetXaxis()->SetNoExponent();
   Graph_Graph1214->GetXaxis()->SetNdivisions(5);
   Graph_Graph1214->GetXaxis()->SetLabelFont(42);
   Graph_Graph1214->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1214->GetXaxis()->SetTitleFont(42);
   Graph_Graph1214->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1214->GetYaxis()->SetLabelFont(42);
   Graph_Graph1214->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1214->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1214->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1214->GetYaxis()->SetTitleFont(42);
   Graph_Graph1214->GetZaxis()->SetLabelFont(42);
   Graph_Graph1214->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1214->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1214->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1214);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1215[2] = {
   343640,
   343642};
   Double_t Graph_fy1215[2] = {
   0.04453099,
   0.05187371};
   Double_t Graph_fex1215[2] = {
   0,
   0};
   Double_t Graph_fey1215[2] = {
   0.002254914,
   0.001097503};
   gre = new TGraphErrors(2,Graph_fx1215,Graph_fy1215,Graph_fex1215,Graph_fey1215);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2cf90b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1215 = new TH1F("Graph_Graph1215","",100,343639.8,343642.2);
   Graph_Graph1215->SetMinimum(0.04120656);
   Graph_Graph1215->SetMaximum(0.05404073);
   Graph_Graph1215->SetDirectory(0);
   Graph_Graph1215->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1215->SetLineColor(ci);
   Graph_Graph1215->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1215->GetXaxis()->SetNoExponent();
   Graph_Graph1215->GetXaxis()->SetNdivisions(5);
   Graph_Graph1215->GetXaxis()->SetLabelFont(42);
   Graph_Graph1215->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1215->GetXaxis()->SetTitleFont(42);
   Graph_Graph1215->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1215->GetYaxis()->SetLabelFont(42);
   Graph_Graph1215->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1215->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1215->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1215->GetYaxis()->SetTitleFont(42);
   Graph_Graph1215->GetZaxis()->SetLabelFont(42);
   Graph_Graph1215->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1215->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1215->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1215);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1216[4] = {
   343623,
   343625,
   343627,
   343629};
   Double_t Graph_fy1216[4] = {
   0.05155676,
   0.05204697,
   0.02998359,
   0.03114572};
   Double_t Graph_fex1216[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1216[4] = {
   0.004593041,
   0.001502467,
   0.01340907,
   0.02202335};
   gre = new TGraphErrors(4,Graph_fx1216,Graph_fy1216,Graph_fex1216,Graph_fey1216);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#f90b28");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1216 = new TH1F("Graph_Graph1216","",100,343622.4,343629.6);
   Graph_Graph1216->SetMinimum(0.004419629);
   Graph_Graph1216->SetMaximum(0.06085255);
   Graph_Graph1216->SetDirectory(0);
   Graph_Graph1216->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1216->SetLineColor(ci);
   Graph_Graph1216->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1216->GetXaxis()->SetNoExponent();
   Graph_Graph1216->GetXaxis()->SetNdivisions(5);
   Graph_Graph1216->GetXaxis()->SetLabelFont(42);
   Graph_Graph1216->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1216->GetXaxis()->SetTitleFont(42);
   Graph_Graph1216->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1216->GetYaxis()->SetLabelFont(42);
   Graph_Graph1216->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1216->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1216->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1216->GetYaxis()->SetTitleFont(42);
   Graph_Graph1216->GetZaxis()->SetLabelFont(42);
   Graph_Graph1216->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1216->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1216->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1216);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1217[2] = {
   343619,
   343621};
   Double_t Graph_fy1217[2] = {
   0.04980403,
   0.04636076};
   Double_t Graph_fex1217[2] = {
   0,
   0};
   Double_t Graph_fey1217[2] = {
   0.001446789,
   0.001880177};
   gre = new TGraphErrors(2,Graph_fx1217,Graph_fy1217,Graph_fex1217,Graph_fey1217);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#1b38f5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1217 = new TH1F("Graph_Graph1217","",100,343618.8,343621.2);
   Graph_Graph1217->SetMinimum(0.04380356);
   Graph_Graph1217->SetMaximum(0.05192785);
   Graph_Graph1217->SetDirectory(0);
   Graph_Graph1217->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1217->SetLineColor(ci);
   Graph_Graph1217->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1217->GetXaxis()->SetNoExponent();
   Graph_Graph1217->GetXaxis()->SetNdivisions(5);
   Graph_Graph1217->GetXaxis()->SetLabelFont(42);
   Graph_Graph1217->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1217->GetXaxis()->SetTitleFont(42);
   Graph_Graph1217->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1217->GetYaxis()->SetLabelFont(42);
   Graph_Graph1217->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1217->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1217->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1217->GetYaxis()->SetTitleFont(42);
   Graph_Graph1217->GetZaxis()->SetLabelFont(42);
   Graph_Graph1217->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1217->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1217->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1217);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1218[4] = {
   343494,
   343496,
   343498,
   343501};
   Double_t Graph_fy1218[4] = {
   0.05798363,
   0.05552731,
   0.05499032,
   0.05547214};
   Double_t Graph_fex1218[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1218[4] = {
   0.006442626,
   0.00239173,
   0.00134443,
   0.01432284};
   gre = new TGraphErrors(4,Graph_fx1218,Graph_fy1218,Graph_fex1218,Graph_fey1218);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffc300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1218 = new TH1F("Graph_Graph1218","",100,343493.3,343501.7);
   Graph_Graph1218->SetMinimum(0.03828472);
   Graph_Graph1218->SetMaximum(0.07265955);
   Graph_Graph1218->SetDirectory(0);
   Graph_Graph1218->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1218->SetLineColor(ci);
   Graph_Graph1218->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1218->GetXaxis()->SetNoExponent();
   Graph_Graph1218->GetXaxis()->SetNdivisions(5);
   Graph_Graph1218->GetXaxis()->SetLabelFont(42);
   Graph_Graph1218->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1218->GetXaxis()->SetTitleFont(42);
   Graph_Graph1218->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1218->GetYaxis()->SetLabelFont(42);
   Graph_Graph1218->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1218->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1218->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1218->GetYaxis()->SetTitleFont(42);
   Graph_Graph1218->GetZaxis()->SetLabelFont(42);
   Graph_Graph1218->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1218->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1218->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1218);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1219[1] = {
   344068};
   Double_t Graph_fy1219[1] = {
   0.05924079};
   Double_t Graph_fex1219[1] = {
   0};
   Double_t Graph_fey1219[1] = {
   0.001297071};
   gre = new TGraphErrors(1,Graph_fx1219,Graph_fy1219,Graph_fex1219,Graph_fey1219);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1219 = new TH1F("Graph_Graph1219","",100,344067.9,344069.1);
   Graph_Graph1219->SetMinimum(0.0576843);
   Graph_Graph1219->SetMaximum(0.06079727);
   Graph_Graph1219->SetDirectory(0);
   Graph_Graph1219->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1219->SetLineColor(ci);
   Graph_Graph1219->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1219->GetXaxis()->SetNoExponent();
   Graph_Graph1219->GetXaxis()->SetNdivisions(5);
   Graph_Graph1219->GetXaxis()->SetLabelFont(42);
   Graph_Graph1219->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1219->GetXaxis()->SetTitleFont(42);
   Graph_Graph1219->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1219->GetYaxis()->SetLabelFont(42);
   Graph_Graph1219->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1219->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1219->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1219->GetYaxis()->SetTitleFont(42);
   Graph_Graph1219->GetZaxis()->SetLabelFont(42);
   Graph_Graph1219->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1219->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1219->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1219);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1220[6] = {
   344058,
   344062,
   344063,
   344064,
   344065,
   344067};
   Double_t Graph_fy1220[6] = {
   0,
   0.0437117,
   0.05980311,
   0.060895,
   0.06926345,
   0.05827454};
   Double_t Graph_fex1220[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1220[6] = {
   0,
   0.00874234,
   0.0008928822,
   0.0008427616,
   0.004577058,
   0.001841882};
   gre = new TGraphErrors(6,Graph_fx1220,Graph_fy1220,Graph_fex1220,Graph_fey1220);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2fa4e1");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1220 = new TH1F("Graph_Graph1220","",100,344057.1,344067.9);
   Graph_Graph1220->SetMinimum(0);
   Graph_Graph1220->SetMaximum(0.08122456);
   Graph_Graph1220->SetDirectory(0);
   Graph_Graph1220->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1220->SetLineColor(ci);
   Graph_Graph1220->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1220->GetXaxis()->SetNoExponent();
   Graph_Graph1220->GetXaxis()->SetNdivisions(5);
   Graph_Graph1220->GetXaxis()->SetLabelFont(42);
   Graph_Graph1220->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1220->GetXaxis()->SetTitleFont(42);
   Graph_Graph1220->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1220->GetYaxis()->SetLabelFont(42);
   Graph_Graph1220->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1220->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1220->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1220->GetYaxis()->SetTitleFont(42);
   Graph_Graph1220->GetZaxis()->SetLabelFont(42);
   Graph_Graph1220->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1220->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1220->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1220);
   
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
      tex = new TLatex(0.23,0.83,"TID 3-");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
