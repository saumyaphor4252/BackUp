void track_rate_TID_plus()
{
//=========Macro generated from canvas: Canvas7/Canvas7
//=========  (Thu Jun 24 11:10:45 2021) by ROOT version6.10/04
   TCanvas *Canvas7 = new TCanvas("Canvas7", "Canvas7",604,112,856,836);
   gStyle->SetOptStat(0);
   Canvas7->Range(297790.9,0.06296604,298440.2,0.4363463);
   Canvas7->SetFillColor(0);
   Canvas7->SetBorderMode(0);
   Canvas7->SetBorderSize(2);
   Canvas7->SetGridx();
   Canvas7->SetGridy();
   Canvas7->SetTickx(1);
   Canvas7->SetTicky(1);
   Canvas7->SetLeftMargin(0.1883886);
   Canvas7->SetRightMargin(0.03909953);
   Canvas7->SetTopMargin(0.0875817);
   Canvas7->SetBottomMargin(0.1294118);
   Canvas7->SetFrameLineWidth(3);
   Canvas7->SetFrameBorderMode(0);
   Canvas7->SetFrameLineWidth(3);
   Canvas7->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("track rate tid plus");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1015[29] = {
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
   Double_t Graph_fy1015[29] = {
   0.1575559,
   0.2075208,
   0.1801923,
   0.1782507,
   0.199703,
   0.1729783,
   0.1801815,
   0.1947827,
   0.1829669,
   0.1653841,
   0.1855696,
   0.1889215,
   0.1789349,
   0.1871991,
   0.1862882,
   0.1573938,
   0.1863272,
   0.1862954,
   0.1840492,
   0.1765481,
   0.1970054,
   0.2832845,
   0.2470163,
   0.2174942,
   0.1769485,
   0.205751,
   0.1971719,
   0.181705,
   0.1811266};
   Double_t Graph_fex1015[29] = {
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
   Double_t Graph_fey1015[29] = {
   0.01795516,
   0.007346155,
   0.007100572,
   0.009473915,
   0.01265566,
   0.01738497,
   0.00210068,
   0.01249532,
   0.00357797,
   0.01509743,
   0.01135668,
   0.00626613,
   0.008501454,
   0.01910593,
   0.002472659,
   0.03281887,
   0.004384473,
   0.005586628,
   0.01868736,
   0.01486804,
   0.01160865,
   0.1070715,
   0.04366672,
   0.01648819,
   0.006856613,
   0.002701876,
   0.01354182,
   0.03212121,
   0.01119004};
   TGraphErrors *gre = new TGraphErrors(29,Graph_fx1015,Graph_fy1015,Graph_fex1015,Graph_fey1015);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3113ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1015 = new TH1F("Graph_Graph1015","Graph",100,297890.4,298437.6);
   Graph_Graph1015->SetMinimum(0.0979968);
   Graph_Graph1015->SetMaximum(0.416934);
   Graph_Graph1015->SetDirectory(0);
   Graph_Graph1015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1015->SetLineColor(ci);
   Graph_Graph1015->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1015->GetXaxis()->SetNoExponent();
   Graph_Graph1015->GetXaxis()->SetLabelFont(42);
   Graph_Graph1015->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1015->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1015->GetXaxis()->SetTitleFont(42);
   Graph_Graph1015->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1015->GetYaxis()->SetLabelFont(42);
   Graph_Graph1015->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1015->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1015->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1015->GetYaxis()->SetTitleFont(42);
   Graph_Graph1015->GetZaxis()->SetLabelFont(42);
   Graph_Graph1015->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1015->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1015);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1016[51] = {
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
   Double_t Graph_fy1016[51] = {
   0.2263148,
   0.2374965,
   0.2505801,
   0.2587175,
   0.2554076,
   0.3122754,
   0.2465408,
   0.2623258,
   0.2808045,
   0.2472679,
   0.2564007,
   0.2669652,
   0.4614226,
   0.2448254,
   0.1014811,
   0.2718666,
   0.2694122,
   0.2673594,
   0.2636848,
   0.2599182,
   0.2479842,
   0.2173505,
   0.2766755,
   0.004175003,
   0.3184499,
   0.238845,
   0.2689738,
   0.123159,
   0.2396263,
   0.2571163,
   0.2642829,
   0.278298,
   0.2617057,
   0.2642295,
   0.2560177,
   0.2603332,
   0.2671205,
   0.2930342,
   0.4073445,
   0.2070756,
   0.2706936,
   0.267738,
   0.2518623,
   0.234047,
   0.2509807,
   0.243079,
   0.2169193,
   0.2636854,
   0.2650283,
   0.2388551,
   0.2802311};
   Double_t Graph_fex1016[51] = {
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
   Double_t Graph_fey1016[51] = {
   0.01691556,
   0.005626046,
   0.01195954,
   0.007821988,
   0.01893207,
   0.02327564,
   0.03804207,
   0.01707596,
   0.04888179,
   0.01879943,
   0.009697964,
   0.006178492,
   0.1391241,
   0.007753698,
   0.006591904,
   0.01531795,
   0.01142562,
   0.01012696,
   0.02046591,
   0.01090592,
   0.008867896,
   0.008925515,
   0.01154821,
   0.001704438,
   0.04012091,
   0.01943693,
   0.002793788,
   0.01878158,
   0.04699459,
   0.01276047,
   0.02015138,
   0.03326298,
   0.005160333,
   0.01287776,
   0.0142013,
   0.004710804,
   0.01696217,
   0.01463343,
   0.1051759,
   0.02899639,
   0.01629384,
   0.01190241,
   0.01193942,
   0.01231826,
   0.01216005,
   0.02443036,
   0.006142779,
   0.02212799,
   0.009613589,
   0.01842807,
   0.03679615};
   gre = new TGraphErrors(51,Graph_fx1016,Graph_fy1016,Graph_fex1016,Graph_fey1016);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#de0b1d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1016 = new TH1F("Graph_Graph1016","Graph",100,296983.5,297793.5);
   Graph_Graph1016->SetMinimum(0.002223509);
   Graph_Graph1016->SetMaximum(0.6603543);
   Graph_Graph1016->SetDirectory(0);
   Graph_Graph1016->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1016->SetLineColor(ci);
   Graph_Graph1016->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1016->GetXaxis()->SetNoExponent();
   Graph_Graph1016->GetXaxis()->SetLabelFont(42);
   Graph_Graph1016->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1016->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1016->GetXaxis()->SetTitleFont(42);
   Graph_Graph1016->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1016->GetYaxis()->SetLabelFont(42);
   Graph_Graph1016->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1016->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1016->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1016->GetYaxis()->SetTitleFont(42);
   Graph_Graph1016->GetZaxis()->SetLabelFont(42);
   Graph_Graph1016->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1016->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1016);
   
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
      tex = new TLatex(0.23,0.83,"TID+");
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
   Canvas7->Modified();
   Canvas7->cd();
   Canvas7->SetSelected(Canvas7);
}
