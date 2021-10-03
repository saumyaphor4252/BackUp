void h_HitCountVsXBpix()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jul 21 14:50:35 2021) by ROOT version 6.22/09
   TCanvas *c = new TCanvas("c", "c",1,1,741,714);
   gStyle->SetOptStat(0);
   c->Range(-28.55688,-53.65021,22.17317,322.9853);
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
   
   TH1D *h_HitCountVsXBpix__3 = new TH1D("h_HitCountVsXBpix__3","Number of BPix hits vs x",20,-20,20);
   h_HitCountVsXBpix__3->SetBinContent(2,7);
   h_HitCountVsXBpix__3->SetBinContent(3,41);
   h_HitCountVsXBpix__3->SetBinContent(4,35);
   h_HitCountVsXBpix__3->SetBinContent(5,93);
   h_HitCountVsXBpix__3->SetBinContent(6,87);
   h_HitCountVsXBpix__3->SetBinContent(7,157);
   h_HitCountVsXBpix__3->SetBinContent(8,209);
   h_HitCountVsXBpix__3->SetBinContent(9,258);
   h_HitCountVsXBpix__3->SetBinContent(10,262);
   h_HitCountVsXBpix__3->SetBinContent(11,231);
   h_HitCountVsXBpix__3->SetBinContent(12,260);
   h_HitCountVsXBpix__3->SetBinContent(13,188);
   h_HitCountVsXBpix__3->SetBinContent(14,143);
   h_HitCountVsXBpix__3->SetBinContent(15,82);
   h_HitCountVsXBpix__3->SetBinContent(16,65);
   h_HitCountVsXBpix__3->SetBinContent(17,44);
   h_HitCountVsXBpix__3->SetBinContent(18,65);
   h_HitCountVsXBpix__3->SetBinContent(19,10);
   h_HitCountVsXBpix__3->SetEntries(2237);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   h_HitCountVsXBpix__3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   h_HitCountVsXBpix__3->SetLineColor(ci);
   h_HitCountVsXBpix__3->SetLineWidth(2);
   h_HitCountVsXBpix__3->SetMarkerStyle(21);
   h_HitCountVsXBpix__3->SetMarkerSize(1.5);
   h_HitCountVsXBpix__3->GetXaxis()->SetTitle("hit global x");
   h_HitCountVsXBpix__3->GetXaxis()->CenterTitle(true);
   h_HitCountVsXBpix__3->GetXaxis()->SetLabelFont(42);
   h_HitCountVsXBpix__3->GetXaxis()->SetLabelSize(0.05);
   h_HitCountVsXBpix__3->GetXaxis()->SetTitleSize(0.05);
   h_HitCountVsXBpix__3->GetXaxis()->SetTitleOffset(1.08);
   h_HitCountVsXBpix__3->GetXaxis()->SetTitleFont(42);
   h_HitCountVsXBpix__3->GetYaxis()->SetTitle("Hits (#)");
   h_HitCountVsXBpix__3->GetYaxis()->SetLabelFont(42);
   h_HitCountVsXBpix__3->GetYaxis()->SetLabelSize(0.05);
   h_HitCountVsXBpix__3->GetYaxis()->SetTitleSize(0.05);
   h_HitCountVsXBpix__3->GetYaxis()->SetTitleFont(42);
   h_HitCountVsXBpix__3->GetZaxis()->SetLabelFont(42);
   h_HitCountVsXBpix__3->GetZaxis()->SetTitleOffset(1);
   h_HitCountVsXBpix__3->GetZaxis()->SetTitleFont(42);
   h_HitCountVsXBpix__3->Draw("EBAR");
   
   TPaveText *pt = new TPaveText(0.2023474,0.94,0.7976526,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Number of BPix hits vs x");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
