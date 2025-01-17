void track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Mon Jun 28 19:36:13 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(305635.6,-1.340503,316315.1,9.017929);
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
   
   Double_t Graph0_fx1002[298] = {
   308335,
   308394,
   308397,
   308404,
   308406,
   308409,
   309171,
   309232,
   309244,
   309245,
   309246,
   309247,
   310900,
   310909,
   310912,
   310928,
   310934,
   310958,
   310979,
   310990,
   310993,
   311013,
   311024,
   311027,
   311030,
   311032,
   311033,
   311036,
   311045,
   311058,
   311085,
   311087,
   311088,
   311091,
   311092,
   311093,
   311094,
   311095,
   311096,
   311097,
   311098,
   311114,
   311116,
   311135,
   311189,
   311192,
   311195,
   311223,
   311227,
   311240,
   311263,
   311282,
   311292,
   311296,
   311309,
   311320,
   311321,
   311326,
   311356,
   311359,
   311368,
   311372,
   311373,
   311374,
   311375,
   311377,
   311379,
   311407,
   311446,
   311447,
   311450,
   311452,
   311461,
   311463,
   311469,
   311479,
   311483,
   311511,
   311515,
   311516,
   311518,
   311522,
   311526,
   311529,
   311531,
   311532,
   311533,
   311534,
   311535,
   311536,
   311537,
   311577,
   311580,
   311614,
   311649,
   311650,
   311651,
   311662,
   311663,
   311665,
   311668,
   311669,
   311677,
   311678,
   311683,
   311688,
   311696,
   311702,
   311727,
   311728,
   311785,
   311787,
   311789,
   311790,
   311791,
   311793,
   311798,
   311799,
   311800,
   311802,
   311808,
   311811,
   311814,
   311822,
   311879,
   311880,
   311881,
   311882,
   311883,
   311884,
   311943,
   311949,
   311957,
   311974,
   311983,
   311989,
   311993,
   311994,
   311995,
   312001,
   312002,
   312003,
   312005,
   312018,
   312023,
   312050,
   312059,
   312060,
   312061,
   312073,
   312081,
   312091,
   312092,
   312094,
   312096,
   312097,
   312098,
   312099,
   312100,
   312101,
   312105,
   312135,
   312136,
   312141,
   312142,
   312144,
   312149,
   312150,
   312172,
   312174,
   312176,
   312202,
   312217,
   312218,
   312219,
   312220,
   312225,
   312227,
   312228,
   312231,
   312232,
   312280,
   312300,
   312301,
   312302,
   312418,
   312420,
   312421,
   312428,
   312429,
   312430,
   312431,
   312432,
   312433,
   312434,
   312439,
   312440,
   312449,
   312452,
   312453,
   312455,
   312457,
   312464,
   312479,
   312499,
   312518,
   312520,
   312527,
   312532,
   312533,
   312534,
   312535,
   312537,
   312538,
   312645,
   312646,
   312647,
   312654,
   312658,
   312668,
   312669,
   312670,
   312671,
   312673,
   312676,
   312689,
   312691,
   312692,
   312693,
   312697,
   312701,
   312711,
   312712,
   312713,
   312718,
   312725,
   312726,
   312727,
   312728,
   312730,
   312845,
   312847,
   312848,
   312851,
   313052,
   313084,
   313097,
   313098,
   313105,
   313106,
   313108,
   313118,
   313120,
   313123,
   313124,
   313125,
   313126,
   313127,
   313128,
   313129,
   313130,
   313181,
   313182,
   313183,
   313664,
   313759,
   313910,
   313913,
   313916,
   314324,
   314325,
   314538,
   314539,
   314577,
   314580,
   314587,
   314600,
   314606,
   314607,
   314632,
   314766,
   314767,
   314768,
   314773,
   314778,
   314781,
   314812,
   314850,
   314854,
   314881,
   314883,
   315089,
   315116,
   315174,
   315182,
   315194,
   315206,
   315210};
   Double_t Graph0_fy1002[298] = {
   0,
   1.337412,
   2.185756,
   2.317737,
   2.314482,
   2.246756,
   2.382006,
   2.34207,
   2.66858,
   2.336571,
   2.357416,
   2.312583,
   0.4828228,
   2.343229,
   2.280839,
   0.005318585,
   0.00824957,
   0.009148334,
   2.322277,
   2.392496,
   2.344245,
   2.390055,
   2.309381,
   2.333672,
   2.019086,
   0.440398,
   2.254106,
   2.316737,
   2.311524,
   2.326217,
   2.316743,
   2.367219,
   2.373895,
   2.507125,
   2.261482,
   2.730259,
   2.283478,
   2.408743,
   2.271321,
   2.29395,
   2.325315,
   2.341584,
   2.307569,
   2.383438,
   2.38507,
   2.379283,
   2.402093,
   2.394587,
   2.300572,
   1.896118,
   2.166201,
   2.288464,
   2.218772,
   2.29142,
   2.312861,
   2.781476,
   2.335802,
   2.254351,
   3.156899,
   2.288182,
   2.09246,
   2.073781,
   2.054693,
   2.043704,
   2.078058,
   2.44991,
   2.096987,
   2.116802,
   2.122305,
   2.080396,
   2.163051,
   2.233064,
   2.094322,
   1.752722,
   2.003774,
   2.017503,
   1.992884,
   2.345441,
   2.13481,
   2.299177,
   2.318193,
   2.344252,
   2.207032,
   2.249558,
   2.35658,
   2.366087,
   2.277217,
   2.722283,
   2.334978,
   2.355674,
   2.399028,
   0.1174971,
   0.1422845,
   2.266493,
   2.291814,
   2.240209,
   2.19071,
   2.080096,
   2.176047,
   2.236323,
   2.206331,
   2.220162,
   2.482811,
   2.379768,
   0,
   2.471757,
   2.369704,
   1.28669,
   2.442919,
   2.739348,
   2.352323,
   2.381138,
   2.338551,
   2.397692,
   2.253306,
   1.711503,
   2.143512,
   2.364169,
   2.278382,
   0.1480982,
   0.1492834,
   0.139884,
   0.1463918,
   0.1445333,
   2.444875,
   2.552176,
   2.559256,
   2.458215,
   2.334363,
   2.396391,
   2.267249,
   2.303726,
   1.827467,
   1.882514,
   2.285789,
   2.556392,
   2.349401,
   2.406737,
   2.343166,
   2.438983,
   2.345801,
   0.3218581,
   0.2894797,
   0.1920501,
   0.1559905,
   2.252148,
   2.244283,
   2.232251,
   2.276999,
   2.208229,
   2.324116,
   2.358061,
   2.495874,
   2.535131,
   2.491618,
   2.44625,
   2.387505,
   2.413897,
   2.41399,
   2.429082,
   2.429874,
   2.400671,
   2.547212,
   2.407481,
   2.369646,
   2.237079,
   2.610854,
   3.204029,
   2.56842,
   2.261396,
   2.760191,
   2.454784,
   2.449878,
   2.343538,
   2.473044,
   2.470718,
   2.47171,
   2.522891,
   2.858371,
   0.4162987,
   0.1766948,
   1.252614,
   2.442857,
   2.446645,
   2.450092,
   2.538897,
   2.637233,
   2.512874,
   2.624041,
   2.452409,
   2.537621,
   2.40416,
   2.421451,
   2.424469,
   2.490766,
   2.288258,
   2.319879,
   2.335334,
   2.280764,
   2.291725,
   2.302432,
   2.332845,
   2.293843,
   2.294071,
   2.160027,
   2.134422,
   0.3855868,
   1.127816,
   5.044169,
   2.440555,
   2.468465,
   2.450066,
   2.524056,
   2.48974,
   3.336388,
   2.414361,
   2.680042,
   2.492377,
   2.447571,
   1.113856,
   1.125158,
   2.435162,
   1.094601,
   2.47928,
   0.3526632,
   2.33216,
   2.527706,
   2.518791,
   2.560281,
   2.574072,
   2.559527,
   2.500626,
   2.485541,
   2.523911,
   2.687321,
   2.623485,
   2.597002,
   2.449019,
   2.415299,
   0.1714736,
   0.01891152,
   2.349417,
   2.498024,
   2.412581,
   2.478275,
   2.795154,
   2.908078,
   2.764121,
   2.677733,
   2.542348,
   2.51341,
   2.714755,
   2.677919,
   1.44445,
   0.6156378,
   2.722355,
   2.66931,
   1.852651,
   3.686691,
   0.1197795,
   2.661156,
   2.333447,
   2.727517,
   0.4338313,
   2.57541,
   2.68253,
   2.482716,
   2.528034,
   2.560397,
   2.534451,
   1.915362,
   0.08280222,
   0.004803825,
   2.434881,
   2.419922,
   2.510352,
   2.499829,
   2.591335,
   2.45894,
   0.2763962,
   0.2754982,
   0.2837256,
   2.296743,
   2.244567,
   2.494881,
   2.43164,
   0.4519421,
   0.2064768,
   0.8035512,
   2.21782,
   2.390269,
   0.004926772,
   1.082078,
   1.894525,
   1.543069,
   0.2174334,
   2.301595,
   2.151362};
   Double_t Graph0_fex1002[298] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1002[298] = {
   0,
   0.04231385,
   0.03992623,
   0.04777062,
   0.04856745,
   0.003198324,
   0.02030422,
   0.02386391,
   0.1286903,
   0.01942092,
   0.02411687,
   0.008205655,
   0.01618426,
   0.07899023,
   0.05123218,
   0.002010236,
   0.001338257,
   0.002444995,
   0.02419694,
   0.06684618,
   0.02679006,
   0.03290451,
   0.007772611,
   0.01987346,
   0.02972137,
   0.01831814,
   0.03096836,
   0.01523312,
   0.08736741,
   0.01752059,
   0.03065913,
   0.08187198,
   0.02850408,
   0.07569595,
   0.06881471,
   0.2385438,
   0.007868404,
   0.08147695,
   0.06042372,
   0.03426096,
   0.02875584,
   0.02423293,
   0.02102836,
   0.03809723,
   0.06674301,
   0.05143269,
   0.06559572,
   0.1689011,
   0.02903753,
   0.006866298,
   0.03089218,
   0.1411128,
   0.09739327,
   0.03227992,
   0.04303044,
   0.1447979,
   0.04053233,
   0.01861257,
   0.3551788,
   0.02297274,
   0.01656306,
   0.03480557,
   0.02958613,
   0.008488506,
   0.044375,
   0.1598145,
   0.01872012,
   0.01658312,
   0.02897497,
   0.03619312,
   0.007332167,
   0.01733977,
   0.05182632,
   0.03511771,
   0.03010557,
   0.02761372,
   0.009775856,
   0.02594063,
   0.09585579,
   0.01262636,
   0.008048505,
   0.03603983,
   0.01311226,
   0.02806472,
   0.01272156,
   0.007380771,
   0.03587614,
   0.1753577,
   0.03943455,
   0.07408659,
   0.03066618,
   0.01678529,
   0.003665229,
   0.01932731,
   0.09411352,
   0.03682383,
   0.01019487,
   0.0319599,
   0.06546167,
   0.03491699,
   0.01596528,
   0.02008806,
   0.03713555,
   0.0279374,
   0,
   0.04337751,
   0.04032116,
   0.02936455,
   0.08093753,
   0.1560888,
   0.04440717,
   0.03678997,
   0.06842666,
   0.008537794,
   0.04402198,
   1.711503,
   0.05191151,
   0.03673444,
   0.02849982,
   0.006570793,
   0.01340605,
   0.01246185,
   0.004563617,
   0.00912286,
   0.008344478,
   0.0609217,
   0.0665247,
   0.04980595,
   0.02474698,
   0.03739799,
   0.03463569,
   0.03283674,
   0.01808753,
   0.05746964,
   0.07722966,
   0.3246621,
   0.03684456,
   0.04189592,
   0.0275457,
   0.008943668,
   0.03025392,
   0.0143225,
   0.01053525,
   0.01131666,
   0.007685101,
   0.01903684,
   0.04242813,
   0.07461591,
   0.03113049,
   0.07202449,
   0.06552658,
   0.08194829,
   0.0262259,
   0.03753794,
   0.0697246,
   0.03544174,
   0.02801858,
   0.0367518,
   0.01617071,
   0.007259535,
   0.004871219,
   0.01485181,
   0.06827245,
   0.009197035,
   0.08924604,
   0.0177995,
   0.1366583,
   0.4320311,
   0.1061004,
   0.04117758,
   0.1166394,
   0.03037085,
   0.05566467,
   0.1098668,
   0.02434873,
   0.008030579,
   0.02360011,
   0.02958907,
   0.1236938,
   0.03343791,
   0.009016917,
   0.01317665,
   0.04029122,
   0.007809387,
   0.02480795,
   0.1046134,
   0.1224305,
   0.04903694,
   0.07973635,
   0.02412101,
   0.04061364,
   0.06794558,
   0.008192039,
   0.0881771,
   0.02168098,
   0.06074545,
   0.06785129,
   0.04691356,
   0.05774549,
   0.03219808,
   0.04881147,
   0.02188368,
   0.06313595,
   0.03927951,
   0.05153155,
   0.1171416,
   0.01435006,
   0.01520056,
   0.5786059,
   0.02539629,
   0.04094818,
   0.00797209,
   0.05577428,
   0.03080333,
   0.2466329,
   0.1624075,
   0.06311662,
   0.007788184,
   0.02350827,
   0.03965432,
   0.04092161,
   0.05770267,
   0.0580954,
   0.02655626,
   0.05144122,
   0.02680113,
   0.02954412,
   0.02284811,
   0.05942903,
   0.08111589,
   0.02415938,
   0.01267086,
   0.007680465,
   0.03013424,
   0.02702224,
   0.01012453,
   0.02029528,
   0.007622687,
   0.02699375,
   0.01156074,
   0.01891152,
   0.06506109,
   0.03821468,
   0.00845386,
   0.02513717,
   0.02601748,
   0.09145983,
   0.01595281,
   0.008013071,
   0.05331381,
   0.01521129,
   0.02871832,
   0.02732285,
   0.06039549,
   0.1071688,
   0.02888938,
   0.02634887,
   0.01094711,
   3.686691,
   0.02613802,
   0.008450031,
   0.02840813,
   0.03420101,
   0.02061195,
   0.03030943,
   0.01833911,
   0.04876515,
   0.08478754,
   0.01626641,
   0.03469573,
   0.02909084,
   0.04780588,
   0.003396817,
   0.02513797,
   0.02037653,
   0.02270162,
   0.0236815,
   0.06464213,
   0.01635988,
   0.02792024,
   0.01314881,
   0.03758037,
   0.02501044,
   0.02863564,
   0.05890317,
   0.039164,
   0.01333865,
   0.00689022,
   0.0088329,
   0.03661944,
   0.03430812,
   0.002463386,
   0.02777299,
   0.02219198,
   0.02984598,
   0.007944842,
   0.03559924,
   0.02966338};
   TGraphErrors *gre = new TGraphErrors(298,Graph0_fx1002,Graph0_fy1002,Graph0_fex1002,Graph0_fey1002);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","",298,307647.5,315897.5);
   Graph_Graph1002->SetMinimum(0);
   Graph_Graph1002->SetMaximum(8.11072);
   Graph_Graph1002->SetDirectory(0);
   Graph_Graph1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1002->SetLineColor(ci);
   Graph_Graph1002->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1002->GetXaxis()->SetNoExponent();
   Graph_Graph1002->GetXaxis()->SetNdivisions(5);
   Graph_Graph1002->GetXaxis()->SetLabelFont(42);
   Graph_Graph1002->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1002->GetXaxis()->SetTitleFont(42);
   Graph_Graph1002->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1002->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1002->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1002->GetYaxis()->SetTitleFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1002->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1002);
   
   gre->Draw("ap");
   TLatex *   tex = new TLatex(0.685,0.94,"cosmic rays (2018)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03717);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23,0.83,"Track Rate");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
