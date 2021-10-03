void h_HitCountVsZFPixPlus()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jul 30 12:01:03 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",596,189,741,738);
   gStyle->SetOptStat(0);
   c->Range(5.373514,-312.3801,62.44482,1880.592);
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
   
   TH1D *h_HitCountVsZFPixPlus__11 = new TH1D("h_HitCountVsZFPixPlus__11","Number of FPix(Z+) hits vs z",60,15,60);
   h_HitCountVsZFPixPlus__11->SetBinContent(20,443);
   h_HitCountVsZFPixPlus__11->SetBinContent(21,1003);
   h_HitCountVsZFPixPlus__11->SetBinContent(22,1505);
   h_HitCountVsZFPixPlus__11->SetBinContent(23,1580);
   h_HitCountVsZFPixPlus__11->SetBinContent(24,809);
   h_HitCountVsZFPixPlus__11->SetBinContent(25,756);
   h_HitCountVsZFPixPlus__11->SetBinContent(26,102);
   h_HitCountVsZFPixPlus__11->SetBinContent(30,456);
   h_HitCountVsZFPixPlus__11->SetBinContent(31,788);
   h_HitCountVsZFPixPlus__11->SetBinContent(32,1500);
   h_HitCountVsZFPixPlus__11->SetBinContent(33,1179);
   h_HitCountVsZFPixPlus__11->SetBinContent(34,1065);
   h_HitCountVsZFPixPlus__11->SetBinContent(35,716);
   h_HitCountVsZFPixPlus__11->SetBinContent(36,104);
   h_HitCountVsZFPixPlus__11->SetBinContent(43,410);
   h_HitCountVsZFPixPlus__11->SetBinContent(44,724);
   h_HitCountVsZFPixPlus__11->SetBinContent(45,1045);
   h_HitCountVsZFPixPlus__11->SetBinContent(46,1197);
   h_HitCountVsZFPixPlus__11->SetBinContent(47,734);
   h_HitCountVsZFPixPlus__11->SetBinContent(48,417);
   h_HitCountVsZFPixPlus__11->SetBinContent(49,46);
   h_HitCountVsZFPixPlus__11->SetEntries(16579);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   h_HitCountVsZFPixPlus__11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   h_HitCountVsZFPixPlus__11->SetLineColor(ci);
   h_HitCountVsZFPixPlus__11->SetLineWidth(2);
   h_HitCountVsZFPixPlus__11->SetMarkerStyle(21);
   h_HitCountVsZFPixPlus__11->SetMarkerSize(1.5);
   h_HitCountVsZFPixPlus__11->GetXaxis()->SetTitle("hit global z");
   h_HitCountVsZFPixPlus__11->GetXaxis()->CenterTitle(true);
   h_HitCountVsZFPixPlus__11->GetXaxis()->SetLabelFont(42);
   h_HitCountVsZFPixPlus__11->GetXaxis()->SetLabelSize(0.05);
   h_HitCountVsZFPixPlus__11->GetXaxis()->SetTitleSize(0.05);
   h_HitCountVsZFPixPlus__11->GetXaxis()->SetTitleOffset(1.08);
   h_HitCountVsZFPixPlus__11->GetXaxis()->SetTitleFont(42);
   h_HitCountVsZFPixPlus__11->GetYaxis()->SetTitle("Hits (#)");
   h_HitCountVsZFPixPlus__11->GetYaxis()->SetLabelFont(42);
   h_HitCountVsZFPixPlus__11->GetYaxis()->SetLabelSize(0.05);
   h_HitCountVsZFPixPlus__11->GetYaxis()->SetTitleSize(0.05);
   h_HitCountVsZFPixPlus__11->GetYaxis()->SetTitleOffset(0);
   h_HitCountVsZFPixPlus__11->GetYaxis()->SetTitleFont(42);
   h_HitCountVsZFPixPlus__11->GetZaxis()->SetLabelFont(42);
   h_HitCountVsZFPixPlus__11->GetZaxis()->SetLabelSize(0.035);
   h_HitCountVsZFPixPlus__11->GetZaxis()->SetTitleSize(0.035);
   h_HitCountVsZFPixPlus__11->GetZaxis()->SetTitleFont(42);
   h_HitCountVsZFPixPlus__11->Draw("EBAR");
   
   TPaveText *pt = new TPaveText(-0.1762923,0.9653808,0.5,1.024619,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Number of FPix(Z+) hits vs z");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
