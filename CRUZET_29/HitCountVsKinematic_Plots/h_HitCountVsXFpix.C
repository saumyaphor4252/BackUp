void h_HitCountVsXFpix()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jul 30 12:01:01 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",596,189,741,738);
   gStyle->SetOptStat(0);
   c->Range(-28.55688,-1001.422,22.17317,6028.766);
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
   h_HitCountVsXFpix__4->SetBinContent(4,1508);
   h_HitCountVsXFpix__4->SetBinContent(5,1434);
   h_HitCountVsXFpix__4->SetBinContent(6,1581);
   h_HitCountVsXFpix__4->SetBinContent(7,4707);
   h_HitCountVsXFpix__4->SetBinContent(8,2836);
   h_HitCountVsXFpix__4->SetBinContent(9,2329);
   h_HitCountVsXFpix__4->SetBinContent(10,2930);
   h_HitCountVsXFpix__4->SetBinContent(11,2670);
   h_HitCountVsXFpix__4->SetBinContent(12,2827);
   h_HitCountVsXFpix__4->SetBinContent(13,2427);
   h_HitCountVsXFpix__4->SetBinContent(14,5121);
   h_HitCountVsXFpix__4->SetBinContent(15,1346);
   h_HitCountVsXFpix__4->SetBinContent(16,1401);
   h_HitCountVsXFpix__4->SetBinContent(17,1364);
   h_HitCountVsXFpix__4->SetEntries(34481);

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
   h_HitCountVsXFpix__4->GetYaxis()->SetTitleOffset(0);
   h_HitCountVsXFpix__4->GetYaxis()->SetTitleFont(42);
   h_HitCountVsXFpix__4->GetZaxis()->SetLabelFont(42);
   h_HitCountVsXFpix__4->GetZaxis()->SetLabelSize(0.035);
   h_HitCountVsXFpix__4->GetZaxis()->SetTitleSize(0.035);
   h_HitCountVsXFpix__4->GetZaxis()->SetTitleFont(42);
   h_HitCountVsXFpix__4->Draw("EBAR");
   
   TPaveText *pt = new TPaveText(-0.08833559,0.9675,0.5,1.0225,"blNDC");
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
