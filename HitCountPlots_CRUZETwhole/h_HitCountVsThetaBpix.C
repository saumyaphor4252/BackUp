void h_HitCountVsThetaBpix()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jul 21 14:50:35 2021) by ROOT version 6.22/09
   TCanvas *c = new TCanvas("c", "c",1,1,741,714);
   gStyle->SetOptStat(0);
   c->Range(-0.6845501,-53.05372,3.373854,319.3942);
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
   
   TH1D *h_HitCountVsThetaBpix__7 = new TH1D("h_HitCountVsThetaBpix__7","Number of BPix hits vs #theta",20,0,3.2);
   h_HitCountVsThetaBpix__7->SetBinContent(1,29);
   h_HitCountVsThetaBpix__7->SetBinContent(2,108);
   h_HitCountVsThetaBpix__7->SetBinContent(3,157);
   h_HitCountVsThetaBpix__7->SetBinContent(4,259);
   h_HitCountVsThetaBpix__7->SetBinContent(5,113);
   h_HitCountVsThetaBpix__7->SetBinContent(6,97);
   h_HitCountVsThetaBpix__7->SetBinContent(7,95);
   h_HitCountVsThetaBpix__7->SetBinContent(8,123);
   h_HitCountVsThetaBpix__7->SetBinContent(9,187);
   h_HitCountVsThetaBpix__7->SetBinContent(12,175);
   h_HitCountVsThetaBpix__7->SetBinContent(13,79);
   h_HitCountVsThetaBpix__7->SetBinContent(14,117);
   h_HitCountVsThetaBpix__7->SetBinContent(15,129);
   h_HitCountVsThetaBpix__7->SetBinContent(16,145);
   h_HitCountVsThetaBpix__7->SetBinContent(17,161);
   h_HitCountVsThetaBpix__7->SetBinContent(18,208);
   h_HitCountVsThetaBpix__7->SetBinContent(19,55);
   h_HitCountVsThetaBpix__7->SetEntries(2237);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   h_HitCountVsThetaBpix__7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   h_HitCountVsThetaBpix__7->SetLineColor(ci);
   h_HitCountVsThetaBpix__7->SetLineWidth(2);
   h_HitCountVsThetaBpix__7->SetMarkerStyle(21);
   h_HitCountVsThetaBpix__7->SetMarkerSize(1.5);
   h_HitCountVsThetaBpix__7->GetXaxis()->SetTitle("hit global #theta");
   h_HitCountVsThetaBpix__7->GetXaxis()->CenterTitle(true);
   h_HitCountVsThetaBpix__7->GetXaxis()->SetLabelFont(42);
   h_HitCountVsThetaBpix__7->GetXaxis()->SetLabelSize(0.05);
   h_HitCountVsThetaBpix__7->GetXaxis()->SetTitleSize(0.05);
   h_HitCountVsThetaBpix__7->GetXaxis()->SetTitleOffset(1.08);
   h_HitCountVsThetaBpix__7->GetXaxis()->SetTitleFont(42);
   h_HitCountVsThetaBpix__7->GetYaxis()->SetTitle("Hits (#)");
   h_HitCountVsThetaBpix__7->GetYaxis()->SetLabelFont(42);
   h_HitCountVsThetaBpix__7->GetYaxis()->SetLabelSize(0.05);
   h_HitCountVsThetaBpix__7->GetYaxis()->SetTitleSize(0.05);
   h_HitCountVsThetaBpix__7->GetYaxis()->SetTitleFont(42);
   h_HitCountVsThetaBpix__7->GetZaxis()->SetLabelFont(42);
   h_HitCountVsThetaBpix__7->GetZaxis()->SetTitleOffset(1);
   h_HitCountVsThetaBpix__7->GetZaxis()->SetTitleFont(42);
   h_HitCountVsThetaBpix__7->Draw("EBAR");
   
   TPaveText *pt = new TPaveText(0.1996336,0.94,0.8003664,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Number of BPix hits vs #theta");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
