void pixel_track_rate()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 23 23:09:37 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",193,183,800,600);
   c->Range(297822,-0.04342825,298506,0.3908543);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1003[29] = {
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
   Double_t Graph0_fy1003[29] = {
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
   Double_t Graph0_fex1003[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1003[29] = {
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
   TGraphErrors *gre = new TGraphErrors(29,Graph0_fx1003,Graph0_fy1003,Graph0_fex1003,Graph0_fey1003);
   gre->SetName("Graph0");
   gre->SetTitle("Pixel Track Rate");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","Pixel Track Rate",100,297890.4,298437.6);
   Graph_Graph1003->SetMinimum(0);
   Graph_Graph1003->SetMaximum(0.347426);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1003->SetLineColor(ci);
   Graph_Graph1003->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1003->GetXaxis()->SetNoExponent();
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1003->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->SetTitle("Track Rate (in Hz)");
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1003);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.3496491,0.94,0.6503509,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Pixel Track Rate");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
