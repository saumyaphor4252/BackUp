void track_rate_TOB()
{
//=========Macro generated from canvas: Canvas9/Canvas9
//=========  (Thu Jun 24 11:10:45 2021) by ROOT version6.10/04
   TCanvas *Canvas9 = new TCanvas("Canvas9", "Canvas9",604,112,856,836);
   gStyle->SetOptStat(0);
   Canvas9->Range(297790.9,1.880413,298440.2,3.889721);
   Canvas9->SetFillColor(0);
   Canvas9->SetBorderMode(0);
   Canvas9->SetBorderSize(2);
   Canvas9->SetGridx();
   Canvas9->SetGridy();
   Canvas9->SetTickx(1);
   Canvas9->SetTicky(1);
   Canvas9->SetLeftMargin(0.1883886);
   Canvas9->SetRightMargin(0.03909953);
   Canvas9->SetTopMargin(0.0875817);
   Canvas9->SetBottomMargin(0.1294118);
   Canvas9->SetFrameLineWidth(3);
   Canvas9->SetFrameBorderMode(0);
   Canvas9->SetFrameLineWidth(3);
   Canvas9->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("track rate tob");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1019[29] = {
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
   Double_t Graph_fy1019[29] = {
   2.330599,
   2.517815,
   2.359288,
   2.430553,
   2.466212,
   2.33608,
   2.323624,
   2.468851,
   2.379269,
   2.37464,
   2.477737,
   2.38386,
   2.373008,
   2.378989,
   2.364147,
   2.504614,
   2.382429,
   2.387161,
   2.398332,
   2.387782,
   2.251197,
   3.278006,
   2.740337,
   2.518683,
   2.394384,
   2.44893,
   2.381873,
   2.572261,
   2.389211};
   Double_t Graph_fex1019[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_fey1019[29] = {
   0.06905667,
   0.02558829,
   0.02569305,
   0.03498376,
   0.04447417,
   0.06388841,
   0.007543758,
   0.04448561,
   0.01290245,
   0.05720779,
   0.04149783,
   0.02225866,
   0.0309596,
   0.06811024,
   0.008808638,
   0.1309183,
   0.01567795,
   0.01999814,
   0.06745835,
   0.05467885,
   0.03924185,
   0.3642229,
   0.145442,
   0.05610945,
   0.02522221,
   0.009321431,
   0.04706671,
   0.1208554,
   0.04064131};
   TGraphErrors *gre = new TGraphErrors(29,Graph_fx1019,Graph_fy1019,Graph_fex1019,Graph_fey1019);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3113ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1019 = new TH1F("Graph_Graph1019","Graph",100,297890.4,298437.6);
   Graph_Graph1019->SetMinimum(2.068928);
   Graph_Graph1019->SetMaximum(3.785256);
   Graph_Graph1019->SetDirectory(0);
   Graph_Graph1019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1019->SetLineColor(ci);
   Graph_Graph1019->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1019->GetXaxis()->SetNoExponent();
   Graph_Graph1019->GetXaxis()->SetLabelFont(42);
   Graph_Graph1019->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1019->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1019->GetXaxis()->SetTitleFont(42);
   Graph_Graph1019->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1019->GetYaxis()->SetLabelFont(42);
   Graph_Graph1019->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1019->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1019->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1019->GetYaxis()->SetTitleFont(42);
   Graph_Graph1019->GetZaxis()->SetLabelFont(42);
   Graph_Graph1019->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1019->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1019);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1020[51] = {
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
   Double_t Graph_fy1020[51] = {
   1.868677,
   2.207038,
   2.452146,
   2.38285,
   2.507766,
   2.635258,
   2.512368,
   2.339813,
   2.52724,
   2.515557,
   2.255886,
   2.435003,
   2.68464,
   2.184766,
   0.9270317,
   2.434716,
   2.494001,
   2.339874,
   2.492298,
   2.41431,
   2.218222,
   2.005269,
   2.505504,
   0.05845005,
   2.72957,
   2.342579,
   2.43951,
   1.205813,
   2.193502,
   2.373576,
   2.321695,
   2.449023,
   2.42149,
   2.33727,
   2.478251,
   2.464556,
   2.455785,
   2.510156,
   2.471223,
   2.52145,
   2.473512,
   2.475254,
   2.372599,
   2.41049,
   2.453248,
   2.519182,
   2.006373,
   2.499441,
   2.413153,
   2.456795,
   2.435112};
   Double_t Graph_fex1020[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_fey1020[51] = {
   0.04860681,
   0.01715061,
   0.03741228,
   0.02373846,
   0.05932322,
   0.06761518,
   0.1214399,
   0.05099823,
   0.1466454,
   0.05996225,
   0.028766,
   0.01865971,
   0.33558,
   0.02316238,
   0.0199235,
   0.04584023,
   0.03476319,
   0.02995902,
   0.06291997,
   0.03323845,
   0.0265223,
   0.02711061,
   0.03475177,
   0.006377423,
   0.117462,
   0.06087187,
   0.008413753,
   0.05876772,
   0.1421836,
   0.03877068,
   0.05972729,
   0.09867394,
   0.01569685,
   0.03830047,
   0.04418409,
   0.01449438,
   0.05143075,
   0.04282894,
   0.2590546,
   0.1011823,
   0.04925399,
   0.03619008,
   0.03664492,
   0.03953217,
   0.03801772,
   0.07864768,
   0.01868193,
   0.06812717,
   0.02900894,
   0.0591013,
   0.1084685};
   gre = new TGraphErrors(51,Graph_fx1020,Graph_fy1020,Graph_fex1020,Graph_fey1020);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#de0b1d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1020 = new TH1F("Graph_Graph1020","Graph",100,296983.5,297793.5);
   Graph_Graph1020->SetMinimum(0.04686536);
   Graph_Graph1020->SetMaximum(3.317035);
   Graph_Graph1020->SetDirectory(0);
   Graph_Graph1020->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1020->SetLineColor(ci);
   Graph_Graph1020->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1020->GetXaxis()->SetNoExponent();
   Graph_Graph1020->GetXaxis()->SetLabelFont(42);
   Graph_Graph1020->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1020->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1020->GetXaxis()->SetTitleFont(42);
   Graph_Graph1020->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1020->GetYaxis()->SetLabelFont(42);
   Graph_Graph1020->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1020->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1020->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1020->GetYaxis()->SetTitleFont(42);
   Graph_Graph1020->GetZaxis()->SetLabelFont(42);
   Graph_Graph1020->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1020->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1020);
   
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
      tex = new TLatex(0.23,0.83,"TOB");
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
   Canvas9->Modified();
   Canvas9->cd();
   Canvas9->SetSelected(Canvas9);
}
