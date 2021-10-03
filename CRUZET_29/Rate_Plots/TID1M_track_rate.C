void TID1M_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug  3 18:11:29 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(343311.3,-0.03243004,344128.7,0.2181657);
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
   multigraph->SetName("track rate TID1-");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1151[2] = {
   343772,
   343774};
   Double_t Graph_fy1151[2] = {
   0.0686652,
   0.07741932};
   Double_t Graph_fex1151[2] = {
   0,
   0};
   Double_t Graph_fey1151[2] = {
   0.006971895,
   0.001398409};
   TGraphErrors *gre = new TGraphErrors(2,Graph_fx1151,Graph_fy1151,Graph_fex1151,Graph_fey1151);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f5601b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1151 = new TH1F("Graph_Graph1151","",100,343771.8,343774.2);
   Graph_Graph1151->SetMinimum(0.05998086);
   Graph_Graph1151->SetMaximum(0.08053017);
   Graph_Graph1151->SetDirectory(0);
   Graph_Graph1151->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1151->SetLineColor(ci);
   Graph_Graph1151->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1151->GetXaxis()->SetNoExponent();
   Graph_Graph1151->GetXaxis()->SetNdivisions(5);
   Graph_Graph1151->GetXaxis()->SetLabelFont(42);
   Graph_Graph1151->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1151->GetXaxis()->SetTitleFont(42);
   Graph_Graph1151->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1151->GetYaxis()->SetLabelFont(42);
   Graph_Graph1151->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1151->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1151->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1151->GetYaxis()->SetTitleFont(42);
   Graph_Graph1151->GetZaxis()->SetLabelFont(42);
   Graph_Graph1151->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1151->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1151->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1151);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1152[9] = {
   343854,
   343860,
   343862,
   343864,
   343866,
   343932,
   343934,
   343936,
   343937};
   Double_t Graph_fy1152[9] = {
   0,
   0.08236796,
   0.08852253,
   0.09147469,
   0.00589991,
   0,
   0.09429986,
   0.09004347,
   0.0903221};
   Double_t Graph_fex1152[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1152[9] = {
   0,
   0.008634509,
   0.001513482,
   0.004331452,
   0.002949955,
   0,
   0.006328992,
   0.003177565,
   0.001518501};
   gre = new TGraphErrors(9,Graph_fx1152,Graph_fy1152,Graph_fex1152,Graph_fey1152);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#196f3d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1152 = new TH1F("Graph_Graph1152","",100,343845.7,343945.3);
   Graph_Graph1152->SetMinimum(0);
   Graph_Graph1152->SetMaximum(0.1106917);
   Graph_Graph1152->SetDirectory(0);
   Graph_Graph1152->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1152->SetLineColor(ci);
   Graph_Graph1152->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1152->GetXaxis()->SetNoExponent();
   Graph_Graph1152->GetXaxis()->SetNdivisions(5);
   Graph_Graph1152->GetXaxis()->SetLabelFont(42);
   Graph_Graph1152->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1152->GetXaxis()->SetTitleFont(42);
   Graph_Graph1152->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1152->GetYaxis()->SetLabelFont(42);
   Graph_Graph1152->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1152->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1152->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1152->GetYaxis()->SetTitleFont(42);
   Graph_Graph1152->GetZaxis()->SetLabelFont(42);
   Graph_Graph1152->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1152->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1152->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1152);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1153[5] = {
   343644,
   343648,
   343650,
   343652,
   343663};
   Double_t Graph_fy1153[5] = {
   0.07489608,
   0.07755538,
   0.02790203,
   0.08951321,
   0.07820199};
   Double_t Graph_fex1153[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1153[5] = {
   0.002536301,
   0.004335477,
   0.02790203,
   0.0316477,
   0.01074187};
   gre = new TGraphErrors(5,Graph_fx1153,Graph_fy1153,Graph_fex1153,Graph_fey1153);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e317ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1153 = new TH1F("Graph_Graph1153","",100,343642.1,343664.9);
   Graph_Graph1153->SetMinimum(0);
   Graph_Graph1153->SetMaximum(0.133277);
   Graph_Graph1153->SetDirectory(0);
   Graph_Graph1153->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1153->SetLineColor(ci);
   Graph_Graph1153->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1153->GetXaxis()->SetNoExponent();
   Graph_Graph1153->GetXaxis()->SetNdivisions(5);
   Graph_Graph1153->GetXaxis()->SetLabelFont(42);
   Graph_Graph1153->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1153->GetXaxis()->SetTitleFont(42);
   Graph_Graph1153->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1153->GetYaxis()->SetLabelFont(42);
   Graph_Graph1153->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1153->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1153->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1153->GetYaxis()->SetTitleFont(42);
   Graph_Graph1153->GetZaxis()->SetLabelFont(42);
   Graph_Graph1153->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1153->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1153->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1153);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1154[5] = {
   343638,
   343668,
   343673,
   343677,
   343680};
   Double_t Graph_fy1154[5] = {
   0.07422011,
   0.08328441,
   0.01072388,
   0.07680521,
   0.07430547};
   Double_t Graph_fex1154[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1154[5] = {
   0.00307125,
   0.003758573,
   0.004795864,
   0.001964848,
   0.001625353};
   gre = new TGraphErrors(5,Graph_fx1154,Graph_fy1154,Graph_fex1154,Graph_fey1154);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0bf9f4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1154 = new TH1F("Graph_Graph1154","",100,343633.8,343684.2);
   Graph_Graph1154->SetMinimum(0.005335212);
   Graph_Graph1154->SetMaximum(0.09515448);
   Graph_Graph1154->SetDirectory(0);
   Graph_Graph1154->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1154->SetLineColor(ci);
   Graph_Graph1154->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1154->GetXaxis()->SetNoExponent();
   Graph_Graph1154->GetXaxis()->SetNdivisions(5);
   Graph_Graph1154->GetXaxis()->SetLabelFont(42);
   Graph_Graph1154->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1154->GetXaxis()->SetTitleFont(42);
   Graph_Graph1154->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1154->GetYaxis()->SetLabelFont(42);
   Graph_Graph1154->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1154->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1154->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1154->GetYaxis()->SetTitleFont(42);
   Graph_Graph1154->GetZaxis()->SetLabelFont(42);
   Graph_Graph1154->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1154->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1154->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1154);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1155[2] = {
   343640,
   343642};
   Double_t Graph_fy1155[2] = {
   0.06725321,
   0.07688176};
   Double_t Graph_fex1155[2] = {
   0,
   0};
   Double_t Graph_fey1155[2] = {
   0.00277112,
   0.001336115};
   gre = new TGraphErrors(2,Graph_fx1155,Graph_fy1155,Graph_fex1155,Graph_fey1155);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2cf90b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1155 = new TH1F("Graph_Graph1155","",100,343639.8,343642.2);
   Graph_Graph1155->SetMinimum(0.06310851);
   Graph_Graph1155->SetMaximum(0.07959146);
   Graph_Graph1155->SetDirectory(0);
   Graph_Graph1155->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1155->SetLineColor(ci);
   Graph_Graph1155->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1155->GetXaxis()->SetNoExponent();
   Graph_Graph1155->GetXaxis()->SetNdivisions(5);
   Graph_Graph1155->GetXaxis()->SetLabelFont(42);
   Graph_Graph1155->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1155->GetXaxis()->SetTitleFont(42);
   Graph_Graph1155->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1155->GetYaxis()->SetLabelFont(42);
   Graph_Graph1155->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1155->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1155->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1155->GetYaxis()->SetTitleFont(42);
   Graph_Graph1155->GetZaxis()->SetLabelFont(42);
   Graph_Graph1155->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1155->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1155->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1155);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1156[4] = {
   343623,
   343625,
   343627,
   343629};
   Double_t Graph_fy1156[4] = {
   0.08142695,
   0.07308262,
   0.09594749,
   0.1401558};
   Double_t Graph_fex1156[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1156[4] = {
   0.005772203,
   0.001780386,
   0.02398687,
   0.04671859};
   gre = new TGraphErrors(4,Graph_fx1156,Graph_fy1156,Graph_fex1156,Graph_fey1156);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#f90b28");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1156 = new TH1F("Graph_Graph1156","",100,343622.4,343629.6);
   Graph_Graph1156->SetMinimum(0.05974502);
   Graph_Graph1156->SetMaximum(0.1984316);
   Graph_Graph1156->SetDirectory(0);
   Graph_Graph1156->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1156->SetLineColor(ci);
   Graph_Graph1156->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1156->GetXaxis()->SetNoExponent();
   Graph_Graph1156->GetXaxis()->SetNdivisions(5);
   Graph_Graph1156->GetXaxis()->SetLabelFont(42);
   Graph_Graph1156->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1156->GetXaxis()->SetTitleFont(42);
   Graph_Graph1156->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1156->GetYaxis()->SetLabelFont(42);
   Graph_Graph1156->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1156->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1156->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1156->GetYaxis()->SetTitleFont(42);
   Graph_Graph1156->GetZaxis()->SetLabelFont(42);
   Graph_Graph1156->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1156->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1156->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1156);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1157[2] = {
   343619,
   343621};
   Double_t Graph_fy1157[2] = {
   0.07792125,
   0.07861504};
   Double_t Graph_fex1157[2] = {
   0,
   0};
   Double_t Graph_fey1157[2] = {
   0.001809677,
   0.002448366};
   gre = new TGraphErrors(2,Graph_fx1157,Graph_fy1157,Graph_fex1157,Graph_fey1157);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#1b38f5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1157 = new TH1F("Graph_Graph1157","",100,343618.8,343621.2);
   Graph_Graph1157->SetMinimum(0.07561639);
   Graph_Graph1157->SetMaximum(0.08155859);
   Graph_Graph1157->SetDirectory(0);
   Graph_Graph1157->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1157->SetLineColor(ci);
   Graph_Graph1157->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1157->GetXaxis()->SetNoExponent();
   Graph_Graph1157->GetXaxis()->SetNdivisions(5);
   Graph_Graph1157->GetXaxis()->SetLabelFont(42);
   Graph_Graph1157->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1157->GetXaxis()->SetTitleFont(42);
   Graph_Graph1157->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1157->GetYaxis()->SetLabelFont(42);
   Graph_Graph1157->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1157->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1157->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1157->GetYaxis()->SetTitleFont(42);
   Graph_Graph1157->GetZaxis()->SetLabelFont(42);
   Graph_Graph1157->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1157->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1157->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1157);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1158[4] = {
   343494,
   343496,
   343498,
   343501};
   Double_t Graph_fy1158[4] = {
   0.08160659,
   0.08396058,
   0.08513145,
   0.09245356};
   Double_t Graph_fex1158[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1158[4] = {
   0.007643158,
   0.002941011,
   0.001672785,
   0.01849071};
   gre = new TGraphErrors(4,Graph_fx1158,Graph_fy1158,Graph_fex1158,Graph_fey1158);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffc300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1158 = new TH1F("Graph_Graph1158","",100,343493.3,343501.7);
   Graph_Graph1158->SetMinimum(0.07026471);
   Graph_Graph1158->SetMaximum(0.1146424);
   Graph_Graph1158->SetDirectory(0);
   Graph_Graph1158->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1158->SetLineColor(ci);
   Graph_Graph1158->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1158->GetXaxis()->SetNoExponent();
   Graph_Graph1158->GetXaxis()->SetNdivisions(5);
   Graph_Graph1158->GetXaxis()->SetLabelFont(42);
   Graph_Graph1158->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1158->GetXaxis()->SetTitleFont(42);
   Graph_Graph1158->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1158->GetYaxis()->SetLabelFont(42);
   Graph_Graph1158->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1158->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1158->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1158->GetYaxis()->SetTitleFont(42);
   Graph_Graph1158->GetZaxis()->SetLabelFont(42);
   Graph_Graph1158->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1158->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1158->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1158);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1159[1] = {
   344068};
   Double_t Graph_fy1159[1] = {
   0.08928717};
   Double_t Graph_fex1159[1] = {
   0};
   Double_t Graph_fey1159[1] = {
   0.001592384};
   gre = new TGraphErrors(1,Graph_fx1159,Graph_fy1159,Graph_fex1159,Graph_fey1159);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1159 = new TH1F("Graph_Graph1159","",100,344067.9,344069.1);
   Graph_Graph1159->SetMinimum(0.08737631);
   Graph_Graph1159->SetMaximum(0.09119803);
   Graph_Graph1159->SetDirectory(0);
   Graph_Graph1159->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1159->SetLineColor(ci);
   Graph_Graph1159->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1159->GetXaxis()->SetNoExponent();
   Graph_Graph1159->GetXaxis()->SetNdivisions(5);
   Graph_Graph1159->GetXaxis()->SetLabelFont(42);
   Graph_Graph1159->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1159->GetXaxis()->SetTitleFont(42);
   Graph_Graph1159->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1159->GetYaxis()->SetLabelFont(42);
   Graph_Graph1159->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1159->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1159->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1159->GetYaxis()->SetTitleFont(42);
   Graph_Graph1159->GetZaxis()->SetLabelFont(42);
   Graph_Graph1159->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1159->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1159->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1159);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1160[6] = {
   344058,
   344062,
   344063,
   344064,
   344065,
   344067};
   Double_t Graph_fy1160[6] = {
   0,
   0.09616574,
   0.09137105,
   0.08958714,
   0.09527506,
   0.09070103};
   Double_t Graph_fex1160[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1160[6] = {
   0,
   0.01296699,
   0.001103663,
   0.001022202,
   0.005368141,
   0.002297886};
   gre = new TGraphErrors(6,Graph_fx1160,Graph_fy1160,Graph_fex1160,Graph_fey1160);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2fa4e1");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1160 = new TH1F("Graph_Graph1160","",100,344057.1,344067.9);
   Graph_Graph1160->SetMinimum(0);
   Graph_Graph1160->SetMaximum(0.120046);
   Graph_Graph1160->SetDirectory(0);
   Graph_Graph1160->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1160->SetLineColor(ci);
   Graph_Graph1160->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1160->GetXaxis()->SetNoExponent();
   Graph_Graph1160->GetXaxis()->SetNdivisions(5);
   Graph_Graph1160->GetXaxis()->SetLabelFont(42);
   Graph_Graph1160->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1160->GetXaxis()->SetTitleFont(42);
   Graph_Graph1160->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1160->GetYaxis()->SetLabelFont(42);
   Graph_Graph1160->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1160->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1160->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1160->GetYaxis()->SetTitleFont(42);
   Graph_Graph1160->GetZaxis()->SetLabelFont(42);
   Graph_Graph1160->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1160->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1160->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1160);
   
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
      tex = new TLatex(0.23,0.83,"TID 1-");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
