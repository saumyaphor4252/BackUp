void SummaryChart_TrackRate_TEC_minus()
{
//=========Macro generated from canvas: canvas/canvas
//=========  (Sat Oct  2 23:52:17 2021) by ROOT version6.10/04
   TCanvas *canvas = new TCanvas("canvas", "canvas",419,80,986,870);
   gStyle->SetOptStat(0);
   canvas->Range(-1.881491,-0.176313,9.910786,1.586817);
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
   
   TH1F *hb_TECm__4 = new TH1F("hb_TECm__4","Rate Summary TEC-",9,0,9);
   hb_TECm__4->SetBinContent(1,0.1386283);
   hb_TECm__4->SetBinContent(2,0.1326052);
   hb_TECm__4->SetBinContent(3,0.8045565);
   hb_TECm__4->SetBinContent(4,0.7855117);
   hb_TECm__4->SetBinContent(5,0.08075366);
   hb_TECm__4->SetBinContent(6,0.06345713);
   hb_TECm__4->SetBinContent(7,1.377479);
   hb_TECm__4->SetBinContent(8,0.4356486);
   hb_TECm__4->SetBinContent(9,1.017514);
   hb_TECm__4->SetBarOffset(0.25);
   hb_TECm__4->SetBarWidth(0.6);
   hb_TECm__4->SetEntries(9);
   hb_TECm__4->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   hb_TECm__4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   hb_TECm__4->SetLineColor(ci);
   hb_TECm__4->GetXaxis()->SetBinLabel(1,"TEC_1-");
   hb_TECm__4->GetXaxis()->SetBinLabel(2,"TEC_2-");
   hb_TECm__4->GetXaxis()->SetBinLabel(3,"TEC_3-");
   hb_TECm__4->GetXaxis()->SetBinLabel(4,"TEC_4-");
   hb_TECm__4->GetXaxis()->SetBinLabel(5,"TEC_5-");
   hb_TECm__4->GetXaxis()->SetBinLabel(6,"TEC_6-");
   hb_TECm__4->GetXaxis()->SetBinLabel(7,"TEC_7-");
   hb_TECm__4->GetXaxis()->SetBinLabel(8,"TEC_8-");
   hb_TECm__4->GetXaxis()->SetBinLabel(9,"TEC_9-");
   hb_TECm__4->GetXaxis()->SetLabelFont(42);
   hb_TECm__4->GetXaxis()->SetLabelOffset(0.012);
   hb_TECm__4->GetXaxis()->SetLabelSize(0.06);
   hb_TECm__4->GetXaxis()->SetTitleSize(0.05);
   hb_TECm__4->GetXaxis()->SetTitleFont(42);
   hb_TECm__4->GetYaxis()->SetTitle("Average Track Rate (Hz)");
   hb_TECm__4->GetYaxis()->SetLabelFont(42);
   hb_TECm__4->GetYaxis()->SetLabelSize(0.05);
   hb_TECm__4->GetYaxis()->SetTitleSize(0.05);
   hb_TECm__4->GetYaxis()->SetTitleOffset(0);
   hb_TECm__4->GetYaxis()->SetTitleFont(42);
   hb_TECm__4->GetZaxis()->SetLabelFont(42);
   hb_TECm__4->GetZaxis()->SetLabelSize(0.035);
   hb_TECm__4->GetZaxis()->SetTitleSize(0.035);
   hb_TECm__4->GetZaxis()->SetTitleFont(42);
   hb_TECm__4->Draw("bTEXT");
   
   TPaveText *pt = new TPaveText(0.2806504,0.9350713,0.7193496,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Rate Summary TEC-");
   pt->Draw();
   canvas->Modified();
   canvas->cd();
   canvas->SetSelected(canvas);
}
