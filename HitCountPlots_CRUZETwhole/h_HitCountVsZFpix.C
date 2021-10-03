void h_HitCountVsZFpix()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jul 21 14:50:35 2021) by ROOT version 6.22/09
   TCanvas *c = new TCanvas("c", "c",1,1,741,714);
   gStyle->SetOptStat(0);
   c->Range(-142.7844,-87.32271,110.8659,525.7006);
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
   
   TH1D *h_HitCountVsZFpix__2 = new TH1D("h_HitCountVsZFpix__2","Number of FPix hits vs z",100,-100,100);
   h_HitCountVsZFpix__2->SetBinContent(25,240);
   h_HitCountVsZFpix__2->SetBinContent(26,380);
   h_HitCountVsZFpix__2->SetBinContent(27,96);
   h_HitCountVsZFpix__2->SetBinContent(29,17);
   h_HitCountVsZFpix__2->SetBinContent(30,293);
   h_HitCountVsZFpix__2->SetBinContent(31,411);
   h_HitCountVsZFpix__2->SetBinContent(32,35);
   h_HitCountVsZFpix__2->SetBinContent(33,66);
   h_HitCountVsZFpix__2->SetBinContent(34,346);
   h_HitCountVsZFpix__2->SetBinContent(35,360);
   h_HitCountVsZFpix__2->SetBinContent(65,65);
   h_HitCountVsZFpix__2->SetBinContent(66,432);
   h_HitCountVsZFpix__2->SetBinContent(67,313);
   h_HitCountVsZFpix__2->SetBinContent(69,169);
   h_HitCountVsZFpix__2->SetBinContent(70,379);
   h_HitCountVsZFpix__2->SetBinContent(71,208);
   h_HitCountVsZFpix__2->SetBinContent(74,196);
   h_HitCountVsZFpix__2->SetBinContent(75,248);
   h_HitCountVsZFpix__2->SetBinContent(76,111);
   h_HitCountVsZFpix__2->SetEntries(4365);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   h_HitCountVsZFpix__2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   h_HitCountVsZFpix__2->SetLineColor(ci);
   h_HitCountVsZFpix__2->SetLineWidth(2);
   h_HitCountVsZFpix__2->SetMarkerStyle(21);
   h_HitCountVsZFpix__2->SetMarkerSize(1.5);
   h_HitCountVsZFpix__2->GetXaxis()->SetTitle("hit global z");
   h_HitCountVsZFpix__2->GetXaxis()->CenterTitle(true);
   h_HitCountVsZFpix__2->GetXaxis()->SetLabelFont(42);
   h_HitCountVsZFpix__2->GetXaxis()->SetLabelSize(0.05);
   h_HitCountVsZFpix__2->GetXaxis()->SetTitleSize(0.05);
   h_HitCountVsZFpix__2->GetXaxis()->SetTitleOffset(1.08);
   h_HitCountVsZFpix__2->GetXaxis()->SetTitleFont(42);
   h_HitCountVsZFpix__2->GetYaxis()->SetTitle("Hits (#)");
   h_HitCountVsZFpix__2->GetYaxis()->SetLabelFont(42);
   h_HitCountVsZFpix__2->GetYaxis()->SetLabelSize(0.05);
   h_HitCountVsZFpix__2->GetYaxis()->SetTitleSize(0.05);
   h_HitCountVsZFpix__2->GetYaxis()->SetTitleFont(42);
   h_HitCountVsZFpix__2->GetZaxis()->SetLabelFont(42);
   h_HitCountVsZFpix__2->GetZaxis()->SetTitleOffset(1);
   h_HitCountVsZFpix__2->GetZaxis()->SetTitleFont(42);
   h_HitCountVsZFpix__2->Draw("EBAR");
   
   TPaveText *pt = new TPaveText(0.2064179,0.94,0.7935821,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Number of FPix hits vs z");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
