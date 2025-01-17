void tec_3_plus_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Jul 30 11:10:11 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(342633.5,-0.04053314,344087.4,0.2726774);
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
   
   Double_t Graph0_fx1032[83] = {
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
   Double_t Graph0_fy1032[83] = {
   0.06079341,
   0.06250715,
   0.02440086,
   0.03005434,
   0.05269865,
   0.05605515,
   0,
   0.04017336,
   0,
   0,
   0.03694829,
   0.04224364,
   0.03842262,
   0.0376166,
   0.04286693,
   0.0420827,
   0.03905845,
   0.03786654,
   0.06831931,
   0.04339646,
   0.03676562,
   0.02396749,
   0.03666559,
   0.06133825,
   0.03764247,
   0.03951377,
   0.0402321,
   0.1217607,
   0.07579792,
   0.0966729,
   0.06426976,
   0.06927575,
   0.08455452,
   0.1317159,
   0.1288769,
   0.1326604,
   0.1072461,
   0.1187247,
   0.1106616,
   0.1216207,
   0.113343,
   0.1140262,
   0.08995077,
   0.1713015,
   0.1117114,
   0.0939718,
   0.1128033,
   0.119473,
   0.106313,
   0.109547,
   0.1395102,
   0.08951321,
   0.1150897,
   0.1107632,
   0.02359253,
   0.1159115,
   0.1139469,
   0.03580918,
   0.0243488,
   0.1223266,
   0.1066734,
   0.09627286,
   0.1128327,
   0.04591043,
   0.1439176,
   0.1441823,
   0.1484926,
   0.03834941,
   0,
   0.007671053,
   0.0144242,
   0.00530008,
   0,
   0.004906399,
   0.03512743,
   0.01123964,
   0.04079566,
   0.003795107,
   0,
   0.001418555,
   0.1214854,
   0.1439798,
   0.1431932};
   Double_t Graph0_fex1032[83] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1032[83] = {
   0.01922456,
   0.01332657,
   0.007357135,
   0.002083893,
   0.006005568,
   0.004337677,
   0,
   0.0009391016,
   0,
   0,
   0.002652732,
   0.01056091,
   0.002264074,
   0.005804367,
   0.001962742,
   0.005432854,
   0.002531783,
   0.0009951107,
   0.01894837,
   0.004429133,
   0.006305252,
   0.01198374,
   0.002460833,
   0.0133851,
   0.01254749,
   0.001093813,
   0.002292436,
   0.02029346,
   0.009626345,
   0.01895912,
   0.01260434,
   0.00934114,
   0.001455028,
   0.009710225,
   0.003643733,
   0.00208817,
   0.01991511,
   0.004900293,
   0.00215661,
   0.003045281,
   0.006810123,
   0.00222387,
   0.02322519,
   0.05164934,
   0.003767933,
   0.003275651,
   0.001618426,
   0.003203363,
   0.008327074,
   0.005152656,
   0.06239085,
   0.0316477,
   0.01303134,
   0.004334498,
   0.007113415,
   0.002413776,
   0.002012744,
   0.01266046,
   0.007699767,
   0.005741072,
   0.01150289,
   0.008255329,
   0.001688211,
   0.01384251,
   0.01141341,
   0.001931552,
   0.005518682,
   0.007520939,
   0,
   0.007671053,
   0.01019945,
   0.00530008,
   0,
   0.002832711,
   0.008519654,
   0.007947626,
   0.009894401,
   0.003795107,
   0,
   0.001418555,
   0.007183583,
   0.004018086,
   0.002419715};
   TGraphErrors *gre = new TGraphErrors(83,Graph0_fx1032,Graph0_fy1032,Graph0_fex1032,Graph0_fey1032);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1032 = new TH1F("Graph_Graph1032","",100,342907.4,344030.6);
   Graph_Graph1032->SetMinimum(0);
   Graph_Graph1032->SetMaximum(0.2452459);
   Graph_Graph1032->SetDirectory(0);
   Graph_Graph1032->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1032->SetLineColor(ci);
   Graph_Graph1032->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1032->GetXaxis()->SetNoExponent();
   Graph_Graph1032->GetXaxis()->SetNdivisions(5);
   Graph_Graph1032->GetXaxis()->SetLabelFont(42);
   Graph_Graph1032->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1032->GetXaxis()->SetTitleFont(42);
   Graph_Graph1032->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1032->GetYaxis()->SetLabelFont(42);
   Graph_Graph1032->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1032->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1032->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1032->GetYaxis()->SetTitleFont(42);
   Graph_Graph1032->GetZaxis()->SetLabelFont(42);
   Graph_Graph1032->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1032->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1032->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1032);
   
   gre->Draw("ap");
   TLatex *   tex = new TLatex(0.64,0.94,"0T cosmic rays (2021)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03717);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23,0.83,"TEC 3+");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
