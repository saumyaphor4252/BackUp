void SummaryChart_TrackRate_TID()
{
//=========Macro generated from canvas: canvas/canvas
//=========  (Fri Jul 30 11:10:18 2021) by ROOT version6.10/04
   TCanvas *canvas = new TCanvas("canvas", "canvas",419,80,986,870);
   gStyle->SetOptStat(0);
   canvas->Range(-1.881491,0.02689667,9.910786,0.1589391);
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
   
   TH1F *hb_TID__5 = new TH1F("hb_TID__5","Rate Summary TID",9,0,9);
   hb_TID__5->SetBinContent(1,0.1302299);
   hb_TID__5->SetBinContent(2,0.0670706);
   hb_TID__5->SetBinContent(3,0.06588573);
   hb_TID__5->SetBinContent(4,0.1398788);
   hb_TID__5->SetBinContent(5,0.1248931);
   hb_TID__5->SetBinContent(6,0.08730762);
   hb_TID__5->SetBinContent(7,0.1432616);
   hb_TID__5->SetBinContent(8,0.05268373);
   hb_TID__5->SetBinContent(9,0.04501333);
   hb_TID__5->SetBarOffset(0.25);
   hb_TID__5->SetBarWidth(0.6);
   hb_TID__5->SetEntries(9);
   hb_TID__5->SetStats(0);
   hb_TID__5->SetFillColor(6);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hb_TID__5->SetLineColor(ci);
   hb_TID__5->GetXaxis()->SetBinLabel(1,"TID_1");
   hb_TID__5->GetXaxis()->SetBinLabel(2,"TID_1+");
   hb_TID__5->GetXaxis()->SetBinLabel(3,"TID_1-");
   hb_TID__5->GetXaxis()->SetBinLabel(4,"TID_2");
   hb_TID__5->GetXaxis()->SetBinLabel(5,"TID_2+");
   hb_TID__5->GetXaxis()->SetBinLabel(6,"TID_2-");
   hb_TID__5->GetXaxis()->SetBinLabel(7,"TID_3");
   hb_TID__5->GetXaxis()->SetBinLabel(8,"TID_3+");
   hb_TID__5->GetXaxis()->SetBinLabel(9,"TID_3-");
   hb_TID__5->GetXaxis()->SetLabelFont(42);
   hb_TID__5->GetXaxis()->SetLabelOffset(0.012);
   hb_TID__5->GetXaxis()->SetLabelSize(0.06);
   hb_TID__5->GetXaxis()->SetTitleSize(0.05);
   hb_TID__5->GetXaxis()->SetTitleFont(42);
   hb_TID__5->GetYaxis()->SetTitle("Average Track Rate (Hz)");
   hb_TID__5->GetYaxis()->SetLabelFont(42);
   hb_TID__5->GetYaxis()->SetLabelSize(0.05);
   hb_TID__5->GetYaxis()->SetTitleSize(0.05);
   hb_TID__5->GetYaxis()->SetTitleOffset(0);
   hb_TID__5->GetYaxis()->SetTitleFont(42);
   hb_TID__5->GetZaxis()->SetLabelFont(42);
   hb_TID__5->GetZaxis()->SetLabelSize(0.035);
   hb_TID__5->GetZaxis()->SetTitleSize(0.035);
   hb_TID__5->GetZaxis()->SetTitleFont(42);
   hb_TID__5->Draw("bTEXT");
   
   TPaveText *pt = new TPaveText(0.2964024,0.9350713,0.7035976,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Rate Summary TID");
   pt->Draw();
   canvas->Modified();
   canvas->cd();
   canvas->SetSelected(canvas);
}
