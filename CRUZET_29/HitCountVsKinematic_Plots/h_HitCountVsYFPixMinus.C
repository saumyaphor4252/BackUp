void h_HitCountVsYFPixMinus()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jul 30 12:01:04 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",596,189,741,738);
   gStyle->SetOptStat(0);
   c->Range(-28.55688,-581.7387,22.17317,3502.186);
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
   h_HitCountVsYFPixMinus__16->SetBinContent(4,1272);
   h_HitCountVsYFPixMinus__16->SetBinContent(5,1053);
   h_HitCountVsYFPixMinus__16->SetBinContent(6,490);
   h_HitCountVsYFPixMinus__16->SetBinContent(7,2962);
   h_HitCountVsYFPixMinus__16->SetBinContent(8,1379);
   h_HitCountVsYFPixMinus__16->SetBinContent(9,1291);
   h_HitCountVsYFPixMinus__16->SetBinContent(10,824);
   h_HitCountVsYFPixMinus__16->SetBinContent(11,1093);
   h_HitCountVsYFPixMinus__16->SetBinContent(12,1000);
   h_HitCountVsYFPixMinus__16->SetBinContent(13,1161);
   h_HitCountVsYFPixMinus__16->SetBinContent(14,2200);
   h_HitCountVsYFPixMinus__16->SetBinContent(15,894);
   h_HitCountVsYFPixMinus__16->SetBinContent(16,1095);
   h_HitCountVsYFPixMinus__16->SetBinContent(17,1188);
   h_HitCountVsYFPixMinus__16->SetEntries(17902);

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
   h_HitCountVsYFPixMinus__16->GetYaxis()->SetTitleOffset(0);
   h_HitCountVsYFPixMinus__16->GetYaxis()->SetTitleFont(42);
   h_HitCountVsYFPixMinus__16->GetZaxis()->SetLabelFont(42);
   h_HitCountVsYFPixMinus__16->GetZaxis()->SetLabelSize(0.035);
   h_HitCountVsYFPixMinus__16->GetZaxis()->SetTitleSize(0.035);
   h_HitCountVsYFPixMinus__16->GetZaxis()->SetTitleFont(42);
   h_HitCountVsYFPixMinus__16->Draw("EBAR");
   
   TPaveText *pt = new TPaveText(-0.16682,0.9653808,0.5,1.024619,"blNDC");
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
