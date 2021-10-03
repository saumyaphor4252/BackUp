void h_HitCountVsZFpix()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jul 30 12:01:01 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",596,189,741,738);
   gStyle->SetOptStat(0);
   c->Range(-142.7844,-686.7983,110.8659,4134.666);
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
   h_HitCountVsZFpix__2->SetBinContent(25,1652);
   h_HitCountVsZFpix__2->SetBinContent(26,3077);
   h_HitCountVsZFpix__2->SetBinContent(27,468);
   h_HitCountVsZFpix__2->SetBinContent(29,104);
   h_HitCountVsZFpix__2->SetBinContent(30,2723);
   h_HitCountVsZFpix__2->SetBinContent(31,2936);
   h_HitCountVsZFpix__2->SetBinContent(32,191);
   h_HitCountVsZFpix__2->SetBinContent(33,608);
   h_HitCountVsZFpix__2->SetBinContent(34,3502);
   h_HitCountVsZFpix__2->SetBinContent(35,2641);
   h_HitCountVsZFpix__2->SetBinContent(65,443);
   h_HitCountVsZFpix__2->SetBinContent(66,3457);
   h_HitCountVsZFpix__2->SetBinContent(67,2298);
   h_HitCountVsZFpix__2->SetBinContent(69,953);
   h_HitCountVsZFpix__2->SetBinContent(70,3478);
   h_HitCountVsZFpix__2->SetBinContent(71,1377);
   h_HitCountVsZFpix__2->SetBinContent(74,1134);
   h_HitCountVsZFpix__2->SetBinContent(75,2665);
   h_HitCountVsZFpix__2->SetBinContent(76,774);
   h_HitCountVsZFpix__2->SetEntries(34481);

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
   h_HitCountVsZFpix__2->GetYaxis()->SetTitleOffset(0);
   h_HitCountVsZFpix__2->GetYaxis()->SetTitleFont(42);
   h_HitCountVsZFpix__2->GetZaxis()->SetLabelFont(42);
   h_HitCountVsZFpix__2->GetZaxis()->SetLabelSize(0.035);
   h_HitCountVsZFpix__2->GetZaxis()->SetTitleSize(0.035);
   h_HitCountVsZFpix__2->GetZaxis()->SetTitleFont(42);
   h_HitCountVsZFpix__2->Draw("EBAR");
   
   TPaveText *pt = new TPaveText(-0.08562923,0.9675,0.5,1.0225,"blNDC");
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
