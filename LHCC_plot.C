void LHCC_plot()
{
//=========Macro generated from canvas: Canvas0/Canvas0
//=========  (Wed Aug 25 14:58:14 2021) by ROOT version6.10/04
   TCanvas *Canvas0 = new TCanvas("Canvas0", "Canvas0",505,188,677,679);
   gStyle->SetOptStat(0);
   Canvas0->Range(-1.417721,-0.5602767,8.347197,4.980237);
   Canvas0->SetFillColor(0);
   Canvas0->SetBorderMode(0);
   Canvas0->SetBorderSize(2);
   Canvas0->SetGridx();
   Canvas0->SetGridy();
   Canvas0->SetTickx(1);
   Canvas0->SetTicky(1);
   Canvas0->SetLeftMargin(0.1451852);
   Canvas0->SetRightMargin(0.03555556);
   Canvas0->SetTopMargin(0.08667737);
   Canvas0->SetFrameLineWidth(2);
   Canvas0->SetFrameBorderMode(0);
   Canvas0->SetFrameLineWidth(2);
   Canvas0->SetFrameBorderMode(0);
   
   TH1F *h1b__1 = new TH1F("h1b__1","rate summary",8,0,8);
   h1b__1->SetBinContent(1,4.03);
   h1b__1->SetBinContent(2,2.32);
   h1b__1->SetBinContent(3,0.11);
   h1b__1->SetBinContent(4,0.04);
   h1b__1->SetBinContent(5,1.11);
   h1b__1->SetBinContent(6,0.35);
   h1b__1->SetBinContent(7,2.21);
   h1b__1->SetBinContent(8,0.46);
   h1b__1->SetBarOffset(0.2);
   h1b__1->SetBarWidth(0.3);
   h1b__1->SetMinimum(0);
   h1b__1->SetMaximum(4.5);
   h1b__1->SetEntries(8);
   h1b__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3113ba");
   h1b__1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   h1b__1->SetLineColor(ci);

   ci = TColor::GetColor("#3113ba");
   h1b__1->SetMarkerColor(ci);
   h1b__1->SetMarkerSize(1.5);
   h1b__1->GetXaxis()->SetBinLabel(1,"Event");
   h1b__1->GetXaxis()->SetBinLabel(2,"Track");
   h1b__1->GetXaxis()->SetBinLabel(3,"BPIX");
   h1b__1->GetXaxis()->SetBinLabel(4,"FPIX");
   h1b__1->GetXaxis()->SetBinLabel(5,"TIB");
   h1b__1->GetXaxis()->SetBinLabel(6,"TID");
   h1b__1->GetXaxis()->SetBinLabel(7,"TOB");
   h1b__1->GetXaxis()->SetBinLabel(8,"TEC");
   h1b__1->GetXaxis()->SetBit(TAxis::kLabelsDown);
   h1b__1->GetXaxis()->SetLabelOffset(0.012);
   h1b__1->GetXaxis()->SetLabelSize(0.06);
   h1b__1->GetXaxis()->SetTitleOffset(1.06);
   h1b__1->GetXaxis()->SetTitleFont(42);
   h1b__1->GetYaxis()->SetTitle("Average Track Rate (Hz)");
   h1b__1->GetYaxis()->SetLabelFont(42);
   h1b__1->GetYaxis()->SetLabelSize(0.05);
   h1b__1->GetYaxis()->SetTitleSize(0.05);
   h1b__1->GetYaxis()->SetTitleOffset(0);
   h1b__1->GetYaxis()->SetTitleFont(42);
   h1b__1->GetZaxis()->SetLabelFont(42);
   h1b__1->GetZaxis()->SetLabelSize(0.035);
   h1b__1->GetZaxis()->SetTitleSize(0.035);
   h1b__1->GetZaxis()->SetTitleFont(42);
   h1b__1->Draw("bar  TEXT");
   
   TH1F *h2b__2 = new TH1F("h2b__2","rate summary",8,0,8);
   h2b__2->SetBinContent(1,4.02);
   h2b__2->SetBinContent(2,2.28);
   h2b__2->SetBinContent(3,0.13);
   h2b__2->SetBinContent(4,0.04);
   h2b__2->SetBinContent(5,1.06);
   h2b__2->SetBinContent(6,0.29);
   h2b__2->SetBinContent(7,2.18);
   h2b__2->SetBinContent(8,0.35);
   h2b__2->SetBarOffset(0.5);
   h2b__2->SetBarWidth(0.3);
   h2b__2->SetEntries(8);
   h2b__2->SetStats(0);

   ci = TColor::GetColor("#de0b1d");
   h2b__2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   h2b__2->SetLineColor(ci);

   ci = TColor::GetColor("#de0b1d");
   h2b__2->SetMarkerColor(ci);
   h2b__2->SetMarkerSize(1.5);
   h2b__2->GetXaxis()->SetLabelFont(42);
   h2b__2->GetXaxis()->SetLabelSize(0.035);
   h2b__2->GetXaxis()->SetTitleSize(0.035);
   h2b__2->GetXaxis()->SetTitleFont(42);
   h2b__2->GetYaxis()->SetLabelFont(42);
   h2b__2->GetYaxis()->SetLabelSize(0.035);
   h2b__2->GetYaxis()->SetTitleSize(0.035);
   h2b__2->GetYaxis()->SetTitleOffset(0);
   h2b__2->GetYaxis()->SetTitleFont(42);
   h2b__2->GetZaxis()->SetLabelFont(42);
   h2b__2->GetZaxis()->SetLabelSize(0.035);
   h2b__2->GetZaxis()->SetTitleSize(0.035);
   h2b__2->GetZaxis()->SetTitleFont(42);
   h2b__2->Draw("bar  TEXT same ");
      
   TLegend *leg = new TLegend(0.7236025,0.7459547,0.8742236,0.8754045,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("h1b","2018","f");

   ci = TColor::GetColor("#3113ba");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h2b","2021","f");

   ci = TColor::GetColor("#de0b1d");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();

   TPaveText *pt = new TPaveText(0.3641304,0.9352751,0.6358696,0.9902913,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt->Draw();
   TLatex *   tex = new TLatex(5.759257,4.627553,"0T cosmic rays");
   tex->SetTextFont(42);
   tex->SetTextSize(0.03883495);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(-0.004570689,4.627553,"CMS");
   tex->SetTextSize(0.05501618);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(1.168992,4.627553,"Preliminary");
   tex->SetTextFont(52);
   tex->SetTextSize(0.04045307);
   tex->SetLineWidth(2);
   tex->Draw();
   Canvas0->Modified();
   Canvas0->cd();
   Canvas0->SetSelected(Canvas0);
   Canvas0->ToggleToolBar();
}
