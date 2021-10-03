void h_HitCountVsYFPixPlus()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jul 30 12:01:04 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",596,189,741,738);
   gStyle->SetOptStat(0);
   c->Range(-28.55688,-515.5466,22.17317,3103.696);
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
   h_HitCountVsYFPixPlus__15->SetBinContent(4,1413);
   h_HitCountVsYFPixPlus__15->SetBinContent(5,1128);
   h_HitCountVsYFPixPlus__15->SetBinContent(6,814);
   h_HitCountVsYFPixPlus__15->SetBinContent(7,2085);
   h_HitCountVsYFPixPlus__15->SetBinContent(8,1251);
   h_HitCountVsYFPixPlus__15->SetBinContent(9,989);
   h_HitCountVsYFPixPlus__15->SetBinContent(10,940);
   h_HitCountVsYFPixPlus__15->SetBinContent(11,1059);
   h_HitCountVsYFPixPlus__15->SetBinContent(12,931);
   h_HitCountVsYFPixPlus__15->SetBinContent(13,1086);
   h_HitCountVsYFPixPlus__15->SetBinContent(14,2622);
   h_HitCountVsYFPixPlus__15->SetBinContent(15,541);
   h_HitCountVsYFPixPlus__15->SetBinContent(16,693);
   h_HitCountVsYFPixPlus__15->SetBinContent(17,1027);
   h_HitCountVsYFPixPlus__15->SetEntries(16579);

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
   h_HitCountVsYFPixPlus__15->GetYaxis()->SetTitleOffset(0);
   h_HitCountVsYFPixPlus__15->GetYaxis()->SetTitleFont(42);
   h_HitCountVsYFPixPlus__15->GetZaxis()->SetLabelFont(42);
   h_HitCountVsYFPixPlus__15->GetZaxis()->SetLabelSize(0.035);
   h_HitCountVsYFPixPlus__15->GetZaxis()->SetTitleSize(0.035);
   h_HitCountVsYFPixPlus__15->GetZaxis()->SetTitleFont(42);
   h_HitCountVsYFPixPlus__15->Draw("EBAR");
   
   TPaveText *pt = new TPaveText(-0.1789986,0.9653808,0.5,1.024619,"blNDC");
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
