void h_HitCountVsPhiFPixPlus()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jul 30 12:01:05 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",596,189,741,738);
   gStyle->SetOptStat(0);
   c->Range(-4.5691,213.3367,3.547708,1371.368);
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
   h_HitCountVsPhiFPixPlus__18->SetBinContent(1,660);
   h_HitCountVsPhiFPixPlus__18->SetBinContent(2,827);
   h_HitCountVsPhiFPixPlus__18->SetBinContent(3,1132);
   h_HitCountVsPhiFPixPlus__18->SetBinContent(4,1125);
   h_HitCountVsPhiFPixPlus__18->SetBinContent(5,1199);
   h_HitCountVsPhiFPixPlus__18->SetBinContent(6,683);
   h_HitCountVsPhiFPixPlus__18->SetBinContent(7,825);
   h_HitCountVsPhiFPixPlus__18->SetBinContent(8,874);
   h_HitCountVsPhiFPixPlus__18->SetBinContent(9,713);
   h_HitCountVsPhiFPixPlus__18->SetBinContent(10,582);
   h_HitCountVsPhiFPixPlus__18->SetBinContent(11,440);
   h_HitCountVsPhiFPixPlus__18->SetBinContent(12,710);
   h_HitCountVsPhiFPixPlus__18->SetBinContent(13,734);
   h_HitCountVsPhiFPixPlus__18->SetBinContent(14,900);
   h_HitCountVsPhiFPixPlus__18->SetBinContent(15,825);
   h_HitCountVsPhiFPixPlus__18->SetBinContent(16,859);
   h_HitCountVsPhiFPixPlus__18->SetBinContent(17,1026);
   h_HitCountVsPhiFPixPlus__18->SetBinContent(18,818);
   h_HitCountVsPhiFPixPlus__18->SetBinContent(19,787);
   h_HitCountVsPhiFPixPlus__18->SetBinContent(20,860);
   h_HitCountVsPhiFPixPlus__18->SetEntries(16579);

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
   h_HitCountVsPhiFPixPlus__18->GetYaxis()->SetTitleOffset(0);
   h_HitCountVsPhiFPixPlus__18->GetYaxis()->SetTitleFont(42);
   h_HitCountVsPhiFPixPlus__18->GetZaxis()->SetLabelFont(42);
   h_HitCountVsPhiFPixPlus__18->GetZaxis()->SetLabelSize(0.035);
   h_HitCountVsPhiFPixPlus__18->GetZaxis()->SetTitleSize(0.035);
   h_HitCountVsPhiFPixPlus__18->GetZaxis()->SetTitleFont(42);
   h_HitCountVsPhiFPixPlus__18->Draw("EBAR");
   
   TPaveText *pt = new TPaveText(-0.1844114,0.9653808,0.5,1.024619,"blNDC");
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
