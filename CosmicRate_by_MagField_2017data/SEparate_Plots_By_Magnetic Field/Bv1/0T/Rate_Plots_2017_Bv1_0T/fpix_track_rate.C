void fpix_track_rate()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 23 23:09:37 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",193,183,800,600);
   c->Range(297822,-0.01519564,298506,0.1367607);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1004[29] = {
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
   Double_t Graph0_fy1004[29] = {
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
   Double_t Graph0_fex1004[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1004[29] = {
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
   TGraphErrors *gre = new TGraphErrors(29,Graph0_fx1004,Graph0_fy1004,Graph0_fex1004,Graph0_fey1004);
   gre->SetName("Graph0");
   gre->SetTitle("FPIX Track Rate");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1004 = new TH1F("Graph_Graph1004","FPIX Track Rate",100,297890.4,298437.6);
   Graph_Graph1004->SetMinimum(0);
   Graph_Graph1004->SetMaximum(0.1215651);
   Graph_Graph1004->SetDirectory(0);
   Graph_Graph1004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1004->SetLineColor(ci);
   Graph_Graph1004->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1004->GetXaxis()->SetNoExponent();
   Graph_Graph1004->GetXaxis()->SetLabelFont(42);
   Graph_Graph1004->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1004->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1004->GetXaxis()->SetTitleFont(42);
   Graph_Graph1004->GetYaxis()->SetTitle("Track Rate (in Hz)");
   Graph_Graph1004->GetYaxis()->SetLabelFont(42);
   Graph_Graph1004->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1004->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1004->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1004->GetYaxis()->SetTitleFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1004->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1004);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.3515288,0.94,0.6484712,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("FPIX Track Rate");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
