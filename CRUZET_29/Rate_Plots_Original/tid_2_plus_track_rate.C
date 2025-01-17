void tid_2_plus_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Jul 30 11:10:05 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(342633.5,-0.04892977,344087.4,0.3291638);
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
   
   Double_t Graph0_fx1015[83] = {
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
   Double_t Graph0_fy1015[83] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.06306398,
   0.04882102,
   0.04541636,
   0.01797561,
   0.0440978,
   0.03505043,
   0.02091248,
   0.04314722,
   0.04375894,
   0.03382243,
   0.05012443,
   0.07808196,
   0.04696636,
   0.05416104,
   0.05648653,
   0.06084702,
   0.06500506,
   0.06692187,
   0.07396285,
   0.06269958,
   0.06459814,
   0.06321229,
   0.05687611,
   0.06093832,
   0.04197703,
   0.1245829,
   0.06062156,
   0.05138191,
   0.06369274,
   0.0626997,
   0.06391823,
   0.05622765,
   0.1953142,
   0.0671349,
   0.06197139,
   0.0608943,
   0.006434326,
   0.06152459,
   0.06243081,
   0.01342844,
   0,
   0.06224107,
   0.05457708,
   0.04742854,
   0.06254167,
   0.02086838,
   0.07874739,
   0.07255691,
   0.07527178,
   0.0132748,
   0,
   0,
   0,
   0,
   0,
   0,
   0.006198959,
   0,
   0.002399745,
   0.003795107,
   0.001223983,
   0,
   0.06286657,
   0.0752418,
   0.06803925};
   Double_t Graph0_fex1015[83] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1015[83] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.018205,
   0.004697805,
   0.007007896,
   0.01037823,
   0.002698742,
   0.01011819,
   0.009352347,
   0.001142998,
   0.002390806,
   0.01069559,
   0.007828121,
   0.01703888,
   0.01077482,
   0.008259481,
   0.001189256,
   0.006599786,
   0.002587811,
   0.00148313,
   0.0165386,
   0.003561097,
   0.001647719,
   0.002195453,
   0.004824169,
   0.001625745,
   0.01586582,
   0.0440467,
   0.002775671,
   0.002422166,
   0.001216122,
   0.00232062,
   0.006456716,
   0.003691526,
   0.07382184,
   0.02740771,
   0.009562393,
   0.003213879,
   0.00371486,
   0.001758563,
   0.00148983,
   0.007752915,
   0,
   0.004095161,
   0.008227805,
   0.005794318,
   0.001256881,
   0.009332621,
   0.008442606,
   0.001370218,
   0.003929155,
   0.004424932,
   0,
   0,
   0,
   0,
   0,
   0,
   0.00357897,
   0,
   0.002399745,
   0.003795107,
   0.001223983,
   0,
   0.005167601,
   0.002904678,
   0.001667949};
   TGraphErrors *gre = new TGraphErrors(83,Graph0_fx1015,Graph0_fy1015,Graph0_fex1015,Graph0_fey1015);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1015 = new TH1F("Graph_Graph1015","",100,342907.4,344030.6);
   Graph_Graph1015->SetMinimum(0);
   Graph_Graph1015->SetMaximum(0.2960497);
   Graph_Graph1015->SetDirectory(0);
   Graph_Graph1015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1015->SetLineColor(ci);
   Graph_Graph1015->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1015->GetXaxis()->SetNoExponent();
   Graph_Graph1015->GetXaxis()->SetNdivisions(5);
   Graph_Graph1015->GetXaxis()->SetLabelFont(42);
   Graph_Graph1015->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1015->GetXaxis()->SetTitleFont(42);
   Graph_Graph1015->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1015->GetYaxis()->SetLabelFont(42);
   Graph_Graph1015->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1015->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1015->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1015->GetYaxis()->SetTitleFont(42);
   Graph_Graph1015->GetZaxis()->SetLabelFont(42);
   Graph_Graph1015->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1015->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1015);
   
   gre->Draw("ap");
   TLatex *   tex = new TLatex(0.64,0.94,"0T cosmic rays (2021)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03717);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23,0.83,"TID 2+");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
