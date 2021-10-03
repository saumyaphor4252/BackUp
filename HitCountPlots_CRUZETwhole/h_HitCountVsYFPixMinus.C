void h_HitCountVsYFPixMinus()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jul 21 14:50:36 2021) by ROOT version 6.22/09
   TCanvas *c = new TCanvas("c", "c",1,1,741,714);
   gStyle->SetOptStat(0);
   c->Range(-28.55688,-78.42963,22.17317,472.1624);
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
   
   TH1D *h_HitCountVsYFPixMinus__16 = new TH1D("h_HitCountVsYFPixMinus__16","Number of FPix(Z-) hits vs y",20,-20,20);
   h_HitCountVsYFPixMinus__16->SetBinContent(4,141);
   h_HitCountVsYFPixMinus__16->SetBinContent(5,157);
   h_HitCountVsYFPixMinus__16->SetBinContent(6,82);
   h_HitCountVsYFPixMinus__16->SetBinContent(7,387);
   h_HitCountVsYFPixMinus__16->SetBinContent(8,218);
   h_HitCountVsYFPixMinus__16->SetBinContent(9,168);
   h_HitCountVsYFPixMinus__16->SetBinContent(10,114);
   h_HitCountVsYFPixMinus__16->SetBinContent(11,145);
   h_HitCountVsYFPixMinus__16->SetBinContent(12,101);
   h_HitCountVsYFPixMinus__16->SetBinContent(13,134);
   h_HitCountVsYFPixMinus__16->SetBinContent(14,244);
   h_HitCountVsYFPixMinus__16->SetBinContent(15,103);
   h_HitCountVsYFPixMinus__16->SetBinContent(16,116);
   h_HitCountVsYFPixMinus__16->SetBinContent(17,134);
   h_HitCountVsYFPixMinus__16->SetEntries(2244);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   h_HitCountVsYFPixMinus__16->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   h_HitCountVsYFPixMinus__16->SetLineColor(ci);
   h_HitCountVsYFPixMinus__16->SetLineWidth(2);
   h_HitCountVsYFPixMinus__16->SetMarkerStyle(21);
   h_HitCountVsYFPixMinus__16->SetMarkerSize(1.5);
   h_HitCountVsYFPixMinus__16->GetXaxis()->SetTitle("hit global y");
   h_HitCountVsYFPixMinus__16->GetXaxis()->CenterTitle(true);
   h_HitCountVsYFPixMinus__16->GetXaxis()->SetLabelFont(42);
   h_HitCountVsYFPixMinus__16->GetXaxis()->SetLabelSize(0.05);
   h_HitCountVsYFPixMinus__16->GetXaxis()->SetTitleSize(0.05);
   h_HitCountVsYFPixMinus__16->GetXaxis()->SetTitleOffset(1.08);
   h_HitCountVsYFPixMinus__16->GetXaxis()->SetTitleFont(42);
   h_HitCountVsYFPixMinus__16->GetYaxis()->SetTitle("Hits (#)");
   h_HitCountVsYFPixMinus__16->GetYaxis()->SetLabelFont(42);
   h_HitCountVsYFPixMinus__16->GetYaxis()->SetLabelSize(0.05);
   h_HitCountVsYFPixMinus__16->GetYaxis()->SetTitleSize(0.05);
   h_HitCountVsYFPixMinus__16->GetYaxis()->SetTitleFont(42);
   h_HitCountVsYFPixMinus__16->GetZaxis()->SetLabelFont(42);
   h_HitCountVsYFPixMinus__16->GetZaxis()->SetTitleOffset(1);
   h_HitCountVsYFPixMinus__16->GetZaxis()->SetTitleFont(42);
   h_HitCountVsYFPixMinus__16->Draw("EBAR");
   
   TPaveText *pt = new TPaveText(0.1657123,0.9358451,0.8342877,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Number of FPix(Z-) hits vs y");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
