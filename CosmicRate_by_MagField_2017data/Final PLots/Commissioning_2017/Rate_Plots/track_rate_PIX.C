void track_rate_PIX()
{
//=========Macro generated from canvas: Canvas2/Canvas2
//=========  (Thu Jun 24 11:23:55 2021) by ROOT version6.10/04
   TCanvas *Canvas2 = new TCanvas("Canvas2", "Canvas2",604,112,856,836);
   gStyle->SetOptStat(0);
   Canvas2->Range(289175.3,-0.04336069,293420,0.2916991);
   Canvas2->SetFillColor(0);
   Canvas2->SetBorderMode(0);
   Canvas2->SetBorderSize(2);
   Canvas2->SetGridx();
   Canvas2->SetGridy();
   Canvas2->SetTickx(1);
   Canvas2->SetTicky(1);
   Canvas2->SetLeftMargin(0.1883886);
   Canvas2->SetRightMargin(0.03909953);
   Canvas2->SetTopMargin(0.0875817);
   Canvas2->SetBottomMargin(0.1294118);
   Canvas2->SetFrameLineWidth(3);
   Canvas2->SetFrameBorderMode(0);
   Canvas2->SetFrameLineWidth(3);
   Canvas2->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("track rate pixel");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1005[375] = {
   290756,
   290139,
   292077,
   292473,
   290792,
   291425,
   291850,
   290336,
   292154,
   290825,
   291953,
   291685,
   290348,
   291883,
   292283,
   291808,
   292080,
   292595,
   291622,
   292605,
   292717,
   290498,
   290966,
   290797,
   291317,
   290163,
   291975,
   290960,
   290617,
   291218,
   291618,
   292244,
   292505,
   292279,
   291881,
   292320,
   290129,
   292216,
   292498,
   290124,
   290964,
   291668,
   292362,
   292363,
   290356,
   291683,
   290954,
   291313,
   291798,
   291965,
   292464,
   291320,
   290351,
   292199,
   291619,
   291837,
   293105,
   292038,
   291620,
   291836,
   291881,
   292358,
   292322,
   291926,
   290820,
   290180,
   291385,
   291841,
   290741,
   291869,
   292466,
   291113,
   292361,
   290342,
   290913,
   292328,
   292465,
   291890,
   292708,
   292720,
   292222,
   291949,
   292546,
   292290,
   292193,
   292502,
   290956,
   290742,
   291347,
   291781,
   291340,
   291912,
   292461,
   292540,
   292472,
   290499,
   291681,
   292630,
   291867,
   290340,
   292719,
   292321,
   291952,
   292285,
   292467,
   291891,
   290502,
   292579,
   291877,
   291647,
   291310,
   292596,
   292225,
   292158,
   290910,
   290788,
   292253,
   290908,
   292048,
   292538,
   291615,
   291840,
   290198,
   291672,
   292458,
   292081,
   292274,
   292068,
   292365,
   292249,
   292490,
   292256,
   290824,
   292525,
   292357,
   291895,
   291244,
   291781,
   290891,
   291257,
   291504,
   292276,
   291500,
   291381,
   292198,
   292404,
   292723,
   291887,
   291342,
   292160,
   291882,
   290141,
   292245,
   291346,
   291349,
   292594,
   292604,
   290357,
   292521,
   292024,
   291621,
   290508,
   291844,
   290914,
   292269,
   291873,
   292238,
   290801,
   291858,
   292623,
   292363,
   292078,
   291927,
   291318,
   290716,
   290135,
   290806,
   292155,
   291879,
   292455,
   291960,
   290133,
   290193,
   292359,
   291939,
   291221,
   291503,
   292504,
   290963,
   292447,
   292289,
   292584,
   292485,
   291502,
   292486,
   292282,
   291504,
   292460,
   292255,
   291842,
   292452,
   293103,
   292470,
   292232,
   291252,
   292367,
   292317,
   292591,
   290617,
   290968,
   292051,
   292080,
   291428,
   291851,
   291872,
   292153,
   292004,
   291871,
   292319,
   290755,
   292721,
   292156,
   290510,
   290747,
   292476,
   292243,
   291860,
   292459,
   290787,
   290201,
   290189,
   290757,
   292270,
   292545,
   291340,
   292477,
   292075,
   291510,
   291867,
   292711,
   291222,
   291387,
   290772,
   292618,
   292218,
   291956,
   292457,
   292223,
   292497,
   290500,
   292364,
   291862,
   292369,
   291680,
   291834,
   291875,
   291860,
   290130,
   291843,
   290358,
   291911,
   291306,
   291779,
   292247,
   291950,
   292474,
   291339,
   291865,
   291385,
   292360,
   292269,
   292592,
   290912,
   292219,
   290800,
   292283,
   290198,
   290126,
   290922,
   291894,
   292257,
   292593,
   291857,
   292079,
   292471,
   291884,
   291950,
   292221,
   292284,
   291223,
   292234,
   292248,
   291299,
   290892,
   290803,
   291800,
   291348,
   292076,
   291315,
   291684,
   293104,
   291314,
   291316,
   291778,
   292281,
   291684,
   292275,
   292499,
   291951,
   290793,
   291702,
   290501,
   291505,
   291807,
   292065,
   292205,
   290505,
   291319,
   292224,
   291833,
   292530,
   292366,
   291307,
   291655,
   292230,
   292305,
   291386,
   290966,
   292462,
   292384,
   291650,
   291312,
   290506,
   292718,
   290911,
   292463,
   292251,
   291651,
   292469,
   291886,
   292712,
   292619,
   292154,
   290965,
   292246,
   292378,
   292722,
   291116,
   291863,
   291874,
   292170,
   291900,
   291305,
   292583,
   290619,
   292585,
   291622,
   292066,
   290744,
   290784,
   291662,
   290933,
   292247,
   291343,
   290346,
   292468,
   291506,
   292456,
   291379,
   291835,
   291115,
   292059,
   290510,
   290496,
   291839};
   Double_t Graph_fy1005[375] = {
   0,
   0,
   0.03336901,
   0,
   0,
   0,
   0.01983891,
   0,
   0.02777144,
   0,
   0,
   0,
   0,
   0.02341042,
   0.02223149,
   0,
   0.03476762,
   0,
   0,
   0,
   0.05574829,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.07849509,
   0,
   0.03085486,
   0.02278938,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.05947115,
   0,
   0,
   0,
   0.02176999,
   0,
   0,
   0,
   0,
   0,
   0,
   4.928233e-05,
   0,
   0.03936504,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.06444897,
   0.03131466,
   0.1463652,
   0.01340335,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.06521886,
   0,
   0,
   0,
   0,
   0,
   0,
   0.05506776,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.03979152,
   0,
   0,
   0,
   0.06845195,
   0,
   0,
   0,
   0.06646744,
   0,
   0,
   0.01888643,
   0,
   0.0001495588,
   0,
   0,
   0,
   0,
   0.02705619,
   0,
   0.01041414,
   0.05819088,
   0.03774477,
   0.05625404,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.03324586,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.04502234,
   0,
   0,
   0.0949365,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01919266,
   0,
   0.01872912,
   0.02108019,
   0.04085374,
   0,
   0.03883735,
   0,
   0,
   0.02157467,
   0.04468039,
   0,
   0,
   0,
   0,
   0,
   0.03402898,
   0,
   0,
   0,
   0,
   0,
   0.05111335,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0280606,
   0.02289781,
   0,
   0,
   0.06563342,
   0,
   0,
   0.1023694,
   0,
   0.07512808,
   0,
   0.006648166,
   0,
   0,
   0,
   0,
   0,
   0.007119667,
   0,
   0,
   0.002999484,
   0,
   0,
   0.04768096,
   0,
   0,
   0.0639318,
   0,
   0,
   0,
   0,
   0.1094451,
   0.02358429,
   0,
   0,
   0,
   0,
   0,
   0.0320897,
   0.07788736,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.05748793,
   0.0003487767,
   0,
   0.01000459,
   0.0002964209,
   0,
   0,
   0,
   0,
   0.02546212,
   0,
   0.000122469,
   0,
   0,
   0,
   0,
   0.04061197,
   0.02808437,
   0,
   0,
   0,
   0,
   0,
   0.02335306,
   0.01756199,
   0,
   0,
   0,
   0.01792272,
   0,
   0,
   0,
   0,
   0.03253312,
   0.09451278,
   0,
   0.0364806,
   0,
   0,
   0.02969299,
   0,
   0.03606449,
   0,
   0.06554358,
   0.1356407,
   0.0002480261,
   0,
   0,
   0,
   0,
   0,
   0.000111713,
   0,
   0.1486187,
   0,
   0,
   0,
   0.0313421,
   0,
   0,
   0,
   0.03945067,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.04315529,
   0,
   0,
   0.01286393,
   0,
   0,
   0.0775304,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.03927458,
   0,
   0,
   0.05944254,
   0,
   0,
   0,
   0,
   0,
   0.02690065,
   0,
   0.07459491,
   0,
   0.05413825,
   0,
   0.0001431323,
   0.0240836,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.05278348,
   0,
   0,
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
   Double_t Graph_fex1005[375] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_fey1005[375] = {
   0,
   0,
   0.02359545,
   0,
   0,
   0,
   0.001205128,
   0,
   0.001131879,
   0,
   0,
   0,
   0,
   0.01170521,
   0.0008706523,
   0,
   0.001186947,
   0,
   0,
   0,
   0.005519903,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.005592543,
   0,
   0.005215424,
   0.001008143,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.003955962,
   0,
   0,
   0,
   0.0007570167,
   0,
   0,
   0,
   0,
   0,
   0,
   4.928233e-05,
   0,
   0.002950534,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.005741571,
   0.009902564,
   0.1034958,
   0.001649839,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.008027887,
   0,
   0,
   0,
   0,
   0,
   0,
   0.005425987,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.003726817,
   0,
   0,
   0,
   0.006301513,
   0,
   0,
   0,
   0.009593748,
   0,
   0,
   0.01335473,
   0,
   0.0001057541,
   0,
   0,
   0,
   0,
   0.003615536,
   0,
   0.001404242,
   0.002628796,
   0.005184642,
   0.004169827,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.003141438,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01357475,
   0,
   0,
   0.002821695,
   0,
   0,
   0,
   0,
   0,
   0,
   0.007254143,
   0,
   0.0006903644,
   0.004395523,
   0.01091862,
   0,
   0.001695001,
   0,
   0,
   0.005766072,
   0.002787086,
   0,
   0,
   0,
   0,
   0,
   0.001771478,
   0,
   0,
   0,
   0,
   0,
   0.01142929,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0140303,
   0.005912189,
   0,
   0,
   0.002372981,
   0,
   0,
   0.007609055,
   0,
   0.008617782,
   0,
   0.002102335,
   0,
   0,
   0,
   0,
   0,
   0.001553639,
   0,
   0,
   0.0005476283,
   0,
   0,
   0.002165081,
   0,
   0,
   0.005482106,
   0,
   0,
   0,
   0,
   0.0282586,
   0.001024436,
   0,
   0,
   0,
   0,
   0,
   0.001461646,
   0.006536162,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01198706,
   0.0001743883,
   0,
   0.004474189,
   0.0002096012,
   0,
   0,
   0,
   0,
   0.0008743727,
   0,
   0.000122469,
   0,
   0,
   0,
   0,
   0.002280995,
   0.001121582,
   0,
   0,
   0,
   0,
   0,
   0.0008955491,
   0.001505928,
   0,
   0,
   0,
   0.000652707,
   0,
   0,
   0,
   0,
   0.002070033,
   0.002292946,
   0,
   0.001712119,
   0,
   0,
   0.0009315518,
   0,
   0.005564871,
   0,
   0.00211321,
   0.07831222,
   0.0002480261,
   0,
   0,
   0,
   0,
   0,
   7.899303e-05,
   0,
   0.06646432,
   0,
   0,
   0,
   0.00310333,
   0,
   0,
   0,
   0.009298612,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01631117,
   0,
   0,
   0.002174402,
   0,
   0,
   0.01880388,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.003526961,
   0,
   0,
   0.003214285,
   0,
   0,
   0,
   0,
   0,
   0.0008593099,
   0,
   0.01111995,
   0,
   0.003319429,
   0,
   8.26375e-05,
   0.002420493,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.001410194,
   0,
   0,
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
   TGraphErrors *gre = new TGraphErrors(375,Graph_fx1005,Graph_fy1005,Graph_fex1005,Graph_fey1005);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3113ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1005 = new TH1F("Graph_Graph1005","Graph",375,289825.9,293403.1);
   Graph_Graph1005->SetMinimum(0);
   Graph_Graph1005->SetMaximum(0.274847);
   Graph_Graph1005->SetDirectory(0);
   Graph_Graph1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1005->SetLineColor(ci);
   Graph_Graph1005->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1005->GetXaxis()->SetNoExponent();
   Graph_Graph1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph1005->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1005->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph1005->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph1005->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1005);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1006[62] = {
   293849,
   293502,
   293843,
   294315,
   293580,
   294313,
   294291,
   294058,
   294491,
   294048,
   294406,
   294034,
   293998,
   293864,
   293693,
   293688,
   294383,
   294298,
   294308,
   294042,
   294307,
   293879,
   293684,
   293837,
   293678,
   294011,
   294393,
   294003,
   293492,
   293860,
   294490,
   294487,
   293866,
   294059,
   294008,
   294311,
   293965,
   294418,
   294287,
   294481,
   294006,
   293581,
   294300,
   293963,
   294317,
   294482,
   294053,
   294309,
   294485,
   293967,
   293491,
   294040,
   294000,
   293699,
   293971,
   294398,
   293997,
   293964,
   293696,
   294060,
   293877,
   293501};
   Double_t Graph_fy1006[62] = {
   0.0764242,
   0,
   0.08444182,
   0,
   0,
   0,
   0,
   0.06947176,
   0,
   0,
   0,
   0,
   0.08643785,
   0.02778175,
   0,
   0.06483695,
   0,
   0,
   0,
   0,
   0.08279783,
   0.05560303,
   0,
   0,
   0,
   0.08694994,
   0,
   0,
   0.0837284,
   0.09692207,
   0.08813686,
   0.1025093,
   0.08962995,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.08252363,
   0,
   0.04551229,
   0,
   0.003369867,
   0,
   0,
   0.07596562,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.158774,
   0};
   Double_t Graph_fex1006[62] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_fey1006[62] = {
   0.005444999,
   0,
   0.02256803,
   0,
   0,
   0,
   0,
   0.01290058,
   0,
   0,
   0,
   0,
   0.006833512,
   0.0160398,
   0,
   0.005421938,
   0,
   0,
   0,
   0,
   0.001503676,
   0.009679246,
   0,
   0,
   0,
   0.01374799,
   0,
   0,
   0.001550526,
   0.01638282,
   0.007585613,
   0.01346014,
   0.009609339,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.003222006,
   0,
   0.003792691,
   0,
   0.001684933,
   0,
   0,
   0.01232325,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.04583411,
   0};
   gre = new TGraphErrors(62,Graph_fx1006,Graph_fy1006,Graph_fex1006,Graph_fey1006);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#de0b1d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1006 = new TH1F("Graph_Graph1006","Graph",100,293391,294591);
   Graph_Graph1006->SetMinimum(0);
   Graph_Graph1006->SetMaximum(0.2250689);
   Graph_Graph1006->SetDirectory(0);
   Graph_Graph1006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1006->SetLineColor(ci);
   Graph_Graph1006->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1006->GetXaxis()->SetNoExponent();
   Graph_Graph1006->GetXaxis()->SetLabelFont(42);
   Graph_Graph1006->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1006->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1006->GetXaxis()->SetTitleFont(42);
   Graph_Graph1006->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1006->GetYaxis()->SetLabelFont(42);
   Graph_Graph1006->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1006->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1006->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1006->GetYaxis()->SetTitleFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1006->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1006);
   
   multigraph->Add(gre,"");
   multigraph->Draw("AP");
   multigraph->GetXaxis()->SetTitle("Run Number");
   multigraph->GetXaxis()->SetNoExponent();
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.03);
   multigraph->GetXaxis()->SetTitleSize(0.05);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("Track Rate (Hz)");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.05);
   multigraph->GetYaxis()->SetTitleSize(0.05);
   multigraph->GetYaxis()->SetTitleOffset(0);
   multigraph->GetYaxis()->SetTitleFont(42);
   TLatex *   tex = new TLatex(0.49,0.94,"cosmic rays 2017 (Commissioning)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03717);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23,0.83,"PIXEL");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.6978923,0.7320513,0.9262295,0.874359,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.03660131);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
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
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#3113ba");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","3.8 T","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#de0b1d");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(42);
   leg->Draw();
   Canvas2->Modified();
   Canvas2->cd();
   Canvas2->SetSelected(Canvas2);
}
