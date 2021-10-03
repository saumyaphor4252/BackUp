void track_rate_PIX()
{
//=========Macro generated from canvas: Canvas2/Canvas2
//=========  (Thu Jun 24 11:10:45 2021) by ROOT version6.10/04
   TCanvas *Canvas2 = new TCanvas("Canvas2", "Canvas2",604,112,856,836);
   gStyle->SetOptStat(0);
   Canvas2->Range(297790.9,-0.05481097,298440.2,0.3687282);
   Canvas2->SetFillColor(0);
   Canvas2->SetBorderMode(0);
   Canvas2->SetBorderSize(2);
   Canvas2->SetGridx();
   Canvas2->SetGridy();
   Canvas2->SetTickx(1);
   Canvas2->SetTicky(1);
   Canvas2->SetLeftMargin(0.1883886);
   Canvas2->SetRightMargin(0.03909953);
   Canvas2->SetTopMargin(0.0875817);
   Canvas2->SetBottomMargin(0.1294118);
   Canvas2->SetFrameLineWidth(3);
   Canvas2->SetFrameBorderMode(0);
   Canvas2->SetFrameLineWidth(3);
   Canvas2->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("track rate pixel");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1005[29] = {
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
   Double_t Graph_fy1005[29] = {
   0,
   0.0595517,
   0,
   0.2245757,
   0,
   0,
   0,
   0.06653073,
   0.1691832,
   0,
   0,
   0.05881713,
   0.236291,
   0.04679977,
   0.2222921,
   0.06843208,
   0,
   0.1749032,
   0,
   0.2166158,
   0,
   0.202346,
   0.2701741,
   0.06999814,
   0,
   0.2214688,
   0,
   0,
   0};
   Double_t Graph_fex1005[29] = {
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
   Double_t Graph_fey1005[29] = {
   0,
   0.003935287,
   0,
   0.01063397,
   0,
   0,
   0,
   0.007302697,
   0.003440559,
   0,
   0,
   0.003496316,
   0.009769431,
   0.009552964,
   0.002701056,
   0.02164012,
   0,
   0.005413119,
   0,
   0.01646899,
   0,
   0.09049191,
   0.04566775,
   0.009353895,
   0,
   0.002803178,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(29,Graph_fx1005,Graph_fy1005,Graph_fex1005,Graph_fey1005);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3113ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1005 = new TH1F("Graph_Graph1005","Graph",100,297890.4,298437.6);
   Graph_Graph1005->SetMinimum(0);
   Graph_Graph1005->SetMaximum(0.347426);
   Graph_Graph1005->SetDirectory(0);
   Graph_Graph1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1005->SetLineColor(ci);
   Graph_Graph1005->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1005->GetXaxis()->SetNoExponent();
   Graph_Graph1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph1005->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1005->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph1005->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph1005->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1005);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1006[51] = {
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
   Double_t Graph_fy1006[51] = {
   0.1453978,
   0.1740575,
   0,
   0.1816225,
   0,
   0.2203277,
   0,
   0.1867404,
   0.1786938,
   0.194384,
   0.1731346,
   0,
   0,
   0.1790148,
   0.07236414,
   0,
   0.205451,
   0.1726137,
   0.2065002,
   0,
   0.1829755,
   0.1814309,
   0.1928052,
   0,
   0.2021904,
   0,
   0.1950923,
   0.0859249,
   0,
   0,
   0,
   0.2146871,
   0.2124578,
   0.1713412,
   0,
   0,
   0,
   0,
   0.08146889,
   0,
   0,
   0,
   0.1856423,
   0,
   0.1991349,
   0,
   0.1203754,
   0,
   0,
   0,
   0};
   Double_t Graph_fex1006[51] = {
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
   Double_t Graph_fey1006[51] = {
   0.01355841,
   0.004816383,
   0,
   0.006553738,
   0,
   0.01955092,
   0,
   0.01440733,
   0.03899418,
   0.01666829,
   0.007969168,
   0,
   0,
   0.006630176,
   0.005566472,
   0,
   0.009977585,
   0.008137087,
   0.01811126,
   0,
   0.007617372,
   0.008154711,
   0.00964026,
   0,
   0.03196911,
   0,
   0.002379351,
   0.01568767,
   0,
   0,
   0,
   0.02921521,
   0.004649513,
   0.01037004,
   0,
   0,
   0,
   0,
   0.04703608,
   0,
   0,
   0,
   0.01025038,
   0,
   0.01083151,
   0,
   0.004575986,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(51,Graph_fx1006,Graph_fy1006,Graph_fex1006,Graph_fey1006);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#de0b1d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1006 = new TH1F("Graph_Graph1006","Graph",100,296983.5,297793.5);
   Graph_Graph1006->SetMinimum(0);
   Graph_Graph1006->SetMaximum(0.2682925);
   Graph_Graph1006->SetDirectory(0);
   Graph_Graph1006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1006->SetLineColor(ci);
   Graph_Graph1006->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1006->GetXaxis()->SetNoExponent();
   Graph_Graph1006->GetXaxis()->SetLabelFont(42);
   Graph_Graph1006->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1006->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1006->GetXaxis()->SetTitleFont(42);
   Graph_Graph1006->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1006->GetYaxis()->SetLabelFont(42);
   Graph_Graph1006->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1006->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1006->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1006->GetYaxis()->SetTitleFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1006->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1006);
   
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
      tex = new TLatex(0.23,0.83,"PIXEL");
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
   Canvas2->Modified();
   Canvas2->cd();
   Canvas2->SetSelected(Canvas2);
}
