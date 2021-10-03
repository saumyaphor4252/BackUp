void event_rate()
{
//=========Macro generated from canvas: Canvas0/Canvas0
//=========  (Thu Jun 24 11:10:45 2021) by ROOT version6.10/04
   TCanvas *Canvas0 = new TCanvas("Canvas0", "Canvas0",604,112,856,836);
   gStyle->SetOptStat(0);
   Canvas0->Range(297790.9,3.374679,298440.2,6.437401);
   Canvas0->SetFillColor(0);
   Canvas0->SetBorderMode(0);
   Canvas0->SetBorderSize(2);
   Canvas0->SetGridx();
   Canvas0->SetGridy();
   Canvas0->SetTickx(1);
   Canvas0->SetTicky(1);
   Canvas0->SetLeftMargin(0.1883886);
   Canvas0->SetRightMargin(0.03909953);
   Canvas0->SetTopMargin(0.0875817);
   Canvas0->SetBottomMargin(0.1294118);
   Canvas0->SetFrameLineWidth(3);
   Canvas0->SetFrameBorderMode(0);
   Canvas0->SetFrameLineWidth(3);
   Canvas0->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("event rate");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1001[29] = {
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
   Double_t Graph_fy1001[29] = {
   4.082129,
   4.391483,
   4.025507,
   4.159685,
   4.197773,
   4.069358,
   4.009988,
   4.197047,
   4.112942,
   4.115308,
   4.235435,
   4.092259,
   4.069052,
   4.10278,
   4.086263,
   4.318064,
   4.11519,
   4.138036,
   4.151543,
   4.140743,
   3.931899,
   5.584751,
   5.025238,
   4.411132,
   4.132517,
   4.25357,
   4.14619,
   4.258711,
   4.136875};
   Double_t Graph_fex1001[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_fey1001[29] = {
   0.09139349,
   0.03379364,
   0.03356105,
   0.04576613,
   0.05802326,
   0.08432204,
   0.009910062,
   0.05800214,
   0.01696394,
   0.07531083,
   0.05425589,
   0.02916354,
   0.0405408,
   0.08944486,
   0.0115807,
   0.1718994,
   0.02060507,
   0.02632969,
   0.08875357,
   0.07200475,
   0.05186137,
   0.4754056,
   0.1969546,
   0.07425476,
   0.0331355,
   0.01228489,
   0.06209822,
   0.1555061,
   0.05347818};
   TGraphErrors *gre = new TGraphErrors(29,Graph_fx1001,Graph_fy1001,Graph_fex1001,Graph_fey1001);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3113ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","Graph",100,297890.4,298437.6);
   Graph_Graph1001->SetMinimum(3.662026);
   Graph_Graph1001->SetMaximum(6.278168);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1001->GetXaxis()->SetNoExponent();
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetTitle("Event Rate (Hz)");
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1002[51] = {
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
   Double_t Graph_fy1002[51] = {
   2.765086,
   3.328149,
   3.575476,
   3.452247,
   3.563076,
   3.840988,
   3.657022,
   3.337985,
   3.710023,
   3.753326,
   3.23527,
   3.654006,
   3.901118,
   3.193781,
   1.344945,
   3.450548,
   3.654994,
   3.461863,
   3.57563,
   3.61872,
   3.252969,
   2.902161,
   3.674385,
   0.08976257,
   3.796124,
   3.49726,
   3.711629,
   1.738547,
   3.354768,
   3.441306,
   3.424922,
   3.741121,
   3.641189,
   3.429963,
   3.600002,
   3.722321,
   3.713836,
   3.686677,
   3.937663,
   3.57307,
   3.719095,
   3.594885,
   3.466078,
   3.634536,
   3.593266,
   3.668283,
   2.938064,
   3.591321,
   3.601596,
   3.572874,
   3.681657};
   Double_t Graph_fex1002[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_fey1002[51] = {
   0.05912679,
   0.02106086,
   0.04517602,
   0.02857295,
   0.07071211,
   0.08163082,
   0.1465155,
   0.06091254,
   0.1776779,
   0.07324347,
   0.03444897,
   0.02285808,
   0.4045271,
   0.02800485,
   0.02399776,
   0.05457159,
   0.04208376,
   0.03644067,
   0.07536415,
   0.04069318,
   0.03211801,
   0.03261472,
   0.04208445,
   0.007903154,
   0.1385225,
   0.07437611,
   0.01037817,
   0.07056545,
   0.1758377,
   0.0466835,
   0.07254303,
   0.1219571,
   0.01924831,
   0.04639748,
   0.05325307,
   0.017813,
   0.06324688,
   0.05190444,
   0.3270051,
   0.1204482,
   0.06039529,
   0.04361363,
   0.04429153,
   0.04854254,
   0.04601083,
   0.09490466,
   0.02260719,
   0.08166314,
   0.03543944,
   0.07127241,
   0.1333724};
   gre = new TGraphErrors(51,Graph_fx1002,Graph_fy1002,Graph_fex1002,Graph_fey1002);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#de0b1d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","Graph",100,296983.5,297793.5);
   Graph_Graph1002->SetMinimum(0.07367348);
   Graph_Graph1002->SetMaximum(4.728024);
   Graph_Graph1002->SetDirectory(0);
   Graph_Graph1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1002->SetLineColor(ci);
   Graph_Graph1002->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1002->GetXaxis()->SetNoExponent();
   Graph_Graph1002->GetXaxis()->SetLabelFont(42);
   Graph_Graph1002->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1002->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1002->GetXaxis()->SetTitleFont(42);
   Graph_Graph1002->GetYaxis()->SetTitle("Event Rate (Hz)");
   Graph_Graph1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1002->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1002->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1002->GetYaxis()->SetTitleFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1002->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1002);
   
   multigraph->Add(gre,"");
   multigraph->Draw("AP");
   multigraph->GetXaxis()->SetTitle("Run Number");
   multigraph->GetXaxis()->SetNoExponent();
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.03);
   multigraph->GetXaxis()->SetTitleSize(0.05);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("Event Rate (Hz)");
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
      tex = new TLatex(0.23,0.83,"Event Rate");
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
   Canvas0->Modified();
   Canvas0->cd();
   Canvas0->SetSelected(Canvas0);
}
