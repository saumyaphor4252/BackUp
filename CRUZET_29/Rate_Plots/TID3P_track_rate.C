void TID3P_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug  3 18:11:30 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(343311.3,-0.0355711,344128.7,0.2392964);
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
   multigraph->SetName("track rate TID3+");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1201[2] = {
   343772,
   343774};
   Double_t Graph_fy1201[2] = {
   0.0559232,
   0.06506759};
   Double_t Graph_fex1201[2] = {
   0,
   0};
   Double_t Graph_fey1201[2] = {
   0.006291852,
   0.001282011};
   TGraphErrors *gre = new TGraphErrors(2,Graph_fx1201,Graph_fy1201,Graph_fex1201,Graph_fey1201);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f5601b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1201 = new TH1F("Graph_Graph1201","",100,343771.8,343774.2);
   Graph_Graph1201->SetMinimum(0.04795953);
   Graph_Graph1201->SetMaximum(0.06802143);
   Graph_Graph1201->SetDirectory(0);
   Graph_Graph1201->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1201->SetLineColor(ci);
   Graph_Graph1201->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1201->GetXaxis()->SetNoExponent();
   Graph_Graph1201->GetXaxis()->SetNdivisions(5);
   Graph_Graph1201->GetXaxis()->SetLabelFont(42);
   Graph_Graph1201->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1201->GetXaxis()->SetTitleFont(42);
   Graph_Graph1201->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1201->GetYaxis()->SetLabelFont(42);
   Graph_Graph1201->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1201->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1201->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1201->GetYaxis()->SetTitleFont(42);
   Graph_Graph1201->GetZaxis()->SetLabelFont(42);
   Graph_Graph1201->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1201->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1201->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1201);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1202[9] = {
   343854,
   343860,
   343862,
   343864,
   343866,
   343932,
   343934,
   343936,
   343937};
   Double_t Graph_fy1202[9] = {
   0.01252103,
   0.08146282,
   0.0745235,
   0.07260547,
   0.01622475,
   0,
   0.0739107,
   0.0749054,
   0.0704349};
   Double_t Graph_fex1202[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1202[9] = {
   0.007229017,
   0.008586935,
   0.001388663,
   0.003858937,
   0.004891947,
   0,
   0.005603156,
   0.002898177,
   0.001340948};
   gre = new TGraphErrors(9,Graph_fx1202,Graph_fy1202,Graph_fex1202,Graph_fey1202);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#196f3d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1202 = new TH1F("Graph_Graph1202","",100,343845.7,343945.3);
   Graph_Graph1202->SetMinimum(0);
   Graph_Graph1202->SetMaximum(0.09905473);
   Graph_Graph1202->SetDirectory(0);
   Graph_Graph1202->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1202->SetLineColor(ci);
   Graph_Graph1202->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1202->GetXaxis()->SetNoExponent();
   Graph_Graph1202->GetXaxis()->SetNdivisions(5);
   Graph_Graph1202->GetXaxis()->SetLabelFont(42);
   Graph_Graph1202->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1202->GetXaxis()->SetTitleFont(42);
   Graph_Graph1202->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1202->GetYaxis()->SetLabelFont(42);
   Graph_Graph1202->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1202->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1202->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1202->GetYaxis()->SetTitleFont(42);
   Graph_Graph1202->GetZaxis()->SetLabelFont(42);
   Graph_Graph1202->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1202->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1202->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1202);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1203[5] = {
   343644,
   343648,
   343650,
   343652,
   343663};
   Double_t Graph_fy1203[5] = {
   0.06982857,
   0.05792417,
   0.1116081,
   0.05594575,
   0.07377546};
   Double_t Graph_fex1203[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1203[5] = {
   0.002448995,
   0.003746803,
   0.05580407,
   0.0250197,
   0.01043343};
   gre = new TGraphErrors(5,Graph_fx1203,Graph_fy1203,Graph_fex1203,Graph_fey1203);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e317ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1203 = new TH1F("Graph_Graph1203","",100,343642.1,343664.9);
   Graph_Graph1203->SetMinimum(0.01727744);
   Graph_Graph1203->SetMaximum(0.1810608);
   Graph_Graph1203->SetDirectory(0);
   Graph_Graph1203->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1203->SetLineColor(ci);
   Graph_Graph1203->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1203->GetXaxis()->SetNoExponent();
   Graph_Graph1203->GetXaxis()->SetNdivisions(5);
   Graph_Graph1203->GetXaxis()->SetLabelFont(42);
   Graph_Graph1203->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1203->GetXaxis()->SetTitleFont(42);
   Graph_Graph1203->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1203->GetYaxis()->SetLabelFont(42);
   Graph_Graph1203->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1203->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1203->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1203->GetYaxis()->SetTitleFont(42);
   Graph_Graph1203->GetZaxis()->SetLabelFont(42);
   Graph_Graph1203->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1203->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1203->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1203);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1204[5] = {
   343638,
   343668,
   343673,
   343677,
   343680};
   Double_t Graph_fy1204[5] = {
   0.05846105,
   0.06055506,
   0.008579102,
   0.06660138,
   0.06580833};
   Double_t Graph_fex1204[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1204[5] = {
   0.00272576,
   0.003204914,
   0.004289551,
   0.001829681,
   0.001529599};
   gre = new TGraphErrors(5,Graph_fx1204,Graph_fy1204,Graph_fex1204,Graph_fey1204);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0bf9f4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1204 = new TH1F("Graph_Graph1204","",100,343633.8,343684.2);
   Graph_Graph1204->SetMinimum(0.003860596);
   Graph_Graph1204->SetMaximum(0.07484521);
   Graph_Graph1204->SetDirectory(0);
   Graph_Graph1204->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1204->SetLineColor(ci);
   Graph_Graph1204->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1204->GetXaxis()->SetNoExponent();
   Graph_Graph1204->GetXaxis()->SetNdivisions(5);
   Graph_Graph1204->GetXaxis()->SetLabelFont(42);
   Graph_Graph1204->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1204->GetXaxis()->SetTitleFont(42);
   Graph_Graph1204->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1204->GetYaxis()->SetLabelFont(42);
   Graph_Graph1204->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1204->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1204->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1204->GetYaxis()->SetTitleFont(42);
   Graph_Graph1204->GetZaxis()->SetLabelFont(42);
   Graph_Graph1204->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1204->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1204->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1204);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1205[2] = {
   343640,
   343642};
   Double_t Graph_fy1205[2] = {
   0.053323,
   0.06589865};
   Double_t Graph_fex1205[2] = {
   0,
   0};
   Double_t Graph_fey1205[2] = {
   0.002467494,
   0.001237002};
   gre = new TGraphErrors(2,Graph_fx1205,Graph_fy1205,Graph_fex1205,Graph_fey1205);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2cf90b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1205 = new TH1F("Graph_Graph1205","",100,343639.8,343642.2);
   Graph_Graph1205->SetMinimum(0.04922749);
   Graph_Graph1205->SetMaximum(0.06876367);
   Graph_Graph1205->SetDirectory(0);
   Graph_Graph1205->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1205->SetLineColor(ci);
   Graph_Graph1205->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1205->GetXaxis()->SetNoExponent();
   Graph_Graph1205->GetXaxis()->SetNdivisions(5);
   Graph_Graph1205->GetXaxis()->SetLabelFont(42);
   Graph_Graph1205->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1205->GetXaxis()->SetTitleFont(42);
   Graph_Graph1205->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1205->GetYaxis()->SetLabelFont(42);
   Graph_Graph1205->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1205->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1205->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1205->GetYaxis()->SetTitleFont(42);
   Graph_Graph1205->GetZaxis()->SetLabelFont(42);
   Graph_Graph1205->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1205->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1205->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1205);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1206[4] = {
   343623,
   343625,
   343627,
   343629};
   Double_t Graph_fy1206[4] = {
   0.06833317,
   0.06588278,
   0.02398687,
   0.1557286};
   Double_t Graph_fex1206[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1206[4] = {
   0.005287779,
   0.001690414,
   0.01199344,
   0.04924571};
   gre = new TGraphErrors(4,Graph_fx1206,Graph_fy1206,Graph_fex1206,Graph_fey1206);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#f90b28");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1206 = new TH1F("Graph_Graph1206","",100,343622.4,343629.6);
   Graph_Graph1206->SetMinimum(0.01079409);
   Graph_Graph1206->SetMaximum(0.2242724);
   Graph_Graph1206->SetDirectory(0);
   Graph_Graph1206->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1206->SetLineColor(ci);
   Graph_Graph1206->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1206->GetXaxis()->SetNoExponent();
   Graph_Graph1206->GetXaxis()->SetNdivisions(5);
   Graph_Graph1206->GetXaxis()->SetLabelFont(42);
   Graph_Graph1206->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1206->GetXaxis()->SetTitleFont(42);
   Graph_Graph1206->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1206->GetYaxis()->SetLabelFont(42);
   Graph_Graph1206->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1206->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1206->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1206->GetYaxis()->SetTitleFont(42);
   Graph_Graph1206->GetZaxis()->SetLabelFont(42);
   Graph_Graph1206->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1206->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1206->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1206);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1207[2] = {
   343619,
   343621};
   Double_t Graph_fy1207[2] = {
   0.06720393,
   0.06633859};
   Double_t Graph_fex1207[2] = {
   0,
   0};
   Double_t Graph_fey1207[2] = {
   0.001680623,
   0.002249089};
   gre = new TGraphErrors(2,Graph_fx1207,Graph_fy1207,Graph_fex1207,Graph_fey1207);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#1b38f5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1207 = new TH1F("Graph_Graph1207","",100,343618.8,343621.2);
   Graph_Graph1207->SetMinimum(0.06360999);
   Graph_Graph1207->SetMaximum(0.06936405);
   Graph_Graph1207->SetDirectory(0);
   Graph_Graph1207->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1207->SetLineColor(ci);
   Graph_Graph1207->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1207->GetXaxis()->SetNoExponent();
   Graph_Graph1207->GetXaxis()->SetNdivisions(5);
   Graph_Graph1207->GetXaxis()->SetLabelFont(42);
   Graph_Graph1207->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1207->GetXaxis()->SetTitleFont(42);
   Graph_Graph1207->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1207->GetYaxis()->SetLabelFont(42);
   Graph_Graph1207->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1207->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1207->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1207->GetYaxis()->SetTitleFont(42);
   Graph_Graph1207->GetZaxis()->SetLabelFont(42);
   Graph_Graph1207->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1207->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1207->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1207);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1208[4] = {
   343494,
   343496,
   343498,
   343501};
   Double_t Graph_fy1208[4] = {
   0.07373227,
   0.07077413,
   0.071918,
   0.08135914};
   Double_t Graph_fex1208[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1208[4] = {
   0.007265056,
   0.002700202,
   0.001537496,
   0.01734583};
   gre = new TGraphErrors(4,Graph_fx1208,Graph_fy1208,Graph_fex1208,Graph_fey1208);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffc300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1208 = new TH1F("Graph_Graph1208","",100,343493.3,343501.7);
   Graph_Graph1208->SetMinimum(0.06054414);
   Graph_Graph1208->SetMaximum(0.1021741);
   Graph_Graph1208->SetDirectory(0);
   Graph_Graph1208->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1208->SetLineColor(ci);
   Graph_Graph1208->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1208->GetXaxis()->SetNoExponent();
   Graph_Graph1208->GetXaxis()->SetNdivisions(5);
   Graph_Graph1208->GetXaxis()->SetLabelFont(42);
   Graph_Graph1208->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1208->GetXaxis()->SetTitleFont(42);
   Graph_Graph1208->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1208->GetYaxis()->SetLabelFont(42);
   Graph_Graph1208->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1208->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1208->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1208->GetYaxis()->SetTitleFont(42);
   Graph_Graph1208->GetZaxis()->SetLabelFont(42);
   Graph_Graph1208->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1208->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1208->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1208);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1209[1] = {
   344068};
   Double_t Graph_fy1209[1] = {
   0.07361079};
   Double_t Graph_fex1209[1] = {
   0};
   Double_t Graph_fey1209[1] = {
   0.001445853};
   gre = new TGraphErrors(1,Graph_fx1209,Graph_fy1209,Graph_fex1209,Graph_fey1209);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1209 = new TH1F("Graph_Graph1209","",100,344067.9,344069.1);
   Graph_Graph1209->SetMinimum(0.07187577);
   Graph_Graph1209->SetMaximum(0.07534582);
   Graph_Graph1209->SetDirectory(0);
   Graph_Graph1209->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1209->SetLineColor(ci);
   Graph_Graph1209->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1209->GetXaxis()->SetNoExponent();
   Graph_Graph1209->GetXaxis()->SetNdivisions(5);
   Graph_Graph1209->GetXaxis()->SetLabelFont(42);
   Graph_Graph1209->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1209->GetXaxis()->SetTitleFont(42);
   Graph_Graph1209->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1209->GetYaxis()->SetLabelFont(42);
   Graph_Graph1209->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1209->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1209->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1209->GetYaxis()->SetTitleFont(42);
   Graph_Graph1209->GetZaxis()->SetLabelFont(42);
   Graph_Graph1209->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1209->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1209->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1209);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1210[6] = {
   344058,
   344062,
   344063,
   344064,
   344065,
   344067};
   Double_t Graph_fy1210[6] = {
   0.0003725359,
   0.06469332,
   0.074134,
   0.07629078,
   0.07259052,
   0.07294505};
   Double_t Graph_fex1210[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1210[6] = {
   0.0003725359,
   0.01063552,
   0.0009941249,
   0.0009433004,
   0.004685698,
   0.002060726};
   gre = new TGraphErrors(6,Graph_fx1210,Graph_fy1210,Graph_fex1210,Graph_fey1210);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2fa4e1");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1210 = new TH1F("Graph_Graph1210","",100,344057.1,344067.9);
   Graph_Graph1210->SetMinimum(0);
   Graph_Graph1210->SetMaximum(0.08500384);
   Graph_Graph1210->SetDirectory(0);
   Graph_Graph1210->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1210->SetLineColor(ci);
   Graph_Graph1210->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1210->GetXaxis()->SetNoExponent();
   Graph_Graph1210->GetXaxis()->SetNdivisions(5);
   Graph_Graph1210->GetXaxis()->SetLabelFont(42);
   Graph_Graph1210->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1210->GetXaxis()->SetTitleFont(42);
   Graph_Graph1210->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1210->GetYaxis()->SetLabelFont(42);
   Graph_Graph1210->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1210->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1210->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1210->GetYaxis()->SetTitleFont(42);
   Graph_Graph1210->GetZaxis()->SetLabelFont(42);
   Graph_Graph1210->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1210->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1210->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1210);
   
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
      tex = new TLatex(0.23,0.83,"TID 3+");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
