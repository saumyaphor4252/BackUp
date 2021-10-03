void track_rate()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 23 23:09:37 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",193,183,800,600);
   c->Range(297822,1.966473,298506,4.13109);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1002[29] = {
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
   Double_t Graph0_fy1002[29] = {
   2.428816,
   2.665784,
   2.477364,
   2.545862,
   2.576891,
   2.435674,
   2.434986,
   2.589889,
   2.493597,
   2.486274,
   2.584074,
   2.499209,
   2.493779,
   2.505738,
   2.476754,
   2.655165,
   2.499116,
   2.498235,
   2.4951,
   2.509237,
   2.367485,
   3.399414,
   2.887003,
   2.664929,
   2.50863,
   2.594506,
   2.48976,
   2.685827,
   2.503971};
   Double_t Graph0_fex1002[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1002[29] = {
   0.07049676,
   0.02632945,
   0.02632814,
   0.03580399,
   0.04546117,
   0.06523606,
   0.007722412,
   0.04556304,
   0.01320881,
   0.05853704,
   0.04237896,
   0.02279082,
   0.03173764,
   0.06990111,
   0.00901598,
   0.1347956,
   0.0160573,
   0.0204581,
   0.0688058,
   0.05605223,
   0.04024263,
   0.3709064,
   0.1492834,
   0.05771544,
   0.02581693,
   0.009594486,
   0.04812085,
   0.1234945,
   0.04160591};
   TGraphErrors *gre = new TGraphErrors(29,Graph0_fx1002,Graph0_fy1002,Graph0_fex1002,Graph0_fey1002);
   gre->SetName("Graph0");
   gre->SetTitle("Track Rate");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","Track Rate",100,297890.4,298437.6);
   Graph_Graph1002->SetMinimum(2.182934);
   Graph_Graph1002->SetMaximum(3.914628);
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
   Graph_Graph1002->GetYaxis()->SetTitle("Track Rate (in Hz)");
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
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.3972682,0.94,0.6027318,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Track Rate");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
