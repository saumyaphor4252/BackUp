void SummaryChart_HitRate_BPIX()
{
//=========Macro generated from canvas: canvas/canvas
//=========  (Mon Jun 28 19:36:19 2021) by ROOT version6.10/04
   TCanvas *canvas = new TCanvas("canvas", "canvas",324,84,953,866);
   gStyle->SetOptStat(0);
   canvas->Range(-1.225634,-0.05043108,6.392523,0.492866);
   canvas->SetFillColor(0);
   canvas->SetBorderMode(0);
   canvas->SetBorderSize(2);
   canvas->SetGridx();
   canvas->SetGridy();
   canvas->SetTickx(1);
   canvas->SetTicky(1);
   canvas->SetLeftMargin(0.1608833);
   canvas->SetRightMargin(0.05152471);
   canvas->SetFrameLineWidth(3);
   canvas->SetFrameBorderMode(0);
   canvas->SetFrameLineWidth(3);
   canvas->SetFrameBorderMode(0);
   
   TH1F *hb_BPIX__1 = new TH1F("hb_BPIX__1","Rate Summary BPIX",6,0,6);
   hb_BPIX__1->SetBinContent(1,0.4178392);
   hb_BPIX__1->SetBinContent(2,0.3441001);
   hb_BPIX__1->SetBinContent(3,0.02361009);
   hb_BPIX__1->SetBinContent(4,0.06097083);
   hb_BPIX__1->SetBinContent(5,0.1034021);
   hb_BPIX__1->SetBinContent(6,0.1561171);
   hb_BPIX__1->SetBarOffset(0.25);
   hb_BPIX__1->SetBarWidth(0.6);
   hb_BPIX__1->SetEntries(6);
   hb_BPIX__1->SetStats(0);
   hb_BPIX__1->SetFillColor(6);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hb_BPIX__1->SetLineColor(ci);
   hb_BPIX__1->GetXaxis()->SetBinLabel(1,"PIXEL");
   hb_BPIX__1->GetXaxis()->SetBinLabel(2,"BPIX");
   hb_BPIX__1->GetXaxis()->SetBinLabel(3,"BPIX_1");
   hb_BPIX__1->GetXaxis()->SetBinLabel(4,"BPIX_2");
   hb_BPIX__1->GetXaxis()->SetBinLabel(5,"BPIX_3");
   hb_BPIX__1->GetXaxis()->SetBinLabel(6,"BPIX_4");
   hb_BPIX__1->GetXaxis()->SetLabelFont(42);
   hb_BPIX__1->GetXaxis()->SetLabelOffset(0.012);
   hb_BPIX__1->GetXaxis()->SetLabelSize(0.06);
   hb_BPIX__1->GetXaxis()->SetTitleSize(0.05);
   hb_BPIX__1->GetXaxis()->SetTitleFont(42);
   hb_BPIX__1->GetYaxis()->SetTitle("Average Rate (Hz)");
   hb_BPIX__1->GetYaxis()->SetLabelFont(42);
   hb_BPIX__1->GetYaxis()->SetLabelSize(0.05);
   hb_BPIX__1->GetYaxis()->SetTitleSize(0.05);
   hb_BPIX__1->GetYaxis()->SetTitleOffset(0);
   hb_BPIX__1->GetYaxis()->SetTitleFont(42);
   hb_BPIX__1->GetZaxis()->SetLabelFont(42);
   hb_BPIX__1->GetZaxis()->SetLabelSize(0.035);
   hb_BPIX__1->GetZaxis()->SetTitleSize(0.035);
   hb_BPIX__1->GetZaxis()->SetTitleFont(42);
   hb_BPIX__1->Draw("bTEXT");
   
   TPaveText *pt = new TPaveText(0.2728601,0.934785,0.7271399,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Rate Summary BPIX");
   pt->Draw();
   canvas->Modified();
   canvas->cd();
   canvas->SetSelected(canvas);
}
