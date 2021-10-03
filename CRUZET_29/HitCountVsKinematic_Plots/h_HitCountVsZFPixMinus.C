void h_HitCountVsZFPixMinus()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jul 30 12:01:03 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",596,189,741,738);
   gStyle->SetOptStat(0);
   c->Range(-69.62649,-208.945,-12.55518,1257.892);
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
   
   TH1D *h_HitCountVsZFPixMinus__12 = new TH1D("h_HitCountVsZFPixMinus__12","Number of FPix(Z-) hits vs z",100,-60,-15);
   h_HitCountVsZFPixMinus__12->SetBinContent(19,212);
   h_HitCountVsZFPixMinus__12->SetBinContent(20,258);
   h_HitCountVsZFPixMinus__12->SetBinContent(21,465);
   h_HitCountVsZFPixMinus__12->SetBinContent(22,717);
   h_HitCountVsZFPixMinus__12->SetBinContent(23,599);
   h_HitCountVsZFPixMinus__12->SetBinContent(24,846);
   h_HitCountVsZFPixMinus__12->SetBinContent(25,769);
   h_HitCountVsZFPixMinus__12->SetBinContent(26,594);
   h_HitCountVsZFPixMinus__12->SetBinContent(27,353);
   h_HitCountVsZFPixMinus__12->SetBinContent(28,315);
   h_HitCountVsZFPixMinus__12->SetBinContent(29,69);
   h_HitCountVsZFPixMinus__12->SetBinContent(40,104);
   h_HitCountVsZFPixMinus__12->SetBinContent(41,318);
   h_HitCountVsZFPixMinus__12->SetBinContent(42,426);
   h_HitCountVsZFPixMinus__12->SetBinContent(43,796);
   h_HitCountVsZFPixMinus__12->SetBinContent(44,707);
   h_HitCountVsZFPixMinus__12->SetBinContent(45,933);
   h_HitCountVsZFPixMinus__12->SetBinContent(46,811);
   h_HitCountVsZFPixMinus__12->SetBinContent(47,780);
   h_HitCountVsZFPixMinus__12->SetBinContent(48,530);
   h_HitCountVsZFPixMinus__12->SetBinContent(49,414);
   h_HitCountVsZFPixMinus__12->SetBinContent(50,135);
   h_HitCountVsZFPixMinus__12->SetBinContent(57,276);
   h_HitCountVsZFPixMinus__12->SetBinContent(58,446);
   h_HitCountVsZFPixMinus__12->SetBinContent(59,582);
   h_HitCountVsZFPixMinus__12->SetBinContent(60,680);
   h_HitCountVsZFPixMinus__12->SetBinContent(61,1002);
   h_HitCountVsZFPixMinus__12->SetBinContent(62,868);
   h_HitCountVsZFPixMinus__12->SetBinContent(63,1051);
   h_HitCountVsZFPixMinus__12->SetBinContent(64,720);
   h_HitCountVsZFPixMinus__12->SetBinContent(65,578);
   h_HitCountVsZFPixMinus__12->SetBinContent(66,538);
   h_HitCountVsZFPixMinus__12->SetBinContent(67,10);
   h_HitCountVsZFPixMinus__12->SetEntries(17902);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   h_HitCountVsZFPixMinus__12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   h_HitCountVsZFPixMinus__12->SetLineColor(ci);
   h_HitCountVsZFPixMinus__12->SetLineWidth(2);
   h_HitCountVsZFPixMinus__12->SetMarkerStyle(21);
   h_HitCountVsZFPixMinus__12->SetMarkerSize(1.5);
   h_HitCountVsZFPixMinus__12->GetXaxis()->SetTitle("hit global z");
   h_HitCountVsZFPixMinus__12->GetXaxis()->CenterTitle(true);
   h_HitCountVsZFPixMinus__12->GetXaxis()->SetLabelFont(42);
   h_HitCountVsZFPixMinus__12->GetXaxis()->SetLabelSize(0.05);
   h_HitCountVsZFPixMinus__12->GetXaxis()->SetTitleSize(0.05);
   h_HitCountVsZFPixMinus__12->GetXaxis()->SetTitleOffset(1.08);
   h_HitCountVsZFPixMinus__12->GetXaxis()->SetTitleFont(42);
   h_HitCountVsZFPixMinus__12->GetYaxis()->SetTitle("Hits (#)");
   h_HitCountVsZFPixMinus__12->GetYaxis()->SetLabelFont(42);
   h_HitCountVsZFPixMinus__12->GetYaxis()->SetLabelSize(0.05);
   h_HitCountVsZFPixMinus__12->GetYaxis()->SetTitleSize(0.05);
   h_HitCountVsZFPixMinus__12->GetYaxis()->SetTitleOffset(0);
   h_HitCountVsZFPixMinus__12->GetYaxis()->SetTitleFont(42);
   h_HitCountVsZFPixMinus__12->GetZaxis()->SetLabelFont(42);
   h_HitCountVsZFPixMinus__12->GetZaxis()->SetLabelSize(0.035);
   h_HitCountVsZFPixMinus__12->GetZaxis()->SetTitleSize(0.035);
   h_HitCountVsZFPixMinus__12->GetZaxis()->SetTitleFont(42);
   h_HitCountVsZFPixMinus__12->Draw("EBAR");
   
   TPaveText *pt = new TPaveText(-0.1627605,0.9653808,0.5,1.024619,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Number of FPix(Z-) hits vs z");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
