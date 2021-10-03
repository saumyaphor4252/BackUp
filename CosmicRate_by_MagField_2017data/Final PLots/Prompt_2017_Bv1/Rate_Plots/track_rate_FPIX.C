void track_rate_FPIX()
{
//=========Macro generated from canvas: Canvas3/Canvas3
//=========  (Thu Jun 24 11:10:45 2021) by ROOT version6.10/04
   TCanvas *Canvas3 = new TCanvas("Canvas3", "Canvas3",604,112,856,836);
   gStyle->SetOptStat(0);
   Canvas3->Range(297790.9,-0.01917848,298440.2,0.1290188);
   Canvas3->SetFillColor(0);
   Canvas3->SetBorderMode(0);
   Canvas3->SetBorderSize(2);
   Canvas3->SetGridx();
   Canvas3->SetGridy();
   Canvas3->SetTickx(1);
   Canvas3->SetTicky(1);
   Canvas3->SetLeftMargin(0.1883886);
   Canvas3->SetRightMargin(0.03909953);
   Canvas3->SetTopMargin(0.0875817);
   Canvas3->SetBottomMargin(0.1294118);
   Canvas3->SetFrameLineWidth(3);
   Canvas3->SetFrameBorderMode(0);
   Canvas3->SetFrameLineWidth(3);
   Canvas3->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("track rate fpix");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1007[29] = {
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
   Double_t Graph_fy1007[29] = {
   0,
   0.0595517,
   0,
   0.06495575,
   0,
   0,
   0,
   0.06653073,
   0,
   0,
   0,
   0.05881713,
   0.06745402,
   0.04679977,
   0.05979865,
   0.06843208,
   0,
   0,
   0,
   0.04507612,
   0,
   0,
   0.08491185,
   0.06999814,
   0,
   0.06656127,
   0,
   0,
   0};
   Double_t Graph_fex1007[29] = {
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
   Double_t Graph_fey1007[29] = {
   0,
   0.003935287,
   0,
   0.005719035,
   0,
   0,
   0,
   0.007302697,
   0,
   0,
   0,
   0.003496316,
   0.005219748,
   0.009552964,
   0.001400932,
   0.02164012,
   0,
   0,
   0,
   0.007512687,
   0,
   0,
   0.02560189,
   0.009353895,
   0,
   0.001536757,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(29,Graph_fx1007,Graph_fy1007,Graph_fex1007,Graph_fey1007);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3113ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1007 = new TH1F("Graph_Graph1007","Graph",100,297890.4,298437.6);
   Graph_Graph1007->SetMinimum(0);
   Graph_Graph1007->SetMaximum(0.1215651);
   Graph_Graph1007->SetDirectory(0);
   Graph_Graph1007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1007->SetLineColor(ci);
   Graph_Graph1007->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1007->GetXaxis()->SetNoExponent();
   Graph_Graph1007->GetXaxis()->SetLabelFont(42);
   Graph_Graph1007->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1007->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1007->GetXaxis()->SetTitleFont(42);
   Graph_Graph1007->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1007->GetYaxis()->SetLabelFont(42);
   Graph_Graph1007->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1007->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1007->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1007->GetYaxis()->SetTitleFont(42);
   Graph_Graph1007->GetZaxis()->SetLabelFont(42);
   Graph_Graph1007->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1007->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1007);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1008[51] = {
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
   Double_t Graph_fy1008[51] = {
   0.0354012,
   0.05437629,
   0,
   0.05841245,
   0,
   0.06939454,
   0,
   0.07225075,
   0.07658304,
   0.08575764,
   0.06455868,
   0,
   0,
   0.06703845,
   0.02269408,
   0,
   0.07026038,
   0.06099017,
   0.08736545,
   0,
   0.05930057,
   0.05351294,
   0.06410773,
   0,
   0.1010952,
   0,
   0.06250615,
   0.02291331,
   0,
   0,
   0,
   0.05565961,
   0.06369664,
   0.058369,
   0,
   0,
   0,
   0,
   0.05431259,
   0,
   0,
   0,
   0.05999416,
   0,
   0.06539638,
   0,
   0.0387915,
   0,
   0,
   0,
   0};
   Double_t Graph_fex1008[51] = {
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
   Double_t Graph_fey1008[51] = {
   0.006690197,
   0.002692028,
   0,
   0.003716695,
   0,
   0.01097224,
   0,
   0.008961603,
   0.02552768,
   0.01107126,
   0.004866294,
   0,
   0,
   0.004057351,
   0.003117271,
   0,
   0.005834807,
   0.004836835,
   0.01178035,
   0,
   0.004336487,
   0.004428762,
   0.005558845,
   0,
   0.02260557,
   0,
   0.00134679,
   0.008101078,
   0,
   0,
   0,
   0.01487566,
   0.00254583,
   0.006052583,
   0,
   0,
   0,
   0,
   0.0384048,
   0,
   0,
   0,
   0.005827148,
   0,
   0.00620715,
   0,
   0.002597671,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(51,Graph_fx1008,Graph_fy1008,Graph_fex1008,Graph_fey1008);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#de0b1d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1008 = new TH1F("Graph_Graph1008","Graph",100,296983.5,297793.5);
   Graph_Graph1008->SetMinimum(0);
   Graph_Graph1008->SetMaximum(0.1360708);
   Graph_Graph1008->SetDirectory(0);
   Graph_Graph1008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1008->SetLineColor(ci);
   Graph_Graph1008->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1008->GetXaxis()->SetNoExponent();
   Graph_Graph1008->GetXaxis()->SetLabelFont(42);
   Graph_Graph1008->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1008->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1008->GetXaxis()->SetTitleFont(42);
   Graph_Graph1008->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1008->GetYaxis()->SetLabelFont(42);
   Graph_Graph1008->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1008->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1008->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1008->GetYaxis()->SetTitleFont(42);
   Graph_Graph1008->GetZaxis()->SetLabelFont(42);
   Graph_Graph1008->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1008->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1008);
   
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
      tex = new TLatex(0.23,0.83,"FPIX");
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
   Canvas3->Modified();
   Canvas3->cd();
   Canvas3->SetSelected(Canvas3);
}
