void h_HitCountVsXFPixPlus()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jul 30 12:01:03 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",596,189,741,738);
   gStyle->SetOptStat(0);
   c->Range(-28.55688,-523.9201,22.17317,3154.106);
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
   h_HitCountVsXFPixPlus__13->SetBinContent(4,851);
   h_HitCountVsXFPixPlus__13->SetBinContent(5,798);
   h_HitCountVsXFPixPlus__13->SetBinContent(6,869);
   h_HitCountVsXFPixPlus__13->SetBinContent(7,2665);
   h_HitCountVsXFPixPlus__13->SetBinContent(8,1471);
   h_HitCountVsXFPixPlus__13->SetBinContent(9,1246);
   h_HitCountVsXFPixPlus__13->SetBinContent(10,1393);
   h_HitCountVsXFPixPlus__13->SetBinContent(11,1235);
   h_HitCountVsXFPixPlus__13->SetBinContent(12,1373);
   h_HitCountVsXFPixPlus__13->SetBinContent(13,985);
   h_HitCountVsXFPixPlus__13->SetBinContent(14,2000);
   h_HitCountVsXFPixPlus__13->SetBinContent(15,542);
   h_HitCountVsXFPixPlus__13->SetBinContent(16,598);
   h_HitCountVsXFPixPlus__13->SetBinContent(17,553);
   h_HitCountVsXFPixPlus__13->SetEntries(16579);

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
   h_HitCountVsXFPixPlus__13->GetYaxis()->SetTitleOffset(0);
   h_HitCountVsXFPixPlus__13->GetYaxis()->SetTitleFont(42);
   h_HitCountVsXFPixPlus__13->GetZaxis()->SetLabelFont(42);
   h_HitCountVsXFPixPlus__13->GetZaxis()->SetLabelSize(0.035);
   h_HitCountVsXFPixPlus__13->GetZaxis()->SetTitleSize(0.035);
   h_HitCountVsXFPixPlus__13->GetZaxis()->SetTitleFont(42);
   h_HitCountVsXFPixPlus__13->Draw("EBAR");
   
   TPaveText *pt = new TPaveText(-0.1789986,0.9653808,0.5,1.024619,"blNDC");
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
