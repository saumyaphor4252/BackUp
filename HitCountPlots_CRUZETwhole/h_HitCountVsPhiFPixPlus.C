void h_HitCountVsPhiFPixPlus()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jul 21 14:50:37 2021) by ROOT version 6.22/09
   TCanvas *c = new TCanvas("c", "c",1,1,741,714);
   gStyle->SetOptStat(0);
   c->Range(-4.5691,24.50548,3.547708,170.2045);
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
   
   TH1D *h_HitCountVsPhiFPixPlus__18 = new TH1D("h_HitCountVsPhiFPixPlus__18","Number of FPix(Z+) hits vs #phi",20,-3.2,3.2);
   h_HitCountVsPhiFPixPlus__18->SetBinContent(1,108);
   h_HitCountVsPhiFPixPlus__18->SetBinContent(2,113);
   h_HitCountVsPhiFPixPlus__18->SetBinContent(3,124);
   h_HitCountVsPhiFPixPlus__18->SetBinContent(4,115);
   h_HitCountVsPhiFPixPlus__18->SetBinContent(5,122);
   h_HitCountVsPhiFPixPlus__18->SetBinContent(6,59);
   h_HitCountVsPhiFPixPlus__18->SetBinContent(7,88);
   h_HitCountVsPhiFPixPlus__18->SetBinContent(8,102);
   h_HitCountVsPhiFPixPlus__18->SetBinContent(9,99);
   h_HitCountVsPhiFPixPlus__18->SetBinContent(10,93);
   h_HitCountVsPhiFPixPlus__18->SetBinContent(11,58);
   h_HitCountVsPhiFPixPlus__18->SetBinContent(12,109);
   h_HitCountVsPhiFPixPlus__18->SetBinContent(13,77);
   h_HitCountVsPhiFPixPlus__18->SetBinContent(14,89);
   h_HitCountVsPhiFPixPlus__18->SetBinContent(15,102);
   h_HitCountVsPhiFPixPlus__18->SetBinContent(16,141);
   h_HitCountVsPhiFPixPlus__18->SetBinContent(17,137);
   h_HitCountVsPhiFPixPlus__18->SetBinContent(18,122);
   h_HitCountVsPhiFPixPlus__18->SetBinContent(19,128);
   h_HitCountVsPhiFPixPlus__18->SetBinContent(20,135);
   h_HitCountVsPhiFPixPlus__18->SetEntries(2121);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   h_HitCountVsPhiFPixPlus__18->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   h_HitCountVsPhiFPixPlus__18->SetLineColor(ci);
   h_HitCountVsPhiFPixPlus__18->SetLineWidth(2);
   h_HitCountVsPhiFPixPlus__18->SetMarkerStyle(21);
   h_HitCountVsPhiFPixPlus__18->SetMarkerSize(1.5);
   h_HitCountVsPhiFPixPlus__18->GetXaxis()->SetTitle("hit global #phi");
   h_HitCountVsPhiFPixPlus__18->GetXaxis()->CenterTitle(true);
   h_HitCountVsPhiFPixPlus__18->GetXaxis()->SetLabelFont(42);
   h_HitCountVsPhiFPixPlus__18->GetXaxis()->SetLabelSize(0.05);
   h_HitCountVsPhiFPixPlus__18->GetXaxis()->SetTitleSize(0.05);
   h_HitCountVsPhiFPixPlus__18->GetXaxis()->SetTitleOffset(1.08);
   h_HitCountVsPhiFPixPlus__18->GetXaxis()->SetTitleFont(42);
   h_HitCountVsPhiFPixPlus__18->GetYaxis()->SetTitle("Hits (#)");
   h_HitCountVsPhiFPixPlus__18->GetYaxis()->SetLabelFont(42);
   h_HitCountVsPhiFPixPlus__18->GetYaxis()->SetLabelSize(0.05);
   h_HitCountVsPhiFPixPlus__18->GetYaxis()->SetTitleSize(0.05);
   h_HitCountVsPhiFPixPlus__18->GetYaxis()->SetTitleFont(42);
   h_HitCountVsPhiFPixPlus__18->GetZaxis()->SetLabelFont(42);
   h_HitCountVsPhiFPixPlus__18->GetZaxis()->SetTitleOffset(1);
   h_HitCountVsPhiFPixPlus__18->GetZaxis()->SetTitleFont(42);
   h_HitCountVsPhiFPixPlus__18->Draw("EBAR");
   
   TPaveText *pt = new TPaveText(0.1568928,0.9358451,0.8431072,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Number of FPix(Z+) hits vs #phi");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
