void bpix_track_rate()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 23 23:09:37 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",193,183,800,600);
   c->Range(297822,-0.04026522,298506,0.362387);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1005[29] = {
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
   Double_t Graph0_fy1005[29] = {
   0,
   0,
   0,
   0.1671729,
   0,
   0,
   0,
   0,
   0.1691832,
   0,
   0,
   0,
   0.1797427,
   0,
   0.1716175,
   0,
   0,
   0.1749032,
   0,
   0.1778003,
   0,
   0.202346,
   0.2161393,
   0,
   0,
   0.1667935,
   0,
   0,
   0};
   Double_t Graph0_fex1005[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1005[29] = {
   0,
   0,
   0,
   0.009174806,
   0,
   0,
   0,
   0,
   0.003440559,
   0,
   0,
   0,
   0.008520623,
   0,
   0.002373298,
   0,
   0,
   0.005413119,
   0,
   0.01492067,
   0,
   0.09049191,
   0.04084648,
   0,
   0,
   0.002432674,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(29,Graph0_fx1005,Graph0_fy1005,Graph0_fex1005,Graph0_fey1005);
   gre->SetName("Graph0");
   gre->SetTitle("BPIX Track Rate");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1005 = new TH1F("Graph_Graph1005","BPIX Track Rate",100,297890.4,298437.6);
   Graph_Graph1005->SetMinimum(0);
   Graph_Graph1005->SetMaximum(0.3221217);
   Graph_Graph1005->SetDirectory(0);
   Graph_Graph1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1005->SetLineColor(ci);
   Graph_Graph1005->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1005->GetXaxis()->SetNoExponent();
   Graph_Graph1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph1005->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1005->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph1005->GetYaxis()->SetTitle("Track Rate (in Hz)");
   Graph_Graph1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph1005->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1005);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.3496491,0.94,0.6503509,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("BPIX Track Rate");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
