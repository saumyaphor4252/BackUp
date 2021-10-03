void h_HitCountVsPhiFpix()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jul 30 12:01:03 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",596,189,741,738);
   gStyle->SetOptStat(0);
   c->Range(-4.5691,752.7837,3.547708,2759.384);
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
   
   TH1D *h_HitCountVsPhiFpix__10 = new TH1D("h_HitCountVsPhiFpix__10","Number of FPix hits vs #phi",20,-3.2,3.2);
   h_HitCountVsPhiFpix__10->SetBinContent(1,1143);
   h_HitCountVsPhiFpix__10->SetBinContent(2,1425);
   h_HitCountVsPhiFpix__10->SetBinContent(3,1966);
   h_HitCountVsPhiFpix__10->SetBinContent(4,2230);
   h_HitCountVsPhiFpix__10->SetBinContent(5,2471);
   h_HitCountVsPhiFpix__10->SetBinContent(6,1563);
   h_HitCountVsPhiFpix__10->SetBinContent(7,1887);
   h_HitCountVsPhiFpix__10->SetBinContent(8,1982);
   h_HitCountVsPhiFpix__10->SetBinContent(9,1778);
   h_HitCountVsPhiFpix__10->SetBinContent(10,1446);
   h_HitCountVsPhiFpix__10->SetBinContent(11,1150);
   h_HitCountVsPhiFpix__10->SetBinContent(12,1832);
   h_HitCountVsPhiFpix__10->SetBinContent(13,1931);
   h_HitCountVsPhiFpix__10->SetBinContent(14,1896);
   h_HitCountVsPhiFpix__10->SetBinContent(15,1691);
   h_HitCountVsPhiFpix__10->SetBinContent(16,1697);
   h_HitCountVsPhiFpix__10->SetBinContent(17,1943);
   h_HitCountVsPhiFpix__10->SetBinContent(18,1483);
   h_HitCountVsPhiFpix__10->SetBinContent(19,1489);
   h_HitCountVsPhiFpix__10->SetBinContent(20,1478);
   h_HitCountVsPhiFpix__10->SetEntries(34481);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   h_HitCountVsPhiFpix__10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   h_HitCountVsPhiFpix__10->SetLineColor(ci);
   h_HitCountVsPhiFpix__10->SetLineWidth(2);
   h_HitCountVsPhiFpix__10->SetMarkerStyle(21);
   h_HitCountVsPhiFpix__10->SetMarkerSize(1.5);
   h_HitCountVsPhiFpix__10->GetXaxis()->SetTitle("hit global #phi");
   h_HitCountVsPhiFpix__10->GetXaxis()->CenterTitle(true);
   h_HitCountVsPhiFpix__10->GetXaxis()->SetLabelFont(42);
   h_HitCountVsPhiFpix__10->GetXaxis()->SetLabelSize(0.05);
   h_HitCountVsPhiFpix__10->GetXaxis()->SetTitleSize(0.05);
   h_HitCountVsPhiFpix__10->GetXaxis()->SetTitleOffset(1.08);
   h_HitCountVsPhiFpix__10->GetXaxis()->SetTitleFont(42);
   h_HitCountVsPhiFpix__10->GetYaxis()->SetTitle("Hits (#)");
   h_HitCountVsPhiFpix__10->GetYaxis()->SetLabelFont(42);
   h_HitCountVsPhiFpix__10->GetYaxis()->SetLabelSize(0.05);
   h_HitCountVsPhiFpix__10->GetYaxis()->SetTitleSize(0.05);
   h_HitCountVsPhiFpix__10->GetYaxis()->SetTitleOffset(0);
   h_HitCountVsPhiFpix__10->GetYaxis()->SetTitleFont(42);
   h_HitCountVsPhiFpix__10->GetZaxis()->SetLabelFont(42);
   h_HitCountVsPhiFpix__10->GetZaxis()->SetLabelSize(0.035);
   h_HitCountVsPhiFpix__10->GetZaxis()->SetTitleSize(0.035);
   h_HitCountVsPhiFpix__10->GetZaxis()->SetTitleFont(42);
   h_HitCountVsPhiFpix__10->Draw("EBAR");
   
   TPaveText *pt = new TPaveText(-0.09374831,0.9653808,0.5,1.024619,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Number of FPix hits vs #phi");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
