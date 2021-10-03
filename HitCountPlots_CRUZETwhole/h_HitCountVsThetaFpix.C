void h_HitCountVsThetaFpix()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jul 21 14:50:36 2021) by ROOT version 6.22/09
   TCanvas *c = new TCanvas("c", "c",1,1,741,714);
   gStyle->SetOptStat(0);
   c->Range(-0.6845501,-186.2185,3.373854,1121.073);
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
   
   TH1D *h_HitCountVsThetaFpix__9 = new TH1D("h_HitCountVsThetaFpix__9","Number of FPix hits vs #theta",40,0,3.2);
   h_HitCountVsThetaFpix__9->SetBinContent(2,213);
   h_HitCountVsThetaFpix__9->SetBinContent(3,737);
   h_HitCountVsThetaFpix__9->SetBinContent(4,453);
   h_HitCountVsThetaFpix__9->SetBinContent(5,610);
   h_HitCountVsThetaFpix__9->SetBinContent(6,108);
   h_HitCountVsThetaFpix__9->SetBinContent(35,440);
   h_HitCountVsThetaFpix__9->SetBinContent(36,492);
   h_HitCountVsThetaFpix__9->SetBinContent(37,935);
   h_HitCountVsThetaFpix__9->SetBinContent(38,377);
   h_HitCountVsThetaFpix__9->SetEntries(4365);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   h_HitCountVsThetaFpix__9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   h_HitCountVsThetaFpix__9->SetLineColor(ci);
   h_HitCountVsThetaFpix__9->SetLineWidth(2);
   h_HitCountVsThetaFpix__9->SetMarkerStyle(21);
   h_HitCountVsThetaFpix__9->SetMarkerSize(1.5);
   h_HitCountVsThetaFpix__9->GetXaxis()->SetTitle("hit global #theta");
   h_HitCountVsThetaFpix__9->GetXaxis()->CenterTitle(true);
   h_HitCountVsThetaFpix__9->GetXaxis()->SetLabelFont(42);
   h_HitCountVsThetaFpix__9->GetXaxis()->SetLabelSize(0.05);
   h_HitCountVsThetaFpix__9->GetXaxis()->SetTitleSize(0.05);
   h_HitCountVsThetaFpix__9->GetXaxis()->SetTitleOffset(1.08);
   h_HitCountVsThetaFpix__9->GetXaxis()->SetTitleFont(42);
   h_HitCountVsThetaFpix__9->GetYaxis()->SetTitle("Hits (#)");
   h_HitCountVsThetaFpix__9->GetYaxis()->SetLabelFont(42);
   h_HitCountVsThetaFpix__9->GetYaxis()->SetLabelSize(0.05);
   h_HitCountVsThetaFpix__9->GetYaxis()->SetTitleSize(0.05);
   h_HitCountVsThetaFpix__9->GetYaxis()->SetTitleFont(42);
   h_HitCountVsThetaFpix__9->GetZaxis()->SetLabelFont(42);
   h_HitCountVsThetaFpix__9->GetZaxis()->SetTitleOffset(1);
   h_HitCountVsThetaFpix__9->GetZaxis()->SetTitleFont(42);
   h_HitCountVsThetaFpix__9->Draw("EBAR");
   
   TPaveText *pt = new TPaveText(0.2023474,0.94,0.7976526,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Number of FPix hits vs #theta");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
