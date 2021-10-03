void TEmplate()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun 24 00:36:15 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",332,57,1019,821);
   c->Range(-1.331737,-0.6351792,8.411976,5.594463);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLeftMargin(0.1366765);
   c->SetRightMargin(0.04228122);
   c->SetFrameBorderMode(0);
   c->SetFrameLineWidth(3);
   c->SetFrameBorderMode(0);
   
   TH1F *h1b__1__1 = new TH1F("h1b__1__1","rate summary",8,0,8);
   h1b__1__1->SetBinContent(1,4.118456);
   h1b__1__1->SetBinContent(2,2.502703);
   h1b__1__1->SetBinContent(3,0.02952582);
   h1b__1__1->SetBinContent(4,0.0889409);
   h1b__1__1->SetBinContent(5,1.211905);
   h1b__1__1->SetBinContent(6,0.3515836);
   h1b__1__1->SetBinContent(7,2.382646);
   h1b__1__1->SetBinContent(8,0.4405129);
   h1b__1__1->SetBarOffset(0.35);
   h1b__1__1->SetBarWidth(0.3);
   h1b__1__1->SetMinimum(0);
   h1b__1__1->SetMaximum(5);
   h1b__1__1->SetEntries(8);
   h1b__1__1->SetStats(0);
   h1b__1__1->SetFillColor(4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h1b__1__1->SetLineColor(ci);
   h1b__1__1->GetXaxis()->SetBinLabel(1,"Event");
   h1b__1__1->GetXaxis()->SetBinLabel(2,"Track");
   h1b__1__1->GetXaxis()->SetBinLabel(3,"FPIX");
   h1b__1__1->GetXaxis()->SetBinLabel(4,"BPIX");
   h1b__1__1->GetXaxis()->SetBinLabel(5,"TIB");
   h1b__1__1->GetXaxis()->SetBinLabel(6,"TID");
   h1b__1__1->GetXaxis()->SetBinLabel(7,"TOB");
   h1b__1__1->GetXaxis()->SetBinLabel(8,"TEC");
   h1b__1__1->GetXaxis()->SetBit(TAxis::kLabelsDown);
   h1b__1__1->GetXaxis()->SetLabelOffset(0.012);
   h1b__1__1->GetXaxis()->SetLabelSize(0.06);
   h1b__1__1->GetXaxis()->SetTitleSize(0.05);
   h1b__1__1->GetYaxis()->SetTitle("Average Rate (Hz)");
   h1b__1__1->GetYaxis()->SetLabelFont(42);
   h1b__1__1->GetYaxis()->SetLabelSize(0.05);
   h1b__1__1->GetYaxis()->SetTitleSize(0.05);
   h1b__1__1->GetYaxis()->SetTitleOffset(0);
   h1b__1__1->GetYaxis()->SetTitleFont(42);
   h1b__1__1->GetZaxis()->SetLabelFont(42);
   h1b__1__1->GetZaxis()->SetLabelSize(0.035);
   h1b__1__1->GetZaxis()->SetTitleSize(0.035);
   h1b__1__1->GetZaxis()->SetTitleFont(42);
   h1b__1__1->Draw("bTEXT");
   
   TPaveText *pt = new TPaveText(0.3913471,0.9189542,0.6509341,0.9751634,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt->Draw();
   TLatex *   tex = new TLatex(2.663473,5.179153,"Rate Summary");
   tex->SetLineWidth(2);
   tex->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
   c->ToggleToolBar();
}
