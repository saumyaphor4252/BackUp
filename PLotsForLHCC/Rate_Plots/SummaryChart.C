void SummaryChart()
{
//=========Macro generated from canvas: can/can
//=========  (Wed Aug 25 13:05:51 2021) by ROOT version6.10/04
   TCanvas *can = new TCanvas("can", "can",324,84,953,866);
   gStyle->SetOptStat(0);
   can->Range(-1.634179,-0.4957538,8.523364,4.461784);
   can->SetFillColor(0);
   can->SetBorderMode(0);
   can->SetBorderSize(2);
   can->SetGridx();
   can->SetGridy();
   can->SetTickx(1);
   can->SetTicky(1);
   can->SetLeftMargin(0.1608833);
   can->SetRightMargin(0.05152471);
   can->SetFrameLineWidth(3);
   can->SetFrameBorderMode(0);
   can->SetFrameLineWidth(3);
   can->SetFrameBorderMode(0);
   
   TH1F *h1b__2 = new TH1F("h1b__2","Track Rate Summary",8,0,8);
   h1b__2->SetBinContent(1,3.777172);
   h1b__2->SetBinContent(2,2.315387);
   h1b__2->SetBinContent(3,0.04451673);
   h1b__2->SetBinContent(4,1.09649);
   h1b__2->SetBinContent(5,1.023905);
   h1b__2->SetBinContent(6,0.413511);
   h1b__2->SetBinContent(7,2.176016);
   h1b__2->SetBinContent(8,0.5491959);
   h1b__2->SetBarOffset(0.25);
   h1b__2->SetBarWidth(0.6);
   h1b__2->SetEntries(8);
   h1b__2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   h1b__2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   h1b__2->SetLineColor(ci);
   h1b__2->GetXaxis()->SetBinLabel(1,"Event");
   h1b__2->GetXaxis()->SetBinLabel(2,"Track");
   h1b__2->GetXaxis()->SetBinLabel(3,"FPIX");
   h1b__2->GetXaxis()->SetBinLabel(4,"BPIX");
   h1b__2->GetXaxis()->SetBinLabel(5,"TIB");
   h1b__2->GetXaxis()->SetBinLabel(6,"TID");
   h1b__2->GetXaxis()->SetBinLabel(7,"TOB");
   h1b__2->GetXaxis()->SetBinLabel(8,"TEC");
   h1b__2->GetXaxis()->SetBit(TAxis::kLabelsDown);
   h1b__2->GetXaxis()->SetLabelFont(42);
   h1b__2->GetXaxis()->SetLabelOffset(0.012);
   h1b__2->GetXaxis()->SetLabelSize(0.06);
   h1b__2->GetXaxis()->SetTitleSize(0.05);
   h1b__2->GetXaxis()->SetTitleFont(42);
   h1b__2->GetYaxis()->SetTitle("Average Track Rate (Hz)");
   h1b__2->GetYaxis()->SetLabelFont(42);
   h1b__2->GetYaxis()->SetLabelSize(0.05);
   h1b__2->GetYaxis()->SetTitleSize(0.05);
   h1b__2->GetYaxis()->SetTitleOffset(0);
   h1b__2->GetYaxis()->SetTitleFont(42);
   h1b__2->GetZaxis()->SetLabelFont(42);
   h1b__2->GetZaxis()->SetLabelSize(0.035);
   h1b__2->GetZaxis()->SetTitleSize(0.035);
   h1b__2->GetZaxis()->SetTitleFont(42);
   h1b__2->Draw("bTEXT");
   
   TPaveText *pt = new TPaveText(0.2649737,0.934785,0.7350263,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Track Rate Summary");
   pt->Draw();
   can->Modified();
   can->cd();
   can->SetSelected(can);
}
