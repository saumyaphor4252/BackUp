void h_HitCountVsThetaFpix()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jul 30 12:01:02 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",596,189,741,738);
   gStyle->SetOptStat(0);
   c->Range(-0.6845501,-1591.329,3.373854,9580.125);
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
   h_HitCountVsThetaFpix__9->SetBinContent(2,1944);
   h_HitCountVsThetaFpix__9->SetBinContent(3,5665);
   h_HitCountVsThetaFpix__9->SetBinContent(4,3476);
   h_HitCountVsThetaFpix__9->SetBinContent(5,4682);
   h_HitCountVsThetaFpix__9->SetBinContent(6,812);
   h_HitCountVsThetaFpix__9->SetBinContent(35,3576);
   h_HitCountVsThetaFpix__9->SetBinContent(36,3247);
   h_HitCountVsThetaFpix__9->SetBinContent(37,8161);
   h_HitCountVsThetaFpix__9->SetBinContent(38,2918);
   h_HitCountVsThetaFpix__9->SetEntries(34481);

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
   h_HitCountVsThetaFpix__9->GetYaxis()->SetTitleOffset(0);
   h_HitCountVsThetaFpix__9->GetYaxis()->SetTitleFont(42);
   h_HitCountVsThetaFpix__9->GetZaxis()->SetLabelFont(42);
   h_HitCountVsThetaFpix__9->GetZaxis()->SetLabelSize(0.035);
   h_HitCountVsThetaFpix__9->GetZaxis()->SetTitleSize(0.035);
   h_HitCountVsThetaFpix__9->GetZaxis()->SetTitleFont(42);
   h_HitCountVsThetaFpix__9->Draw("EBAR");
   
   TPaveText *pt = new TPaveText(-0.09374831,0.9675,0.5,1.0225,"blNDC");
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
