void h_HitCountVsPhiFPixMinus()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jul 30 12:01:06 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",596,189,741,738);
   gStyle->SetOptStat(0);
   c->Range(-4.5691,247.2456,3.547708,1450.825);
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
   
   TH1D *h_HitCountVsPhiFPixMinus__20 = new TH1D("h_HitCountVsPhiFPixMinus__20","Number of FPix(Z-) hits vs #phi",20,-3.2,3.2);
   h_HitCountVsPhiFPixMinus__20->SetBinContent(1,483);
   h_HitCountVsPhiFPixMinus__20->SetBinContent(2,598);
   h_HitCountVsPhiFPixMinus__20->SetBinContent(3,834);
   h_HitCountVsPhiFPixMinus__20->SetBinContent(4,1105);
   h_HitCountVsPhiFPixMinus__20->SetBinContent(5,1272);
   h_HitCountVsPhiFPixMinus__20->SetBinContent(6,880);
   h_HitCountVsPhiFPixMinus__20->SetBinContent(7,1062);
   h_HitCountVsPhiFPixMinus__20->SetBinContent(8,1108);
   h_HitCountVsPhiFPixMinus__20->SetBinContent(9,1065);
   h_HitCountVsPhiFPixMinus__20->SetBinContent(10,864);
   h_HitCountVsPhiFPixMinus__20->SetBinContent(11,710);
   h_HitCountVsPhiFPixMinus__20->SetBinContent(12,1122);
   h_HitCountVsPhiFPixMinus__20->SetBinContent(13,1197);
   h_HitCountVsPhiFPixMinus__20->SetBinContent(14,996);
   h_HitCountVsPhiFPixMinus__20->SetBinContent(15,866);
   h_HitCountVsPhiFPixMinus__20->SetBinContent(16,838);
   h_HitCountVsPhiFPixMinus__20->SetBinContent(17,917);
   h_HitCountVsPhiFPixMinus__20->SetBinContent(18,665);
   h_HitCountVsPhiFPixMinus__20->SetBinContent(19,702);
   h_HitCountVsPhiFPixMinus__20->SetBinContent(20,618);
   h_HitCountVsPhiFPixMinus__20->SetEntries(17902);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   h_HitCountVsPhiFPixMinus__20->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   h_HitCountVsPhiFPixMinus__20->SetLineColor(ci);
   h_HitCountVsPhiFPixMinus__20->SetLineWidth(2);
   h_HitCountVsPhiFPixMinus__20->SetMarkerStyle(21);
   h_HitCountVsPhiFPixMinus__20->SetMarkerSize(1.5);
   h_HitCountVsPhiFPixMinus__20->GetXaxis()->SetTitle("hit global #phi");
   h_HitCountVsPhiFPixMinus__20->GetXaxis()->CenterTitle(true);
   h_HitCountVsPhiFPixMinus__20->GetXaxis()->SetLabelFont(42);
   h_HitCountVsPhiFPixMinus__20->GetXaxis()->SetLabelSize(0.05);
   h_HitCountVsPhiFPixMinus__20->GetXaxis()->SetTitleSize(0.05);
   h_HitCountVsPhiFPixMinus__20->GetXaxis()->SetTitleOffset(1.08);
   h_HitCountVsPhiFPixMinus__20->GetXaxis()->SetTitleFont(42);
   h_HitCountVsPhiFPixMinus__20->GetYaxis()->SetTitle("Hits (#)");
   h_HitCountVsPhiFPixMinus__20->GetYaxis()->SetLabelFont(42);
   h_HitCountVsPhiFPixMinus__20->GetYaxis()->SetLabelSize(0.05);
   h_HitCountVsPhiFPixMinus__20->GetYaxis()->SetTitleSize(0.05);
   h_HitCountVsPhiFPixMinus__20->GetYaxis()->SetTitleOffset(0);
   h_HitCountVsPhiFPixMinus__20->GetYaxis()->SetTitleFont(42);
   h_HitCountVsPhiFPixMinus__20->GetZaxis()->SetLabelFont(42);
   h_HitCountVsPhiFPixMinus__20->GetZaxis()->SetLabelSize(0.035);
   h_HitCountVsPhiFPixMinus__20->GetZaxis()->SetTitleSize(0.035);
   h_HitCountVsPhiFPixMinus__20->GetZaxis()->SetTitleFont(42);
   h_HitCountVsPhiFPixMinus__20->Draw("EBAR");
   
   TPaveText *pt = new TPaveText(-0.1722327,0.9653808,0.5,1.024619,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Number of FPix(Z-) hits vs #phi");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
