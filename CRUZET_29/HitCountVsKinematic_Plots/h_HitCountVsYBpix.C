void h_HitCountVsYBpix()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jul 30 12:01:01 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",596,189,741,738);
   gStyle->SetOptStat(0);
   c->Range(-28.55688,-2574.65,22.17317,15499.92);
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
   
   TH1D *h_HitCountVsYBpix__5 = new TH1D("h_HitCountVsYBpix__5","Number of BPix hits vs y",20,-20,20);
   h_HitCountVsYBpix__5->SetBinContent(2,2711);
   h_HitCountVsYBpix__5->SetBinContent(3,10814);
   h_HitCountVsYBpix__5->SetBinContent(4,5650);
   h_HitCountVsYBpix__5->SetBinContent(5,10532);
   h_HitCountVsYBpix__5->SetBinContent(6,7911);
   h_HitCountVsYBpix__5->SetBinContent(7,11753);
   h_HitCountVsYBpix__5->SetBinContent(8,6690);
   h_HitCountVsYBpix__5->SetBinContent(9,11047);
   h_HitCountVsYBpix__5->SetBinContent(10,3957);
   h_HitCountVsYBpix__5->SetBinContent(11,4707);
   h_HitCountVsYBpix__5->SetBinContent(12,11146);
   h_HitCountVsYBpix__5->SetBinContent(13,7997);
   h_HitCountVsYBpix__5->SetBinContent(14,12028);
   h_HitCountVsYBpix__5->SetBinContent(15,10291);
   h_HitCountVsYBpix__5->SetBinContent(16,11906);
   h_HitCountVsYBpix__5->SetBinContent(17,5176);
   h_HitCountVsYBpix__5->SetBinContent(18,13235);
   h_HitCountVsYBpix__5->SetBinContent(19,1556);
   h_HitCountVsYBpix__5->SetEntries(149107);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   h_HitCountVsYBpix__5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   h_HitCountVsYBpix__5->SetLineColor(ci);
   h_HitCountVsYBpix__5->SetLineWidth(2);
   h_HitCountVsYBpix__5->SetMarkerStyle(21);
   h_HitCountVsYBpix__5->SetMarkerSize(1.5);
   h_HitCountVsYBpix__5->GetXaxis()->SetTitle("hit global y");
   h_HitCountVsYBpix__5->GetXaxis()->CenterTitle(true);
   h_HitCountVsYBpix__5->GetXaxis()->SetLabelFont(42);
   h_HitCountVsYBpix__5->GetXaxis()->SetLabelSize(0.05);
   h_HitCountVsYBpix__5->GetXaxis()->SetTitleSize(0.05);
   h_HitCountVsYBpix__5->GetXaxis()->SetTitleOffset(1.08);
   h_HitCountVsYBpix__5->GetXaxis()->SetTitleFont(42);
   h_HitCountVsYBpix__5->GetYaxis()->SetTitle("Hits (#)");
   h_HitCountVsYBpix__5->GetYaxis()->SetLabelFont(42);
   h_HitCountVsYBpix__5->GetYaxis()->SetLabelSize(0.05);
   h_HitCountVsYBpix__5->GetYaxis()->SetTitleSize(0.05);
   h_HitCountVsYBpix__5->GetYaxis()->SetTitleOffset(0);
   h_HitCountVsYBpix__5->GetYaxis()->SetTitleFont(42);
   h_HitCountVsYBpix__5->GetZaxis()->SetLabelFont(42);
   h_HitCountVsYBpix__5->GetZaxis()->SetLabelSize(0.035);
   h_HitCountVsYBpix__5->GetZaxis()->SetTitleSize(0.035);
   h_HitCountVsYBpix__5->GetZaxis()->SetTitleFont(42);
   h_HitCountVsYBpix__5->Draw("EBAR");
   
   TPaveText *pt = new TPaveText(-0.09374831,0.9653808,0.5,1.024619,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Number of BPix hits vs y");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
