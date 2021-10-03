void tid_track_rate()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 23 23:09:38 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",193,183,800,600);
   c->Range(297822,0.202002,298506,0.5988);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1008[29] = {
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
   Double_t Graph0_fy1008[29] = {
   0.2926037,
   0.3931972,
   0.3380005,
   0.3544872,
   0.3681272,
   0.3249895,
   0.3366067,
   0.3462804,
   0.3439638,
   0.2921786,
   0.3516788,
   0.3460443,
   0.3409053,
   0.3451483,
   0.3446792,
   0.3353172,
   0.3488218,
   0.3442779,
   0.3472268,
   0.3405751,
   0.3468115,
   0.4046921,
   0.4014015,
   0.3937395,
   0.3318448,
   0.3858496,
   0.3757426,
   0.3520534,
   0.3539572};
   Double_t Graph0_fex1008[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1008[29] = {
   0.02446875,
   0.01011194,
   0.009724871,
   0.01336024,
   0.01718271,
   0.02382939,
   0.002871218,
   0.01666042,
   0.004905765,
   0.02006691,
   0.01563403,
   0.00848056,
   0.01173445,
   0.02594294,
   0.003363404,
   0.04790245,
   0.00599903,
   0.007594571,
   0.02566774,
   0.0206504,
   0.01540244,
   0.1279749,
   0.05566437,
   0.02218471,
   0.009389744,
   0.003700015,
   0.01869389,
   0.04471083,
   0.01564285};
   TGraphErrors *gre = new TGraphErrors(29,Graph0_fx1008,Graph0_fy1008,Graph0_fex1008,Graph0_fey1008);
   gre->SetName("Graph0");
   gre->SetTitle("TID Track Rate");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1008 = new TH1F("Graph_Graph1008","TID Track Rate",100,297890.4,298437.6);
   Graph_Graph1008->SetMinimum(0.2416818);
   Graph_Graph1008->SetMaximum(0.5591202);
   Graph_Graph1008->SetDirectory(0);
   Graph_Graph1008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1008->SetLineColor(ci);
   Graph_Graph1008->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1008->GetXaxis()->SetNoExponent();
   Graph_Graph1008->GetXaxis()->SetLabelFont(42);
   Graph_Graph1008->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1008->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1008->GetXaxis()->SetTitleFont(42);
   Graph_Graph1008->GetYaxis()->SetTitle("Track Rate (in Hz)");
   Graph_Graph1008->GetYaxis()->SetLabelFont(42);
   Graph_Graph1008->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1008->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1008->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1008->GetYaxis()->SetTitleFont(42);
   Graph_Graph1008->GetZaxis()->SetLabelFont(42);
   Graph_Graph1008->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1008->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1008);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.362807,0.94,0.637193,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("TID Track Rate");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
