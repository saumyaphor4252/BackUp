void h_HitCountVsYBpix()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jul 21 14:50:35 2021) by ROOT version 6.22/09
   TCanvas *c = new TCanvas("c", "c",1,1,741,714);
   gStyle->SetOptStat(0);
   c->Range(-28.55688,-46.48497,22.17317,279.849);
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
   h_HitCountVsYBpix__5->SetBinContent(2,30);
   h_HitCountVsYBpix__5->SetBinContent(3,133);
   h_HitCountVsYBpix__5->SetBinContent(4,53);
   h_HitCountVsYBpix__5->SetBinContent(5,131);
   h_HitCountVsYBpix__5->SetBinContent(6,115);
   h_HitCountVsYBpix__5->SetBinContent(7,220);
   h_HitCountVsYBpix__5->SetBinContent(8,123);
   h_HitCountVsYBpix__5->SetBinContent(9,226);
   h_HitCountVsYBpix__5->SetBinContent(10,82);
   h_HitCountVsYBpix__5->SetBinContent(11,88);
   h_HitCountVsYBpix__5->SetBinContent(12,199);
   h_HitCountVsYBpix__5->SetBinContent(13,162);
   h_HitCountVsYBpix__5->SetBinContent(14,224);
   h_HitCountVsYBpix__5->SetBinContent(15,97);
   h_HitCountVsYBpix__5->SetBinContent(16,141);
   h_HitCountVsYBpix__5->SetBinContent(17,53);
   h_HitCountVsYBpix__5->SetBinContent(18,145);
   h_HitCountVsYBpix__5->SetBinContent(19,15);
   h_HitCountVsYBpix__5->SetEntries(2237);

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
   h_HitCountVsYBpix__5->GetYaxis()->SetTitleFont(42);
   h_HitCountVsYBpix__5->GetZaxis()->SetLabelFont(42);
   h_HitCountVsYBpix__5->GetZaxis()->SetTitleOffset(1);
   h_HitCountVsYBpix__5->GetZaxis()->SetTitleFont(42);
   h_HitCountVsYBpix__5->Draw("EBAR");
   
   TPaveText *pt = new TPaveText(0.2023474,0.9358451,0.7976526,0.995,"blNDC");
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
