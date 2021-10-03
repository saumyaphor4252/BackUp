void track_rate_TEC_minus()
{
//=========Macro generated from canvas: Canvas12/Canvas12
//=========  (Thu Jun 24 11:10:45 2021) by ROOT version6.10/04
   TCanvas *Canvas12 = new TCanvas("Canvas12", "Canvas12",604,112,856,836);
   gStyle->SetOptStat(0);
   Canvas12->Range(297790.9,0.04910678,298440.2,0.4293869);
   Canvas12->SetFillColor(0);
   Canvas12->SetBorderMode(0);
   Canvas12->SetBorderSize(2);
   Canvas12->SetGridx();
   Canvas12->SetGridy();
   Canvas12->SetTickx(1);
   Canvas12->SetTicky(1);
   Canvas12->SetLeftMargin(0.1883886);
   Canvas12->SetRightMargin(0.03909953);
   Canvas12->SetTopMargin(0.0875817);
   Canvas12->SetBottomMargin(0.1294118);
   Canvas12->SetFrameLineWidth(3);
   Canvas12->SetFrameBorderMode(0);
   Canvas12->SetFrameLineWidth(3);
   Canvas12->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("track rate tec minus");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1025[29] = {
   298019,
   298030,
   297938,
   298211,
   298208,
   298020,
   298392,
   298025,
   297943,
   297944,
   297939,
   298023,
   298214,
   298022,
   298215,
   298024,
   297937,
   297940,
   298037,
   298036,
   298386,
   298035,
   298034,
   298029,
   298197,
   298034,
   298021,
   297936,
   298216};
   Double_t Graph_fy1025[29] = {
   0.1800638,
   0.2777346,
   0.198939,
   0.205945,
   0.201307,
   0.2079234,
   0.2010235,
   0.2036001,
   0.2079456,
   0.1984609,
   0.1980799,
   0.192039,
   0.2068051,
   0.216449,
   0.2008933,
   0.2531987,
   0.2037631,
   0.202546,
   0.1802544,
   0.196582,
   0.1935851,
   0.202346,
   0.3319281,
   0.2837424,
   0.2098938,
   0.2832757,
   0.1915915,
   0.2157747,
   0.2004836};
   Double_t Graph_fex1025[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_fey1025[29] = {
   0.01919487,
   0.00849854,
   0.007460796,
   0.01018332,
   0.01270639,
   0.01906031,
   0.002218852,
   0.012775,
   0.003814391,
   0.01653841,
   0.01173324,
   0.006317618,
   0.009139582,
   0.02054443,
   0.002567759,
   0.04162561,
   0.004585028,
   0.005825195,
   0.01849371,
   0.01568895,
   0.01150744,
   0.09049191,
   0.05061857,
   0.01883265,
   0.007467687,
   0.00317029,
   0.01334881,
   0.03500328,
   0.0117728};
   TGraphErrors *gre = new TGraphErrors(29,Graph_fx1025,Graph_fy1025,Graph_fex1025,Graph_fey1025);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3113ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1025 = new TH1F("Graph_Graph1025","Graph",100,297890.4,298437.6);
   Graph_Graph1025->SetMinimum(0.08478489);
   Graph_Graph1025->SetMaximum(0.409616);
   Graph_Graph1025->SetDirectory(0);
   Graph_Graph1025->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1025->SetLineColor(ci);
   Graph_Graph1025->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1025->GetXaxis()->SetNoExponent();
   Graph_Graph1025->GetXaxis()->SetLabelFont(42);
   Graph_Graph1025->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1025->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1025->GetXaxis()->SetTitleFont(42);
   Graph_Graph1025->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1025->GetYaxis()->SetLabelFont(42);
   Graph_Graph1025->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1025->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1025->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1025->GetYaxis()->SetTitleFont(42);
   Graph_Graph1025->GetZaxis()->SetLabelFont(42);
   Graph_Graph1025->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1025->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1025);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1026[51] = {
   297642,
   297104,
   297439,
   297725,
   297724,
   297633,
   297508,
   297344,
   297463,
   297638,
   297667,
   297117,
   297393,
   297720,
   297345,
   297506,
   297360,
   297719,
   297414,
   297385,
   297464,
   297051,
   297452,
   297686,
   297475,
   297392,
   297119,
   297415,
   297389,
   297437,
   297510,
   297120,
   297103,
   297726,
   297436,
   297118,
   297121,
   297362,
   297446,
   297622,
   297365,
   297443,
   297624,
   297384,
   297449,
   297364,
   297608,
   297623,
   297361,
   297680,
   297368};
   Double_t Graph_fy1026[51] = {
   0.265509,
   0.3211933,
   0.332775,
   0.3476368,
   0.4153882,
   0.3747305,
   0.3932913,
   0.3668115,
   0.3658968,
   0.4187831,
   0.3528719,
   0.3590517,
   0.2097375,
   0.3143195,
   0.1417309,
   0.3296922,
   0.3619621,
   0.3628723,
   0.3605811,
   0.3143729,
   0.3098217,
   0.2862576,
   0.3750061,
   0.01043751,
   0.419545,
   0.3195144,
   0.3610789,
   0.1689856,
   0.3133575,
   0.3084129,
   0.3318902,
   0.2942008,
   0.3496193,
   0.3464482,
   0.3954488,
   0.3639891,
   0.3866784,
   0.341995,
   0.461657,
   0.3329451,
   0.3717133,
   0.3815002,
   0.327138,
   0.3384281,
   0.3788277,
   0.3683015,
   0.303026,
   0.3416769,
   0.3539523,
   0.3241604,
   0.4348414};
   Double_t Graph_fex1026[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_fey1026[51] = {
   0.01832186,
   0.006542714,
   0.01378213,
   0.009067074,
   0.02414395,
   0.02549718,
   0.04804818,
   0.02019231,
   0.05579873,
   0.02446557,
   0.01137705,
   0.007165288,
   0.09379747,
   0.008785497,
   0.007790237,
   0.01686852,
   0.0132435,
   0.011798,
   0.0239326,
   0.01199407,
   0.009912074,
   0.0102431,
   0.01344462,
   0.002694953,
   0.04605105,
   0.02248096,
   0.003236977,
   0.02200006,
   0.05374036,
   0.01397552,
   0.02258227,
   0.03420015,
   0.005964428,
   0.01474582,
   0.01764974,
   0.005570247,
   0.02040811,
   0.01580873,
   0.1119683,
   0.03676764,
   0.01909363,
   0.01420781,
   0.01360714,
   0.0148126,
   0.01493951,
   0.03007169,
   0.00726032,
   0.02518876,
   0.01110994,
   0.02146805,
   0.04583631};
   gre = new TGraphErrors(51,Graph_fx1026,Graph_fy1026,Graph_fex1026,Graph_fey1026);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#de0b1d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1026 = new TH1F("Graph_Graph1026","Graph",100,296983.5,297793.5);
   Graph_Graph1026->SetMinimum(0.0069683);
   Graph_Graph1026->SetMaximum(0.6302136);
   Graph_Graph1026->SetDirectory(0);
   Graph_Graph1026->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1026->SetLineColor(ci);
   Graph_Graph1026->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1026->GetXaxis()->SetNoExponent();
   Graph_Graph1026->GetXaxis()->SetLabelFont(42);
   Graph_Graph1026->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1026->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1026->GetXaxis()->SetTitleFont(42);
   Graph_Graph1026->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1026->GetYaxis()->SetLabelFont(42);
   Graph_Graph1026->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1026->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1026->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1026->GetYaxis()->SetTitleFont(42);
   Graph_Graph1026->GetZaxis()->SetLabelFont(42);
   Graph_Graph1026->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1026->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1026->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1026);
   
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
   TLatex *   tex = new TLatex(0.685,0.94,"cosmic rays (2017)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03717);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23,0.83,"TEC-");
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
   Canvas12->Modified();
   Canvas12->cd();
   Canvas12->SetSelected(Canvas12);
}
