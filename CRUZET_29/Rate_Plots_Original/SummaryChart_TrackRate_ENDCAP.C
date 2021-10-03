void SummaryChart_TrackRate_ENDCAP()
{
//=========Macro generated from canvas: canvas/canvas
//=========  (Fri Jul 30 11:10:18 2021) by ROOT version6.10/04
   TCanvas *canvas = new TCanvas("canvas", "canvas",419,80,986,870);
   gStyle->SetOptStat(0);
   canvas->Range(-2.508654,0.03530719,13.21438,0.3693857);
   canvas->SetFillColor(0);
   canvas->SetBorderMode(0);
   canvas->SetBorderSize(2);
   canvas->SetGridx();
   canvas->SetGridy();
   canvas->SetTickx(1);
   canvas->SetTicky(1);
   canvas->SetLeftMargin(0.1595528);
   canvas->SetRightMargin(0.07723577);
   canvas->SetTopMargin(0.07966706);
   canvas->SetFrameLineWidth(3);
   canvas->SetFrameBorderMode(0);
   canvas->SetFrameLineWidth(3);
   canvas->SetFrameBorderMode(0);
   
   TH1F *hb_ENDCAP__6 = new TH1F("hb_ENDCAP__6","Rate Summary ENDCAP",12,0,12);
   hb_ENDCAP__6->SetBinContent(1,0.1302299);
   hb_ENDCAP__6->SetBinContent(2,0.1398788);
   hb_ENDCAP__6->SetBinContent(3,0.1432616);
   hb_ENDCAP__6->SetBinContent(4,0.3297204);
   hb_ENDCAP__6->SetBinContent(5,0.2918502);
   hb_ENDCAP__6->SetBinContent(6,0.2608705);
   hb_ENDCAP__6->SetBinContent(7,0.221525);
   hb_ENDCAP__6->SetBinContent(8,0.1983461);
   hb_ENDCAP__6->SetBinContent(9,0.1661315);
   hb_ENDCAP__6->SetBinContent(10,0.1306228);
   hb_ENDCAP__6->SetBinContent(11,0.1048386);
   hb_ENDCAP__6->SetBinContent(12,0.08114387);
   hb_ENDCAP__6->SetBarOffset(0.25);
   hb_ENDCAP__6->SetBarWidth(0.6);
   hb_ENDCAP__6->SetEntries(12);
   hb_ENDCAP__6->SetStats(0);
   hb_ENDCAP__6->SetFillColor(6);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hb_ENDCAP__6->SetLineColor(ci);
   hb_ENDCAP__6->GetXaxis()->SetBinLabel(1,"TID_1");
   hb_ENDCAP__6->GetXaxis()->SetBinLabel(2,"TID_2");
   hb_ENDCAP__6->GetXaxis()->SetBinLabel(3,"TID_3");
   hb_ENDCAP__6->GetXaxis()->SetBinLabel(4,"TEC_1");
   hb_ENDCAP__6->GetXaxis()->SetBinLabel(5,"TEC_2");
   hb_ENDCAP__6->GetXaxis()->SetBinLabel(6,"TEC_3");
   hb_ENDCAP__6->GetXaxis()->SetBinLabel(7,"TEC_4");
   hb_ENDCAP__6->GetXaxis()->SetBinLabel(8,"TEC_5");
   hb_ENDCAP__6->GetXaxis()->SetBinLabel(9,"TEC_6");
   hb_ENDCAP__6->GetXaxis()->SetBinLabel(10,"TEC_7");
   hb_ENDCAP__6->GetXaxis()->SetBinLabel(11,"TEC_8");
   hb_ENDCAP__6->GetXaxis()->SetBinLabel(12,"TEC_9");
   hb_ENDCAP__6->GetXaxis()->SetLabelOffset(0.012);
   hb_ENDCAP__6->GetXaxis()->SetLabelSize(0.05);
   hb_ENDCAP__6->GetXaxis()->SetTitleSize(0.05);
   hb_ENDCAP__6->GetXaxis()->SetTitleFont(42);
   hb_ENDCAP__6->GetYaxis()->SetTitle("Average Track Rate (Hz)");
   hb_ENDCAP__6->GetYaxis()->SetLabelFont(42);
   hb_ENDCAP__6->GetYaxis()->SetLabelSize(0.05);
   hb_ENDCAP__6->GetYaxis()->SetTitleSize(0.05);
   hb_ENDCAP__6->GetYaxis()->SetTitleOffset(0);
   hb_ENDCAP__6->GetYaxis()->SetTitleFont(42);
   hb_ENDCAP__6->GetZaxis()->SetLabelFont(42);
   hb_ENDCAP__6->GetZaxis()->SetLabelSize(0.035);
   hb_ENDCAP__6->GetZaxis()->SetTitleSize(0.035);
   hb_ENDCAP__6->GetZaxis()->SetTitleFont(42);
   hb_ENDCAP__6->Draw("bTEXT");
   
   TPaveText *pt = new TPaveText(0.2389837,0.9350713,0.7610163,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Rate Summary ENDCAP");
   pt->Draw();
   canvas->Modified();
   canvas->cd();
   canvas->SetSelected(canvas);
}
