void bpix_layer4_hit_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Jul 30 11:36:10 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(342633.5,-0.08999767,344087.4,0.6054387);
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
   
   Double_t Graph0_fx1019[83] = {
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
   Double_t Graph0_fy1019[83] = {
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
   0.03678732,
   0.07368358,
   0.07569393,
   0.0838862,
   0.07415698,
   0.06133825,
   0.06273745,
   0.06703715,
   0.07210428,
   0,
   0,
   0,
   0,
   0,
   0.06963166,
   0.2992242,
   0.2592991,
   0.2642033,
   0.2773607,
   0,
   0.01424774,
   0.01425898,
   0.01554886,
   0.2747646,
   0.2998359,
   0.3737487,
   0.2651081,
   0.000114182,
   2.32201e-05,
   0.2240011,
   0,
   0.2203057,
   0.3906285,
   0.2573505,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.260503,
   0.2797452,
   0,
   0.3231358,
   0.2998277,
   0.2971902,
   0.001474977,
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
   0.2913951,
   0.2996216,
   0.3067082};
   Double_t Graph0_fex1019[83] = {
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
   Double_t Graph0_fey1019[83] = {
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
   0.0139043,
   0.005771343,
   0.009047155,
   0.02241953,
   0.003499684,
   0.0133851,
   0.01619874,
   0.001424711,
   0.003068962,
   0,
   0,
   0,
   0,
   0,
   0.001320402,
   0.01463553,
   0.00516844,
   0.002946892,
   0.03202686,
   0,
   0.0007738308,
   0.00104272,
   0.002522359,
   0.003452133,
   0.0424032,
   0.07629113,
   0.005804515,
   0.000114182,
   2.32201e-05,
   0.004386281,
   0,
   0.007307081,
   0.1043999,
   0.05366128,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01357966,
   0.002658219,
   0,
   0.01710216,
   0.002785392,
   0.007807289,
   0.001474977,
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
   0.01112551,
   0.005796354,
   0.003541325};
   TGraphErrors *gre = new TGraphErrors(83,Graph0_fx1019,Graph0_fy1019,Graph0_fex1019,Graph0_fey1019);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1019 = new TH1F("Graph_Graph1019","",100,342907.4,344030.6);
   Graph_Graph1019->SetMinimum(0);
   Graph_Graph1019->SetMaximum(0.5445312);
   Graph_Graph1019->SetDirectory(0);
   Graph_Graph1019->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1019->SetLineColor(ci);
   Graph_Graph1019->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1019->GetXaxis()->SetNoExponent();
   Graph_Graph1019->GetXaxis()->SetNdivisions(5);
   Graph_Graph1019->GetXaxis()->SetLabelFont(42);
   Graph_Graph1019->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1019->GetXaxis()->SetTitleFont(42);
   Graph_Graph1019->GetYaxis()->SetTitle("Hit Rate (Hz)");
   Graph_Graph1019->GetYaxis()->SetLabelFont(42);
   Graph_Graph1019->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1019->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1019->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1019->GetYaxis()->SetTitleFont(42);
   Graph_Graph1019->GetZaxis()->SetLabelFont(42);
   Graph_Graph1019->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1019->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1019);
   
   gre->Draw("ap");
   TLatex *   tex = new TLatex(0.64,0.94,"0T cosmic rays (2021)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03717);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23,0.83,"BPIX layer 4");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
