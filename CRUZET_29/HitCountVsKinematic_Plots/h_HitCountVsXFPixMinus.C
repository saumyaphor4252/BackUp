void h_HitCountVsXFPixMinus()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jul 30 12:01:04 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",596,189,741,738);
   gStyle->SetOptStat(0);
   c->Range(-28.55688,-612.681,22.17317,3688.465);
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
   
   TH1D *h_HitCountVsXFPixMinus__14 = new TH1D("h_HitCountVsXFPixMinus__14","Number of FPix(Z-) hits vs x",20,-20,20);
   h_HitCountVsXFPixMinus__14->SetBinContent(4,657);
   h_HitCountVsXFPixMinus__14->SetBinContent(5,636);
   h_HitCountVsXFPixMinus__14->SetBinContent(6,712);
   h_HitCountVsXFPixMinus__14->SetBinContent(7,2042);
   h_HitCountVsXFPixMinus__14->SetBinContent(8,1365);
   h_HitCountVsXFPixMinus__14->SetBinContent(9,1083);
   h_HitCountVsXFPixMinus__14->SetBinContent(10,1537);
   h_HitCountVsXFPixMinus__14->SetBinContent(11,1435);
   h_HitCountVsXFPixMinus__14->SetBinContent(12,1454);
   h_HitCountVsXFPixMinus__14->SetBinContent(13,1442);
   h_HitCountVsXFPixMinus__14->SetBinContent(14,3121);
   h_HitCountVsXFPixMinus__14->SetBinContent(15,804);
   h_HitCountVsXFPixMinus__14->SetBinContent(16,803);
   h_HitCountVsXFPixMinus__14->SetBinContent(17,811);
   h_HitCountVsXFPixMinus__14->SetEntries(17902);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   h_HitCountVsXFPixMinus__14->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   h_HitCountVsXFPixMinus__14->SetLineColor(ci);
   h_HitCountVsXFPixMinus__14->SetLineWidth(2);
   h_HitCountVsXFPixMinus__14->SetMarkerStyle(21);
   h_HitCountVsXFPixMinus__14->SetMarkerSize(1.5);
   h_HitCountVsXFPixMinus__14->GetXaxis()->SetTitle("hit global x");
   h_HitCountVsXFPixMinus__14->GetXaxis()->CenterTitle(true);
   h_HitCountVsXFPixMinus__14->GetXaxis()->SetLabelFont(42);
   h_HitCountVsXFPixMinus__14->GetXaxis()->SetLabelSize(0.05);
   h_HitCountVsXFPixMinus__14->GetXaxis()->SetTitleSize(0.05);
   h_HitCountVsXFPixMinus__14->GetXaxis()->SetTitleOffset(1.08);
   h_HitCountVsXFPixMinus__14->GetXaxis()->SetTitleFont(42);
   h_HitCountVsXFPixMinus__14->GetYaxis()->SetTitle("Hits (#)");
   h_HitCountVsXFPixMinus__14->GetYaxis()->SetLabelFont(42);
   h_HitCountVsXFPixMinus__14->GetYaxis()->SetLabelSize(0.05);
   h_HitCountVsXFPixMinus__14->GetYaxis()->SetTitleSize(0.05);
   h_HitCountVsXFPixMinus__14->GetYaxis()->SetTitleOffset(0);
   h_HitCountVsXFPixMinus__14->GetYaxis()->SetTitleFont(42);
   h_HitCountVsXFPixMinus__14->GetZaxis()->SetLabelFont(42);
   h_HitCountVsXFPixMinus__14->GetZaxis()->SetLabelSize(0.035);
   h_HitCountVsXFPixMinus__14->GetZaxis()->SetTitleSize(0.035);
   h_HitCountVsXFPixMinus__14->GetZaxis()->SetTitleFont(42);
   h_HitCountVsXFPixMinus__14->Draw("EBAR");
   
   TPaveText *pt = new TPaveText(-0.16682,0.9653808,0.5,1.024619,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Number of FPix(Z-) hits vs x");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
