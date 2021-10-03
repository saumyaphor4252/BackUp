void track_rate_TEC()
{
//=========Macro generated from canvas: Canvas10/Canvas10
//=========  (Thu Jun 24 11:10:45 2021) by ROOT version6.10/04
   TCanvas *Canvas10 = new TCanvas("Canvas10", "Canvas10",604,112,856,836);
   gStyle->SetOptStat(0);
   Canvas10->Range(297790.9,0.2295357,298440.2,0.7228866);
   Canvas10->SetFillColor(0);
   Canvas10->SetBorderMode(0);
   Canvas10->SetBorderSize(2);
   Canvas10->SetGridx();
   Canvas10->SetGridy();
   Canvas10->SetTickx(1);
   Canvas10->SetTicky(1);
   Canvas10->SetLeftMargin(0.1883886);
   Canvas10->SetRightMargin(0.03909953);
   Canvas10->SetTopMargin(0.0875817);
   Canvas10->SetBottomMargin(0.1294118);
   Canvas10->SetFrameLineWidth(3);
   Canvas10->SetFrameBorderMode(0);
   Canvas10->SetFrameLineWidth(3);
   Canvas10->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("track rate tec");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1021[29] = {
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
   Double_t Graph_fy1021[29] = {
   0.341712,
   0.5611902,
   0.3956396,
   0.4184359,
   0.3921878,
   0.3843962,
   0.4071167,
   0.4208269,
   0.4198093,
   0.3969218,
   0.3982449,
   0.4079789,
   0.4035124,
   0.4757977,
   0.4047076,
   0.4995542,
   0.4182561,
   0.410453,
   0.4117389,
   0.3919118,
   0.4056395,
   0.4451613,
   0.5943829,
   0.5562352,
   0.4099571,
   0.5594198,
   0.3943437,
   0.4088362,
   0.4141023};
   Double_t Graph_fex1021[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_fey1021[29] = {
   0.02644247,
   0.01208049,
   0.01052144,
   0.01451538,
   0.01773535,
   0.02591598,
   0.003157652,
   0.01836639,
   0.005419715,
   0.02338884,
   0.01663692,
   0.00920826,
   0.01276657,
   0.03045983,
   0.003644535,
   0.05846839,
   0.006569016,
   0.008292402,
   0.02795066,
   0.02215217,
   0.01665762,
   0.1342212,
   0.06773622,
   0.02636808,
   0.01043652,
   0.00445516,
   0.01915103,
   0.04818181,
   0.01691976};
   TGraphErrors *gre = new TGraphErrors(29,Graph_fx1021,Graph_fy1021,Graph_fex1021,Graph_fey1021);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3113ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1021 = new TH1F("Graph_Graph1021","Graph",100,297890.4,298437.6);
   Graph_Graph1021->SetMinimum(0.2758222);
   Graph_Graph1021->SetMaximum(0.6972371);
   Graph_Graph1021->SetDirectory(0);
   Graph_Graph1021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1021->SetLineColor(ci);
   Graph_Graph1021->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1021->GetXaxis()->SetNoExponent();
   Graph_Graph1021->GetXaxis()->SetLabelFont(42);
   Graph_Graph1021->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1021->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1021->GetXaxis()->SetTitleFont(42);
   Graph_Graph1021->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1021->GetYaxis()->SetLabelFont(42);
   Graph_Graph1021->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1021->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1021->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1021->GetYaxis()->SetTitleFont(42);
   Graph_Graph1021->GetZaxis()->SetLabelFont(42);
   Graph_Graph1021->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1021->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1021);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1022[51] = {
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
   Double_t Graph_fy1022[51] = {
   0.5449256,
   0.6327908,
   0.6352976,
   0.6957467,
   0.7648194,
   0.7407867,
   0.6691822,
   0.6936072,
   0.7573212,
   0.7275106,
   0.68777,
   0.7043763,
   0.3775275,
   0.6291301,
   0.2727571,
   0.6447121,
   0.7273161,
   0.7011952,
   0.6814505,
   0.647965,
   0.6282055,
   0.5659177,
   0.7466381,
   0.01391668,
   0.7531592,
   0.6469377,
   0.7126397,
   0.3436996,
   0.534551,
   0.6054266,
   0.6883648,
   0.6043043,
   0.6918107,
   0.7098423,
   0.7546613,
   0.7066673,
   0.7151935,
   0.7183357,
   1.059096,
   0.6415284,
   0.7208688,
   0.7079712,
   0.6435222,
   0.6470331,
   0.7264301,
   0.7194156,
   0.5970064,
   0.677783,
   0.7246433,
   0.6468991,
   0.7778829};
   Double_t Graph_fex1022[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_fey1022[51] = {
   0.02624814,
   0.009183427,
   0.01904275,
   0.01282714,
   0.03276127,
   0.03584918,
   0.06267466,
   0.02776651,
   0.08027589,
   0.03224634,
   0.01588337,
   0.01003593,
   0.1258425,
   0.01242942,
   0.01080703,
   0.02358878,
   0.01877296,
   0.01640026,
   0.03290074,
   0.01721948,
   0.0141143,
   0.01440223,
   0.01897075,
   0.003111864,
   0.0617012,
   0.03198901,
   0.004547509,
   0.03137534,
   0.07018999,
   0.0195809,
   0.03252218,
   0.04901555,
   0.008390053,
   0.0211072,
   0.024382,
   0.007761359,
   0.02775489,
   0.02291135,
   0.169591,
   0.05103726,
   0.02658965,
   0.01935475,
   0.01908461,
   0.02048147,
   0.0206877,
   0.04202871,
   0.01019073,
   0.03547678,
   0.0158965,
   0.0303271,
   0.06130576};
   gre = new TGraphErrors(51,Graph_fx1022,Graph_fy1022,Graph_fex1022,Graph_fey1022);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#de0b1d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1022 = new TH1F("Graph_Graph1022","Graph",100,296983.5,297793.5);
   Graph_Graph1022->SetMinimum(0.009724333);
   Graph_Graph1022->SetMaximum(1.350475);
   Graph_Graph1022->SetDirectory(0);
   Graph_Graph1022->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1022->SetLineColor(ci);
   Graph_Graph1022->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1022->GetXaxis()->SetNoExponent();
   Graph_Graph1022->GetXaxis()->SetLabelFont(42);
   Graph_Graph1022->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1022->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1022->GetXaxis()->SetTitleFont(42);
   Graph_Graph1022->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1022->GetYaxis()->SetLabelFont(42);
   Graph_Graph1022->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1022->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1022->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1022->GetYaxis()->SetTitleFont(42);
   Graph_Graph1022->GetZaxis()->SetLabelFont(42);
   Graph_Graph1022->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1022->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1022);
   
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
      tex = new TLatex(0.23,0.83,"TEC");
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
   Canvas10->Modified();
   Canvas10->cd();
   Canvas10->SetSelected(Canvas10);
}
