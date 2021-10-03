void h_HitCountVsThetaFPixMinus()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jul 21 14:50:37 2021) by ROOT version 6.22/09
   TCanvas *c = new TCanvas("c", "c",1,1,741,714);
   gStyle->SetOptStat(0);
   c->Range(-0.6845501,-186.2185,3.373854,1121.073);
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
   
   TH1D *h_HitCountVsThetaFPixMinus__19 = new TH1D("h_HitCountVsThetaFPixMinus__19","Number of FPix(Z+) hits vs #theta",40,0,3.2);
   h_HitCountVsThetaFPixMinus__19->SetBinContent(35,440);
   h_HitCountVsThetaFPixMinus__19->SetBinContent(36,492);
   h_HitCountVsThetaFPixMinus__19->SetBinContent(37,935);
   h_HitCountVsThetaFPixMinus__19->SetBinContent(38,377);
   h_HitCountVsThetaFPixMinus__19->SetEntries(2244);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   h_HitCountVsThetaFPixMinus__19->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   h_HitCountVsThetaFPixMinus__19->SetLineColor(ci);
   h_HitCountVsThetaFPixMinus__19->SetLineWidth(2);
   h_HitCountVsThetaFPixMinus__19->SetMarkerStyle(21);
   h_HitCountVsThetaFPixMinus__19->SetMarkerSize(1.5);
   h_HitCountVsThetaFPixMinus__19->GetXaxis()->SetTitle("hit global #theta");
   h_HitCountVsThetaFPixMinus__19->GetXaxis()->CenterTitle(true);
   h_HitCountVsThetaFPixMinus__19->GetXaxis()->SetLabelFont(42);
   h_HitCountVsThetaFPixMinus__19->GetXaxis()->SetLabelSize(0.05);
   h_HitCountVsThetaFPixMinus__19->GetXaxis()->SetTitleSize(0.05);
   h_HitCountVsThetaFPixMinus__19->GetXaxis()->SetTitleOffset(1.08);
   h_HitCountVsThetaFPixMinus__19->GetXaxis()->SetTitleFont(42);
   h_HitCountVsThetaFPixMinus__19->GetYaxis()->SetTitle("Hits (#)");
   h_HitCountVsThetaFPixMinus__19->GetYaxis()->SetLabelFont(42);
   h_HitCountVsThetaFPixMinus__19->GetYaxis()->SetLabelSize(0.05);
   h_HitCountVsThetaFPixMinus__19->GetYaxis()->SetTitleSize(0.05);
   h_HitCountVsThetaFPixMinus__19->GetYaxis()->SetTitleFont(42);
   h_HitCountVsThetaFPixMinus__19->GetZaxis()->SetLabelFont(42);
   h_HitCountVsThetaFPixMinus__19->GetZaxis()->SetTitleOffset(1);
   h_HitCountVsThetaFPixMinus__19->GetZaxis()->SetTitleFont(42);
   h_HitCountVsThetaFPixMinus__19->Draw("EBAR");
   
   TPaveText *pt = new TPaveText(0.1568928,0.9358451,0.8431072,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Number of FPix(Z+) hits vs #theta");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
