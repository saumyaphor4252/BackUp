void h_HitCountVsZFPixPlus()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jul 21 14:50:36 2021) by ROOT version 6.22/09
   TCanvas *c = new TCanvas("c", "c",1,1,741,714);
   gStyle->SetOptStat(0);
   c->Range(5.373514,-40.89944,62.44482,246.223);
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
   h_HitCountVsZFPixPlus__11->SetBinContent(20,65);
   h_HitCountVsZFPixPlus__11->SetBinContent(21,132);
   h_HitCountVsZFPixPlus__11->SetBinContent(22,182);
   h_HitCountVsZFPixPlus__11->SetBinContent(23,198);
   h_HitCountVsZFPixPlus__11->SetBinContent(24,110);
   h_HitCountVsZFPixPlus__11->SetBinContent(25,113);
   h_HitCountVsZFPixPlus__11->SetBinContent(26,10);
   h_HitCountVsZFPixPlus__11->SetBinContent(30,78);
   h_HitCountVsZFPixPlus__11->SetBinContent(31,119);
   h_HitCountVsZFPixPlus__11->SetBinContent(32,155);
   h_HitCountVsZFPixPlus__11->SetBinContent(33,136);
   h_HitCountVsZFPixPlus__11->SetBinContent(34,151);
   h_HitCountVsZFPixPlus__11->SetBinContent(35,108);
   h_HitCountVsZFPixPlus__11->SetBinContent(36,9);
   h_HitCountVsZFPixPlus__11->SetBinContent(43,96);
   h_HitCountVsZFPixPlus__11->SetBinContent(44,100);
   h_HitCountVsZFPixPlus__11->SetBinContent(45,108);
   h_HitCountVsZFPixPlus__11->SetBinContent(46,100);
   h_HitCountVsZFPixPlus__11->SetBinContent(47,81);
   h_HitCountVsZFPixPlus__11->SetBinContent(48,65);
   h_HitCountVsZFPixPlus__11->SetBinContent(49,5);
   h_HitCountVsZFPixPlus__11->SetEntries(2121);

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
   h_HitCountVsZFPixPlus__11->GetYaxis()->SetTitleFont(42);
   h_HitCountVsZFPixPlus__11->GetZaxis()->SetLabelFont(42);
   h_HitCountVsZFPixPlus__11->GetZaxis()->SetTitleOffset(1);
   h_HitCountVsZFPixPlus__11->GetZaxis()->SetTitleFont(42);
   h_HitCountVsZFPixPlus__11->Draw("EBAR");
   
   TPaveText *pt = new TPaveText(0.1609634,0.9358451,0.8390366,0.995,"blNDC");
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
