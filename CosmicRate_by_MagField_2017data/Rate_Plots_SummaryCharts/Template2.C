void Template2()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun 24 00:50:24 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",372,57,856,842);
   c->Range(-1.553285,-0.7217677,8.420438,5.067103);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.1557377);
   c->SetRightMargin(0.04215457);
   c->SetBottomMargin(0.1246819);
   c->SetFrameLineWidth(3);
   c->SetFrameBorderMode(0);
   c->SetFrameLineWidth(3);
   c->SetFrameBorderMode(0);
   
   TH1F *h1b__1__1__3 = new TH1F("h1b__1__1__3","Rate summary",8,0,8);
   h1b__1__1__3->SetBinContent(1,4.118456);
   h1b__1__1__3->SetBinContent(2,2.502703);
   h1b__1__1__3->SetBinContent(3,0.02952582);
   h1b__1__1__3->SetBinContent(4,0.0889409);
   h1b__1__1__3->SetBinContent(5,1.211905);
   h1b__1__1__3->SetBinContent(6,0.3515836);
   h1b__1__1__3->SetBinContent(7,2.382646);
   h1b__1__1__3->SetBinContent(8,0.4405129);
   h1b__1__1__3->SetBarOffset(0.25);
   h1b__1__1__3->SetBarWidth(0.6);
   h1b__1__1__3->SetMinimum(0);
   h1b__1__1__3->SetMaximum(4.5);
   h1b__1__1__3->SetEntries(8);
   h1b__1__1__3->SetStats(0);
   h1b__1__1__3->SetContour(20);
   h1b__1__1__3->SetContourLevel(0,0);
   h1b__1__1__3->SetContourLevel(1,0.25);
   h1b__1__1__3->SetContourLevel(2,0.5);
   h1b__1__1__3->SetContourLevel(3,0.75);
   h1b__1__1__3->SetContourLevel(4,1);
   h1b__1__1__3->SetContourLevel(5,1.25);
   h1b__1__1__3->SetContourLevel(6,1.5);
   h1b__1__1__3->SetContourLevel(7,1.75);
   h1b__1__1__3->SetContourLevel(8,2);
   h1b__1__1__3->SetContourLevel(9,2.25);
   h1b__1__1__3->SetContourLevel(10,2.5);
   h1b__1__1__3->SetContourLevel(11,2.75);
   h1b__1__1__3->SetContourLevel(12,3);
   h1b__1__1__3->SetContourLevel(13,3.25);
   h1b__1__1__3->SetContourLevel(14,3.5);
   h1b__1__1__3->SetContourLevel(15,3.75);
   h1b__1__1__3->SetContourLevel(16,4);
   h1b__1__1__3->SetContourLevel(17,4.25);
   h1b__1__1__3->SetContourLevel(18,4.5);
   h1b__1__1__3->SetContourLevel(19,4.75);
   h1b__1__1__3->SetFillColor(6);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h1b__1__1__3->SetLineColor(ci);
   h1b__1__1__3->SetMarkerStyle(20);
   h1b__1__1__3->GetXaxis()->SetBinLabel(1,"Event");
   h1b__1__1__3->GetXaxis()->SetBinLabel(2,"Track");
   h1b__1__1__3->GetXaxis()->SetBinLabel(3,"FPIX");
   h1b__1__1__3->GetXaxis()->SetBinLabel(4,"BPIX");
   h1b__1__1__3->GetXaxis()->SetBinLabel(5,"TIB");
   h1b__1__1__3->GetXaxis()->SetBinLabel(6,"TID");
   h1b__1__1__3->GetXaxis()->SetBinLabel(7,"TOB");
   h1b__1__1__3->GetXaxis()->SetBinLabel(8,"TEC");
   h1b__1__1__3->GetXaxis()->SetBit(TAxis::kLabelsDown);
   h1b__1__1__3->GetXaxis()->SetLabelFont(42);
   h1b__1__1__3->GetXaxis()->SetLabelOffset(0.012);
   h1b__1__1__3->GetXaxis()->SetLabelSize(0.07);
   h1b__1__1__3->GetXaxis()->SetTitleSize(0.05);
   h1b__1__1__3->GetXaxis()->SetTitleFont(42);
   h1b__1__1__3->GetYaxis()->SetTitle("Average Rate (Hz)");
   h1b__1__1__3->GetYaxis()->SetLabelFont(42);
   h1b__1__1__3->GetYaxis()->SetLabelSize(0.05);
   h1b__1__1__3->GetYaxis()->SetTitleSize(0.05);
   h1b__1__1__3->GetYaxis()->SetTitleOffset(0);
   h1b__1__1__3->GetYaxis()->SetTitleFont(42);
   h1b__1__1__3->GetZaxis()->SetLabelFont(42);
   h1b__1__1__3->GetZaxis()->SetLabelSize(0.035);
   h1b__1__1__3->GetZaxis()->SetTitleSize(0.035);
   h1b__1__1__3->GetZaxis()->SetTitleFont(42);
   h1b__1__1__3->Draw("B");
   
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
      tex = new TLatex(2.359124,4.669394,"Rate Summary");
   tex->SetLineWidth(2);
   tex->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
   c->ToggleToolBar();
}
