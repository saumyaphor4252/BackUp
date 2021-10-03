void h_HitCountVsXBpix()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jul 30 12:01:01 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",596,189,741,738);
   gStyle->SetOptStat(0);
   c->Range(-28.55688,-3331.206,22.17317,20054.54);
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
   h_HitCountVsXBpix__3->SetBinContent(2,472);
   h_HitCountVsXBpix__3->SetBinContent(3,5343);
   h_HitCountVsXBpix__3->SetBinContent(4,3443);
   h_HitCountVsXBpix__3->SetBinContent(5,7224);
   h_HitCountVsXBpix__3->SetBinContent(6,8853);
   h_HitCountVsXBpix__3->SetBinContent(7,9741);
   h_HitCountVsXBpix__3->SetBinContent(8,9051);
   h_HitCountVsXBpix__3->SetBinContent(9,17142);
   h_HitCountVsXBpix__3->SetBinContent(10,13156);
   h_HitCountVsXBpix__3->SetBinContent(11,11730);
   h_HitCountVsXBpix__3->SetBinContent(12,15314);
   h_HitCountVsXBpix__3->SetBinContent(13,11951);
   h_HitCountVsXBpix__3->SetBinContent(14,9483);
   h_HitCountVsXBpix__3->SetBinContent(15,8654);
   h_HitCountVsXBpix__3->SetBinContent(16,6706);
   h_HitCountVsXBpix__3->SetBinContent(17,4545);
   h_HitCountVsXBpix__3->SetBinContent(18,5326);
   h_HitCountVsXBpix__3->SetBinContent(19,973);
   h_HitCountVsXBpix__3->SetEntries(149107);

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
   h_HitCountVsXBpix__3->GetYaxis()->SetTitleOffset(0);
   h_HitCountVsXBpix__3->GetYaxis()->SetTitleFont(42);
   h_HitCountVsXBpix__3->GetZaxis()->SetLabelFont(42);
   h_HitCountVsXBpix__3->GetZaxis()->SetLabelSize(0.035);
   h_HitCountVsXBpix__3->GetZaxis()->SetTitleSize(0.035);
   h_HitCountVsXBpix__3->GetZaxis()->SetTitleFont(42);
   h_HitCountVsXBpix__3->Draw("EBAR");
   
   TPaveText *pt = new TPaveText(-0.09374831,0.9675,0.5,1.0225,"blNDC");
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
