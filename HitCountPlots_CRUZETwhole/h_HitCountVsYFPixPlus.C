void h_HitCountVsYFPixPlus()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jul 21 14:50:36 2021) by ROOT version 6.22/09
   TCanvas *c = new TCanvas("c", "c",1,1,741,714);
   gStyle->SetOptStat(0);
   c->Range(-28.55688,-68.92942,22.17317,414.9692);
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
   
   TH1D *h_HitCountVsYFPixPlus__15 = new TH1D("h_HitCountVsYFPixPlus__15","Number of FPix(Z+) hits vs y",20,-20,20);
   h_HitCountVsYFPixPlus__15->SetBinContent(4,125);
   h_HitCountVsYFPixPlus__15->SetBinContent(5,115);
   h_HitCountVsYFPixPlus__15->SetBinContent(6,79);
   h_HitCountVsYFPixPlus__15->SetBinContent(7,228);
   h_HitCountVsYFPixPlus__15->SetBinContent(8,185);
   h_HitCountVsYFPixPlus__15->SetBinContent(9,152);
   h_HitCountVsYFPixPlus__15->SetBinContent(10,139);
   h_HitCountVsYFPixPlus__15->SetBinContent(11,157);
   h_HitCountVsYFPixPlus__15->SetBinContent(12,141);
   h_HitCountVsYFPixPlus__15->SetBinContent(13,164);
   h_HitCountVsYFPixPlus__15->SetBinContent(14,339);
   h_HitCountVsYFPixPlus__15->SetBinContent(15,74);
   h_HitCountVsYFPixPlus__15->SetBinContent(16,86);
   h_HitCountVsYFPixPlus__15->SetBinContent(17,137);
   h_HitCountVsYFPixPlus__15->SetEntries(2121);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   h_HitCountVsYFPixPlus__15->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   h_HitCountVsYFPixPlus__15->SetLineColor(ci);
   h_HitCountVsYFPixPlus__15->SetLineWidth(2);
   h_HitCountVsYFPixPlus__15->SetMarkerStyle(21);
   h_HitCountVsYFPixPlus__15->SetMarkerSize(1.5);
   h_HitCountVsYFPixPlus__15->GetXaxis()->SetTitle("hit global y");
   h_HitCountVsYFPixPlus__15->GetXaxis()->CenterTitle(true);
   h_HitCountVsYFPixPlus__15->GetXaxis()->SetLabelFont(42);
   h_HitCountVsYFPixPlus__15->GetXaxis()->SetLabelSize(0.05);
   h_HitCountVsYFPixPlus__15->GetXaxis()->SetTitleSize(0.05);
   h_HitCountVsYFPixPlus__15->GetXaxis()->SetTitleOffset(1.08);
   h_HitCountVsYFPixPlus__15->GetXaxis()->SetTitleFont(42);
   h_HitCountVsYFPixPlus__15->GetYaxis()->SetTitle("Hits (#)");
   h_HitCountVsYFPixPlus__15->GetYaxis()->SetLabelFont(42);
   h_HitCountVsYFPixPlus__15->GetYaxis()->SetLabelSize(0.05);
   h_HitCountVsYFPixPlus__15->GetYaxis()->SetTitleSize(0.05);
   h_HitCountVsYFPixPlus__15->GetYaxis()->SetTitleFont(42);
   h_HitCountVsYFPixPlus__15->GetZaxis()->SetLabelFont(42);
   h_HitCountVsYFPixPlus__15->GetZaxis()->SetTitleOffset(1);
   h_HitCountVsYFPixPlus__15->GetZaxis()->SetTitleFont(42);
   h_HitCountVsYFPixPlus__15->Draw("EBAR");
   
   TPaveText *pt = new TPaveText(0.1596065,0.9358451,0.8403935,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Number of FPix(Z+) hits vs y");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
