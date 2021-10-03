void track_rate()
{
//=========Macro generated from canvas: Canvas1/Canvas1
//=========  (Thu Jun 24 11:10:45 2021) by ROOT version6.10/04
   TCanvas *Canvas1 = new TCanvas("Canvas1", "Canvas1",604,112,856,836);
   gStyle->SetOptStat(0);
   Canvas1->Range(297790.9,1.992732,298440.2,4.020028);
   Canvas1->SetFillColor(0);
   Canvas1->SetBorderMode(0);
   Canvas1->SetBorderSize(2);
   Canvas1->SetGridx();
   Canvas1->SetGridy();
   Canvas1->SetTickx(1);
   Canvas1->SetTicky(1);
   Canvas1->SetLeftMargin(0.1883886);
   Canvas1->SetRightMargin(0.03909953);
   Canvas1->SetTopMargin(0.0875817);
   Canvas1->SetBottomMargin(0.1294118);
   Canvas1->SetFrameLineWidth(3);
   Canvas1->SetFrameBorderMode(0);
   Canvas1->SetFrameLineWidth(3);
   Canvas1->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("track rate");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1003[29] = {
   298019,
   298030,
   297938,
   298211,
   298208,
   298020,
   298392,
   298025,
   297943,
   297944,
   297939,
   298023,
   298214,
   298022,
   298215,
   298024,
   297937,
   297940,
   298037,
   298036,
   298386,
   298035,
   298034,
   298029,
   298197,
   298034,
   298021,
   297936,
   298216};
   Double_t Graph_fy1003[29] = {
   2.428816,
   2.665784,
   2.477364,
   2.545862,
   2.576891,
   2.435674,
   2.434986,
   2.589889,
   2.493597,
   2.486274,
   2.584074,
   2.499209,
   2.493779,
   2.505738,
   2.476754,
   2.655165,
   2.499116,
   2.498235,
   2.4951,
   2.509237,
   2.367485,
   3.399414,
   2.887003,
   2.664929,
   2.50863,
   2.594506,
   2.48976,
   2.685827,
   2.503971};
   Double_t Graph_fex1003[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1003[29] = {
   0.07049676,
   0.02632945,
   0.02632814,
   0.03580399,
   0.04546117,
   0.06523606,
   0.007722412,
   0.04556304,
   0.01320881,
   0.05853704,
   0.04237896,
   0.02279082,
   0.03173764,
   0.06990111,
   0.00901598,
   0.1347956,
   0.0160573,
   0.0204581,
   0.0688058,
   0.05605223,
   0.04024263,
   0.3709064,
   0.1492834,
   0.05771544,
   0.02581693,
   0.009594486,
   0.04812085,
   0.1234945,
   0.04160591};
   TGraphErrors *gre = new TGraphErrors(29,Graph_fx1003,Graph_fy1003,Graph_fex1003,Graph_fey1003);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3113ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","Graph",100,297890.4,298437.6);
   Graph_Graph1003->SetMinimum(2.182934);
   Graph_Graph1003->SetMaximum(3.914628);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1003->SetLineColor(ci);
   Graph_Graph1003->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1003->GetXaxis()->SetNoExponent();
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1003->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1003);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1004[51] = {
   297642,
   297104,
   297439,
   297725,
   297724,
   297633,
   297508,
   297344,
   297463,
   297638,
   297667,
   297117,
   297393,
   297720,
   297345,
   297506,
   297360,
   297719,
   297414,
   297385,
   297464,
   297051,
   297452,
   297686,
   297475,
   297392,
   297119,
   297415,
   297389,
   297437,
   297510,
   297120,
   297103,
   297726,
   297436,
   297118,
   297121,
   297362,
   297446,
   297622,
   297365,
   297443,
   297624,
   297384,
   297449,
   297364,
   297608,
   297623,
   297361,
   297680,
   297368};
   Double_t Graph_fy1004[51] = {
   1.991317,
   2.357239,
   2.597129,
   2.555486,
   2.671956,
   2.839972,
   2.670859,
   2.515438,
   2.663388,
   2.694219,
   2.416182,
   2.60645,
   2.810483,
   2.326455,
   0.9916884,
   2.578849,
   2.683947,
   2.516324,
   2.665441,
   2.567607,
   2.383756,
   2.147848,
   2.680956,
   0.06401672,
   2.871103,
   2.499172,
   2.618178,
   1.277417,
   2.340965,
   2.499601,
   2.484567,
   2.604075,
   2.589889,
   2.533089,
   2.651555,
   2.641606,
   2.633506,
   2.684076,
   2.742786,
   2.635139,
   2.651032,
   2.641928,
   2.502775,
   2.557661,
   2.618801,
   2.686146,
   2.15058,
   2.644282,
   2.608437,
   2.616032,
   2.642869};
   Double_t Graph_fex1004[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1004[51] = {
   0.05017648,
   0.0177246,
   0.0385024,
   0.02458334,
   0.06123446,
   0.07019233,
   0.1252118,
   0.05287755,
   0.1505436,
   0.06205507,
   0.02977048,
   0.01930545,
   0.3433551,
   0.02390166,
   0.02060658,
   0.04717757,
   0.0360627,
   0.0310681,
   0.06506883,
   0.03427745,
   0.0274941,
   0.02805787,
   0.03594796,
   0.006674205,
   0.1204688,
   0.06287351,
   0.008716418,
   0.06048744,
   0.1468852,
   0.03978663,
   0.06178679,
   0.1017496,
   0.01623348,
   0.03987263,
   0.04570288,
   0.01500598,
   0.05325923,
   0.04428783,
   0.2729174,
   0.1034383,
   0.05099081,
   0.03738869,
   0.03763678,
   0.04072109,
   0.03927956,
   0.08121213,
   0.01934165,
   0.07007334,
   0.03015987,
   0.06098655,
   0.1130009};
   gre = new TGraphErrors(51,Graph_fx1004,Graph_fy1004,Graph_fex1004,Graph_fey1004);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#de0b1d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1004 = new TH1F("Graph_Graph1004","Graph",100,296983.5,297793.5);
   Graph_Graph1004->SetMinimum(0.05160826);
   Graph_Graph1004->SetMaximum(3.463488);
   Graph_Graph1004->SetDirectory(0);
   Graph_Graph1004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1004->SetLineColor(ci);
   Graph_Graph1004->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1004->GetXaxis()->SetNoExponent();
   Graph_Graph1004->GetXaxis()->SetLabelFont(42);
   Graph_Graph1004->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1004->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1004->GetXaxis()->SetTitleFont(42);
   Graph_Graph1004->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1004->GetYaxis()->SetLabelFont(42);
   Graph_Graph1004->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1004->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1004->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1004->GetYaxis()->SetTitleFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1004->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1004);
   
   multigraph->Add(gre,"");
   multigraph->Draw("AP");
   multigraph->GetXaxis()->SetTitle("Run Number");
   multigraph->GetXaxis()->SetNoExponent();
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.03);
   multigraph->GetXaxis()->SetTitleSize(0.05);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("Track Rate (Hz)");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.05);
   multigraph->GetYaxis()->SetTitleSize(0.05);
   multigraph->GetYaxis()->SetTitleOffset(0);
   multigraph->GetYaxis()->SetTitleFont(42);
   TLatex *   tex = new TLatex(0.685,0.94,"cosmic rays (2017)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03717);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23,0.83,"Track Rate");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.6978923,0.7320513,0.9262295,0.874359,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.03660131);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("NULL","Magnetic Field","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","0 T","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#3113ba");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","3.8 T","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#de0b1d");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(42);
   leg->Draw();
   Canvas1->Modified();
   Canvas1->cd();
   Canvas1->SetSelected(Canvas1);
}
