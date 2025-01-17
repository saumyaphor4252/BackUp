void tec_6_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Jul 30 11:10:08 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(342633.5,-0.06256024,344087.4,0.4208597);
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
   
   Double_t Graph0_fx1024[83] = {
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
   Double_t Graph0_fy1024[83] = {
   0.06079341,
   0.06818961,
   0.05323823,
   0.06791124,
   0.07391499,
   0.07350944,
   0.172055,
   0.05529874,
   0,
   0,
   0.05732698,
   0.04488386,
   0.0584344,
   0.06358996,
   0.05787484,
   0.04629097,
   0.06072111,
   0.05549227,
   0.05780865,
   0.05288944,
   0.05298575,
   0.0419431,
   0.06044868,
   0.04673391,
   0.05855495,
   0.05762046,
   0.0551232,
   0.1183785,
   0.09535867,
   0.118982,
   0.08157316,
   0.09320738,
   0.0934181,
   0.1531913,
   0.1574132,
   0.1556689,
   0.155322,
   0.1316691,
   0.1274311,
   0.1292459,
   0.1284827,
   0.1274717,
   0.1559147,
   0.2335929,
   0.1292498,
   0.1052758,
   0.1235542,
   0.1262583,
   0.1167486,
   0.1199685,
   0.1674122,
   0.145459,
   0.1209918,
   0.1290824,
   0.02144775,
   0.132499,
   0.1272437,
   0.03133303,
   0.0243488,
   0.1215183,
   0.1414043,
   0.101936,
   0.1262705,
   0.0333894,
   0.1792182,
   0.1756478,
   0.1794627,
   0.0457243,
   0.00380766,
   0,
   0.0072121,
   0.00530008,
   0.005344633,
   0.003270933,
   0.04959167,
   0.01123964,
   0.04319541,
   0.003795107,
   0,
   0.00283711,
   0.158016,
   0.1741438,
   0.1737781};
   Double_t Graph0_fex1024[83] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1024[83] = {
   0.01922456,
   0.01391915,
   0.01086721,
   0.003132512,
   0.007112473,
   0.004967308,
   0.172055,
   0.001101796,
   0,
   0,
   0.003304272,
   0.01088594,
   0.002792104,
   0.00754674,
   0.002280588,
   0.005698025,
   0.00315674,
   0.001204647,
   0.01742996,
   0.004889631,
   0.007569393,
   0.015853,
   0.003159703,
   0.01168348,
   0.01564947,
   0.001320862,
   0.002683355,
   0.02000962,
   0.01079724,
   0.02103325,
   0.01420006,
   0.01083514,
   0.001529391,
   0.01047194,
   0.00402698,
   0.002262018,
   0.0239667,
   0.00516052,
   0.002314253,
   0.003139293,
   0.0072507,
   0.002351332,
   0.03057738,
   0.06031344,
   0.004052931,
   0.003467074,
   0.001693795,
   0.003293073,
   0.0087262,
   0.005392182,
   0.06834575,
   0.04034306,
   0.01336131,
   0.004679232,
   0.006782375,
   0.002580715,
   0.002126941,
   0.01184277,
   0.007699767,
   0.005722072,
   0.01324372,
   0.008494664,
   0.001785914,
   0.01180494,
   0.01273648,
   0.002131924,
   0.006066946,
   0.008212327,
   0.00380766,
   0,
   0.0072121,
   0.00530008,
   0.005344633,
   0.002312899,
   0.01012286,
   0.007947626,
   0.01018125,
   0.003795107,
   0,
   0.00200614,
   0.008192747,
   0.004418984,
   0.002665635};
   TGraphErrors *gre = new TGraphErrors(83,Graph0_fx1024,Graph0_fy1024,Graph0_fex1024,Graph0_fey1024);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1024 = new TH1F("Graph_Graph1024","",100,342907.4,344030.6);
   Graph_Graph1024->SetMinimum(0);
   Graph_Graph1024->SetMaximum(0.3785209);
   Graph_Graph1024->SetDirectory(0);
   Graph_Graph1024->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1024->SetLineColor(ci);
   Graph_Graph1024->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1024->GetXaxis()->SetNoExponent();
   Graph_Graph1024->GetXaxis()->SetNdivisions(5);
   Graph_Graph1024->GetXaxis()->SetLabelFont(42);
   Graph_Graph1024->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1024->GetXaxis()->SetTitleFont(42);
   Graph_Graph1024->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1024->GetYaxis()->SetLabelFont(42);
   Graph_Graph1024->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1024->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1024->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1024->GetYaxis()->SetTitleFont(42);
   Graph_Graph1024->GetZaxis()->SetLabelFont(42);
   Graph_Graph1024->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1024->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1024);
   
   gre->Draw("ap");
   TLatex *   tex = new TLatex(0.64,0.94,"0T cosmic rays (2021)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03717);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23,0.83,"TEC 6");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
