void pt()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Aug  4 16:25:42 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->Range(-24.3865,-0.1538642,105.0613,1.035086);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(3);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.1883886);
   c1->SetRightMargin(0.03909953);
   c1->SetTopMargin(0.0875817);
   c1->SetBottomMargin(0.1294118);
   c1->SetFrameLineWidth(3);
   c1->SetFrameBorderMode(0);
   c1->SetFrameLineWidth(3);
   c1->SetFrameBorderMode(0);
   
   TH1D *h_pt_1__1 = new TH1D("h_pt_1__1","h_pt_1",100,0,100);
   h_pt_1__1->SetBinContent(2,0.0008759133);
   h_pt_1__1->SetBinContent(3,0.01013777);
   h_pt_1__1->SetBinContent(4,0.101353);
   h_pt_1__1->SetBinContent(5,0.8866247);
   h_pt_1__1->SetBinContent(6,0.0009715236);
   h_pt_1__1->SetBinContent(7,3.084202e-05);
   h_pt_1__1->SetBinContent(8,3.084202e-06);
   h_pt_1__1->SetBinContent(9,3.084202e-06);
   h_pt_1__1->SetBinError(2,5.197589e-05);
   h_pt_1__1->SetBinError(3,0.0001768246);
   h_pt_1__1->SetBinError(4,0.0005591004);
   h_pt_1__1->SetBinError(5,0.001653641);
   h_pt_1__1->SetBinError(6,5.473915e-05);
   h_pt_1__1->SetBinError(7,9.753102e-06);
   h_pt_1__1->SetBinError(8,3.084202e-06);
   h_pt_1__1->SetBinError(9,3.084202e-06);
   h_pt_1__1->SetEntries(324233);
   h_pt_1__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   h_pt_1__1->SetLineColor(ci);
   h_pt_1__1->SetLineWidth(3);
   h_pt_1__1->GetXaxis()->SetTitle("Track p_{T} (GeV)");
   h_pt_1__1->GetXaxis()->SetLabelFont(42);
   h_pt_1__1->GetXaxis()->SetLabelSize(0.05);
   h_pt_1__1->GetXaxis()->SetTitleSize(0.05);
   h_pt_1__1->GetXaxis()->SetTitleOffset(1.12);
   h_pt_1__1->GetXaxis()->SetTitleFont(42);
   h_pt_1__1->GetYaxis()->SetTitle("a.u.");
   h_pt_1__1->GetYaxis()->SetLabelFont(42);
   h_pt_1__1->GetYaxis()->SetLabelSize(0.05);
   h_pt_1__1->GetYaxis()->SetTitleSize(0.06);
   h_pt_1__1->GetYaxis()->SetTitleOffset(0);
   h_pt_1__1->GetYaxis()->SetTitleFont(42);
   h_pt_1__1->GetZaxis()->SetLabelFont(42);
   h_pt_1__1->GetZaxis()->SetLabelSize(0.035);
   h_pt_1__1->GetZaxis()->SetTitleSize(0.035);
   h_pt_1__1->GetZaxis()->SetTitleFont(42);
   h_pt_1__1->Draw("HIST");
   
   TH1D *h_pt_2__2 = new TH1D("h_pt_2__2","h_pt_2",100,0,100);
   h_pt_2__2->SetBinContent(2,0.0004441638);
   h_pt_2__2->SetBinContent(3,0.006541644);
   h_pt_2__2->SetBinContent(4,0.1035683);
   h_pt_2__2->SetBinContent(5,0.8883788);
   h_pt_2__2->SetBinContent(6,0.001029952);
   h_pt_2__2->SetBinContent(7,2.233509e-05);
   h_pt_2__2->SetBinContent(8,7.614236e-06);
   h_pt_2__2->SetBinContent(9,3.55331e-06);
   h_pt_2__2->SetBinContent(10,1.015232e-06);
   h_pt_2__2->SetBinContent(11,1.015232e-06);
   h_pt_2__2->SetBinContent(12,5.076158e-07);
   h_pt_2__2->SetBinContent(15,5.076158e-07);
   h_pt_2__2->SetBinContent(31,5.076158e-07);
   h_pt_2__2->SetBinError(2,1.501548e-05);
   h_pt_2__2->SetBinError(3,5.762501e-05);
   h_pt_2__2->SetBinError(4,0.0002292879);
   h_pt_2__2->SetBinError(5,0.0006715319);
   h_pt_2__2->SetBinError(6,2.286526e-05);
   h_pt_2__2->SetBinError(7,3.367142e-06);
   h_pt_2__2->SetBinError(8,1.965987e-06);
   h_pt_2__2->SetBinError(9,1.343025e-06);
   h_pt_2__2->SetBinError(10,7.178771e-07);
   h_pt_2__2->SetBinError(11,7.178771e-07);
   h_pt_2__2->SetBinError(12,5.076158e-07);
   h_pt_2__2->SetBinError(15,5.076158e-07);
   h_pt_2__2->SetBinError(31,5.076158e-07);
   h_pt_2__2->SetEntries(1969994);
   h_pt_2__2->SetDirectory(0);

   ci = TColor::GetColor("#ff0000");
   h_pt_2__2->SetLineColor(ci);
   h_pt_2__2->SetLineWidth(3);
   h_pt_2__2->GetXaxis()->SetLabelFont(42);
   h_pt_2__2->GetXaxis()->SetLabelSize(0.05);
   h_pt_2__2->GetXaxis()->SetTitleSize(0.05);
   h_pt_2__2->GetXaxis()->SetTitleOffset(1.12);
   h_pt_2__2->GetXaxis()->SetTitleFont(42);
   h_pt_2__2->GetYaxis()->SetTitle("a.u.");
   h_pt_2__2->GetYaxis()->SetLabelFont(42);
   h_pt_2__2->GetYaxis()->SetLabelSize(0.05);
   h_pt_2__2->GetYaxis()->SetTitleSize(0.06);
   h_pt_2__2->GetYaxis()->SetTitleOffset(0);
   h_pt_2__2->GetYaxis()->SetTitleFont(42);
   h_pt_2__2->GetZaxis()->SetLabelFont(42);
   h_pt_2__2->GetZaxis()->SetLabelSize(0.035);
   h_pt_2__2->GetZaxis()->SetTitleSize(0.035);
   h_pt_2__2->GetZaxis()->SetTitleFont(42);
   h_pt_2__2->Draw("SAMEHIST");
   TLatex *   tex = new TLatex(0.74,0.94,"0T cosmic rays");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.039);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.7470726,0.7496902,0.9168618,0.8711276,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.04337051);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","2020","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","2021","lpflpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
