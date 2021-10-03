void TIDP_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug  3 18:11:27 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(343311.3,-0.08590687,344128.7,0.5779187);
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
   multigraph->SetName("track rate TID+");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1081[2] = {
   343772,
   343774};
   Double_t Graph_fy1081[2] = {
   0.1557355,
   0.1769909};
   Double_t Graph_fex1081[2] = {
   0,
   0};
   Double_t Graph_fey1081[2] = {
   0.01049969,
   0.002114389};
   TGraphErrors *gre = new TGraphErrors(2,Graph_fx1081,Graph_fy1081,Graph_fex1081,Graph_fey1081);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f5601b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1081 = new TH1F("Graph_Graph1081","",100,343771.8,343774.2);
   Graph_Graph1081->SetMinimum(0.1418489);
   Graph_Graph1081->SetMaximum(0.1824923);
   Graph_Graph1081->SetDirectory(0);
   Graph_Graph1081->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1081->SetLineColor(ci);
   Graph_Graph1081->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1081->GetXaxis()->SetNoExponent();
   Graph_Graph1081->GetXaxis()->SetNdivisions(5);
   Graph_Graph1081->GetXaxis()->SetLabelFont(42);
   Graph_Graph1081->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1081->GetXaxis()->SetTitleFont(42);
   Graph_Graph1081->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1081->GetYaxis()->SetLabelFont(42);
   Graph_Graph1081->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1081->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1081->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1081->GetYaxis()->SetTitleFont(42);
   Graph_Graph1081->GetZaxis()->SetLabelFont(42);
   Graph_Graph1081->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1081->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1081->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1081);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1082[9] = {
   343854,
   343860,
   343862,
   343864,
   343866,
   343932,
   343934,
   343936,
   343937};
   Double_t Graph_fy1082[9] = {
   0.03756308,
   0.2072776,
   0.2006701,
   0.1958707,
   0.03097453,
   0,
   0.1932722,
   0.2049807,
   0.194915};
   Double_t Graph_fex1082[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1082[9] = {
   0.01252103,
   0.01369729,
   0.002278724,
   0.006338227,
   0.006759196,
   0,
   0.009060742,
   0.004794295,
   0.002230698};
   gre = new TGraphErrors(9,Graph_fx1082,Graph_fy1082,Graph_fex1082,Graph_fey1082);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#196f3d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1082 = new TH1F("Graph_Graph1082","",100,343845.7,343945.3);
   Graph_Graph1082->SetMinimum(0);
   Graph_Graph1082->SetMaximum(0.2430724);
   Graph_Graph1082->SetDirectory(0);
   Graph_Graph1082->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1082->SetLineColor(ci);
   Graph_Graph1082->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1082->GetXaxis()->SetNoExponent();
   Graph_Graph1082->GetXaxis()->SetNdivisions(5);
   Graph_Graph1082->GetXaxis()->SetLabelFont(42);
   Graph_Graph1082->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1082->GetXaxis()->SetTitleFont(42);
   Graph_Graph1082->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1082->GetYaxis()->SetLabelFont(42);
   Graph_Graph1082->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1082->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1082->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1082->GetYaxis()->SetTitleFont(42);
   Graph_Graph1082->GetZaxis()->SetLabelFont(42);
   Graph_Graph1082->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1082->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1082->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1082);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1083[5] = {
   343644,
   343648,
   343650,
   343652,
   343663};
   Double_t Graph_fy1083[5] = {
   0.178823,
   0.1536566,
   0.3906285,
   0.2125939,
   0.1903407};
   Double_t Graph_fex1083[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1083[5] = {
   0.00391907,
   0.006102483,
   0.1043999,
   0.04877238,
   0.01675856};
   gre = new TGraphErrors(5,Graph_fx1083,Graph_fy1083,Graph_fex1083,Graph_fey1083);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e317ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1083 = new TH1F("Graph_Graph1083","",100,343642.1,343664.9);
   Graph_Graph1083->SetMinimum(0.1128067);
   Graph_Graph1083->SetMaximum(0.5297758);
   Graph_Graph1083->SetDirectory(0);
   Graph_Graph1083->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1083->SetLineColor(ci);
   Graph_Graph1083->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1083->GetXaxis()->SetNoExponent();
   Graph_Graph1083->GetXaxis()->SetNdivisions(5);
   Graph_Graph1083->GetXaxis()->SetLabelFont(42);
   Graph_Graph1083->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1083->GetXaxis()->SetTitleFont(42);
   Graph_Graph1083->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1083->GetYaxis()->SetLabelFont(42);
   Graph_Graph1083->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1083->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1083->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1083->GetYaxis()->SetTitleFont(42);
   Graph_Graph1083->GetZaxis()->SetLabelFont(42);
   Graph_Graph1083->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1083->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1083->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1083);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1084[5] = {
   343638,
   343668,
   343673,
   343677,
   343680};
   Double_t Graph_fy1084[5] = {
   0.1677578,
   0.1752195,
   0.01930298,
   0.1808039,
   0.1754889};
   Double_t Graph_fex1084[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1084[5] = {
   0.004617381,
   0.005451705,
   0.006434326,
   0.003014655,
   0.002497825};
   gre = new TGraphErrors(5,Graph_fx1084,Graph_fy1084,Graph_fex1084,Graph_fey1084);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0bf9f4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1084 = new TH1F("Graph_Graph1084","",100,343633.8,343684.2);
   Graph_Graph1084->SetMinimum(0.01158179);
   Graph_Graph1084->SetMaximum(0.2009135);
   Graph_Graph1084->SetDirectory(0);
   Graph_Graph1084->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1084->SetLineColor(ci);
   Graph_Graph1084->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1084->GetXaxis()->SetNoExponent();
   Graph_Graph1084->GetXaxis()->SetNdivisions(5);
   Graph_Graph1084->GetXaxis()->SetLabelFont(42);
   Graph_Graph1084->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1084->GetXaxis()->SetTitleFont(42);
   Graph_Graph1084->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1084->GetYaxis()->SetLabelFont(42);
   Graph_Graph1084->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1084->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1084->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1084->GetYaxis()->SetTitleFont(42);
   Graph_Graph1084->GetZaxis()->SetLabelFont(42);
   Graph_Graph1084->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1084->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1084->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1084);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1085[2] = {
   343640,
   343642};
   Double_t Graph_fy1085[2] = {
   0.1485508,
   0.1778892};
   Double_t Graph_fex1085[2] = {
   0,
   0};
   Double_t Graph_fey1085[2] = {
   0.004118474,
   0.002032389};
   gre = new TGraphErrors(2,Graph_fx1085,Graph_fy1085,Graph_fex1085,Graph_fey1085);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2cf90b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1085 = new TH1F("Graph_Graph1085","",100,343639.8,343642.2);
   Graph_Graph1085->SetMinimum(0.1408834);
   Graph_Graph1085->SetMaximum(0.1834705);
   Graph_Graph1085->SetDirectory(0);
   Graph_Graph1085->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1085->SetLineColor(ci);
   Graph_Graph1085->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1085->GetXaxis()->SetNoExponent();
   Graph_Graph1085->GetXaxis()->SetNdivisions(5);
   Graph_Graph1085->GetXaxis()->SetLabelFont(42);
   Graph_Graph1085->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1085->GetXaxis()->SetTitleFont(42);
   Graph_Graph1085->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1085->GetYaxis()->SetLabelFont(42);
   Graph_Graph1085->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1085->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1085->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1085->GetYaxis()->SetTitleFont(42);
   Graph_Graph1085->GetZaxis()->SetLabelFont(42);
   Graph_Graph1085->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1085->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1085->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1085);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1086[4] = {
   343623,
   343625,
   343627,
   343629};
   Double_t Graph_fy1086[4] = {
   0.1771752,
   0.175832,
   0.1259311,
   0.342603};
   Double_t Graph_fex1086[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1086[4] = {
   0.008514498,
   0.00276157,
   0.02748041,
   0.0730432};
   gre = new TGraphErrors(4,Graph_fx1086,Graph_fy1086,Graph_fex1086,Graph_fey1086);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#f90b28");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1086 = new TH1F("Graph_Graph1086","",100,343622.4,343629.6);
   Graph_Graph1086->SetMinimum(0.06673111);
   Graph_Graph1086->SetMaximum(0.4473657);
   Graph_Graph1086->SetDirectory(0);
   Graph_Graph1086->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1086->SetLineColor(ci);
   Graph_Graph1086->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1086->GetXaxis()->SetNoExponent();
   Graph_Graph1086->GetXaxis()->SetNdivisions(5);
   Graph_Graph1086->GetXaxis()->SetLabelFont(42);
   Graph_Graph1086->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1086->GetXaxis()->SetTitleFont(42);
   Graph_Graph1086->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1086->GetYaxis()->SetLabelFont(42);
   Graph_Graph1086->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1086->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1086->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1086->GetYaxis()->SetTitleFont(42);
   Graph_Graph1086->GetZaxis()->SetLabelFont(42);
   Graph_Graph1086->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1086->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1086->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1086);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1087[2] = {
   343619,
   343621};
   Double_t Graph_fy1087[2] = {
   0.1792105,
   0.1780467};
   Double_t Graph_fex1087[2] = {
   0,
   0};
   Double_t Graph_fey1087[2] = {
   0.002744446,
   0.003684601};
   gre = new TGraphErrors(2,Graph_fx1087,Graph_fy1087,Graph_fex1087,Graph_fey1087);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#1b38f5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1087 = new TH1F("Graph_Graph1087","",100,343618.8,343621.2);
   Graph_Graph1087->SetMinimum(0.1736028);
   Graph_Graph1087->SetMaximum(0.1827142);
   Graph_Graph1087->SetDirectory(0);
   Graph_Graph1087->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1087->SetLineColor(ci);
   Graph_Graph1087->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1087->GetXaxis()->SetNoExponent();
   Graph_Graph1087->GetXaxis()->SetNdivisions(5);
   Graph_Graph1087->GetXaxis()->SetLabelFont(42);
   Graph_Graph1087->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1087->GetXaxis()->SetTitleFont(42);
   Graph_Graph1087->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1087->GetYaxis()->SetLabelFont(42);
   Graph_Graph1087->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1087->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1087->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1087->GetYaxis()->SetTitleFont(42);
   Graph_Graph1087->GetZaxis()->SetLabelFont(42);
   Graph_Graph1087->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1087->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1087->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1087);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1088[4] = {
   343494,
   343496,
   343498,
   343501};
   Double_t Graph_fy1088[4] = {
   0.173235,
   0.1893491,
   0.1901488,
   0.2181904};
   Double_t Graph_fex1088[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1088[4] = {
   0.01113597,
   0.004416626,
   0.002500011,
   0.02840597};
   gre = new TGraphErrors(4,Graph_fx1088,Graph_fy1088,Graph_fex1088,Graph_fey1088);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffc300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1088 = new TH1F("Graph_Graph1088","",100,343493.3,343501.7);
   Graph_Graph1088->SetMinimum(0.1536493);
   Graph_Graph1088->SetMaximum(0.2550461);
   Graph_Graph1088->SetDirectory(0);
   Graph_Graph1088->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1088->SetLineColor(ci);
   Graph_Graph1088->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1088->GetXaxis()->SetNoExponent();
   Graph_Graph1088->GetXaxis()->SetNdivisions(5);
   Graph_Graph1088->GetXaxis()->SetLabelFont(42);
   Graph_Graph1088->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1088->GetXaxis()->SetTitleFont(42);
   Graph_Graph1088->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1088->GetYaxis()->SetLabelFont(42);
   Graph_Graph1088->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1088->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1088->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1088->GetYaxis()->SetTitleFont(42);
   Graph_Graph1088->GetZaxis()->SetLabelFont(42);
   Graph_Graph1088->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1088->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1088->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1088);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1089[1] = {
   344068};
   Double_t Graph_fy1089[1] = {
   0.1994478};
   Double_t Graph_fex1089[1] = {
   0};
   Double_t Graph_fey1089[1] = {
   0.00237995};
   gre = new TGraphErrors(1,Graph_fx1089,Graph_fy1089,Graph_fex1089,Graph_fey1089);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1089 = new TH1F("Graph_Graph1089","",100,344067.9,344069.1);
   Graph_Graph1089->SetMinimum(0.1965918);
   Graph_Graph1089->SetMaximum(0.2023037);
   Graph_Graph1089->SetDirectory(0);
   Graph_Graph1089->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1089->SetLineColor(ci);
   Graph_Graph1089->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1089->GetXaxis()->SetNoExponent();
   Graph_Graph1089->GetXaxis()->SetNdivisions(5);
   Graph_Graph1089->GetXaxis()->SetLabelFont(42);
   Graph_Graph1089->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1089->GetXaxis()->SetTitleFont(42);
   Graph_Graph1089->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1089->GetYaxis()->SetLabelFont(42);
   Graph_Graph1089->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1089->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1089->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1089->GetYaxis()->SetTitleFont(42);
   Graph_Graph1089->GetZaxis()->SetLabelFont(42);
   Graph_Graph1089->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1089->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1089->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1089);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1090[6] = {
   344058,
   344062,
   344063,
   344064,
   344065,
   344067};
   Double_t Graph_fy1090[6] = {
   0.001117608,
   0.2028223,
   0.1982195,
   0.2013466,
   0.1978092,
   0.2042229};
   Double_t Graph_fex1090[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1090[6] = {
   0.000645251,
   0.01883158,
   0.001625569,
   0.001532449,
   0.00773495,
   0.003448058};
   gre = new TGraphErrors(6,Graph_fx1090,Graph_fy1090,Graph_fex1090,Graph_fey1090);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2fa4e1");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1090 = new TH1F("Graph_Graph1090","",100,344057.1,344067.9);
   Graph_Graph1090->SetMinimum(0.0004251209);
   Graph_Graph1090->SetMaximum(0.243772);
   Graph_Graph1090->SetDirectory(0);
   Graph_Graph1090->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1090->SetLineColor(ci);
   Graph_Graph1090->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1090->GetXaxis()->SetNoExponent();
   Graph_Graph1090->GetXaxis()->SetNdivisions(5);
   Graph_Graph1090->GetXaxis()->SetLabelFont(42);
   Graph_Graph1090->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1090->GetXaxis()->SetTitleFont(42);
   Graph_Graph1090->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1090->GetYaxis()->SetLabelFont(42);
   Graph_Graph1090->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1090->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1090->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1090->GetYaxis()->SetTitleFont(42);
   Graph_Graph1090->GetZaxis()->SetLabelFont(42);
   Graph_Graph1090->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1090->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1090->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1090);
   
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
      tex = new TLatex(0.23,0.83,"TID+");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
