void h_HitCountVsZFPixMinus()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jul 21 14:50:36 2021) by ROOT version 6.22/09
   TCanvas *c = new TCanvas("c", "c",1,1,741,714);
   gStyle->SetOptStat(0);
   c->Range(-69.62649,-25.45713,-12.55518,153.2571);
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
   h_HitCountVsZFPixMinus__12->SetBinContent(19,31);
   h_HitCountVsZFPixMinus__12->SetBinContent(20,34);
   h_HitCountVsZFPixMinus__12->SetBinContent(21,60);
   h_HitCountVsZFPixMinus__12->SetBinContent(22,115);
   h_HitCountVsZFPixMinus__12->SetBinContent(23,58);
   h_HitCountVsZFPixMinus__12->SetBinContent(24,93);
   h_HitCountVsZFPixMinus__12->SetBinContent(25,85);
   h_HitCountVsZFPixMinus__12->SetBinContent(26,90);
   h_HitCountVsZFPixMinus__12->SetBinContent(27,74);
   h_HitCountVsZFPixMinus__12->SetBinContent(28,61);
   h_HitCountVsZFPixMinus__12->SetBinContent(29,15);
   h_HitCountVsZFPixMinus__12->SetBinContent(40,17);
   h_HitCountVsZFPixMinus__12->SetBinContent(41,41);
   h_HitCountVsZFPixMinus__12->SetBinContent(42,55);
   h_HitCountVsZFPixMinus__12->SetBinContent(43,75);
   h_HitCountVsZFPixMinus__12->SetBinContent(44,75);
   h_HitCountVsZFPixMinus__12->SetBinContent(45,92);
   h_HitCountVsZFPixMinus__12->SetBinContent(46,98);
   h_HitCountVsZFPixMinus__12->SetBinContent(47,91);
   h_HitCountVsZFPixMinus__12->SetBinContent(48,94);
   h_HitCountVsZFPixMinus__12->SetBinContent(49,90);
   h_HitCountVsZFPixMinus__12->SetBinContent(50,28);
   h_HitCountVsZFPixMinus__12->SetBinContent(57,25);
   h_HitCountVsZFPixMinus__12->SetBinContent(58,56);
   h_HitCountVsZFPixMinus__12->SetBinContent(59,51);
   h_HitCountVsZFPixMinus__12->SetBinContent(60,90);
   h_HitCountVsZFPixMinus__12->SetBinContent(61,100);
   h_HitCountVsZFPixMinus__12->SetBinContent(62,70);
   h_HitCountVsZFPixMinus__12->SetBinContent(63,121);
   h_HitCountVsZFPixMinus__12->SetBinContent(64,94);
   h_HitCountVsZFPixMinus__12->SetBinContent(65,75);
   h_HitCountVsZFPixMinus__12->SetBinContent(66,90);
   h_HitCountVsZFPixMinus__12->SetEntries(2244);

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
   h_HitCountVsZFPixMinus__12->GetYaxis()->SetTitleFont(42);
   h_HitCountVsZFPixMinus__12->GetZaxis()->SetLabelFont(42);
   h_HitCountVsZFPixMinus__12->GetZaxis()->SetTitleOffset(1);
   h_HitCountVsZFPixMinus__12->GetZaxis()->SetTitleFont(42);
   h_HitCountVsZFPixMinus__12->Draw("EBAR");
   
   TPaveText *pt = new TPaveText(0.1677476,0.9358451,0.8322524,0.995,"blNDC");
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
