void track_rate_BPIX()
{
//=========Macro generated from canvas: Canvas4/Canvas4
//=========  (Thu Jun 24 11:10:45 2021) by ROOT version6.10/04
   TCanvas *Canvas4 = new TCanvas("Canvas4", "Canvas4",604,112,856,836);
   gStyle->SetOptStat(0);
   Canvas4->Range(297790.9,-0.05081889,298440.2,0.3418724);
   Canvas4->SetFillColor(0);
   Canvas4->SetBorderMode(0);
   Canvas4->SetBorderSize(2);
   Canvas4->SetGridx();
   Canvas4->SetGridy();
   Canvas4->SetTickx(1);
   Canvas4->SetTicky(1);
   Canvas4->SetLeftMargin(0.1883886);
   Canvas4->SetRightMargin(0.03909953);
   Canvas4->SetTopMargin(0.0875817);
   Canvas4->SetBottomMargin(0.1294118);
   Canvas4->SetFrameLineWidth(3);
   Canvas4->SetFrameBorderMode(0);
   Canvas4->SetFrameLineWidth(3);
   Canvas4->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("track rate bpix");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1009[29] = {
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
   Double_t Graph_fy1009[29] = {
   0,
   0,
   0,
   0.1671729,
   0,
   0,
   0,
   0,
   0.1691832,
   0,
   0,
   0,
   0.1797427,
   0,
   0.1716175,
   0,
   0,
   0.1749032,
   0,
   0.1778003,
   0,
   0.202346,
   0.2161393,
   0,
   0,
   0.1667935,
   0,
   0,
   0};
   Double_t Graph_fex1009[29] = {
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
   Double_t Graph_fey1009[29] = {
   0,
   0,
   0,
   0.009174806,
   0,
   0,
   0,
   0,
   0.003440559,
   0,
   0,
   0,
   0.008520623,
   0,
   0.002373298,
   0,
   0,
   0.005413119,
   0,
   0.01492067,
   0,
   0.09049191,
   0.04084648,
   0,
   0,
   0.002432674,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(29,Graph_fx1009,Graph_fy1009,Graph_fex1009,Graph_fey1009);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3113ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1009 = new TH1F("Graph_Graph1009","Graph",100,297890.4,298437.6);
   Graph_Graph1009->SetMinimum(0);
   Graph_Graph1009->SetMaximum(0.3221217);
   Graph_Graph1009->SetDirectory(0);
   Graph_Graph1009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1009->SetLineColor(ci);
   Graph_Graph1009->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1009->GetXaxis()->SetNoExponent();
   Graph_Graph1009->GetXaxis()->SetLabelFont(42);
   Graph_Graph1009->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1009->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1009->GetXaxis()->SetTitleFont(42);
   Graph_Graph1009->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1009->GetYaxis()->SetLabelFont(42);
   Graph_Graph1009->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1009->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1009->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1009->GetYaxis()->SetTitleFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1009->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1009);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1010[51] = {
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
   Double_t Graph_fy1010[51] = {
   0.1163182,
   0.1304765,
   0,
   0.1317236,
   0,
   0.1682818,
   0,
   0.1256052,
   0.1276384,
   0.1229193,
   0.1236152,
   0,
   0,
   0.1242544,
   0.05523653,
   0,
   0.1526346,
   0.1223639,
   0.1302539,
   0,
   0.1331884,
   0.1381807,
   0.1436399,
   0,
   0.1364785,
   0,
   0.1439034,
   0.0630116,
   0,
   0,
   0,
   0.1709545,
   0.1622942,
   0.1274076,
   0,
   0,
   0,
   0,
   0.05431259,
   0,
   0,
   0,
   0.1335719,
   0,
   0.1461108,
   0,
   0.08993365,
   0,
   0,
   0,
   0};
   Double_t Graph_fex1010[51] = {
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
   Double_t Graph_fey1010[51] = {
   0.01212701,
   0.004170045,
   0,
   0.005581309,
   0,
   0.01708642,
   0,
   0.01181594,
   0.0329561,
   0.01325473,
   0.006733749,
   0,
   0,
   0.005523783,
   0.004863305,
   0,
   0.008599987,
   0.006851065,
   0.01438414,
   0,
   0.006498931,
   0.007116667,
   0.008320834,
   0,
   0.0262653,
   0,
   0.002043497,
   0.01343412,
   0,
   0,
   0,
   0.02607032,
   0.004063708,
   0.00894226,
   0,
   0,
   0,
   0,
   0.0384048,
   0,
   0,
   0,
   0.00869479,
   0,
   0.009278047,
   0,
   0.003955277,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(51,Graph_fx1010,Graph_fy1010,Graph_fex1010,Graph_fey1010);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#de0b1d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1010 = new TH1F("Graph_Graph1010","Graph",100,296983.5,297793.5);
   Graph_Graph1010->SetMinimum(0);
   Graph_Graph1010->SetMaximum(0.2167273);
   Graph_Graph1010->SetDirectory(0);
   Graph_Graph1010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1010->SetLineColor(ci);
   Graph_Graph1010->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1010->GetXaxis()->SetNoExponent();
   Graph_Graph1010->GetXaxis()->SetLabelFont(42);
   Graph_Graph1010->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1010->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1010->GetXaxis()->SetTitleFont(42);
   Graph_Graph1010->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1010->GetYaxis()->SetLabelFont(42);
   Graph_Graph1010->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1010->GetYaxis()->SetTitleSize(0.035);
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
      tex = new TLatex(0.23,0.83,"BPIX");
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
   Canvas4->Modified();
   Canvas4->cd();
   Canvas4->SetSelected(Canvas4);
}
