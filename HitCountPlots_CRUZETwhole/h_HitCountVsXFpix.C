void h_HitCountVsXFpix()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jul 21 14:50:35 2021) by ROOT version 6.22/09
   TCanvas *c = new TCanvas("c", "c",1,1,741,714);
   gStyle->SetOptStat(0);
   c->Range(-28.55688,-127.3241,22.17317,766.517);
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
   
   TH1D *h_HitCountVsXFpix__4 = new TH1D("h_HitCountVsXFpix__4","Number of FPix hits vs x",20,-20,20);
   h_HitCountVsXFpix__4->SetBinContent(4,263);
   h_HitCountVsXFpix__4->SetBinContent(5,195);
   h_HitCountVsXFpix__4->SetBinContent(6,188);
   h_HitCountVsXFpix__4->SetBinContent(7,570);
   h_HitCountVsXFpix__4->SetBinContent(8,345);
   h_HitCountVsXFpix__4->SetBinContent(9,246);
   h_HitCountVsXFpix__4->SetBinContent(10,354);
   h_HitCountVsXFpix__4->SetBinContent(11,293);
   h_HitCountVsXFpix__4->SetBinContent(12,318);
   h_HitCountVsXFpix__4->SetBinContent(13,287);
   h_HitCountVsXFpix__4->SetBinContent(14,635);
   h_HitCountVsXFpix__4->SetBinContent(15,164);
   h_HitCountVsXFpix__4->SetBinContent(16,244);
   h_HitCountVsXFpix__4->SetBinContent(17,263);
   h_HitCountVsXFpix__4->SetEntries(4365);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   h_HitCountVsXFpix__4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   h_HitCountVsXFpix__4->SetLineColor(ci);
   h_HitCountVsXFpix__4->SetLineWidth(2);
   h_HitCountVsXFpix__4->SetMarkerStyle(21);
   h_HitCountVsXFpix__4->SetMarkerSize(1.5);
   h_HitCountVsXFpix__4->GetXaxis()->SetTitle("hit global x");
   h_HitCountVsXFpix__4->GetXaxis()->CenterTitle(true);
   h_HitCountVsXFpix__4->GetXaxis()->SetLabelFont(42);
   h_HitCountVsXFpix__4->GetXaxis()->SetLabelSize(0.05);
   h_HitCountVsXFpix__4->GetXaxis()->SetTitleSize(0.05);
   h_HitCountVsXFpix__4->GetXaxis()->SetTitleOffset(1.08);
   h_HitCountVsXFpix__4->GetXaxis()->SetTitleFont(42);
   h_HitCountVsXFpix__4->GetYaxis()->SetTitle("Hits (#)");
   h_HitCountVsXFpix__4->GetYaxis()->SetLabelFont(42);
   h_HitCountVsXFpix__4->GetYaxis()->SetLabelSize(0.05);
   h_HitCountVsXFpix__4->GetYaxis()->SetTitleSize(0.05);
   h_HitCountVsXFpix__4->GetYaxis()->SetTitleFont(42);
   h_HitCountVsXFpix__4->GetZaxis()->SetLabelFont(42);
   h_HitCountVsXFpix__4->GetZaxis()->SetTitleOffset(1);
   h_HitCountVsXFpix__4->GetZaxis()->SetTitleFont(42);
   h_HitCountVsXFpix__4->Draw("EBAR");
   
   TPaveText *pt = new TPaveText(0.2050611,0.94,0.7949389,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Number of FPix hits vs x");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
