void h_HitCountVsXFPixMinus()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jul 21 14:50:36 2021) by ROOT version 6.22/09
   TCanvas *c = new TCanvas("c", "c",1,1,741,714);
   gStyle->SetOptStat(0);
   c->Range(-28.55688,-79.41834,22.17317,478.1147);
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
   h_HitCountVsXFPixMinus__14->SetBinContent(4,89);
   h_HitCountVsXFPixMinus__14->SetBinContent(5,86);
   h_HitCountVsXFPixMinus__14->SetBinContent(6,82);
   h_HitCountVsXFPixMinus__14->SetBinContent(7,217);
   h_HitCountVsXFPixMinus__14->SetBinContent(8,160);
   h_HitCountVsXFPixMinus__14->SetBinContent(9,109);
   h_HitCountVsXFPixMinus__14->SetBinContent(10,173);
   h_HitCountVsXFPixMinus__14->SetBinContent(11,157);
   h_HitCountVsXFPixMinus__14->SetBinContent(12,172);
   h_HitCountVsXFPixMinus__14->SetBinContent(13,183);
   h_HitCountVsXFPixMinus__14->SetBinContent(14,392);
   h_HitCountVsXFPixMinus__14->SetBinContent(15,113);
   h_HitCountVsXFPixMinus__14->SetBinContent(16,156);
   h_HitCountVsXFPixMinus__14->SetBinContent(17,155);
   h_HitCountVsXFPixMinus__14->SetEntries(2244);

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
   h_HitCountVsXFPixMinus__14->GetYaxis()->SetTitleFont(42);
   h_HitCountVsXFPixMinus__14->GetZaxis()->SetLabelFont(42);
   h_HitCountVsXFPixMinus__14->GetZaxis()->SetTitleOffset(1);
   h_HitCountVsXFPixMinus__14->GetZaxis()->SetTitleFont(42);
   h_HitCountVsXFPixMinus__14->Draw("EBAR");
   
   TPaveText *pt = new TPaveText(0.1657123,0.9358451,0.8342877,0.995,"blNDC");
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
