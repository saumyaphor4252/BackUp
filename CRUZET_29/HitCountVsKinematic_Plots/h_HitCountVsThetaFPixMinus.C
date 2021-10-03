void h_HitCountVsThetaFPixMinus()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jul 30 12:01:05 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",596,189,741,738);
   gStyle->SetOptStat(0);
   c->Range(-0.6845501,-1591.329,3.373854,9580.125);
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
   h_HitCountVsThetaFPixMinus__19->SetBinContent(35,3576);
   h_HitCountVsThetaFPixMinus__19->SetBinContent(36,3247);
   h_HitCountVsThetaFPixMinus__19->SetBinContent(37,8161);
   h_HitCountVsThetaFPixMinus__19->SetBinContent(38,2918);
   h_HitCountVsThetaFPixMinus__19->SetEntries(17902);

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
   h_HitCountVsThetaFPixMinus__19->GetYaxis()->SetTitleOffset(0);
   h_HitCountVsThetaFPixMinus__19->GetYaxis()->SetTitleFont(42);
   h_HitCountVsThetaFPixMinus__19->GetZaxis()->SetLabelFont(42);
   h_HitCountVsThetaFPixMinus__19->GetZaxis()->SetLabelSize(0.035);
   h_HitCountVsThetaFPixMinus__19->GetZaxis()->SetTitleSize(0.035);
   h_HitCountVsThetaFPixMinus__19->GetZaxis()->SetTitleFont(42);
   h_HitCountVsThetaFPixMinus__19->Draw("EBAR");
   
   TPaveText *pt = new TPaveText(-0.1844114,0.9653808,0.5,1.024619,"blNDC");
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
