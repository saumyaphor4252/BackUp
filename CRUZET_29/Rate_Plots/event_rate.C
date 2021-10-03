void event_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug  3 18:11:25 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(343311.3,-1.05465,344128.7,7.094918);
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
   multigraph->SetName("event rate");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1001[2] = {
   343772,
   343774};
   Double_t Graph_fy1001[2] = {
   3.663324,
   4.219239};
   Double_t Graph_fex1001[2] = {
   0,
   0};
   Double_t Graph_fey1001[2] = {
   0.05092372,
   0.01032349};
   TGraphErrors *gre = new TGraphErrors(2,Graph_fx1001,Graph_fy1001,Graph_fex1001,Graph_fey1001);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f5601b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","",100,343771.8,343774.2);
   Graph_Graph1001->SetMinimum(3.550684);
   Graph_Graph1001->SetMaximum(4.291279);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1001->GetXaxis()->SetNoExponent();
   Graph_Graph1001->GetXaxis()->SetNdivisions(5);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1001->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1002[9] = {
   343854,
   343860,
   343862,
   343864,
   343866,
   343932,
   343934,
   343936,
   343937};
   Double_t Graph_fy1002[9] = {
   0.2170311,
   4.601744,
   4.471772,
   4.482875,
   0.2433713,
   0.007092776,
   4.264732,
   4.499707,
   4.488738};
   Double_t Graph_fex1002[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1002[9] = {
   0.0300968,
   0.06453862,
   0.01075698,
   0.03032225,
   0.01894643,
   0.003171986,
   0.04256228,
   0.02246262,
   0.01070484};
   gre = new TGraphErrors(9,Graph_fx1002,Graph_fy1002,Graph_fex1002,Graph_fey1002);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#196f3d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","",100,343845.7,343945.3);
   Graph_Graph1002->SetMinimum(0.003528711);
   Graph_Graph1002->SetMaximum(5.132519);
   Graph_Graph1002->SetDirectory(0);
   Graph_Graph1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1002->SetLineColor(ci);
   Graph_Graph1002->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1002->GetXaxis()->SetNoExponent();
   Graph_Graph1002->GetXaxis()->SetNdivisions(5);
   Graph_Graph1002->GetXaxis()->SetLabelFont(42);
   Graph_Graph1002->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1002->GetXaxis()->SetTitleFont(42);
   Graph_Graph1002->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1002->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1002->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1002->GetYaxis()->SetTitleFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1002->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1002);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1003[5] = {
   343644,
   343648,
   343650,
   343652,
   343663};
   Double_t Graph_fy1003[5] = {
   4.222267,
   4.208833,
   5.636211,
   4.934415,
   4.062077};
   Double_t Graph_fex1003[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1003[5] = {
   0.01904338,
   0.0319383,
   0.3965624,
   0.2349722,
   0.07741856};
   gre = new TGraphErrors(5,Graph_fx1003,Graph_fy1003,Graph_fex1003,Graph_fey1003);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e317ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","",100,343642.1,343664.9);
   Graph_Graph1003->SetMinimum(3.779847);
   Graph_Graph1003->SetMaximum(6.237585);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1003->SetLineColor(ci);
   Graph_Graph1003->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1003->GetXaxis()->SetNoExponent();
   Graph_Graph1003->GetXaxis()->SetNdivisions(5);
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1003->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1003->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1003);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1004[5] = {
   343638,
   343668,
   343673,
   343677,
   343680};
   Double_t Graph_fy1004[5] = {
   4.189115,
   4.263619,
   0.2016089,
   4.231173,
   4.209885};
   Double_t Graph_fex1004[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1004[5] = {
   0.02307361,
   0.02689245,
   0.02079437,
   0.01458358,
   0.01223411};
   gre = new TGraphErrors(5,Graph_fx1004,Graph_fy1004,Graph_fex1004,Graph_fey1004);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0bf9f4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1004 = new TH1F("Graph_Graph1004","",100,343633.8,343684.2);
   Graph_Graph1004->SetMinimum(0.1627331);
   Graph_Graph1004->SetMaximum(4.701481);
   Graph_Graph1004->SetDirectory(0);
   Graph_Graph1004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1004->SetLineColor(ci);
   Graph_Graph1004->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1004->GetXaxis()->SetNoExponent();
   Graph_Graph1004->GetXaxis()->SetNdivisions(5);
   Graph_Graph1004->GetXaxis()->SetLabelFont(42);
   Graph_Graph1004->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1004->GetXaxis()->SetTitleFont(42);
   Graph_Graph1004->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1004->GetYaxis()->SetLabelFont(42);
   Graph_Graph1004->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1004->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1004->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1004->GetYaxis()->SetTitleFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1004->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1004);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1005[2] = {
   343640,
   343642};
   Double_t Graph_fy1005[2] = {
   3.593537,
   4.232375};
   Double_t Graph_fex1005[2] = {
   0,
   0};
   Double_t Graph_fey1005[2] = {
   0.02025629,
   0.009913434};
   gre = new TGraphErrors(2,Graph_fx1005,Graph_fy1005,Graph_fex1005,Graph_fey1005);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2cf90b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1005 = new TH1F("Graph_Graph1005","",100,343639.8,343642.2);
   Graph_Graph1005->SetMinimum(3.506379);
   Graph_Graph1005->SetMaximum(4.309189);
   Graph_Graph1005->SetDirectory(0);
   Graph_Graph1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1005->SetLineColor(ci);
   Graph_Graph1005->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1005->GetXaxis()->SetNoExponent();
   Graph_Graph1005->GetXaxis()->SetNdivisions(5);
   Graph_Graph1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph1005->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph1005->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph1005->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1005->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1005->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1005);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1006[4] = {
   343623,
   343625,
   343627,
   343629};
   Double_t Graph_fy1006[4] = {
   4.253024,
   4.221486,
   4.209696,
   5.777532};
   Double_t Graph_fex1006[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1006[4] = {
   0.04171636,
   0.01353131,
   0.1588847,
   0.2999545};
   gre = new TGraphErrors(4,Graph_fx1006,Graph_fy1006,Graph_fex1006,Graph_fey1006);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#f90b28");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1006 = new TH1F("Graph_Graph1006","",100,343622.4,343629.6);
   Graph_Graph1006->SetMinimum(3.848144);
   Graph_Graph1006->SetMaximum(6.280154);
   Graph_Graph1006->SetDirectory(0);
   Graph_Graph1006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1006->SetLineColor(ci);
   Graph_Graph1006->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1006->GetXaxis()->SetNoExponent();
   Graph_Graph1006->GetXaxis()->SetNdivisions(5);
   Graph_Graph1006->GetXaxis()->SetLabelFont(42);
   Graph_Graph1006->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1006->GetXaxis()->SetTitleFont(42);
   Graph_Graph1006->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1006->GetYaxis()->SetLabelFont(42);
   Graph_Graph1006->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1006->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1006->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1006->GetYaxis()->SetTitleFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1006->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1006);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1007[2] = {
   343619,
   343621};
   Double_t Graph_fy1007[2] = {
   4.191146,
   4.214559};
   Double_t Graph_fex1007[2] = {
   0,
   0};
   Double_t Graph_fey1007[2] = {
   0.0132721,
   0.01792667};
   gre = new TGraphErrors(2,Graph_fx1007,Graph_fy1007,Graph_fex1007,Graph_fey1007);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#1b38f5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1007 = new TH1F("Graph_Graph1007","",100,343618.8,343621.2);
   Graph_Graph1007->SetMinimum(4.172413);
   Graph_Graph1007->SetMaximum(4.237947);
   Graph_Graph1007->SetDirectory(0);
   Graph_Graph1007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1007->SetLineColor(ci);
   Graph_Graph1007->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1007->GetXaxis()->SetNoExponent();
   Graph_Graph1007->GetXaxis()->SetNdivisions(5);
   Graph_Graph1007->GetXaxis()->SetLabelFont(42);
   Graph_Graph1007->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1007->GetXaxis()->SetTitleFont(42);
   Graph_Graph1007->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1007->GetYaxis()->SetLabelFont(42);
   Graph_Graph1007->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1007->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1007->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1007->GetYaxis()->SetTitleFont(42);
   Graph_Graph1007->GetZaxis()->SetLabelFont(42);
   Graph_Graph1007->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1007->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1007);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1008[4] = {
   343494,
   343496,
   343498,
   343501};
   Double_t Graph_fy1008[4] = {
   4.224931,
   4.291364,
   4.258972,
   4.685547};
   Double_t Graph_fex1008[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1008[4] = {
   0.05499459,
   0.021026,
   0.01183171,
   0.1316352};
   gre = new TGraphErrors(4,Graph_fx1008,Graph_fy1008,Graph_fex1008,Graph_fey1008);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffc300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1008 = new TH1F("Graph_Graph1008","",100,343493.3,343501.7);
   Graph_Graph1008->SetMinimum(4.105212);
   Graph_Graph1008->SetMaximum(4.881906);
   Graph_Graph1008->SetDirectory(0);
   Graph_Graph1008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1008->SetLineColor(ci);
   Graph_Graph1008->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1008->GetXaxis()->SetNoExponent();
   Graph_Graph1008->GetXaxis()->SetNdivisions(5);
   Graph_Graph1008->GetXaxis()->SetLabelFont(42);
   Graph_Graph1008->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1008->GetXaxis()->SetTitleFont(42);
   Graph_Graph1008->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1008->GetYaxis()->SetLabelFont(42);
   Graph_Graph1008->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1008->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1008->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1008->GetYaxis()->SetTitleFont(42);
   Graph_Graph1008->GetZaxis()->SetLabelFont(42);
   Graph_Graph1008->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1008->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1008);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1009[1] = {
   344068};
   Double_t Graph_fy1009[1] = {
   4.555066};
   Double_t Graph_fex1009[1] = {
   0};
   Double_t Graph_fey1009[1] = {
   0.01137367};
   gre = new TGraphErrors(1,Graph_fx1009,Graph_fy1009,Graph_fex1009,Graph_fey1009);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1009 = new TH1F("Graph_Graph1009","",100,344067.9,344069.1);
   Graph_Graph1009->SetMinimum(4.541417);
   Graph_Graph1009->SetMaximum(4.568714);
   Graph_Graph1009->SetDirectory(0);
   Graph_Graph1009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1009->SetLineColor(ci);
   Graph_Graph1009->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1009->GetXaxis()->SetNoExponent();
   Graph_Graph1009->GetXaxis()->SetNdivisions(5);
   Graph_Graph1009->GetXaxis()->SetLabelFont(42);
   Graph_Graph1009->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1009->GetXaxis()->SetTitleFont(42);
   Graph_Graph1009->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1009->GetYaxis()->SetLabelFont(42);
   Graph_Graph1009->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1009->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1009->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1009->GetYaxis()->SetTitleFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1009->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1009);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1010[6] = {
   344058,
   344062,
   344063,
   344064,
   344065,
   344067};
   Double_t Graph_fy1010[6] = {
   0.006333109,
   4.566999,
   4.516495,
   4.540999,
   4.527229,
   4.552866};
   Double_t Graph_fex1010[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1010[6] = {
   0.001536005,
   0.08936024,
   0.007759487,
   0.007277625,
   0.03700416,
   0.01628039};
   gre = new TGraphErrors(6,Graph_fx1010,Graph_fy1010,Graph_fex1010,Graph_fey1010);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2fa4e1");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1010 = new TH1F("Graph_Graph1010","",100,344057.1,344067.9);
   Graph_Graph1010->SetMinimum(0.004317394);
   Graph_Graph1010->SetMaximum(5.121515);
   Graph_Graph1010->SetDirectory(0);
   Graph_Graph1010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1010->SetLineColor(ci);
   Graph_Graph1010->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1010->GetXaxis()->SetNoExponent();
   Graph_Graph1010->GetXaxis()->SetNdivisions(5);
   Graph_Graph1010->GetXaxis()->SetLabelFont(42);
   Graph_Graph1010->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1010->GetXaxis()->SetTitleFont(42);
   Graph_Graph1010->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1010->GetYaxis()->SetLabelFont(42);
   Graph_Graph1010->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1010->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1010->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1010->GetYaxis()->SetTitleFont(42);
   Graph_Graph1010->GetZaxis()->SetLabelFont(42);
   Graph_Graph1010->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1010->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1010);
   
   multigraph->Add(gre,"");
   multigraph->Draw("AP");
   multigraph->GetXaxis()->SetTitle("Run Number");
   multigraph->GetXaxis()->SetNoExponent();
   multigraph->GetXaxis()->SetNdivisions(5);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleSize(0.05);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("Event Rate (Hz)");
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
      tex = new TLatex(0.23,0.83,"Event Rate");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
