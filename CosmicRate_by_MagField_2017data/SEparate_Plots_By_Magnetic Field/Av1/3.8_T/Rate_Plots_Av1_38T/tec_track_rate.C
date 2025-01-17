void tec_track_rate()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 23 22:56:59 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",155,145,800,600);
   c->Range(294354,-0.1394414,296406,1.254973);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1009[61] = {
   295663,
   295789,
   294899,
   295387,
   295816,
   295795,
   295728,
   295003,
   295915,
   295776,
   295718,
   295308,
   295778,
   295801,
   295829,
   295716,
   295727,
   295821,
   295002,
   295717,
   295725,
   295668,
   294898,
   295661,
   294696,
   295715,
   295118,
   295780,
   295902,
   295819,
   296023,
   295690,
   295779,
   295660,
   295913,
   295804,
   295671,
   295832,
   295822,
   295662,
   295117,
   295701,
   295721,
   295774,
   295839,
   295780,
   295304,
   295659,
   295901,
   295838,
   295907,
   295723,
   295726,
   295713,
   295729,
   295823,
   294895,
   295766,
   295814,
   295877,
   296064};
   Double_t Graph0_fy1009[61] = {
   0.3949652,
   0.8337122,
   0.4740867,
   0.192673,
   0.008649822,
   0.8991743,
   0.2124944,
   0.729584,
   0.802499,
   0.8489371,
   0.2303686,
   0.7986686,
   0.8120708,
   0.5177687,
   0.8440219,
   0.224265,
   0.2198179,
   0.6882469,
   0.1989721,
   0.2300689,
   0.1872714,
   0.5565963,
   0.3084253,
   0.613994,
   0.8045598,
   0.2158015,
   0.08756707,
   0.8499283,
   0.8578028,
   0.607898,
   0.7109006,
   0.1792018,
   0.8503261,
   0.8429798,
   0.8130888,
   0.8546094,
   0.1573793,
   0.3821616,
   0.8071977,
   0.8779182,
   0.7735161,
   0.1702679,
   0.2512318,
   0.8200705,
   0.4681691,
   0.940457,
   0.001093619,
   0.3205582,
   0.6174755,
   0.7919785,
   0.8610735,
   0.1037386,
   0.1575865,
   0.1753888,
   0.1514875,
   0.8065223,
   0.002148295,
   0.826797,
   0.6610548,
   0.6572063,
   0.2464629};
   Double_t Graph0_fex1009[61] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1009[61] = {
   0.007790983,
   0.04316798,
   0.02196164,
   0.004996494,
   0.006116348,
   0.04366776,
   0.03447115,
   0.02430597,
   0.04171994,
   0.02279488,
   0.0368885,
   0.008039519,
   0.005015363,
   0.03936523,
   0.02712789,
   0.04027917,
   0.03475627,
   0.03071797,
   0.0369482,
   0.03637708,
   0.03165465,
   0.05406141,
   0.0427709,
   0.01336033,
   0.01525935,
   0.03500762,
   0.005985962,
   0.01958651,
   0.01303146,
   0.03441544,
   0.03541248,
   0.008692563,
   0.01892419,
   0.05749075,
   0.02278892,
   0.05098172,
   0.02520086,
   0.07494805,
   0.02182413,
   0.07028971,
   0.02778552,
   0.004138132,
   0.03831249,
   0.03008547,
   0.007946491,
   0.07366227,
   0.001093619,
   0.009687234,
   0.02208088,
   0.04988995,
   0.03967617,
   0.02379928,
   0.02926308,
   0.009539895,
   0.02813052,
   0.06436749,
   0.002148295,
   0.01083678,
   0.05470929,
   0.01873912,
   0.009608123};
   TGraphErrors *gre = new TGraphErrors(61,Graph0_fx1009,Graph0_fy1009,Graph0_fex1009,Graph0_fey1009);
   gre->SetName("Graph0");
   gre->SetTitle("TEC Track Rate");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1009 = new TH1F("Graph_Graph1009","TEC Track Rate",100,294559.2,296200.8);
   Graph_Graph1009->SetMinimum(0);
   Graph_Graph1009->SetMaximum(1.115531);
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
   Graph_Graph1009->GetYaxis()->SetTitle("Track Rate (in Hz)");
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
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.3559148,0.94,0.6440852,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("TEC Track Rate");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
