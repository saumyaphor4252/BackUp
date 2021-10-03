void tec_track_rate()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 23 23:09:38 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",193,183,800,600);
   c->Range(297822,0.2231454,298506,0.7499139);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1009[29] = {
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
   Double_t Graph0_fy1009[29] = {
   0.341712,
   0.5611902,
   0.3956396,
   0.4184359,
   0.3921878,
   0.3843962,
   0.4071167,
   0.4208269,
   0.4198093,
   0.3969218,
   0.3982449,
   0.4079789,
   0.4035124,
   0.4757977,
   0.4047076,
   0.4995542,
   0.4182561,
   0.410453,
   0.4117389,
   0.3919118,
   0.4056395,
   0.4451613,
   0.5943829,
   0.5562352,
   0.4099571,
   0.5594198,
   0.3943437,
   0.4088362,
   0.4141023};
   Double_t Graph0_fex1009[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1009[29] = {
   0.02644247,
   0.01208049,
   0.01052144,
   0.01451538,
   0.01773535,
   0.02591598,
   0.003157652,
   0.01836639,
   0.005419715,
   0.02338884,
   0.01663692,
   0.00920826,
   0.01276657,
   0.03045983,
   0.003644535,
   0.05846839,
   0.006569016,
   0.008292402,
   0.02795066,
   0.02215217,
   0.01665762,
   0.1342212,
   0.06773622,
   0.02636808,
   0.01043652,
   0.00445516,
   0.01915103,
   0.04818181,
   0.01691976};
   TGraphErrors *gre = new TGraphErrors(29,Graph0_fx1009,Graph0_fy1009,Graph0_fex1009,Graph0_fey1009);
   gre->SetName("Graph0");
   gre->SetTitle("TEC Track Rate");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1009 = new TH1F("Graph_Graph1009","TEC Track Rate",100,297890.4,298437.6);
   Graph_Graph1009->SetMinimum(0.2758222);
   Graph_Graph1009->SetMaximum(0.6972371);
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
