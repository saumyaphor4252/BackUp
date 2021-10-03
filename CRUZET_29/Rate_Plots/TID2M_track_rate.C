void TID2M_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug  3 18:11:30 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(343311.3,-0.01872971,344128.7,0.1259998);
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
   multigraph->SetName("track rate TID2-");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1181[2] = {
   343772,
   343774};
   Double_t Graph_fy1181[2] = {
   0.04459699,
   0.04776507};
   Double_t Graph_fex1181[2] = {
   0,
   0};
   Double_t Graph_fey1181[2] = {
   0.005618692,
   0.00109841};
   TGraphErrors *gre = new TGraphErrors(2,Graph_fx1181,Graph_fy1181,Graph_fex1181,Graph_fey1181);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f5601b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1181 = new TH1F("Graph_Graph1181","",100,343771.8,343774.2);
   Graph_Graph1181->SetMinimum(0.03785456);
   Graph_Graph1181->SetMaximum(0.05133942);
   Graph_Graph1181->SetDirectory(0);
   Graph_Graph1181->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1181->SetLineColor(ci);
   Graph_Graph1181->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1181->GetXaxis()->SetNoExponent();
   Graph_Graph1181->GetXaxis()->SetNdivisions(5);
   Graph_Graph1181->GetXaxis()->SetLabelFont(42);
   Graph_Graph1181->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1181->GetXaxis()->SetTitleFont(42);
   Graph_Graph1181->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1181->GetYaxis()->SetLabelFont(42);
   Graph_Graph1181->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1181->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1181->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1181->GetYaxis()->SetTitleFont(42);
   Graph_Graph1181->GetZaxis()->SetLabelFont(42);
   Graph_Graph1181->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1181->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1181->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1181);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1182[9] = {
   343854,
   343860,
   343862,
   343864,
   343866,
   343932,
   343934,
   343936,
   343937};
   Double_t Graph_fy1182[9] = {
   0,
   0.05702397,
   0.05723819,
   0.05681276,
   0.00589991,
   0,
   0.04969857,
   0.0530393,
   0.05723633};
   Double_t Graph_fex1182[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1182[9] = {
   0,
   0.007184345,
   0.001217008,
   0.003413548,
   0.002949955,
   0,
   0.004594635,
   0.00243875,
   0.001208799};
   gre = new TGraphErrors(9,Graph_fx1182,Graph_fy1182,Graph_fex1182,Graph_fey1182);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#196f3d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1182 = new TH1F("Graph_Graph1182","",100,343845.7,343945.3);
   Graph_Graph1182->SetMinimum(0);
   Graph_Graph1182->SetMaximum(0.07062915);
   Graph_Graph1182->SetDirectory(0);
   Graph_Graph1182->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1182->SetLineColor(ci);
   Graph_Graph1182->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1182->GetXaxis()->SetNoExponent();
   Graph_Graph1182->GetXaxis()->SetNdivisions(5);
   Graph_Graph1182->GetXaxis()->SetLabelFont(42);
   Graph_Graph1182->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1182->GetXaxis()->SetTitleFont(42);
   Graph_Graph1182->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1182->GetYaxis()->SetLabelFont(42);
   Graph_Graph1182->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1182->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1182->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1182->GetYaxis()->SetTitleFont(42);
   Graph_Graph1182->GetZaxis()->SetLabelFont(42);
   Graph_Graph1182->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1182->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1182->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1182);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1183[5] = {
   343644,
   343648,
   343650,
   343652,
   343663};
   Double_t Graph_fy1183[5] = {
   0.05015976,
   0.04459434,
   0,
   0.07832406,
   0.03541222};
   Double_t Graph_fex1183[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1183[5] = {
   0.002075626,
   0.003287539,
   0,
   0.02960371,
   0.00722849};
   gre = new TGraphErrors(5,Graph_fx1183,Graph_fy1183,Graph_fex1183,Graph_fey1183);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e317ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1183 = new TH1F("Graph_Graph1183","",100,343642.1,343664.9);
   Graph_Graph1183->SetMinimum(0);
   Graph_Graph1183->SetMaximum(0.1187205);
   Graph_Graph1183->SetDirectory(0);
   Graph_Graph1183->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1183->SetLineColor(ci);
   Graph_Graph1183->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1183->GetXaxis()->SetNoExponent();
   Graph_Graph1183->GetXaxis()->SetNdivisions(5);
   Graph_Graph1183->GetXaxis()->SetLabelFont(42);
   Graph_Graph1183->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1183->GetXaxis()->SetTitleFont(42);
   Graph_Graph1183->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1183->GetYaxis()->SetLabelFont(42);
   Graph_Graph1183->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1183->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1183->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1183->GetYaxis()->SetTitleFont(42);
   Graph_Graph1183->GetZaxis()->SetLabelFont(42);
   Graph_Graph1183->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1183->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1183->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1183);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1184[5] = {
   343638,
   343668,
   343673,
   343677,
   343680};
   Double_t Graph_fy1184[5] = {
   0.04765846,
   0.05343094,
   0.002144775,
   0.04699795,
   0.04703643};
   Double_t Graph_fex1184[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1184[5] = {
   0.002461072,
   0.003010492,
   0.002144775,
   0.001536997,
   0.001293166};
   gre = new TGraphErrors(5,Graph_fx1184,Graph_fy1184,Graph_fex1184,Graph_fey1184);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0bf9f4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1184 = new TH1F("Graph_Graph1184","",100,343633.8,343684.2);
   Graph_Graph1184->SetMinimum(0);
   Graph_Graph1184->SetMaximum(0.06208557);
   Graph_Graph1184->SetDirectory(0);
   Graph_Graph1184->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1184->SetLineColor(ci);
   Graph_Graph1184->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1184->GetXaxis()->SetNoExponent();
   Graph_Graph1184->GetXaxis()->SetNdivisions(5);
   Graph_Graph1184->GetXaxis()->SetLabelFont(42);
   Graph_Graph1184->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1184->GetXaxis()->SetTitleFont(42);
   Graph_Graph1184->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1184->GetYaxis()->SetLabelFont(42);
   Graph_Graph1184->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1184->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1184->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1184->GetYaxis()->SetTitleFont(42);
   Graph_Graph1184->GetZaxis()->SetLabelFont(42);
   Graph_Graph1184->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1184->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1184->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1184);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1185[2] = {
   343640,
   343642};
   Double_t Graph_fy1185[2] = {
   0.04042043,
   0.04667241};
   Double_t Graph_fex1185[2] = {
   0,
   0};
   Double_t Graph_fey1185[2] = {
   0.002148322,
   0.001041027};
   gre = new TGraphErrors(2,Graph_fx1185,Graph_fy1185,Graph_fex1185,Graph_fey1185);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2cf90b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1185 = new TH1F("Graph_Graph1185","",100,343639.8,343642.2);
   Graph_Graph1185->SetMinimum(0.03732798);
   Graph_Graph1185->SetMaximum(0.04865757);
   Graph_Graph1185->SetDirectory(0);
   Graph_Graph1185->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1185->SetLineColor(ci);
   Graph_Graph1185->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1185->GetXaxis()->SetNoExponent();
   Graph_Graph1185->GetXaxis()->SetNdivisions(5);
   Graph_Graph1185->GetXaxis()->SetLabelFont(42);
   Graph_Graph1185->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1185->GetXaxis()->SetTitleFont(42);
   Graph_Graph1185->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1185->GetYaxis()->SetLabelFont(42);
   Graph_Graph1185->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1185->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1185->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1185->GetYaxis()->SetTitleFont(42);
   Graph_Graph1185->GetZaxis()->SetLabelFont(42);
   Graph_Graph1185->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1185->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1185->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1185);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1186[4] = {
   343623,
   343625,
   343627,
   343629};
   Double_t Graph_fy1186[4] = {
   0.04664659,
   0.0488374,
   0.05397046,
   0.04671859};
   Double_t Graph_fex1186[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1186[4] = {
   0.004368854,
   0.001455403,
   0.01799015,
   0.02697299};
   gre = new TGraphErrors(4,Graph_fx1186,Graph_fy1186,Graph_fex1186,Graph_fey1186);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#f90b28");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1186 = new TH1F("Graph_Graph1186","",100,343622.4,343629.6);
   Graph_Graph1186->SetMinimum(0.014351);
   Graph_Graph1186->SetMaximum(0.07908617);
   Graph_Graph1186->SetDirectory(0);
   Graph_Graph1186->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1186->SetLineColor(ci);
   Graph_Graph1186->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1186->GetXaxis()->SetNoExponent();
   Graph_Graph1186->GetXaxis()->SetNdivisions(5);
   Graph_Graph1186->GetXaxis()->SetLabelFont(42);
   Graph_Graph1186->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1186->GetXaxis()->SetTitleFont(42);
   Graph_Graph1186->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1186->GetYaxis()->SetLabelFont(42);
   Graph_Graph1186->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1186->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1186->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1186->GetYaxis()->SetTitleFont(42);
   Graph_Graph1186->GetZaxis()->SetLabelFont(42);
   Graph_Graph1186->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1186->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1186->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1186);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1187[2] = {
   343619,
   343621};
   Double_t Graph_fy1187[2] = {
   0.04879535,
   0.04796204};
   Double_t Graph_fex1187[2] = {
   0,
   0};
   Double_t Graph_fey1187[2] = {
   0.001432063,
   0.001912372};
   gre = new TGraphErrors(2,Graph_fx1187,Graph_fy1187,Graph_fex1187,Graph_fey1187);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#1b38f5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1187 = new TH1F("Graph_Graph1187","",100,343618.8,343621.2);
   Graph_Graph1187->SetMinimum(0.04563189);
   Graph_Graph1187->SetMaximum(0.05064518);
   Graph_Graph1187->SetDirectory(0);
   Graph_Graph1187->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1187->SetLineColor(ci);
   Graph_Graph1187->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1187->GetXaxis()->SetNoExponent();
   Graph_Graph1187->GetXaxis()->SetNdivisions(5);
   Graph_Graph1187->GetXaxis()->SetLabelFont(42);
   Graph_Graph1187->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1187->GetXaxis()->SetTitleFont(42);
   Graph_Graph1187->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1187->GetYaxis()->SetLabelFont(42);
   Graph_Graph1187->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1187->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1187->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1187->GetYaxis()->SetTitleFont(42);
   Graph_Graph1187->GetZaxis()->SetLabelFont(42);
   Graph_Graph1187->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1187->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1187->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1187);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1188[4] = {
   343494,
   343496,
   343498,
   343501};
   Double_t Graph_fy1188[4] = {
   0.05655194,
   0.05274579,
   0.05469449,
   0.06656657};
   Double_t Graph_fex1188[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1188[4] = {
   0.00636259,
   0.002331057,
   0.001340809,
   0.01568989};
   gre = new TGraphErrors(4,Graph_fx1188,Graph_fy1188,Graph_fex1188,Graph_fey1188);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffc300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1188 = new TH1F("Graph_Graph1188","",100,343493.3,343501.7);
   Graph_Graph1188->SetMinimum(0.04698264);
   Graph_Graph1188->SetMaximum(0.08546317);
   Graph_Graph1188->SetDirectory(0);
   Graph_Graph1188->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1188->SetLineColor(ci);
   Graph_Graph1188->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1188->GetXaxis()->SetNoExponent();
   Graph_Graph1188->GetXaxis()->SetNdivisions(5);
   Graph_Graph1188->GetXaxis()->SetLabelFont(42);
   Graph_Graph1188->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1188->GetXaxis()->SetTitleFont(42);
   Graph_Graph1188->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1188->GetYaxis()->SetLabelFont(42);
   Graph_Graph1188->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1188->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1188->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1188->GetYaxis()->SetTitleFont(42);
   Graph_Graph1188->GetZaxis()->SetLabelFont(42);
   Graph_Graph1188->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1188->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1188->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1188);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1189[1] = {
   344068};
   Double_t Graph_fy1189[1] = {
   0.05651446};
   Double_t Graph_fex1189[1] = {
   0};
   Double_t Graph_fey1189[1] = {
   0.001266873};
   gre = new TGraphErrors(1,Graph_fx1189,Graph_fy1189,Graph_fex1189,Graph_fey1189);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1189 = new TH1F("Graph_Graph1189","",100,344067.9,344069.1);
   Graph_Graph1189->SetMinimum(0.05499421);
   Graph_Graph1189->SetMaximum(0.05803471);
   Graph_Graph1189->SetDirectory(0);
   Graph_Graph1189->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1189->SetLineColor(ci);
   Graph_Graph1189->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1189->GetXaxis()->SetNoExponent();
   Graph_Graph1189->GetXaxis()->SetNdivisions(5);
   Graph_Graph1189->GetXaxis()->SetLabelFont(42);
   Graph_Graph1189->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1189->GetXaxis()->SetTitleFont(42);
   Graph_Graph1189->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1189->GetYaxis()->SetLabelFont(42);
   Graph_Graph1189->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1189->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1189->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1189->GetYaxis()->SetTitleFont(42);
   Graph_Graph1189->GetZaxis()->SetLabelFont(42);
   Graph_Graph1189->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1189->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1189->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1189);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1190[6] = {
   344058,
   344062,
   344063,
   344064,
   344065,
   344067};
   Double_t Graph_fy1190[6] = {
   0,
   0.06469332,
   0.05701692,
   0.05785083,
   0.0604921,
   0.05833276};
   Double_t Graph_fex1190[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1190[6] = {
   0,
   0.01063552,
   0.0008718346,
   0.0008214266,
   0.004277437,
   0.001842802};
   gre = new TGraphErrors(6,Graph_fx1190,Graph_fy1190,Graph_fex1190,Graph_fey1190);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2fa4e1");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1190 = new TH1F("Graph_Graph1190","",100,344057.1,344067.9);
   Graph_Graph1190->SetMinimum(0);
   Graph_Graph1190->SetMaximum(0.08286172);
   Graph_Graph1190->SetDirectory(0);
   Graph_Graph1190->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1190->SetLineColor(ci);
   Graph_Graph1190->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1190->GetXaxis()->SetNoExponent();
   Graph_Graph1190->GetXaxis()->SetNdivisions(5);
   Graph_Graph1190->GetXaxis()->SetLabelFont(42);
   Graph_Graph1190->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1190->GetXaxis()->SetTitleFont(42);
   Graph_Graph1190->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1190->GetYaxis()->SetLabelFont(42);
   Graph_Graph1190->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1190->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1190->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1190->GetYaxis()->SetTitleFont(42);
   Graph_Graph1190->GetZaxis()->SetLabelFont(42);
   Graph_Graph1190->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1190->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1190->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1190);
   
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
      tex = new TLatex(0.23,0.83,"TID 2-");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
