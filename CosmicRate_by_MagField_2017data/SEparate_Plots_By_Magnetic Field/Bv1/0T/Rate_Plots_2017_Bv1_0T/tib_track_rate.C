void tib_track_rate()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 23 23:09:38 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",193,183,800,600);
   c->Range(297822,0.8620579,298506,2.234249);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1007[29] = {
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
   Double_t Graph0_fy1007[29] = {
   1.2052,
   1.27503,
   1.189717,
   1.199415,
   1.2704,
   1.195123,
   1.18405,
   1.290536,
   1.217727,
   1.230733,
   1.288562,
   1.214376,
   1.207306,
   1.201194,
   1.212514,
   1.265993,
   1.224023,
   1.228678,
   1.233319,
   1.215803,
   1.118416,
   1.740176,
   1.343151,
   1.288716,
   1.222432,
   1.220668,
   1.236044,
   1.385501,
   1.209123};
   Double_t Graph0_fex1007[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1007[29] = {
   0.0496594,
   0.01820915,
   0.01824513,
   0.02457529,
   0.03192,
   0.04569665,
   0.005385051,
   0.03216304,
   0.009230503,
   0.04118492,
   0.02992613,
   0.01588676,
   0.02208281,
   0.04839749,
   0.006308338,
   0.09307769,
   0.01123761,
   0.01434722,
   0.04837476,
   0.03901698,
   0.02765951,
   0.2653743,
   0.101824,
   0.04013542,
   0.01802182,
   0.006581021,
   0.03390561,
   0.08869759,
   0.02891184};
   TGraphErrors *gre = new TGraphErrors(29,Graph0_fx1007,Graph0_fy1007,Graph0_fex1007,Graph0_fey1007);
   gre->SetName("Graph0");
   gre->SetTitle("TIB Track Rate");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1007 = new TH1F("Graph_Graph1007","TIB Track Rate",100,297890.4,298437.6);
   Graph_Graph1007->SetMinimum(0.999277);
   Graph_Graph1007->SetMaximum(2.09703);
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
   Graph_Graph1007->GetYaxis()->SetTitle("Track Rate (in Hz)");
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
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.362807,0.94,0.637193,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("TIB Track Rate");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
