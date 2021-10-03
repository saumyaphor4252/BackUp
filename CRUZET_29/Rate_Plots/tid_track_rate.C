void tid_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug  3 18:11:27 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(343311.3,-0.1076433,344128.7,0.7241455);
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
   multigraph->SetName("track rate TID");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1061[2] = {
   343772,
   343774};
   Double_t Graph_fy1061[2] = {
   0.2852791,
   0.3235951};
   Double_t Graph_fex1061[2] = {
   0,
   0};
   Double_t Graph_fey1061[2] = {
   0.01421077,
   0.002858975};
   TGraphErrors *gre = new TGraphErrors(2,Graph_fx1061,Graph_fy1061,Graph_fex1061,Graph_fey1061);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f5601b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1061 = new TH1F("Graph_Graph1061","",100,343771.8,343774.2);
   Graph_Graph1061->SetMinimum(0.2655298);
   Graph_Graph1061->SetMaximum(0.3319926);
   Graph_Graph1061->SetDirectory(0);
   Graph_Graph1061->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1061->SetLineColor(ci);
   Graph_Graph1061->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1061->GetXaxis()->SetNoExponent();
   Graph_Graph1061->GetXaxis()->SetNdivisions(5);
   Graph_Graph1061->GetXaxis()->SetLabelFont(42);
   Graph_Graph1061->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1061->GetXaxis()->SetTitleFont(42);
   Graph_Graph1061->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1061->GetYaxis()->SetLabelFont(42);
   Graph_Graph1061->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1061->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1061->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1061->GetYaxis()->SetTitleFont(42);
   Graph_Graph1061->GetZaxis()->SetLabelFont(42);
   Graph_Graph1061->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1061->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1061->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1061);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1062[9] = {
   343854,
   343860,
   343862,
   343864,
   343866,
   343932,
   343934,
   343936,
   343937};
   Double_t Graph_fy1062[9] = {
   0.03756308,
   0.3783495,
   0.3687102,
   0.3681549,
   0.04277435,
   0,
   0.3542616,
   0.3722843,
   0.3665219};
   Double_t Graph_fex1062[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1062[9] = {
   0.01252103,
   0.01850568,
   0.003088823,
   0.008689571,
   0.007942997,
   0,
   0.01226708,
   0.006461089,
   0.003058919};
   gre = new TGraphErrors(9,Graph_fx1062,Graph_fy1062,Graph_fex1062,Graph_fey1062);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#196f3d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1062 = new TH1F("Graph_Graph1062","",100,343845.7,343945.3);
   Graph_Graph1062->SetMinimum(0);
   Graph_Graph1062->SetMaximum(0.4365407);
   Graph_Graph1062->SetDirectory(0);
   Graph_Graph1062->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1062->SetLineColor(ci);
   Graph_Graph1062->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1062->GetXaxis()->SetNoExponent();
   Graph_Graph1062->GetXaxis()->SetNdivisions(5);
   Graph_Graph1062->GetXaxis()->SetLabelFont(42);
   Graph_Graph1062->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1062->GetXaxis()->SetTitleFont(42);
   Graph_Graph1062->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1062->GetYaxis()->SetLabelFont(42);
   Graph_Graph1062->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1062->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1062->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1062->GetYaxis()->SetTitleFont(42);
   Graph_Graph1062->GetZaxis()->SetLabelFont(42);
   Graph_Graph1062->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1062->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1062->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1062);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1063[5] = {
   343644,
   343648,
   343650,
   343652,
   343663};
   Double_t Graph_fy1063[5] = {
   0.3250078,
   0.2961646,
   0.4464326,
   0.3916203,
   0.3290386};
   Double_t Graph_fex1063[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1063[5] = {
   0.005283457,
   0.008472226,
   0.1116081,
   0.06619591,
   0.02203405};
   gre = new TGraphErrors(5,Graph_fx1063,Graph_fy1063,Graph_fex1063,Graph_fey1063);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e317ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1063 = new TH1F("Graph_Graph1063","",100,343642.1,343664.9);
   Graph_Graph1063->SetMinimum(0.2606575);
   Graph_Graph1063->SetMaximum(0.5850755);
   Graph_Graph1063->SetDirectory(0);
   Graph_Graph1063->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1063->SetLineColor(ci);
   Graph_Graph1063->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1063->GetXaxis()->SetNoExponent();
   Graph_Graph1063->GetXaxis()->SetNdivisions(5);
   Graph_Graph1063->GetXaxis()->SetLabelFont(42);
   Graph_Graph1063->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1063->GetXaxis()->SetTitleFont(42);
   Graph_Graph1063->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1063->GetYaxis()->SetLabelFont(42);
   Graph_Graph1063->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1063->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1063->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1063->GetYaxis()->SetTitleFont(42);
   Graph_Graph1063->GetZaxis()->SetLabelFont(42);
   Graph_Graph1063->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1063->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1063->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1063);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1064[5] = {
   343638,
   343668,
   343673,
   343677,
   343680};
   Double_t Graph_fy1064[5] = {
   0.3107332,
   0.3327984,
   0.03431641,
   0.3276788,
   0.3179847};
   Double_t Graph_fex1064[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1064[5] = {
   0.006284174,
   0.007513317,
   0.008579102,
   0.004058428,
   0.00336233};
   gre = new TGraphErrors(5,Graph_fx1064,Graph_fy1064,Graph_fex1064,Graph_fey1064);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0bf9f4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1064 = new TH1F("Graph_Graph1064","",100,343633.8,343684.2);
   Graph_Graph1064->SetMinimum(0.02316357);
   Graph_Graph1064->SetMaximum(0.3717692);
   Graph_Graph1064->SetDirectory(0);
   Graph_Graph1064->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1064->SetLineColor(ci);
   Graph_Graph1064->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1064->GetXaxis()->SetNoExponent();
   Graph_Graph1064->GetXaxis()->SetNdivisions(5);
   Graph_Graph1064->GetXaxis()->SetLabelFont(42);
   Graph_Graph1064->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1064->GetXaxis()->SetTitleFont(42);
   Graph_Graph1064->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1064->GetYaxis()->SetLabelFont(42);
   Graph_Graph1064->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1064->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1064->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1064->GetYaxis()->SetTitleFont(42);
   Graph_Graph1064->GetZaxis()->SetLabelFont(42);
   Graph_Graph1064->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1064->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1064->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1064);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1065[2] = {
   343640,
   343642};
   Double_t Graph_fy1065[2] = {
   0.2726667,
   0.3230845};
   Double_t Graph_fex1065[2] = {
   0,
   0};
   Double_t Graph_fey1065[2] = {
   0.005579752,
   0.002738988};
   gre = new TGraphErrors(2,Graph_fx1065,Graph_fy1065,Graph_fex1065,Graph_fey1065);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2cf90b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1065 = new TH1F("Graph_Graph1065","",100,343639.8,343642.2);
   Graph_Graph1065->SetMinimum(0.2612133);
   Graph_Graph1065->SetMaximum(0.3316972);
   Graph_Graph1065->SetDirectory(0);
   Graph_Graph1065->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1065->SetLineColor(ci);
   Graph_Graph1065->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1065->GetXaxis()->SetNoExponent();
   Graph_Graph1065->GetXaxis()->SetNdivisions(5);
   Graph_Graph1065->GetXaxis()->SetLabelFont(42);
   Graph_Graph1065->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1065->GetXaxis()->SetTitleFont(42);
   Graph_Graph1065->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1065->GetYaxis()->SetLabelFont(42);
   Graph_Graph1065->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1065->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1065->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1065->GetYaxis()->SetTitleFont(42);
   Graph_Graph1065->GetZaxis()->SetLabelFont(42);
   Graph_Graph1065->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1065->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1065->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1065);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1066[4] = {
   343623,
   343625,
   343627,
   343629};
   Double_t Graph_fy1066[4] = {
   0.3207976,
   0.3183973,
   0.2938392,
   0.5294773};
   Double_t Graph_fex1066[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1066[4] = {
   0.01145706,
   0.003716138,
   0.04197703,
   0.09080461};
   gre = new TGraphErrors(4,Graph_fx1066,Graph_fy1066,Graph_fex1066,Graph_fey1066);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#f90b28");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1066 = new TH1F("Graph_Graph1066","",100,343622.4,343629.6);
   Graph_Graph1066->SetMinimum(0.2150202);
   Graph_Graph1066->SetMaximum(0.6571239);
   Graph_Graph1066->SetDirectory(0);
   Graph_Graph1066->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1066->SetLineColor(ci);
   Graph_Graph1066->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1066->GetXaxis()->SetNoExponent();
   Graph_Graph1066->GetXaxis()->SetNdivisions(5);
   Graph_Graph1066->GetXaxis()->SetLabelFont(42);
   Graph_Graph1066->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1066->GetXaxis()->SetTitleFont(42);
   Graph_Graph1066->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1066->GetYaxis()->SetLabelFont(42);
   Graph_Graph1066->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1066->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1066->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1066->GetYaxis()->SetTitleFont(42);
   Graph_Graph1066->GetZaxis()->SetLabelFont(42);
   Graph_Graph1066->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1066->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1066->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1066);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1067[2] = {
   343619,
   343621};
   Double_t Graph_fy1067[2] = {
   0.3258066,
   0.3219328};
   Double_t Graph_fex1067[2] = {
   0,
   0};
   Double_t Graph_fey1067[2] = {
   0.003700437,
   0.004954571};
   gre = new TGraphErrors(2,Graph_fx1067,Graph_fy1067,Graph_fex1067,Graph_fey1067);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#1b38f5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1067 = new TH1F("Graph_Graph1067","",100,343618.8,343621.2);
   Graph_Graph1067->SetMinimum(0.3157253);
   Graph_Graph1067->SetMaximum(0.33076);
   Graph_Graph1067->SetDirectory(0);
   Graph_Graph1067->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1067->SetLineColor(ci);
   Graph_Graph1067->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1067->GetXaxis()->SetNoExponent();
   Graph_Graph1067->GetXaxis()->SetNdivisions(5);
   Graph_Graph1067->GetXaxis()->SetLabelFont(42);
   Graph_Graph1067->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1067->GetXaxis()->SetTitleFont(42);
   Graph_Graph1067->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1067->GetYaxis()->SetLabelFont(42);
   Graph_Graph1067->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1067->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1067->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1067->GetYaxis()->SetTitleFont(42);
   Graph_Graph1067->GetZaxis()->SetLabelFont(42);
   Graph_Graph1067->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1067->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1067->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1067);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1068[4] = {
   343494,
   343496,
   343498,
   343501};
   Double_t Graph_fy1068[4] = {
   0.3314373,
   0.3524284,
   0.3531805,
   0.388305};
   Double_t Graph_fex1068[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1068[4] = {
   0.0154032,
   0.006025518,
   0.003407168,
   0.03789469};
   gre = new TGraphErrors(4,Graph_fx1068,Graph_fy1068,Graph_fex1068,Graph_fey1068);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffc300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1068 = new TH1F("Graph_Graph1068","",100,343493.3,343501.7);
   Graph_Graph1068->SetMinimum(0.3050175);
   Graph_Graph1068->SetMaximum(0.4372162);
   Graph_Graph1068->SetDirectory(0);
   Graph_Graph1068->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1068->SetLineColor(ci);
   Graph_Graph1068->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1068->GetXaxis()->SetNoExponent();
   Graph_Graph1068->GetXaxis()->SetNdivisions(5);
   Graph_Graph1068->GetXaxis()->SetLabelFont(42);
   Graph_Graph1068->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1068->GetXaxis()->SetTitleFont(42);
   Graph_Graph1068->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1068->GetYaxis()->SetLabelFont(42);
   Graph_Graph1068->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1068->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1068->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1068->GetYaxis()->SetTitleFont(42);
   Graph_Graph1068->GetZaxis()->SetLabelFont(42);
   Graph_Graph1068->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1068->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1068->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1068);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1069[1] = {
   344068};
   Double_t Graph_fy1069[1] = {
   0.3702975};
   Double_t Graph_fex1069[1] = {
   0};
   Double_t Graph_fey1069[1] = {
   0.003242863};
   gre = new TGraphErrors(1,Graph_fx1069,Graph_fy1069,Graph_fex1069,Graph_fey1069);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1069 = new TH1F("Graph_Graph1069","",100,344067.9,344069.1);
   Graph_Graph1069->SetMinimum(0.3664061);
   Graph_Graph1069->SetMaximum(0.3741889);
   Graph_Graph1069->SetDirectory(0);
   Graph_Graph1069->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1069->SetLineColor(ci);
   Graph_Graph1069->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1069->GetXaxis()->SetNoExponent();
   Graph_Graph1069->GetXaxis()->SetNdivisions(5);
   Graph_Graph1069->GetXaxis()->SetLabelFont(42);
   Graph_Graph1069->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1069->GetXaxis()->SetTitleFont(42);
   Graph_Graph1069->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1069->GetYaxis()->SetLabelFont(42);
   Graph_Graph1069->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1069->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1069->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1069->GetYaxis()->SetTitleFont(42);
   Graph_Graph1069->GetZaxis()->SetLabelFont(42);
   Graph_Graph1069->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1069->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1069->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1069);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1070[6] = {
   344058,
   344062,
   344063,
   344064,
   344065,
   344067};
   Double_t Graph_fy1070[6] = {
   0.001117608,
   0.381166,
   0.3697368,
   0.3730329,
   0.3774707,
   0.374622};
   Double_t Graph_fex1070[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1070[6] = {
   0.000645251,
   0.02581582,
   0.002220131,
   0.002085871,
   0.01068503,
   0.004670023};
   gre = new TGraphErrors(6,Graph_fx1070,Graph_fy1070,Graph_fex1070,Graph_fey1070);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2fa4e1");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1070 = new TH1F("Graph_Graph1070","",100,344057.1,344067.9);
   Graph_Graph1070->SetMinimum(0.0004251209);
   Graph_Graph1070->SetMaximum(0.4476328);
   Graph_Graph1070->SetDirectory(0);
   Graph_Graph1070->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1070->SetLineColor(ci);
   Graph_Graph1070->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1070->GetXaxis()->SetNoExponent();
   Graph_Graph1070->GetXaxis()->SetNdivisions(5);
   Graph_Graph1070->GetXaxis()->SetLabelFont(42);
   Graph_Graph1070->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1070->GetXaxis()->SetTitleFont(42);
   Graph_Graph1070->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1070->GetYaxis()->SetLabelFont(42);
   Graph_Graph1070->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1070->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1070->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1070->GetYaxis()->SetTitleFont(42);
   Graph_Graph1070->GetZaxis()->SetLabelFont(42);
   Graph_Graph1070->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1070->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1070->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1070);
   
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
      tex = new TLatex(0.23,0.83,"TID");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
