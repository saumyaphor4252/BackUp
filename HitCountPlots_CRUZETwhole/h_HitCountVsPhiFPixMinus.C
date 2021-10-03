void h_HitCountVsPhiFPixMinus()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jul 21 14:50:37 2021) by ROOT version 6.22/09
   TCanvas *c = new TCanvas("c", "c",1,1,741,714);
   gStyle->SetOptStat(0);
   c->Range(-4.5691,9.819751,3.547708,238.2004);
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
   
   TH1D *h_HitCountVsPhiFPixMinus__20 = new TH1D("h_HitCountVsPhiFPixMinus__20","Number of FPix(Z-) hits vs #phi",20,-3.2,3.2);
   h_HitCountVsPhiFPixMinus__20->SetBinContent(1,58);
   h_HitCountVsPhiFPixMinus__20->SetBinContent(2,93);
   h_HitCountVsPhiFPixMinus__20->SetBinContent(3,97);
   h_HitCountVsPhiFPixMinus__20->SetBinContent(4,132);
   h_HitCountVsPhiFPixMinus__20->SetBinContent(5,139);
   h_HitCountVsPhiFPixMinus__20->SetBinContent(6,103);
   h_HitCountVsPhiFPixMinus__20->SetBinContent(7,147);
   h_HitCountVsPhiFPixMinus__20->SetBinContent(8,197);
   h_HitCountVsPhiFPixMinus__20->SetBinContent(9,185);
   h_HitCountVsPhiFPixMinus__20->SetBinContent(10,116);
   h_HitCountVsPhiFPixMinus__20->SetBinContent(11,110);
   h_HitCountVsPhiFPixMinus__20->SetBinContent(12,152);
   h_HitCountVsPhiFPixMinus__20->SetBinContent(13,127);
   h_HitCountVsPhiFPixMinus__20->SetBinContent(14,105);
   h_HitCountVsPhiFPixMinus__20->SetBinContent(15,86);
   h_HitCountVsPhiFPixMinus__20->SetBinContent(16,99);
   h_HitCountVsPhiFPixMinus__20->SetBinContent(17,98);
   h_HitCountVsPhiFPixMinus__20->SetBinContent(18,66);
   h_HitCountVsPhiFPixMinus__20->SetBinContent(19,65);
   h_HitCountVsPhiFPixMinus__20->SetBinContent(20,69);
   h_HitCountVsPhiFPixMinus__20->SetEntries(2244);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   h_HitCountVsPhiFPixMinus__20->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   h_HitCountVsPhiFPixMinus__20->SetLineColor(ci);
   h_HitCountVsPhiFPixMinus__20->SetLineWidth(2);
   h_HitCountVsPhiFPixMinus__20->SetMarkerStyle(21);
   h_HitCountVsPhiFPixMinus__20->SetMarkerSize(1.5);
   h_HitCountVsPhiFPixMinus__20->GetXaxis()->SetTitle("hit global #phi");
   h_HitCountVsPhiFPixMinus__20->GetXaxis()->CenterTitle(true);
   h_HitCountVsPhiFPixMinus__20->GetXaxis()->SetLabelFont(42);
   h_HitCountVsPhiFPixMinus__20->GetXaxis()->SetLabelSize(0.05);
   h_HitCountVsPhiFPixMinus__20->GetXaxis()->SetTitleSize(0.05);
   h_HitCountVsPhiFPixMinus__20->GetXaxis()->SetTitleOffset(1.08);
   h_HitCountVsPhiFPixMinus__20->GetXaxis()->SetTitleFont(42);
   h_HitCountVsPhiFPixMinus__20->GetYaxis()->SetTitle("Hits (#)");
   h_HitCountVsPhiFPixMinus__20->GetYaxis()->SetLabelFont(42);
   h_HitCountVsPhiFPixMinus__20->GetYaxis()->SetLabelSize(0.05);
   h_HitCountVsPhiFPixMinus__20->GetYaxis()->SetTitleSize(0.05);
   h_HitCountVsPhiFPixMinus__20->GetYaxis()->SetTitleFont(42);
   h_HitCountVsPhiFPixMinus__20->GetZaxis()->SetLabelFont(42);
   h_HitCountVsPhiFPixMinus__20->GetZaxis()->SetTitleOffset(1);
   h_HitCountVsPhiFPixMinus__20->GetZaxis()->SetTitleFont(42);
   h_HitCountVsPhiFPixMinus__20->Draw("EBAR");
   
   TPaveText *pt = new TPaveText(0.1629986,0.9358451,0.8370014,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Number of FPix(Z-) hits vs #phi");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
