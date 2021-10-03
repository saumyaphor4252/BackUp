void h_HitCountVsPhiBpix()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jul 21 14:50:36 2021) by ROOT version 6.22/09
   TCanvas *c = new TCanvas("c", "c",1,1,741,714);
   gStyle->SetOptStat(0);
   c->Range(-4.997453,-43.29475,3.880306,260.6432);
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
   
   TH1D *h_HitCountVsPhiBpix__8 = new TH1D("h_HitCountVsPhiBpix__8","Number of BPix hits vs #phi",20,-3.5,3.5);
   h_HitCountVsPhiBpix__8->SetBinContent(2,50);
   h_HitCountVsPhiBpix__8->SetBinContent(3,116);
   h_HitCountVsPhiBpix__8->SetBinContent(4,133);
   h_HitCountVsPhiBpix__8->SetBinContent(5,210);
   h_HitCountVsPhiBpix__8->SetBinContent(6,160);
   h_HitCountVsPhiBpix__8->SetBinContent(7,147);
   h_HitCountVsPhiBpix__8->SetBinContent(8,132);
   h_HitCountVsPhiBpix__8->SetBinContent(9,89);
   h_HitCountVsPhiBpix__8->SetBinContent(10,76);
   h_HitCountVsPhiBpix__8->SetBinContent(11,82);
   h_HitCountVsPhiBpix__8->SetBinContent(12,60);
   h_HitCountVsPhiBpix__8->SetBinContent(13,141);
   h_HitCountVsPhiBpix__8->SetBinContent(14,177);
   h_HitCountVsPhiBpix__8->SetBinContent(15,207);
   h_HitCountVsPhiBpix__8->SetBinContent(16,139);
   h_HitCountVsPhiBpix__8->SetBinContent(17,174);
   h_HitCountVsPhiBpix__8->SetBinContent(18,66);
   h_HitCountVsPhiBpix__8->SetBinContent(19,78);
   h_HitCountVsPhiBpix__8->SetEntries(2237);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   h_HitCountVsPhiBpix__8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   h_HitCountVsPhiBpix__8->SetLineColor(ci);
   h_HitCountVsPhiBpix__8->SetLineWidth(2);
   h_HitCountVsPhiBpix__8->SetMarkerStyle(21);
   h_HitCountVsPhiBpix__8->SetMarkerSize(1.5);
   h_HitCountVsPhiBpix__8->GetXaxis()->SetTitle("hit global #phi");
   h_HitCountVsPhiBpix__8->GetXaxis()->SetRange(1,20);
   h_HitCountVsPhiBpix__8->GetXaxis()->CenterTitle(true);
   h_HitCountVsPhiBpix__8->GetXaxis()->SetLabelFont(42);
   h_HitCountVsPhiBpix__8->GetXaxis()->SetLabelSize(0.05);
   h_HitCountVsPhiBpix__8->GetXaxis()->SetTitleSize(0.05);
   h_HitCountVsPhiBpix__8->GetXaxis()->SetTitleOffset(1.08);
   h_HitCountVsPhiBpix__8->GetXaxis()->SetTitleFont(42);
   h_HitCountVsPhiBpix__8->GetYaxis()->SetTitle("Hits (#)");
   h_HitCountVsPhiBpix__8->GetYaxis()->SetLabelFont(42);
   h_HitCountVsPhiBpix__8->GetYaxis()->SetLabelSize(0.05);
   h_HitCountVsPhiBpix__8->GetYaxis()->SetTitleSize(0.05);
   h_HitCountVsPhiBpix__8->GetYaxis()->SetTitleFont(42);
   h_HitCountVsPhiBpix__8->GetZaxis()->SetLabelFont(42);
   h_HitCountVsPhiBpix__8->GetZaxis()->SetTitleOffset(1);
   h_HitCountVsPhiBpix__8->GetZaxis()->SetTitleFont(42);
   h_HitCountVsPhiBpix__8->Draw("EBAR");
   
   TPaveText *pt = new TPaveText(0.1996336,0.9358451,0.8003664,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Number of BPix hits vs #phi");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
