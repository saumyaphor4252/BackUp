void track_rate_TIB()
{
//=========Macro generated from canvas: Canvas5/Canvas5
//=========  (Thu Jun 24 11:23:55 2021) by ROOT version6.10/04
   TCanvas *Canvas5 = new TCanvas("Canvas5", "Canvas5",604,112,856,836);
   gStyle->SetOptStat(0);
   Canvas5->Range(289175.3,-0.6750271,293420,4.54109);
   Canvas5->SetFillColor(0);
   Canvas5->SetBorderMode(0);
   Canvas5->SetBorderSize(2);
   Canvas5->SetGridx();
   Canvas5->SetGridy();
   Canvas5->SetTickx(1);
   Canvas5->SetTicky(1);
   Canvas5->SetLeftMargin(0.1883886);
   Canvas5->SetRightMargin(0.03909953);
   Canvas5->SetTopMargin(0.0875817);
   Canvas5->SetBottomMargin(0.1294118);
   Canvas5->SetFrameLineWidth(3);
   Canvas5->SetFrameBorderMode(0);
   Canvas5->SetFrameLineWidth(3);
   Canvas5->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("track rate tib");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1011[375] = {
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
   Double_t Graph_fy1011[375] = {
   1.127739,
   1.267791,
   1.117862,
   2.369327,
   1.271724,
   1.247976,
   1.254317,
   1.196852,
   0.8015888,
   1.253355,
   1.270955,
   0.5083578,
   1.220477,
   0.1229047,
   0.8552645,
   0.08894583,
   1.131082,
   1.300231,
   1.124914,
   1.228079,
   1.175086,
   1.599373,
   1.194499,
   1.232699,
   1.269353,
   0.2917044,
   1.230365,
   1.279008,
   0.7484452,
   1.213142,
   0.9721927,
   1.25114,
   0.008048634,
   1.221853,
   0.705579,
   1.196152,
   1.250615,
   1.144467,
   0.02700143,
   1.224864,
   1.197607,
   1.291638,
   1.27131,
   1.266241,
   1.171582,
   1.269046,
   1.198359,
   0.06869465,
   1.335421,
   1.119653,
   1.48882,
   1.284321,
   1.232254,
   1.205974,
   2.885202,
   1.167384,
   1.220474,
   1.232467,
   1.233413,
   1.25306,
   0.7244905,
   1.238068,
   1.216441,
   1.184855,
   1.232934,
   1.289789,
   0.8428722,
   1.226982,
   1.237099,
   1.264104,
   1.561151,
   1.169044,
   1.279424,
   1.237359,
   1.262857,
   1.252495,
   1.88029,
   0.0894372,
   0.08987168,
   1.224019,
   1.177431,
   2.26866,
   0.9150835,
   1.246088,
   1.190921,
   0.009897042,
   1.208401,
   1.264013,
   1.231052,
   0.8144409,
   0.7078701,
   1.218225,
   2.292991,
   1.167022,
   1.629607,
   1.172755,
   1.278064,
   1.258638,
   0.8868942,
   1.227528,
   1.10884,
   1.214795,
   1.223363,
   1.254032,
   1.484732,
   0.08296755,
   1.197401,
   1.077041,
   1.141388,
   1.2549,
   0.05841146,
   1.198942,
   1.267521,
   1.283105,
   1.243696,
   1.437386,
   1.254573,
   1.256587,
   1.323543,
   1.397596,
   1.263627,
   1.21696,
   0.8461993,
   1.295351,
   1.666556,
   1.259012,
   1.202551,
   1.303131,
   1.293057,
   1.210608,
   1.249138,
   1.177317,
   1.218113,
   0.009941114,
   1.253492,
   1.204243,
   1.23867,
   0.7648205,
   1.278081,
   1.234001,
   0.7101754,
   1.238111,
   1.333804,
   1.232884,
   1.215088,
   1.096753,
   0.09218387,
   0.07135069,
   1.294462,
   1.210563,
   0.3302456,
   0.8827412,
   1.276997,
   1.263524,
   1.205829,
   1.244826,
   1.104041,
   1.204948,
   0.008197678,
   0.07948479,
   1.280773,
   1.208871,
   1.28865,
   1.225505,
   0.6947841,
   1.266644,
   1.269384,
   1.210513,
   1.248639,
   0.5608872,
   1.238505,
   1.137293,
   1.217845,
   1.324802,
   1.207033,
   1.18066,
   1.136686,
   1.254894,
   1.10027,
   1.124737,
   1.910613,
   1.259899,
   1.441476,
   1.251642,
   1.173051,
   1.221997,
   1.298444,
   0.01854615,
   1.215628,
   1.244221,
   1.257301,
   1.302561,
   1.282699,
   1.274858,
   1.269742,
   1.225796,
   0.9089796,
   1.76454,
   1.139877,
   1.295213,
   1.235951,
   1.215424,
   3.352875,
   1.231705,
   1.207037,
   1.260492,
   1.371416,
   1.238834,
   0.9908659,
   1.187309,
   1.309294,
   0.2844476,
   1.265018,
   1.293464,
   1.291278,
   1.251012,
   0.01066625,
   1.26035,
   1.387461,
   1.241376,
   1.208593,
   1.262159,
   1.190809,
   1.215155,
   1.562365,
   1.269563,
   0.7507815,
   0.9860622,
   1.291353,
   1.191864,
   1.211379,
   1.242942,
   1.214083,
   1.185314,
   0.8376527,
   1.316801,
   1.316647,
   1.232429,
   0.6353248,
   1.20933,
   1.220469,
   1.241784,
   1.212572,
   1.253143,
   1.214662,
   1.229601,
   1.440752,
   1.269733,
   0.02371681,
   1.219523,
   1.178541,
   1.252378,
   0.03911924,
   1.315446,
   1.169326,
   1.321303,
   0.8210932,
   1.247095,
   1.223343,
   1.188299,
   1.306761,
   0.05020015,
   1.328156,
   0.7333215,
   0.7525447,
   1.286605,
   1.275109,
   1.279181,
   0.7367179,
   1.637019,
   0.8102826,
   1.235796,
   1.199444,
   1.290488,
   1.200126,
   0.6743602,
   1.174311,
   1.229683,
   1.210233,
   0.03027813,
   1.245874,
   1.251474,
   1.252931,
   1.133872,
   1.248224,
   0.1067943,
   0.8050423,
   1.937237,
   1.302615,
   1.222725,
   1.258273,
   1.89897,
   0.06746309,
   1.218366,
   1.22611,
   0.08578528,
   1.199476,
   1.238409,
   1.259844,
   0.9077828,
   1.813148,
   1.382589,
   1.273755,
   1.273984,
   1.249689,
   0.6473898,
   1.226869,
   0.02612496,
   1.258038,
   2.048542,
   0.5090982,
   1.25393,
   1.203853,
   0.08967307,
   1.102731,
   1.211536,
   1.2835,
   1.194114,
   1.294659,
   1.291694,
   0.005131315,
   1.250374,
   0.06812162,
   0.1020334,
   1.240486,
   1.231202,
   1.270866,
   1.212013,
   1.451297,
   1.238131,
   1.299971,
   0,
   1.226017,
   0.7230957,
   1.318421,
   1.857726,
   1.219963,
   1.272134,
   2.028808,
   0.09530516,
   1.217602,
   1.166851,
   0.7683705,
   1.194101,
   1.198492,
   0.08079042,
   1.161326,
   1.176117,
   1.256463,
   1.267673,
   1.337023,
   1.23715,
   0.1198265,
   1.24257,
   1.225764,
   1.266496,
   0.3213686,
   1.286166,
   1.227945,
   1.245917,
   0.9464214,
   1.247269,
   1.024512,
   1.22531,
   1.192397,
   1.698593,
   1.200089,
   1.532876,
   1.363942,
   1.100722,
   1.172823,
   1.256886,
   1.199967,
   1.218348,
   1.204914};
   Double_t Graph_fex1011[375] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_fey1011[375] = {
   0.01017469,
   0.05091573,
   0.1365685,
   0.2985072,
   0.03789866,
   0.1491616,
   0.009582479,
   0.01341226,
   0.006081024,
   0.02183798,
   0.03220965,
   0.01060461,
   0.0120786,
   0.02682001,
   0.005400211,
   0.008330541,
   0.006770036,
   0.02896562,
   0.006805173,
   0.04139854,
   0.02534257,
   0.2411145,
   0.01332413,
   0.02254351,
   0.01272858,
   0.03734892,
   0.02415268,
   0.03921051,
   0.00873956,
   0.04919942,
   0.1620321,
   0.02232755,
   0.002682878,
   0.03281989,
   0.005609558,
   0.03340736,
   0.0345928,
   0.03974899,
   0.002083205,
   0.03389349,
   0.06737067,
   0.06348054,
   0.01995455,
   0.0337215,
   0.03212527,
   0.01505233,
   0.03585589,
   0.003840148,
   0.04257166,
   0.05797344,
   0.2481367,
   0.0109655,
   0.007809091,
   0.01821805,
   0.3664211,
   0.03074192,
   0.01792104,
   0.02234946,
   0.01298114,
   0.02087275,
   0.004367096,
   0.01652669,
   0.02025995,
   0.04679896,
   0.009608284,
   0.07036377,
   0.005905485,
   0.007776151,
   0.02910218,
   0.01672002,
   0.2049892,
   0.007430332,
   0.02958651,
   0.02476204,
   0.02717865,
   0.02081717,
   0.2490505,
   0.02828252,
   0.002951773,
   0.0250217,
   0.06072138,
   0.4074633,
   0.01363217,
   0.01352846,
   0.02369552,
   0.002063676,
   0.01584524,
   0.02249646,
   0.01836572,
   0.005980458,
   0.004212841,
   0.02273188,
   0.3275701,
   0.03395895,
   0.2328009,
   0.04464601,
   0.05353219,
   0.02905151,
   0.00529926,
   0.01732008,
   0.02434807,
   0.04459652,
   0.01729578,
   0.01425773,
   0.1428684,
   0.008946621,
   0.0201024,
   0.2538611,
   0.01995996,
   0.02078264,
   0.008100212,
   0.02322031,
   0.02711624,
   0.06375801,
   0.007821367,
   0.06947868,
   0.04168039,
   0.008987324,
   0.04116022,
   0.1148817,
   0.03552822,
   0.00953958,
   0.004982041,
   0.01914892,
   0.2006297,
   0.02138531,
   0.02410411,
   0.03464256,
   0.01564729,
   0.01199033,
   0.02982604,
   0.01907602,
   0.02282135,
   0.004970557,
   0.02243392,
   0.0197816,
   0.03097644,
   0.00458544,
   0.0341216,
   0.1054278,
   0.004285403,
   0.01917077,
   0.0486065,
   0.0158101,
   0.01871361,
   0.08954954,
   0.003561374,
   0.01009051,
   0.04378584,
   0.02667836,
   0.3302456,
   0.032875,
   0.07229574,
   0.03713037,
   0.02540418,
   0.01021757,
   0.03965834,
   0.02230239,
   0.004732931,
   0.05620423,
   0.009198737,
   0.03319771,
   0.05944099,
   0.0141632,
   0.004204793,
   0.03407224,
   0.0608623,
   0.009319089,
   0.009610892,
   0.02422664,
   0.00749399,
   0.04186434,
   0.01455083,
   0.08812449,
   0.01441445,
   0.03413967,
   0.02233525,
   0.03284208,
   0.01007305,
   0.1395064,
   0.8544522,
   0.03514668,
   0.1112123,
   0.01639253,
   0.05475335,
   0.008945696,
   0.01943613,
   0.008294091,
   0.01590449,
   0.03097032,
   0.1167375,
   0.04473013,
   0.01941479,
   0.03113115,
   0.0943792,
   0.0432574,
   0.005555483,
   0.2297235,
   0.00988919,
   0.06742608,
   0.01458508,
   0.02621861,
   0.5368897,
   0.03489376,
   0.01496224,
   0.02894817,
   0.08330758,
   0.02576992,
   0.005796718,
   0.01414164,
   0.02740212,
   0.009820223,
   0.05056029,
   0.02379445,
   0.01136246,
   0.04636559,
   0.001626588,
   0.01113134,
   0.08276899,
   0.04705423,
   0.02383576,
   0.02795153,
   0.007018738,
   0.01167178,
   0.09579474,
   0.09624532,
   0.005780032,
   0.1486545,
   0.04822648,
   0.01824377,
   0.02115159,
   0.01049654,
   0.008990492,
   0.02549799,
   0.00525466,
   0.0584236,
   0.03626701,
   0.02925249,
   0.003790975,
   0.01272204,
   0.007546712,
   0.04098499,
   0.011469,
   0.04275669,
   0.02632495,
   0.03766046,
   0.1502088,
   0.05633531,
   0.001438043,
   0.02312126,
   0.04856092,
   0.01362408,
   0.006809785,
   0.03911486,
   0.08438885,
   0.0302254,
   0.004965301,
   0.03235117,
   0.01224016,
   0.01952233,
   0.04044325,
   0.009486936,
   0.04075556,
   0.009692697,
   0.005805836,
   0.1838007,
   0.0116503,
   0.009446173,
   0.004446134,
   0.1628895,
   0.005275161,
   0.01263254,
   0.01858989,
   0.05659165,
   0.03772564,
   0.004003707,
   0.01057037,
   0.02006192,
   0.01409249,
   0.004010436,
   0.01281007,
   0.008343715,
   0.03980066,
   0.0095452,
   0.2358921,
   0.01949788,
   0.004850533,
   0.4566111,
   0.03344439,
   0.01975737,
   0.00925902,
   0.2930175,
   0.004090551,
   0.06193304,
   0.007609136,
   0.003442445,
   0.02544028,
   0.09760029,
   0.008388711,
   0.005484316,
   0.2321499,
   0.09116519,
   0.008176026,
   0.009536597,
   0.01959589,
   0.003865238,
   0.01563811,
   0.00326562,
   0.0525095,
   0.2926488,
   0.01168875,
   0.06923671,
   0.02895182,
   0.009298664,
   0.07319083,
   0.01218625,
   0.06168105,
   0.03353407,
   0.08933995,
   0.05024109,
   0.001177204,
   0.02143744,
   0.004561761,
   0.01388499,
   0.07521553,
   0.02002021,
   0.07218037,
   0.007067519,
   0.2488953,
   0.01526116,
   0.03387134,
   0,
   0.01809631,
   0.01513362,
   0.02975733,
   0.2901281,
   0.01456159,
   0.02380422,
   0.3335339,
   0.02031913,
   0.03641535,
   0.03205587,
   0.004592548,
   0.03720683,
   0.04457238,
   0.006308672,
   0.01537406,
   0.0284999,
   0.007742535,
   0.0175609,
   0.06352389,
   0.01465649,
   0.04236507,
   0.03567718,
   0.02085973,
   0.01591096,
   0.005572401,
   0.04343074,
   0.01626881,
   0.01574338,
   0.025787,
   0.04371675,
   0.006212815,
   0.01375191,
   0.01634341,
   0.2755482,
   0.02752468,
   0.1581041,
   0.04795363,
   0.03712644,
   0.006746049,
   0.03602887,
   0.008086867,
   0.04312904,
   0.02832936};
   TGraphErrors *gre = new TGraphErrors(375,Graph_fx1011,Graph_fy1011,Graph_fex1011,Graph_fey1011);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3113ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1011 = new TH1F("Graph_Graph1011","Graph",375,289825.9,293403.1);
   Graph_Graph1011->SetMinimum(0);
   Graph_Graph1011->SetMaximum(4.278741);
   Graph_Graph1011->SetDirectory(0);
   Graph_Graph1011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1011->SetLineColor(ci);
   Graph_Graph1011->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1011->GetXaxis()->SetNoExponent();
   Graph_Graph1011->GetXaxis()->SetLabelFont(42);
   Graph_Graph1011->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1011->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1011->GetXaxis()->SetTitleFont(42);
   Graph_Graph1011->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1011->GetYaxis()->SetLabelFont(42);
   Graph_Graph1011->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1011->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1011->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1011->GetYaxis()->SetTitleFont(42);
   Graph_Graph1011->GetZaxis()->SetLabelFont(42);
   Graph_Graph1011->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1011->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1011);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1012[62] = {
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
   Double_t Graph_fy1012[62] = {
   1.062956,
   0.5522471,
   0.9831441,
   0.09807264,
   1.124953,
   0.07055365,
   1.139556,
   1.116339,
   0.5409738,
   1.135913,
   1.054956,
   1.115203,
   1.00484,
   1.083488,
   0.8327441,
   1.047366,
   1.128317,
   1.173272,
   0.2644626,
   1.133638,
   1.112937,
   0.8054015,
   1.100038,
   1.146101,
   1.103156,
   0.9934031,
   1.164037,
   1.104948,
   1.144259,
   1.271064,
   1.155572,
   1.171788,
   1.161068,
   1.054411,
   1.150568,
   0.09242155,
   1.143022,
   1.141861,
   0.09394523,
   1.259925,
   1.129894,
   1.12602,
   1.15204,
   0.796149,
   0.06789368,
   1.012645,
   1.117339,
   0.06753459,
   0.903591,
   0.4052683,
   1.161169,
   1.121352,
   1.076798,
   0.9396446,
   1.100139,
   1.133028,
   1.115674,
   1.163104,
   1.079622,
   0.06882888,
   1.177574,
   1.296038};
   Double_t Graph_fex1012[62] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_fey1012[62] = {
   0.02030673,
   0.01842872,
   0.07700578,
   0.01461981,
   0.01152783,
   0.01101863,
   0.01867623,
   0.05171342,
   0.02126787,
   0.03840088,
   0.03518476,
   0.01747202,
   0.02329917,
   0.1001685,
   0.1032892,
   0.02179177,
   0.07572771,
   0.04855033,
   0.1182713,
   0.02396853,
   0.005512901,
   0.03683821,
   0.02671916,
   0.02623131,
   0.01832243,
   0.04646943,
   0.05561983,
   0.02591462,
   0.005731983,
   0.05932818,
   0.02746695,
   0.04550847,
   0.03458564,
   0.02372611,
   0.03805742,
   0.007811047,
   0.0438975,
   0.05928249,
   0.01744519,
   0.1057306,
   0.03774711,
   0.01190173,
   0.03391287,
   0.01586281,
   0.005435845,
   0.02920821,
   0.08470526,
   0.00774675,
   0.04250135,
   0.2339818,
   0.02126027,
   0.03150313,
   0.02762838,
   0.02684699,
   0.03352276,
   0.03287247,
   0.03287087,
   0.03435786,
   0.01942507,
   0.003812079,
   0.1248226,
   0.07302349};
   gre = new TGraphErrors(62,Graph_fx1012,Graph_fy1012,Graph_fex1012,Graph_fey1012);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#de0b1d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1012 = new TH1F("Graph_Graph1012","Graph",100,293391,294591);
   Graph_Graph1012->SetMinimum(0.05358152);
   Graph_Graph1012->SetMaximum(1.500014);
   Graph_Graph1012->SetDirectory(0);
   Graph_Graph1012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1012->SetLineColor(ci);
   Graph_Graph1012->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1012->GetXaxis()->SetNoExponent();
   Graph_Graph1012->GetXaxis()->SetLabelFont(42);
   Graph_Graph1012->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1012->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1012->GetXaxis()->SetTitleFont(42);
   Graph_Graph1012->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1012->GetYaxis()->SetLabelFont(42);
   Graph_Graph1012->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1012->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1012->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1012->GetYaxis()->SetTitleFont(42);
   Graph_Graph1012->GetZaxis()->SetLabelFont(42);
   Graph_Graph1012->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1012->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1012);
   
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
      tex = new TLatex(0.23,0.83,"TIB");
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
   Canvas5->Modified();
   Canvas5->cd();
   Canvas5->SetSelected(Canvas5);
}
