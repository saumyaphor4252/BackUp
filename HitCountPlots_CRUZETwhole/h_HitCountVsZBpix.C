void h_HitCountVsZBpix()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jul 21 14:50:35 2021) by ROOT version 6.22/09
   TCanvas *c = new TCanvas("c", "c",0,0,741,738);
   gStyle->SetOptStat(0);
   c->Range(-42.83532,-70.11785,33.25976,422.1238);
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
   
   TH1D *h_HitCountVsZBpix__1 = new TH1D("h_HitCountVsZBpix__1","Number of BPix hits vs z",60,-30,30);
   h_HitCountVsZBpix__1->SetBinContent(7,239);
   h_HitCountVsZBpix__1->SetBinContent(13,270);
   h_HitCountVsZBpix__1->SetBinContent(20,249);
   h_HitCountVsZBpix__1->SetBinContent(27,311);
   h_HitCountVsZBpix__1->SetBinContent(33,20);
   h_HitCountVsZBpix__1->SetBinContent(34,332);
   h_HitCountVsZBpix__1->SetBinContent(40,345);
   h_HitCountVsZBpix__1->SetBinContent(47,255);
   h_HitCountVsZBpix__1->SetBinContent(54,216);
   h_HitCountVsZBpix__1->SetEntries(2237);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   h_HitCountVsZBpix__1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   h_HitCountVsZBpix__1->SetLineColor(ci);
   h_HitCountVsZBpix__1->SetLineWidth(2);
   h_HitCountVsZBpix__1->SetMarkerStyle(21);
   h_HitCountVsZBpix__1->SetMarkerSize(1.5);
   h_HitCountVsZBpix__1->GetXaxis()->SetTitle("hit global z");
   h_HitCountVsZBpix__1->GetXaxis()->CenterTitle(true);
   h_HitCountVsZBpix__1->GetXaxis()->SetLabelFont(42);
   h_HitCountVsZBpix__1->GetXaxis()->SetLabelSize(0.05);
   h_HitCountVsZBpix__1->GetXaxis()->SetTitleSize(0.05);
   h_HitCountVsZBpix__1->GetXaxis()->SetTitleOffset(1.08);
   h_HitCountVsZBpix__1->GetXaxis()->SetTitleFont(42);
   h_HitCountVsZBpix__1->GetYaxis()->SetTitle("Hits (#)");
   h_HitCountVsZBpix__1->GetYaxis()->SetLabelFont(42);
   h_HitCountVsZBpix__1->GetYaxis()->SetLabelSize(0.05);
   h_HitCountVsZBpix__1->GetYaxis()->SetTitleSize(0.05);
   h_HitCountVsZBpix__1->GetYaxis()->SetTitleFont(42);
   h_HitCountVsZBpix__1->GetZaxis()->SetLabelFont(42);
   h_HitCountVsZBpix__1->GetZaxis()->SetTitleOffset(1);
   h_HitCountVsZBpix__1->GetZaxis()->SetTitleFont(42);
   h_HitCountVsZBpix__1->Draw("EBAR");
   
   TPaveText *pt = new TPaveText(0.2037042,0.94,0.7962958,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Number of BPix hits vs z");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
