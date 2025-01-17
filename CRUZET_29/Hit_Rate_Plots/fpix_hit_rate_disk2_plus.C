void fpix_hit_rate_disk2_plus()
{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Jul 30 11:36:07 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(342633.5,-0.005662388,344087.4,0.03809242);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
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
   
   Double_t Graph0_fx1011[83] = {
   343001,
   343004,
   343005,
   343007,
   343009,
   343018,
   343025,
   343034,
   343037,
   343040,
   343042,
   343045,
   343046,
   343059,
   343068,
   343070,
   343080,
   343082,
   343164,
   343167,
   343169,
   343170,
   343171,
   343259,
   343260,
   343266,
   343268,
   343375,
   343380,
   343384,
   343385,
   343386,
   343387,
   343494,
   343496,
   343498,
   343501,
   343609,
   343619,
   343621,
   343623,
   343625,
   343627,
   343629,
   343638,
   343640,
   343642,
   343644,
   343646,
   343648,
   343650,
   343652,
   343663,
   343668,
   343673,
   343677,
   343680,
   343762,
   343763,
   343767,
   343769,
   343772,
   343774,
   343854,
   343860,
   343862,
   343864,
   343866,
   343874,
   343875,
   343876,
   343877,
   343878,
   343881,
   343921,
   343923,
   343925,
   343927,
   343928,
   343932,
   343934,
   343936,
   343937};
   Double_t Graph0_fy1011[83] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.02033997,
   0.016247,
   0.01338927,
   0.01051066,
   0.01175321,
   0.007569393,
   0.005991871,
   0.01321283,
   0.01460435,
   0,
   0.01398878,
   0.01462985,
   0,
   0,
   0,
   0,
   0,
   0.01492286,
   0.01002186,
   0.007108319,
   0.007954368,
   0.003698143,
   0,
   0.01454194,
   0.01616526,
   0.01718559,
   0.003079446,
   0,
   0.01557286,
   0.003177231,
   0.01107566,
   0.01170293,
   0.00137424,
   0,
   0.0002423606,
   0,
   0,
   0.001475509,
   0.002374708,
   0,
   0.003367768,
   0.003199757,
   0,
   0,
   0,
   0,
   0.01557355,
   0.01561016,
   0,
   0.02172342,
   0.01741469,
   0.01866412,
   0.002949955,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01911484,
   0.01883848,
   0.01721426};
   Double_t Graph0_fex1011[83] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1011[83] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.003777038,
   0.001632885,
   0.0005917279,
   0.007432161,
   0.002304994,
   0.002860961,
   0.005991871,
   0.001477239,
   0.006531262,
   0,
   0.000650817,
   0.001382391,
   0,
   0,
   0,
   0,
   0,
   0.0006112641,
   0.002678455,
   0.000855741,
   0.0005113261,
   0.003698143,
   0,
   0.0007817794,
   0.001110235,
   0.002651794,
   0.0003654629,
   0,
   0.01557286,
   0.0006354462,
   0.001124562,
   0.00052129,
   0.00034356,
   0,
   0.0002423606,
   0,
   0,
   0.001475509,
   0.0006346675,
   0,
   0.0004114383,
   0.000337284,
   0,
   0,
   0,
   0,
   0.003320292,
   0.0006279327,
   0,
   0.004434274,
   0.0006712871,
   0.001956531,
   0.002085933,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.002849472,
   0.001453421,
   0.0008389716};
   TGraphErrors *gre = new TGraphErrors(83,Graph0_fx1011,Graph0_fy1011,Graph0_fex1011,Graph0_fey1011);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1011 = new TH1F("Graph_Graph1011","",100,342907.4,344030.6);
   Graph_Graph1011->SetMinimum(0);
   Graph_Graph1011->SetMaximum(0.0342603);
   Graph_Graph1011->SetDirectory(0);
   Graph_Graph1011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1011->SetLineColor(ci);
   Graph_Graph1011->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1011->GetXaxis()->SetNoExponent();
   Graph_Graph1011->GetXaxis()->SetNdivisions(5);
   Graph_Graph1011->GetXaxis()->SetLabelFont(42);
   Graph_Graph1011->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1011->GetXaxis()->SetTitleFont(42);
   Graph_Graph1011->GetYaxis()->SetTitle("Hit Rate (Hz)");
   Graph_Graph1011->GetYaxis()->SetLabelFont(42);
   Graph_Graph1011->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1011->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1011->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1011->GetYaxis()->SetTitleFont(42);
   Graph_Graph1011->GetZaxis()->SetLabelFont(42);
   Graph_Graph1011->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1011->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1011);
   
   gre->Draw("ap");
   TLatex *   tex = new TLatex(0.64,0.94,"0T cosmic rays (2021)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03717);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23,0.83,"FPIX disk 2+");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
