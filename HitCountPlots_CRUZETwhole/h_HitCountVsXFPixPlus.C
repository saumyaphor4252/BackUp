void h_HitCountVsXFPixPlus()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jul 21 14:50:36 2021) by ROOT version 6.22/09
   TCanvas *c = new TCanvas("c", "c",1,1,741,714);
   gStyle->SetOptStat(0);
   c->Range(-28.55688,-71.702,22.17317,431.6607);
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
   
   TH1D *h_HitCountVsXFPixPlus__13 = new TH1D("h_HitCountVsXFPixPlus__13","Number of FPix(Z+) hits vs x",20,-20,20);
   h_HitCountVsXFPixPlus__13->SetBinContent(4,174);
   h_HitCountVsXFPixPlus__13->SetBinContent(5,109);
   h_HitCountVsXFPixPlus__13->SetBinContent(6,106);
   h_HitCountVsXFPixPlus__13->SetBinContent(7,353);
   h_HitCountVsXFPixPlus__13->SetBinContent(8,185);
   h_HitCountVsXFPixPlus__13->SetBinContent(9,137);
   h_HitCountVsXFPixPlus__13->SetBinContent(10,181);
   h_HitCountVsXFPixPlus__13->SetBinContent(11,136);
   h_HitCountVsXFPixPlus__13->SetBinContent(12,146);
   h_HitCountVsXFPixPlus__13->SetBinContent(13,104);
   h_HitCountVsXFPixPlus__13->SetBinContent(14,243);
   h_HitCountVsXFPixPlus__13->SetBinContent(15,51);
   h_HitCountVsXFPixPlus__13->SetBinContent(16,88);
   h_HitCountVsXFPixPlus__13->SetBinContent(17,108);
   h_HitCountVsXFPixPlus__13->SetEntries(2121);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   h_HitCountVsXFPixPlus__13->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   h_HitCountVsXFPixPlus__13->SetLineColor(ci);
   h_HitCountVsXFPixPlus__13->SetLineWidth(2);
   h_HitCountVsXFPixPlus__13->SetMarkerStyle(21);
   h_HitCountVsXFPixPlus__13->SetMarkerSize(1.5);
   h_HitCountVsXFPixPlus__13->GetXaxis()->SetTitle("hit global x");
   h_HitCountVsXFPixPlus__13->GetXaxis()->CenterTitle(true);
   h_HitCountVsXFPixPlus__13->GetXaxis()->SetLabelFont(42);
   h_HitCountVsXFPixPlus__13->GetXaxis()->SetLabelSize(0.05);
   h_HitCountVsXFPixPlus__13->GetXaxis()->SetTitleSize(0.05);
   h_HitCountVsXFPixPlus__13->GetXaxis()->SetTitleOffset(1.08);
   h_HitCountVsXFPixPlus__13->GetXaxis()->SetTitleFont(42);
   h_HitCountVsXFPixPlus__13->GetYaxis()->SetTitle("Hits (#)");
   h_HitCountVsXFPixPlus__13->GetYaxis()->SetLabelFont(42);
   h_HitCountVsXFPixPlus__13->GetYaxis()->SetLabelSize(0.05);
   h_HitCountVsXFPixPlus__13->GetYaxis()->SetTitleSize(0.05);
   h_HitCountVsXFPixPlus__13->GetYaxis()->SetTitleFont(42);
   h_HitCountVsXFPixPlus__13->GetZaxis()->SetLabelFont(42);
   h_HitCountVsXFPixPlus__13->GetZaxis()->SetTitleOffset(1);
   h_HitCountVsXFPixPlus__13->GetZaxis()->SetTitleFont(42);
   h_HitCountVsXFPixPlus__13->Draw("EBAR");
   
   TPaveText *pt = new TPaveText(0.1596065,0.9358451,0.8403935,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Number of FPix(Z+) hits vs x");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
