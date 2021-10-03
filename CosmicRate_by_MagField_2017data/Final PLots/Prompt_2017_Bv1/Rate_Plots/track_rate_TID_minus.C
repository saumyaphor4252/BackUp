void track_rate_TID_minus()
{
//=========Macro generated from canvas: Canvas8/Canvas8
//=========  (Thu Jun 24 11:10:45 2021) by ROOT version6.10/04
   TCanvas *Canvas8 = new TCanvas("Canvas8", "Canvas8",604,112,856,836);
   gStyle->SetOptStat(0);
   Canvas8->Range(297790.9,0.01387575,298440.2,0.2407635);
   Canvas8->SetFillColor(0);
   Canvas8->SetBorderMode(0);
   Canvas8->SetBorderSize(2);
   Canvas8->SetGridx();
   Canvas8->SetGridy();
   Canvas8->SetTickx(1);
   Canvas8->SetTicky(1);
   Canvas8->SetLeftMargin(0.1883886);
   Canvas8->SetRightMargin(0.03909953);
   Canvas8->SetTopMargin(0.0875817);
   Canvas8->SetBottomMargin(0.1294118);
   Canvas8->SetFrameLineWidth(3);
   Canvas8->SetFrameBorderMode(0);
   Canvas8->SetFrameLineWidth(3);
   Canvas8->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("track rate tid minus");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1017[29] = {
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
   Double_t Graph_fy1017[29] = {
   0.1350479,
   0.188277,
   0.1578082,
   0.1762365,
   0.1684242,
   0.1520112,
   0.1564251,
   0.1514977,
   0.1609969,
   0.1267945,
   0.1661091,
   0.1571228,
   0.1619704,
   0.1579492,
   0.1583909,
   0.1779234,
   0.1624946,
   0.1579825,
   0.1631776,
   0.164027,
   0.1498062,
   0.1214076,
   0.1543852,
   0.1774953,
   0.1548963,
   0.1826177,
   0.1785708,
   0.1703484,
   0.1728307};
   Double_t Graph_fex1017[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_fey1017[29] = {
   0.01662324,
   0.006997259,
   0.006644923,
   0.009420238,
   0.01162238,
   0.01629731,
   0.001957303,
   0.01101984,
   0.003356287,
   0.01321924,
   0.01074471,
   0.005714501,
   0.008088417,
   0.01754992,
   0.00228001,
   0.03489365,
   0.00409448,
   0.005144618,
   0.0175959,
   0.01433111,
   0.01012296,
   0.07009473,
   0.03452158,
   0.01489507,
   0.00641515,
   0.002545457,
   0.01288723,
   0.03110123,
   0.01093077};
   TGraphErrors *gre = new TGraphErrors(29,Graph_fx1017,Graph_fy1017,Graph_fex1017,Graph_fey1017);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3113ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1017 = new TH1F("Graph_Graph1017","Graph",100,297890.4,298437.6);
   Graph_Graph1017->SetMinimum(0.03516249);
   Graph_Graph1017->SetMaximum(0.2289675);
   Graph_Graph1017->SetDirectory(0);
   Graph_Graph1017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1017->SetLineColor(ci);
   Graph_Graph1017->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1017->GetXaxis()->SetNoExponent();
   Graph_Graph1017->GetXaxis()->SetLabelFont(42);
   Graph_Graph1017->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1017->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1017->GetXaxis()->SetTitleFont(42);
   Graph_Graph1017->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1017->GetYaxis()->SetLabelFont(42);
   Graph_Graph1017->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1017->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1017->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1017->GetYaxis()->SetTitleFont(42);
   Graph_Graph1017->GetZaxis()->SetLabelFont(42);
   Graph_Graph1017->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1017->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1017);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1018[51] = {
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
   Double_t Graph_fy1018[51] = {
   0.2098785,
   0.26002,
   0.2625669,
   0.2712513,
   0.2511976,
   0.3088057,
   0.3463312,
   0.2934492,
   0.2722953,
   0.2901467,
   0.2486976,
   0.2784045,
   0.251685,
   0.2396686,
   0.1044784,
   0.2502899,
   0.2708659,
   0.2734968,
   0.2795695,
   0.2553422,
   0.2406905,
   0.2272467,
   0.2790855,
   0.009741675,
   0.2780118,
   0.2847158,
   0.2742261,
   0.1202949,
   0.2672755,
   0.2583829,
   0.2750386,
   0.2822737,
   0.265267,
   0.2636019,
   0.2906785,
   0.2800244,
   0.2994334,
   0.2776883,
   0.2444067,
   0.2233169,
   0.2716744,
   0.2788497,
   0.2558241,
   0.2677602,
   0.2839735,
   0.2921859,
   0.2210941,
   0.2692563,
   0.269213,
   0.2914601,
   0.2512417};
   Double_t Graph_fex1018[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_fey1018[51] = {
   0.01628973,
   0.005886783,
   0.01224224,
   0.008009219,
   0.01877539,
   0.02314597,
   0.04508848,
   0.01806055,
   0.04813546,
   0.0203643,
   0.009551175,
   0.006309476,
   0.10275,
   0.007671605,
   0.006688544,
   0.01469753,
   0.01145641,
   0.01024254,
   0.02107334,
   0.0108095,
   0.008736513,
   0.009126448,
   0.0115984,
   0.002603572,
   0.0374871,
   0.02122147,
   0.002820934,
   0.0185619,
   0.04963182,
   0.01279186,
   0.02055735,
   0.03349973,
   0.005195325,
   0.01286246,
   0.01513212,
   0.004885715,
   0.01795882,
   0.01424511,
   0.08146889,
   0.03011204,
   0.01632333,
   0.01214688,
   0.01203296,
   0.01317562,
   0.01293464,
   0.02678463,
   0.00620161,
   0.02236051,
   0.009689188,
   0.02035645,
   0.03484095};
   gre = new TGraphErrors(51,Graph_fx1018,Graph_fy1018,Graph_fex1018,Graph_fey1018);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#de0b1d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1018 = new TH1F("Graph_Graph1018","Graph",100,296983.5,297793.5);
   Graph_Graph1018->SetMinimum(0.006424292);
   Graph_Graph1018->SetMaximum(0.4298478);
   Graph_Graph1018->SetDirectory(0);
   Graph_Graph1018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1018->SetLineColor(ci);
   Graph_Graph1018->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1018->GetXaxis()->SetNoExponent();
   Graph_Graph1018->GetXaxis()->SetLabelFont(42);
   Graph_Graph1018->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1018->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1018->GetXaxis()->SetTitleFont(42);
   Graph_Graph1018->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1018->GetYaxis()->SetLabelFont(42);
   Graph_Graph1018->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1018->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1018->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1018->GetYaxis()->SetTitleFont(42);
   Graph_Graph1018->GetZaxis()->SetLabelFont(42);
   Graph_Graph1018->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1018->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1018);
   
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
      tex = new TLatex(0.23,0.83,"TID-");
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
   Canvas8->Modified();
   Canvas8->cd();
   Canvas8->SetSelected(Canvas8);
}
