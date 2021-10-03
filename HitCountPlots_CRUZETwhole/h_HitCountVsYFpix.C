void h_HitCountVsYFpix()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jul 21 14:50:35 2021) by ROOT version 6.22/09
   TCanvas *c = new TCanvas("c", "c",1,1,741,714);
   gStyle->SetOptStat(0);
   c->Range(-28.55688,-123.3898,22.17317,742.8318);
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
   
   TH1D *h_HitCountVsYFpix__6 = new TH1D("h_HitCountVsYFpix__6","Number of FPix hits vs y",20,-20,20);
   h_HitCountVsYFpix__6->SetBinContent(4,266);
   h_HitCountVsYFpix__6->SetBinContent(5,272);
   h_HitCountVsYFpix__6->SetBinContent(6,161);
   h_HitCountVsYFpix__6->SetBinContent(7,615);
   h_HitCountVsYFpix__6->SetBinContent(8,403);
   h_HitCountVsYFpix__6->SetBinContent(9,320);
   h_HitCountVsYFpix__6->SetBinContent(10,253);
   h_HitCountVsYFpix__6->SetBinContent(11,302);
   h_HitCountVsYFpix__6->SetBinContent(12,242);
   h_HitCountVsYFpix__6->SetBinContent(13,298);
   h_HitCountVsYFpix__6->SetBinContent(14,583);
   h_HitCountVsYFpix__6->SetBinContent(15,177);
   h_HitCountVsYFpix__6->SetBinContent(16,202);
   h_HitCountVsYFpix__6->SetBinContent(17,271);
   h_HitCountVsYFpix__6->SetEntries(4365);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   h_HitCountVsYFpix__6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   h_HitCountVsYFpix__6->SetLineColor(ci);
   h_HitCountVsYFpix__6->SetLineWidth(2);
   h_HitCountVsYFpix__6->SetMarkerStyle(21);
   h_HitCountVsYFpix__6->SetMarkerSize(1.5);
   h_HitCountVsYFpix__6->GetXaxis()->SetTitle("hit global y");
   h_HitCountVsYFpix__6->GetXaxis()->CenterTitle(true);
   h_HitCountVsYFpix__6->GetXaxis()->SetLabelFont(42);
   h_HitCountVsYFpix__6->GetXaxis()->SetLabelSize(0.05);
   h_HitCountVsYFpix__6->GetXaxis()->SetTitleSize(0.05);
   h_HitCountVsYFpix__6->GetXaxis()->SetTitleOffset(1.08);
   h_HitCountVsYFpix__6->GetXaxis()->SetTitleFont(42);
   h_HitCountVsYFpix__6->GetYaxis()->SetTitle("Hits (#)");
   h_HitCountVsYFpix__6->GetYaxis()->SetLabelFont(42);
   h_HitCountVsYFpix__6->GetYaxis()->SetLabelSize(0.05);
   h_HitCountVsYFpix__6->GetYaxis()->SetTitleSize(0.05);
   h_HitCountVsYFpix__6->GetYaxis()->SetTitleFont(42);
   h_HitCountVsYFpix__6->GetZaxis()->SetLabelFont(42);
   h_HitCountVsYFpix__6->GetZaxis()->SetTitleOffset(1);
   h_HitCountVsYFpix__6->GetZaxis()->SetTitleFont(42);
   h_HitCountVsYFpix__6->Draw("EBAR");
   
   TPaveText *pt = new TPaveText(0.2050611,0.9358451,0.7949389,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Number of FPix hits vs y");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
