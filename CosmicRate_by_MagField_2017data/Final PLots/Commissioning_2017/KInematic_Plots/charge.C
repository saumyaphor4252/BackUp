void charge()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun 24 09:22:46 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",556,244,661,641);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->Range(-7.156863,-0.1900662,5.764706,1.161258);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(3);
   c->SetGridx();
   c->SetGridy();
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.1669196);
   c->SetRightMargin(0.05918058);
   c->SetTopMargin(0.08233276);
   c->SetBottomMargin(0.1406518);
   c->SetFrameLineWidth(3);
   c->SetFrameBorderMode(0);
   c->SetFrameLineWidth(3);
   c->SetFrameBorderMode(0);
   
   TH1D *h_charge_1__17 = new TH1D("h_charge_1__17","h_charge_1",10,-5,5);
   h_charge_1__17->SetBinContent(5,1);
   h_charge_1__17->SetBinError(5,0.0004688269);
   h_charge_1__17->SetEntries(4549619);
   h_charge_1__17->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   h_charge_1__17->SetLineColor(ci);
   h_charge_1__17->SetLineWidth(3);
   h_charge_1__17->GetXaxis()->SetTitle("Track charge (e)");
   h_charge_1__17->GetXaxis()->SetLabelFont(42);
   h_charge_1__17->GetXaxis()->SetLabelSize(0.05);
   h_charge_1__17->GetXaxis()->SetTitleSize(0.05);
   h_charge_1__17->GetXaxis()->SetTitleOffset(1.12);
   h_charge_1__17->GetXaxis()->SetTitleFont(42);
   h_charge_1__17->GetYaxis()->SetTitle("a.u.");
   h_charge_1__17->GetYaxis()->SetLabelFont(42);
   h_charge_1__17->GetYaxis()->SetLabelSize(0.05);
   h_charge_1__17->GetYaxis()->SetTitleSize(0.06);
   h_charge_1__17->GetYaxis()->SetTitleOffset(0);
   h_charge_1__17->GetYaxis()->SetTitleFont(42);
   h_charge_1__17->GetZaxis()->SetLabelFont(42);
   h_charge_1__17->GetZaxis()->SetLabelSize(0.035);
   h_charge_1__17->GetZaxis()->SetTitleSize(0.035);
   h_charge_1__17->GetZaxis()->SetTitleFont(42);
   h_charge_1__17->Draw("HIST");
   
   TH1D *h_charge_2__18 = new TH1D("h_charge_2__18","h_charge_2",10,-5,5);
   h_charge_2__18->SetBinContent(5,0.4474524);
   h_charge_2__18->SetBinContent(7,0.5525476);
   h_charge_2__18->SetBinError(5,0.001051012);
   h_charge_2__18->SetBinError(7,0.001167937);
   h_charge_2__18->SetEntries(405071);
   h_charge_2__18->SetDirectory(0);

   ci = TColor::GetColor("#ff0000");
   h_charge_2__18->SetLineColor(ci);
   h_charge_2__18->SetLineWidth(3);
   h_charge_2__18->GetXaxis()->SetLabelFont(42);
   h_charge_2__18->GetXaxis()->SetLabelSize(0.035);
   h_charge_2__18->GetXaxis()->SetTitleSize(0.035);
   h_charge_2__18->GetXaxis()->SetTitleFont(42);
   h_charge_2__18->GetYaxis()->SetLabelFont(42);
   h_charge_2__18->GetYaxis()->SetLabelSize(0.035);
   h_charge_2__18->GetYaxis()->SetTitleSize(0.035);
   h_charge_2__18->GetYaxis()->SetTitleOffset(0);
   h_charge_2__18->GetYaxis()->SetTitleFont(42);
   h_charge_2__18->GetZaxis()->SetLabelFont(42);
   h_charge_2__18->GetZaxis()->SetLabelSize(0.035);
   h_charge_2__18->GetZaxis()->SetTitleSize(0.035);
   h_charge_2__18->GetZaxis()->SetTitleFont(42);
   h_charge_2__18->Draw("SAMEHIST");
   TLatex *   tex = new TLatex(0.48,0.94,"cosmic rays 2017 (Commissioning)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.660091,0.7287582,0.9028832,0.879085,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.03921569);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Magnetic Field","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","0 T","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","3.8 T","lpflpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
