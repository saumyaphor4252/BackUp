void tob_track_rate()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 23 23:09:37 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",193,183,800,600);
   c->Range(297822,1.854386,298506,3.999797);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1006[29] = {
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
   Double_t Graph0_fy1006[29] = {
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
   Double_t Graph0_fex1006[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1006[29] = {
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
   TGraphErrors *gre = new TGraphErrors(29,Graph0_fx1006,Graph0_fy1006,Graph0_fex1006,Graph0_fey1006);
   gre->SetName("Graph0");
   gre->SetTitle("TOB Track Rate");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1006 = new TH1F("Graph_Graph1006","TOB Track Rate",100,297890.4,298437.6);
   Graph_Graph1006->SetMinimum(2.068928);
   Graph_Graph1006->SetMaximum(3.785256);
   Graph_Graph1006->SetDirectory(0);
   Graph_Graph1006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1006->SetLineColor(ci);
   Graph_Graph1006->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1006->GetXaxis()->SetNoExponent();
   Graph_Graph1006->GetXaxis()->SetLabelFont(42);
   Graph_Graph1006->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1006->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1006->GetXaxis()->SetTitleFont(42);
   Graph_Graph1006->GetYaxis()->SetTitle("Track Rate (in Hz)");
   Graph_Graph1006->GetYaxis()->SetLabelFont(42);
   Graph_Graph1006->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1006->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1006->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1006->GetYaxis()->SetTitleFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1006->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1006);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.3540351,0.94,0.6459649,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("TOB Track Rate");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
