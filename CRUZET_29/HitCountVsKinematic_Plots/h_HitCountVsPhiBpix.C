void h_HitCountVsPhiBpix()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jul 30 12:01:02 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",596,189,741,738);
   gStyle->SetOptStat(0);
   c->Range(-4.997453,-2403.992,3.880306,14472.52);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(3);
   c->SetGridx();
   c->SetGridy();
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.1686747);
   c->SetRightMargin(0.04283802);
   c->SetTopMargin(0.08201439);
   c->SetBottomMargin(0.142446);
   c->SetFrameLineWidth(3);
   c->SetFrameBorderMode(0);
   c->SetFrameLineWidth(3);
   c->SetFrameBorderMode(0);
   
   TH1D *h_HitCountVsPhiBpix__8 = new TH1D("h_HitCountVsPhiBpix__8","Number of BPix hits vs #phi",20,-3.5,3.5);
   h_HitCountVsPhiBpix__8->SetBinContent(2,3594);
   h_HitCountVsPhiBpix__8->SetBinContent(3,7131);
   h_HitCountVsPhiBpix__8->SetBinContent(4,8436);
   h_HitCountVsPhiBpix__8->SetBinContent(5,11399);
   h_HitCountVsPhiBpix__8->SetBinContent(6,10742);
   h_HitCountVsPhiBpix__8->SetBinContent(7,10077);
   h_HitCountVsPhiBpix__8->SetBinContent(8,9289);
   h_HitCountVsPhiBpix__8->SetBinContent(9,5998);
   h_HitCountVsPhiBpix__8->SetBinContent(10,4399);
   h_HitCountVsPhiBpix__8->SetBinContent(11,5625);
   h_HitCountVsPhiBpix__8->SetBinContent(12,5370);
   h_HitCountVsPhiBpix__8->SetBinContent(13,10750);
   h_HitCountVsPhiBpix__8->SetBinContent(14,11596);
   h_HitCountVsPhiBpix__8->SetBinContent(15,12354);
   h_HitCountVsPhiBpix__8->SetBinContent(16,11126);
   h_HitCountVsPhiBpix__8->SetBinContent(17,10202);
   h_HitCountVsPhiBpix__8->SetBinContent(18,5791);
   h_HitCountVsPhiBpix__8->SetBinContent(19,5228);
   h_HitCountVsPhiBpix__8->SetEntries(149107);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   h_HitCountVsPhiBpix__8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   h_HitCountVsPhiBpix__8->SetLineColor(ci);
   h_HitCountVsPhiBpix__8->SetLineWidth(2);
   h_HitCountVsPhiBpix__8->SetMarkerStyle(21);
   h_HitCountVsPhiBpix__8->SetMarkerSize(1.5);
   h_HitCountVsPhiBpix__8->GetXaxis()->SetTitle("hit global #phi");
   h_HitCountVsPhiBpix__8->GetXaxis()->SetRange(1,20);
   h_HitCountVsPhiBpix__8->GetXaxis()->CenterTitle(true);
   h_HitCountVsPhiBpix__8->GetXaxis()->SetLabelFont(42);
   h_HitCountVsPhiBpix__8->GetXaxis()->SetLabelSize(0.05);
   h_HitCountVsPhiBpix__8->GetXaxis()->SetTitleSize(0.05);
   h_HitCountVsPhiBpix__8->GetXaxis()->SetTitleOffset(1.08);
   h_HitCountVsPhiBpix__8->GetXaxis()->SetTitleFont(42);
   h_HitCountVsPhiBpix__8->GetYaxis()->SetTitle("Hits (#)");
   h_HitCountVsPhiBpix__8->GetYaxis()->SetLabelFont(42);
   h_HitCountVsPhiBpix__8->GetYaxis()->SetLabelSize(0.05);
   h_HitCountVsPhiBpix__8->GetYaxis()->SetTitleSize(0.05);
   h_HitCountVsPhiBpix__8->GetYaxis()->SetTitleOffset(0);
   h_HitCountVsPhiBpix__8->GetYaxis()->SetTitleFont(42);
   h_HitCountVsPhiBpix__8->GetZaxis()->SetLabelFont(42);
   h_HitCountVsPhiBpix__8->GetZaxis()->SetLabelSize(0.035);
   h_HitCountVsPhiBpix__8->GetZaxis()->SetTitleSize(0.035);
   h_HitCountVsPhiBpix__8->GetZaxis()->SetTitleFont(42);
   h_HitCountVsPhiBpix__8->Draw("EBAR");
   
   TPaveText *pt = new TPaveText(-0.09916103,0.9653808,0.5,1.024619,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Number of BPix hits vs #phi");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
