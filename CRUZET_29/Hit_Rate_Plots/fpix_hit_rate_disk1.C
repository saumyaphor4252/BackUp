void fpix_hit_rate_disk1()
{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Jul 30 11:36:05 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(342633.5,-0.009919554,344087.4,0.06673152);
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
   
   Double_t Graph0_fx1006[83] = {
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
   Double_t Graph0_fy1006[83] = {
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
   0.01963859,
   0.02855533,
   0.0281384,
   0.03153199,
   0.03390349,
   0.02487086,
   0.01198374,
   0.03270174,
   0.02044608,
   0.008364993,
   0.03261021,
   0.02795347,
   0,
   0,
   0,
   0,
   0,
   0.03144817,
   0.01002186,
   0.01504079,
   0.0149884,
   0.007396285,
   0,
   0.03610267,
   0.03812562,
   0.03764462,
   0.006028774,
   0.005996718,
   0,
   0.005973194,
   0.02397822,
   0.03127748,
   0.00180369,
   0,
   0.001211803,
   0,
   0,
   0.004426528,
   0.009159589,
   0,
   0.00648421,
   0.008781555,
   0,
   0,
   0,
   0,
   0.02619188,
   0.03493341,
   0.00834735,
   0.04797255,
   0.03744288,
   0.03917414,
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
   0.04162787,
   0.03521002,
   0.04146142};
   Double_t Graph0_fex1006[83] = {
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
   Double_t Graph0_fey1006[83] = {
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
   0.003711345,
   0.002164774,
   0.0008578142,
   0.01287288,
   0.003914838,
   0.005185933,
   0.008473786,
   0.002324012,
   0.007727893,
   0.005914943,
   0.0009936782,
   0.00191086,
   0,
   0,
   0,
   0,
   0,
   0.0008873616,
   0.002678455,
   0.001244785,
   0.0007018959,
   0.005229963,
   0,
   0.001231807,
   0.00170503,
   0.003924723,
   0.0005113539,
   0.005996718,
   0,
   0.0008712799,
   0.001654655,
   0.0008522126,
   0.0003935974,
   0,
   0.0005419347,
   0,
   0,
   0.002555657,
   0.001246462,
   0,
   0.0005709028,
   0.000558757,
   0,
   0,
   0,
   0,
   0.004305919,
   0.0009393555,
   0.005902468,
   0.006589536,
   0.0009843171,
   0.002834541,
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
   0.00420505,
   0.001987017,
   0.001302043};
   TGraphErrors *gre = new TGraphErrors(83,Graph0_fx1006,Graph0_fy1006,Graph0_fex1006,Graph0_fey1006);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1006 = new TH1F("Graph_Graph1006","",100,342907.4,344030.6);
   Graph_Graph1006->SetMinimum(0);
   Graph_Graph1006->SetMaximum(0.06001829);
   Graph_Graph1006->SetDirectory(0);
   Graph_Graph1006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1006->SetLineColor(ci);
   Graph_Graph1006->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1006->GetXaxis()->SetNoExponent();
   Graph_Graph1006->GetXaxis()->SetNdivisions(5);
   Graph_Graph1006->GetXaxis()->SetLabelFont(42);
   Graph_Graph1006->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1006->GetXaxis()->SetTitleFont(42);
   Graph_Graph1006->GetYaxis()->SetTitle("Hit Rate (Hz)");
   Graph_Graph1006->GetYaxis()->SetLabelFont(42);
   Graph_Graph1006->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1006->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1006->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1006->GetYaxis()->SetTitleFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1006->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1006);
   
   gre->Draw("ap");
   TLatex *   tex = new TLatex(0.64,0.94,"0T cosmic rays (2021)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03717);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23,0.83,"FPIX disk 1");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
