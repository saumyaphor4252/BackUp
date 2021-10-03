void SummaryChart()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun 24 13:38:04 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",372,87,856,842);
   c->Range(-1.553285,-0.6510229,8.420438,4.570448);
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
   
   TH1F *h1b__1 = new TH1F("h1b__1","Rate Summary",8,0,8);
   h1b__1->SetBinContent(1,3.855525);
   h1b__1->SetBinContent(2,2.519107);
   h1b__1->SetBinContent(3,0.03488636);
   h1b__1->SetBinContent(4,0.09112617);
   h1b__1->SetBinContent(5,1.139303);
   h1b__1->SetBinContent(6,0.4294428);
   h1b__1->SetBinContent(7,2.377586);
   h1b__1->SetBinContent(8,0.5507789);
   h1b__1->SetBarOffset(0.25);
   h1b__1->SetBarWidth(0.6);
   h1b__1->SetEntries(8);
   h1b__1->SetStats(0);
   h1b__1->SetFillColor(6);

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
   h1b__1->GetXaxis()->SetLabelFont(42);
   h1b__1->GetXaxis()->SetLabelOffset(0.012);
   h1b__1->GetXaxis()->SetLabelSize(0.07);
   h1b__1->GetXaxis()->SetTitleSize(0.05);
   h1b__1->GetXaxis()->SetTitleFont(42);
   h1b__1->GetYaxis()->SetTitle("Average Rate (Hz)");
   h1b__1->GetYaxis()->SetLabelFont(42);
   h1b__1->GetYaxis()->SetLabelSize(0.05);
   h1b__1->GetYaxis()->SetTitleSize(0.05);
   h1b__1->GetYaxis()->SetTitleOffset(0);
   h1b__1->GetYaxis()->SetTitleFont(42);
   h1b__1->GetZaxis()->SetLabelFont(42);
   h1b__1->GetZaxis()->SetLabelSize(0.035);
   h1b__1->GetZaxis()->SetTitleSize(0.035);
   h1b__1->GetZaxis()->SetTitleFont(42);
   h1b__1->Draw("bTEXT");
   
   TPaveText *pt = new TPaveText(0.3178689,0.9330074,0.6821311,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Rate Summary");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
