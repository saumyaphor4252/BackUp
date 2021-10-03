void TID1P_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug  3 18:11:29 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(343311.3,-0.03503776,344128.7,0.2357085);
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
   multigraph->SetName("track rate TID1+");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1141[2] = {
   343772,
   343774};
   Double_t Graph_fy1141[2] = {
   0.07362042,
   0.08267322};
   Double_t Graph_fex1141[2] = {
   0,
   0};
   Double_t Graph_fey1141[2] = {
   0.007219076,
   0.00144508};
   TGraphErrors *gre = new TGraphErrors(2,Graph_fx1141,Graph_fy1141,Graph_fex1141,Graph_fey1141);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f5601b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1141 = new TH1F("Graph_Graph1141","",100,343771.8,343774.2);
   Graph_Graph1141->SetMinimum(0.06462965);
   Graph_Graph1141->SetMaximum(0.08589);
   Graph_Graph1141->SetDirectory(0);
   Graph_Graph1141->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1141->SetLineColor(ci);
   Graph_Graph1141->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1141->GetXaxis()->SetNoExponent();
   Graph_Graph1141->GetXaxis()->SetNdivisions(5);
   Graph_Graph1141->GetXaxis()->SetLabelFont(42);
   Graph_Graph1141->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1141->GetXaxis()->SetTitleFont(42);
   Graph_Graph1141->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1141->GetYaxis()->SetLabelFont(42);
   Graph_Graph1141->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1141->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1141->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1141->GetYaxis()->SetTitleFont(42);
   Graph_Graph1141->GetZaxis()->SetLabelFont(42);
   Graph_Graph1141->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1141->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1141->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1141);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1142[9] = {
   343854,
   343860,
   343862,
   343864,
   343866,
   343932,
   343934,
   343936,
   343937};
   Double_t Graph_fy1142[9] = {
   0.0166947,
   0.09956566,
   0.09444819,
   0.08552679,
   0.01622475,
   0,
   0.0853796,
   0.09665937,
   0.09410041};
   Double_t Graph_fex1142[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1142[9] = {
   0.00834735,
   0.009493214,
   0.001563318,
   0.004188265,
   0.004891947,
   0,
   0.006022213,
   0.003292231,
   0.001549936};
   gre = new TGraphErrors(9,Graph_fx1142,Graph_fy1142,Graph_fex1142,Graph_fey1142);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#196f3d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1142 = new TH1F("Graph_Graph1142","",100,343845.7,343945.3);
   Graph_Graph1142->SetMinimum(0);
   Graph_Graph1142->SetMaximum(0.1199648);
   Graph_Graph1142->SetDirectory(0);
   Graph_Graph1142->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1142->SetLineColor(ci);
   Graph_Graph1142->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1142->GetXaxis()->SetNoExponent();
   Graph_Graph1142->GetXaxis()->SetNdivisions(5);
   Graph_Graph1142->GetXaxis()->SetLabelFont(42);
   Graph_Graph1142->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1142->GetXaxis()->SetTitleFont(42);
   Graph_Graph1142->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1142->GetYaxis()->SetLabelFont(42);
   Graph_Graph1142->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1142->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1142->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1142->GetYaxis()->SetTitleFont(42);
   Graph_Graph1142->GetZaxis()->SetLabelFont(42);
   Graph_Graph1142->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1142->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1142->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1142);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1143[5] = {
   343644,
   343648,
   343650,
   343652,
   343663};
   Double_t Graph_fy1143[5] = {
   0.0815955,
   0.06931512,
   0.1395102,
   0.1230807,
   0.09443259};
   Double_t Graph_fex1143[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1143[5] = {
   0.002647308,
   0.004098689,
   0.06239085,
   0.03711022,
   0.01180407};
   gre = new TGraphErrors(5,Graph_fx1143,Graph_fy1143,Graph_fex1143,Graph_fey1143);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e317ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1143 = new TH1F("Graph_Graph1143","",100,343642.1,343664.9);
   Graph_Graph1143->SetMinimum(0.05154797);
   Graph_Graph1143->SetMaximum(0.2155695);
   Graph_Graph1143->SetDirectory(0);
   Graph_Graph1143->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1143->SetLineColor(ci);
   Graph_Graph1143->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1143->GetXaxis()->SetNoExponent();
   Graph_Graph1143->GetXaxis()->SetNdivisions(5);
   Graph_Graph1143->GetXaxis()->SetLabelFont(42);
   Graph_Graph1143->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1143->GetXaxis()->SetTitleFont(42);
   Graph_Graph1143->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1143->GetYaxis()->SetLabelFont(42);
   Graph_Graph1143->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1143->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1143->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1143->GetYaxis()->SetTitleFont(42);
   Graph_Graph1143->GetZaxis()->SetLabelFont(42);
   Graph_Graph1143->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1143->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1143->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1143);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1144[5] = {
   343638,
   343668,
   343673,
   343677,
   343680};
   Double_t Graph_fy1144[5] = {
   0.07993913,
   0.08515025,
   0.008579102,
   0.08484764,
   0.08123827};
   Double_t Graph_fex1144[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1144[5] = {
   0.003187382,
   0.003800442,
   0.004289551,
   0.002065159,
   0.001699486};
   gre = new TGraphErrors(5,Graph_fx1144,Graph_fy1144,Graph_fex1144,Graph_fey1144);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0bf9f4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1144 = new TH1F("Graph_Graph1144","",100,343633.8,343684.2);
   Graph_Graph1144->SetMinimum(0.003860596);
   Graph_Graph1144->SetMaximum(0.09741681);
   Graph_Graph1144->SetDirectory(0);
   Graph_Graph1144->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1144->SetLineColor(ci);
   Graph_Graph1144->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1144->GetXaxis()->SetNoExponent();
   Graph_Graph1144->GetXaxis()->SetNdivisions(5);
   Graph_Graph1144->GetXaxis()->SetLabelFont(42);
   Graph_Graph1144->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1144->GetXaxis()->SetTitleFont(42);
   Graph_Graph1144->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1144->GetYaxis()->SetLabelFont(42);
   Graph_Graph1144->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1144->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1144->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1144->GetYaxis()->SetTitleFont(42);
   Graph_Graph1144->GetZaxis()->SetLabelFont(42);
   Graph_Graph1144->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1144->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1144->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1144);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1145[2] = {
   343640,
   343642};
   Double_t Graph_fy1145[2] = {
   0.06873758,
   0.08231527};
   Double_t Graph_fex1145[2] = {
   0,
   0};
   Double_t Graph_fey1145[2] = {
   0.002801534,
   0.001382523};
   gre = new TGraphErrors(2,Graph_fx1145,Graph_fy1145,Graph_fex1145,Graph_fey1145);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2cf90b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1145 = new TH1F("Graph_Graph1145","",100,343639.8,343642.2);
   Graph_Graph1145->SetMinimum(0.06415987);
   Graph_Graph1145->SetMaximum(0.08547396);
   Graph_Graph1145->SetDirectory(0);
   Graph_Graph1145->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1145->SetLineColor(ci);
   Graph_Graph1145->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1145->GetXaxis()->SetNoExponent();
   Graph_Graph1145->GetXaxis()->SetNdivisions(5);
   Graph_Graph1145->GetXaxis()->SetLabelFont(42);
   Graph_Graph1145->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1145->GetXaxis()->SetTitleFont(42);
   Graph_Graph1145->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1145->GetYaxis()->SetLabelFont(42);
   Graph_Graph1145->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1145->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1145->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1145->GetYaxis()->SetTitleFont(42);
   Graph_Graph1145->GetZaxis()->SetLabelFont(42);
   Graph_Graph1145->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1145->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1145->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1145);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1146[4] = {
   343623,
   343625,
   343627,
   343629};
   Double_t Graph_fy1146[4] = {
   0.08306367,
   0.08180048,
   0.08395405,
   0.1245829};
   Double_t Graph_fex1146[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1146[4] = {
   0.005829927,
   0.001883584,
   0.02243767,
   0.0440467};
   gre = new TGraphErrors(4,Graph_fx1146,Graph_fy1146,Graph_fex1146,Graph_fey1146);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#f90b28");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1146 = new TH1F("Graph_Graph1146","",100,343622.4,343629.6);
   Graph_Graph1146->SetMinimum(0.05080507);
   Graph_Graph1146->SetMaximum(0.1793409);
   Graph_Graph1146->SetDirectory(0);
   Graph_Graph1146->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1146->SetLineColor(ci);
   Graph_Graph1146->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1146->GetXaxis()->SetNoExponent();
   Graph_Graph1146->GetXaxis()->SetNdivisions(5);
   Graph_Graph1146->GetXaxis()->SetLabelFont(42);
   Graph_Graph1146->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1146->GetXaxis()->SetTitleFont(42);
   Graph_Graph1146->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1146->GetYaxis()->SetLabelFont(42);
   Graph_Graph1146->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1146->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1146->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1146->GetYaxis()->SetTitleFont(42);
   Graph_Graph1146->GetZaxis()->SetLabelFont(42);
   Graph_Graph1146->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1146->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1146->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1146);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1147[2] = {
   343619,
   343621};
   Double_t Graph_fy1147[2] = {
   0.08103137,
   0.08265635};
   Double_t Graph_fex1147[2] = {
   0,
   0};
   Double_t Graph_fey1147[2] = {
   0.001845439,
   0.002510508};
   gre = new TGraphErrors(2,Graph_fx1147,Graph_fy1147,Graph_fex1147,Graph_fey1147);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#1b38f5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1147 = new TH1F("Graph_Graph1147","",100,343618.8,343621.2);
   Graph_Graph1147->SetMinimum(0.07858784);
   Graph_Graph1147->SetMaximum(0.08576496);
   Graph_Graph1147->SetDirectory(0);
   Graph_Graph1147->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1147->SetLineColor(ci);
   Graph_Graph1147->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1147->GetXaxis()->SetNoExponent();
   Graph_Graph1147->GetXaxis()->SetNdivisions(5);
   Graph_Graph1147->GetXaxis()->SetLabelFont(42);
   Graph_Graph1147->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1147->GetXaxis()->SetTitleFont(42);
   Graph_Graph1147->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1147->GetYaxis()->SetLabelFont(42);
   Graph_Graph1147->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1147->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1147->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1147->GetYaxis()->SetTitleFont(42);
   Graph_Graph1147->GetZaxis()->SetLabelFont(42);
   Graph_Graph1147->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1147->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1147->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1147);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1148[4] = {
   343494,
   343496,
   343498,
   343501};
   Double_t Graph_fy1148[4] = {
   0.07086888,
   0.09045079,
   0.0869064,
   0.08875542};
   Double_t Graph_fex1148[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1148[4] = {
   0.00712259,
   0.003052566,
   0.001690134,
   0.01811713};
   gre = new TGraphErrors(4,Graph_fx1148,Graph_fy1148,Graph_fex1148,Graph_fey1148);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffc300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1148 = new TH1F("Graph_Graph1148","",100,343493.3,343501.7);
   Graph_Graph1148->SetMinimum(0.05943367);
   Graph_Graph1148->SetMaximum(0.1111852);
   Graph_Graph1148->SetDirectory(0);
   Graph_Graph1148->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1148->SetLineColor(ci);
   Graph_Graph1148->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1148->GetXaxis()->SetNoExponent();
   Graph_Graph1148->GetXaxis()->SetNdivisions(5);
   Graph_Graph1148->GetXaxis()->SetLabelFont(42);
   Graph_Graph1148->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1148->GetXaxis()->SetTitleFont(42);
   Graph_Graph1148->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1148->GetYaxis()->SetLabelFont(42);
   Graph_Graph1148->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1148->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1148->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1148->GetYaxis()->SetTitleFont(42);
   Graph_Graph1148->GetZaxis()->SetLabelFont(42);
   Graph_Graph1148->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1148->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1148->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1148);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1149[1] = {
   344068};
   Double_t Graph_fy1149[1] = {
   0.09297907};
   Double_t Graph_fex1149[1] = {
   0};
   Double_t Graph_fey1149[1] = {
   0.001624972};
   gre = new TGraphErrors(1,Graph_fx1149,Graph_fy1149,Graph_fex1149,Graph_fey1149);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1149 = new TH1F("Graph_Graph1149","",100,344067.9,344069.1);
   Graph_Graph1149->SetMinimum(0.0910291);
   Graph_Graph1149->SetMaximum(0.09492903);
   Graph_Graph1149->SetDirectory(0);
   Graph_Graph1149->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1149->SetLineColor(ci);
   Graph_Graph1149->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1149->GetXaxis()->SetNoExponent();
   Graph_Graph1149->GetXaxis()->SetNdivisions(5);
   Graph_Graph1149->GetXaxis()->SetLabelFont(42);
   Graph_Graph1149->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1149->GetXaxis()->SetTitleFont(42);
   Graph_Graph1149->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1149->GetYaxis()->SetLabelFont(42);
   Graph_Graph1149->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1149->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1149->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1149->GetYaxis()->SetTitleFont(42);
   Graph_Graph1149->GetZaxis()->SetLabelFont(42);
   Graph_Graph1149->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1149->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1149->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1149);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1150[6] = {
   344058,
   344062,
   344063,
   344064,
   344065,
   344067};
   Double_t Graph_fy1150[6] = {
   0.001117608,
   0.09616574,
   0.09253085,
   0.09431085,
   0.09739228,
   0.09704661};
   Double_t Graph_fex1150[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1150[6] = {
   0.000645251,
   0.01296699,
   0.001110646,
   0.001048805,
   0.00542746,
   0.002376909};
   gre = new TGraphErrors(6,Graph_fx1150,Graph_fy1150,Graph_fex1150,Graph_fey1150);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2fa4e1");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1150 = new TH1F("Graph_Graph1150","",100,344057.1,344067.9);
   Graph_Graph1150->SetMinimum(0.0004251209);
   Graph_Graph1150->SetMaximum(0.1199988);
   Graph_Graph1150->SetDirectory(0);
   Graph_Graph1150->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1150->SetLineColor(ci);
   Graph_Graph1150->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1150->GetXaxis()->SetNoExponent();
   Graph_Graph1150->GetXaxis()->SetNdivisions(5);
   Graph_Graph1150->GetXaxis()->SetLabelFont(42);
   Graph_Graph1150->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1150->GetXaxis()->SetTitleFont(42);
   Graph_Graph1150->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1150->GetYaxis()->SetLabelFont(42);
   Graph_Graph1150->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1150->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1150->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1150->GetYaxis()->SetTitleFont(42);
   Graph_Graph1150->GetZaxis()->SetLabelFont(42);
   Graph_Graph1150->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1150->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1150->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1150);
   
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
      tex = new TLatex(0.23,0.83,"TID 1+");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
