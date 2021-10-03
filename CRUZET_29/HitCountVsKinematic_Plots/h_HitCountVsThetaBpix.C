void h_HitCountVsThetaBpix()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jul 30 12:01:02 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",596,189,741,738);
   gStyle->SetOptStat(0);
   c->Range(-0.6845501,-3132.374,3.373854,18857.53);
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
   h_HitCountVsThetaBpix__7->SetBinContent(1,1147);
   h_HitCountVsThetaBpix__7->SetBinContent(2,4724);
   h_HitCountVsThetaBpix__7->SetBinContent(3,8473);
   h_HitCountVsThetaBpix__7->SetBinContent(4,16115);
   h_HitCountVsThetaBpix__7->SetBinContent(5,9043);
   h_HitCountVsThetaBpix__7->SetBinContent(6,6415);
   h_HitCountVsThetaBpix__7->SetBinContent(7,8621);
   h_HitCountVsThetaBpix__7->SetBinContent(8,4017);
   h_HitCountVsThetaBpix__7->SetBinContent(9,14715);
   h_HitCountVsThetaBpix__7->SetBinContent(12,15227);
   h_HitCountVsThetaBpix__7->SetBinContent(13,2830);
   h_HitCountVsThetaBpix__7->SetBinContent(14,9404);
   h_HitCountVsThetaBpix__7->SetBinContent(15,14528);
   h_HitCountVsThetaBpix__7->SetBinContent(16,10544);
   h_HitCountVsThetaBpix__7->SetBinContent(17,11655);
   h_HitCountVsThetaBpix__7->SetBinContent(18,8810);
   h_HitCountVsThetaBpix__7->SetBinContent(19,2839);
   h_HitCountVsThetaBpix__7->SetEntries(149107);

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
   h_HitCountVsThetaBpix__7->GetYaxis()->SetTitleOffset(0);
   h_HitCountVsThetaBpix__7->GetYaxis()->SetTitleFont(42);
   h_HitCountVsThetaBpix__7->GetZaxis()->SetLabelFont(42);
   h_HitCountVsThetaBpix__7->GetZaxis()->SetLabelSize(0.035);
   h_HitCountVsThetaBpix__7->GetZaxis()->SetTitleSize(0.035);
   h_HitCountVsThetaBpix__7->GetZaxis()->SetTitleFont(42);
   h_HitCountVsThetaBpix__7->Draw("EBAR");
   
   TPaveText *pt = new TPaveText(-0.09916103,0.9675,0.5,1.0225,"blNDC");
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
