void h_HitCountVsThetaFPixPlus()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jul 30 12:01:05 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",596,189,741,738);
   gStyle->SetOptStat(0);
   c->Range(-0.6845501,-1781.345,3.373854,10724.06);
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
   
   TH1D *h_HitCountVsThetaFPixPlus__17 = new TH1D("h_HitCountVsThetaFPixPlus__17","Number of FPix(Z+) hits vs #theta",20,0,3.2);
   h_HitCountVsThetaFPixPlus__17->SetBinContent(1,1944);
   h_HitCountVsThetaFPixPlus__17->SetBinContent(2,9141);
   h_HitCountVsThetaFPixPlus__17->SetBinContent(3,5494);
   h_HitCountVsThetaFPixPlus__17->SetEntries(16579);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   h_HitCountVsThetaFPixPlus__17->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   h_HitCountVsThetaFPixPlus__17->SetLineColor(ci);
   h_HitCountVsThetaFPixPlus__17->SetLineWidth(2);
   h_HitCountVsThetaFPixPlus__17->SetMarkerStyle(21);
   h_HitCountVsThetaFPixPlus__17->SetMarkerSize(1.5);
   h_HitCountVsThetaFPixPlus__17->GetXaxis()->SetTitle("hit global #theta");
   h_HitCountVsThetaFPixPlus__17->GetXaxis()->CenterTitle(true);
   h_HitCountVsThetaFPixPlus__17->GetXaxis()->SetLabelFont(42);
   h_HitCountVsThetaFPixPlus__17->GetXaxis()->SetLabelSize(0.05);
   h_HitCountVsThetaFPixPlus__17->GetXaxis()->SetTitleSize(0.05);
   h_HitCountVsThetaFPixPlus__17->GetXaxis()->SetTitleOffset(1.08);
   h_HitCountVsThetaFPixPlus__17->GetXaxis()->SetTitleFont(42);
   h_HitCountVsThetaFPixPlus__17->GetYaxis()->SetTitle("Hits (#)");
   h_HitCountVsThetaFPixPlus__17->GetYaxis()->SetLabelFont(42);
   h_HitCountVsThetaFPixPlus__17->GetYaxis()->SetLabelSize(0.05);
   h_HitCountVsThetaFPixPlus__17->GetYaxis()->SetTitleSize(0.05);
   h_HitCountVsThetaFPixPlus__17->GetYaxis()->SetTitleOffset(0);
   h_HitCountVsThetaFPixPlus__17->GetYaxis()->SetTitleFont(42);
   h_HitCountVsThetaFPixPlus__17->GetZaxis()->SetLabelFont(42);
   h_HitCountVsThetaFPixPlus__17->GetZaxis()->SetLabelSize(0.035);
   h_HitCountVsThetaFPixPlus__17->GetZaxis()->SetTitleSize(0.035);
   h_HitCountVsThetaFPixPlus__17->GetZaxis()->SetTitleFont(42);
   h_HitCountVsThetaFPixPlus__17->Draw("EBAR");
   
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
