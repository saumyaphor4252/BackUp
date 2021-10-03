void Summary_Chart()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 23 19:46:58 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",117,107,800,600);
   c->Range(-1,-0.4901808,9,4.411627);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *h1b__1 = new TH1F("h1b__1","rate summary",8,0,8);
   h1b__1->SetBinContent(1,3.734711);
   h1b__1->SetBinContent(2,2.301028);
   h1b__1->SetBinContent(3,0.01269932);
   h1b__1->SetBinContent(4,0.001992569);
   h1b__1->SetBinContent(5,1.077143);
   h1b__1->SetBinContent(6,0.3533827);
   h1b__1->SetBinContent(7,2.172286);
   h1b__1->SetBinContent(8,0.4860085);
   h1b__1->SetBarOffset(0.35);
   h1b__1->SetBarWidth(0.3);
   h1b__1->SetEntries(8);
   h1b__1->SetStats(0);
   h1b__1->SetFillColor(4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h1b__1->SetLineColor(ci);
   h1b__1->GetXaxis()->SetBinLabel(1,"Event");
   h1b__1->GetXaxis()->SetBinLabel(2,"Track");
   h1b__1->GetXaxis()->SetBinLabel(3,"FPIX");
   h1b__1->GetXaxis()->SetBinLabel(4,"BPIX");
   h1b__1->GetXaxis()->SetBinLabel(5,"TIB");
   h1b__1->GetXaxis()->SetBinLabel(6,"TID");
   h1b__1->GetXaxis()->SetBinLabel(7,"TOB");
   h1b__1->GetXaxis()->SetBinLabel(8,"TEC");
   h1b__1->GetXaxis()->SetBit(TAxis::kLabelsDown);
   h1b__1->GetXaxis()->SetLabelFont(42);
   h1b__1->GetXaxis()->SetTitleSize(0.035);
   h1b__1->GetXaxis()->SetTitleFont(42);
   h1b__1->GetYaxis()->SetTitle("Average Rate (Hz)");
   h1b__1->GetYaxis()->SetLabelFont(42);
   h1b__1->GetYaxis()->SetLabelSize(0.035);
   h1b__1->GetYaxis()->SetTitleSize(0.035);
   h1b__1->GetYaxis()->SetTitleOffset(0);
   h1b__1->GetYaxis()->SetTitleFont(42);
   h1b__1->GetZaxis()->SetLabelFont(42);
   h1b__1->GetZaxis()->SetLabelSize(0.035);
   h1b__1->GetZaxis()->SetTitleSize(0.035);
   h1b__1->GetZaxis()->SetTitleFont(42);
   h1b__1->Draw("bTEXT");
   
   TPaveText *pt = new TPaveText(0.3709524,0.9382574,0.6290476,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("rate summary");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
