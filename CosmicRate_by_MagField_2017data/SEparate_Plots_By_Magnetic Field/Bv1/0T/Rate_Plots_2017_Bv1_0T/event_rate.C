void event_rate()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 23 23:09:36 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(297822,3.335008,298506,6.605186);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[29] = {
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
   Double_t Graph0_fy1001[29] = {
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
   Double_t Graph0_fex1001[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1001[29] = {
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
   TGraphErrors *gre = new TGraphErrors(29,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("Event Rate");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","Event Rate",100,297890.4,298437.6);
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
   Graph_Graph1001->GetYaxis()->SetTitle("Event Rate (in Hz)");
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
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.396015,0.94,0.603985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Event Rate");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
