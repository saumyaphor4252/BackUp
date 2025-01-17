void track_rate_BPIX()
{
//=========Macro generated from canvas: Canvas4/Canvas4
//=========  (Thu Jun 24 11:23:55 2021) by ROOT version6.10/04
   TCanvas *Canvas4 = new TCanvas("Canvas4", "Canvas4",604,112,856,836);
   gStyle->SetOptStat(0);
   Canvas4->Range(289175.3,-0.01761132,293420,0.1184761);
   Canvas4->SetFillColor(0);
   Canvas4->SetBorderMode(0);
   Canvas4->SetBorderSize(2);
   Canvas4->SetGridx();
   Canvas4->SetGridy();
   Canvas4->SetTickx(1);
   Canvas4->SetTicky(1);
   Canvas4->SetLeftMargin(0.1883886);
   Canvas4->SetRightMargin(0.03909953);
   Canvas4->SetTopMargin(0.0875817);
   Canvas4->SetBottomMargin(0.1294118);
   Canvas4->SetFrameLineWidth(3);
   Canvas4->SetFrameBorderMode(0);
   Canvas4->SetFrameLineWidth(3);
   Canvas4->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("track rate bpix");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1009[375] = {
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
   Double_t Graph_fy1009[375] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0124095,
   0,
   0,
   0,
   0,
   0,
   0.0003068764,
   0,
   0.01308851,
   0,
   0,
   0,
   0.001639656,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.009766879,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.009318714,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.001023,
   0,
   0,
   0.003858541,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.002792387,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.006437829,
   0,
   0.03347177,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.02633398,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0002035774,
   0,
   0,
   0,
   0,
   0,
   0,
   0.00616419,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01318738,
   0,
   0,
   0,
   0,
   0,
   0.01788967,
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
   0,
   0,
   0,
   0,
   0,
   0,
   0.02771325,
   0,
   0,
   0,
   0.003324083,
   0,
   0,
   0,
   0,
   0,
   0.003051286,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0005326092,
   0.02468261,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0001743883,
   0,
   0.006002754,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0003434274,
   0.001549587,
   0,
   0,
   0,
   0.0003327826,
   0,
   0,
   0,
   0,
   0,
   0.02748047,
   0,
   0.01349943,
   0,
   0,
   0,
   0,
   0.0008586782,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.05944749,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.008085902,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0006334609,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01235234,
   0,
   0,
   0,
   0.000814109,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_fex1009[375] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_fey1009[375] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0007566203,
   0,
   0,
   0,
   0,
   0,
   0.0001022921,
   0,
   0.0007282642,
   0,
   0,
   0,
   0.0009466556,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0006599845,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0004952841,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0007233699,
   0,
   0,
   0.0008852101,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.000987258,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.001104079,
   0,
   0.00488236,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.001486112,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   7.197546e-05,
   0,
   0,
   0,
   0,
   0,
   0,
   0.003082095,
   0,
   0,
   0,
   0,
   0,
   0,
   0.001102784,
   0,
   0,
   0,
   0,
   0,
   0.00676166,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.009920921,
   0,
   0,
   0,
   0,
   0,
   0,
   0.003959036,
   0,
   0,
   0,
   0.001486575,
   0,
   0,
   0,
   0,
   0,
   0.001017095,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0001883058,
   0.003679467,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0001233112,
   0,
   0.003465691,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0001086013,
   0.0004473272,
   0,
   0,
   0,
   8.89399e-05,
   0,
   0,
   0,
   0,
   0,
   0.001236405,
   0,
   0.001041504,
   0,
   0,
   0,
   0,
   0.0008586782,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.04203572,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.00172392,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0004479245,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0005822949,
   0,
   0,
   0,
   0.0004070545,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   TGraphErrors *gre = new TGraphErrors(375,Graph_fx1009,Graph_fy1009,Graph_fex1009,Graph_fey1009);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3113ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1009 = new TH1F("Graph_Graph1009","Graph",375,289825.9,293403.1);
   Graph_Graph1009->SetMinimum(0);
   Graph_Graph1009->SetMaximum(0.1116315);
   Graph_Graph1009->SetDirectory(0);
   Graph_Graph1009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1009->SetLineColor(ci);
   Graph_Graph1009->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1009->GetXaxis()->SetNoExponent();
   Graph_Graph1009->GetXaxis()->SetLabelFont(42);
   Graph_Graph1009->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1009->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1009->GetXaxis()->SetTitleFont(42);
   Graph_Graph1009->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1009->GetYaxis()->SetLabelFont(42);
   Graph_Graph1009->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1009->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1009->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1009->GetYaxis()->SetTitleFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1009->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1009);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1010[62] = {
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
   Double_t Graph_fy1010[62] = {
   0.0116382,
   0,
   0,
   0,
   0,
   0,
   0,
   0.007186734,
   0,
   0,
   0,
   0,
   0.01080473,
   0.009260585,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0129986,
   0.006739762,
   0,
   0,
   0,
   0.01521624,
   0,
   0,
   0.01372503,
   0.01938441,
   0.01632164,
   0.01767402,
   0.007211605,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01069285,
   0,
   0,
   0,
   0.0008424667,
   0,
   0,
   0.01399367,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.02646234,
   0};
   Double_t Graph_fex1010[62] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_fey1010[62] = {
   0.002124836,
   0,
   0,
   0,
   0,
   0,
   0,
   0.004149263,
   0,
   0,
   0,
   0,
   0.002416011,
   0.009260585,
   0,
   0,
   0,
   0,
   0,
   0,
   0.00059579,
   0.003369881,
   0,
   0,
   0,
   0.005751198,
   0,
   0,
   0.000627768,
   0.00732662,
   0.003264328,
   0.005589017,
   0.00272573,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.001159802,
   0,
   0,
   0,
   0.0008424667,
   0,
   0,
   0.005289109,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0187117,
   0};
   gre = new TGraphErrors(62,Graph_fx1010,Graph_fy1010,Graph_fex1010,Graph_fey1010);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#de0b1d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1010 = new TH1F("Graph_Graph1010","Graph",100,293391,294591);
   Graph_Graph1010->SetMinimum(0);
   Graph_Graph1010->SetMaximum(0.04969144);
   Graph_Graph1010->SetDirectory(0);
   Graph_Graph1010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1010->SetLineColor(ci);
   Graph_Graph1010->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1010->GetXaxis()->SetNoExponent();
   Graph_Graph1010->GetXaxis()->SetLabelFont(42);
   Graph_Graph1010->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1010->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1010->GetXaxis()->SetTitleFont(42);
   Graph_Graph1010->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1010->GetYaxis()->SetLabelFont(42);
   Graph_Graph1010->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1010->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1010->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1010->GetYaxis()->SetTitleFont(42);
   Graph_Graph1010->GetZaxis()->SetLabelFont(42);
   Graph_Graph1010->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1010->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1010);
   
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
      tex = new TLatex(0.23,0.83,"BPIX");
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
   Canvas4->Modified();
   Canvas4->cd();
   Canvas4->SetSelected(Canvas4);
}
