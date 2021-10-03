void track_rate_TIB()
{
//=========Macro generated from canvas: Canvas5/Canvas5
//=========  (Thu Jun 24 11:10:45 2021) by ROOT version6.10/04
   TCanvas *Canvas5 = new TCanvas("Canvas5", "Canvas5",604,112,856,836);
   gStyle->SetOptStat(0);
   Canvas5->Range(297790.9,0.8787043,298440.2,2.163845);
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
   
   Double_t Graph_fx1011[29] = {
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
   Double_t Graph_fy1011[29] = {
   1.2052,
   1.27503,
   1.189717,
   1.199415,
   1.2704,
   1.195123,
   1.18405,
   1.290536,
   1.217727,
   1.230733,
   1.288562,
   1.214376,
   1.207306,
   1.201194,
   1.212514,
   1.265993,
   1.224023,
   1.228678,
   1.233319,
   1.215803,
   1.118416,
   1.740176,
   1.343151,
   1.288716,
   1.222432,
   1.220668,
   1.236044,
   1.385501,
   1.209123};
   Double_t Graph_fex1011[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_fey1011[29] = {
   0.0496594,
   0.01820915,
   0.01824513,
   0.02457529,
   0.03192,
   0.04569665,
   0.005385051,
   0.03216304,
   0.009230503,
   0.04118492,
   0.02992613,
   0.01588676,
   0.02208281,
   0.04839749,
   0.006308338,
   0.09307769,
   0.01123761,
   0.01434722,
   0.04837476,
   0.03901698,
   0.02765951,
   0.2653743,
   0.101824,
   0.04013542,
   0.01802182,
   0.006581021,
   0.03390561,
   0.08869759,
   0.02891184};
   TGraphErrors *gre = new TGraphErrors(29,Graph_fx1011,Graph_fy1011,Graph_fex1011,Graph_fey1011);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3113ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1011 = new TH1F("Graph_Graph1011","Graph",100,297890.4,298437.6);
   Graph_Graph1011->SetMinimum(0.999277);
   Graph_Graph1011->SetMaximum(2.09703);
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
   
   Double_t Graph_fx1012[51] = {
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
   Double_t Graph_fy1012[51] = {
   0.7800907,
   0.9673116,
   1.126184,
   1.06514,
   1.147931,
   1.226549,
   1.156394,
   1.04708,
   1.021107,
   1.116279,
   1.01093,
   1.085735,
   1.34232,
   0.9675146,
   0.4136317,
   1.071068,
   1.125135,
   1.014201,
   1.097628,
   1.04791,
   1.008427,
   0.9045886,
   1.112486,
   0.02644169,
   1.137321,
   1.017068,
   1.076882,
   0.5126853,
   1.004587,
   1.079762,
   1.041766,
   1.204633,
   1.068089,
   1.005453,
   1.08709,
   1.102026,
   1.108334,
   1.103446,
   1.276346,
   1.092222,
   1.083755,
   1.088942,
   1.062915,
   1.056129,
   1.097599,
   1.122092,
   0.8859421,
   1.097451,
   1.068483,
   1.079113,
   1.067777};
   Double_t Graph_fex1012[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_fey1012[51] = {
   0.03140527,
   0.01135424,
   0.02535395,
   0.01587112,
   0.04013646,
   0.04612911,
   0.08238965,
   0.03411571,
   0.09321391,
   0.03994359,
   0.01925669,
   0.01245997,
   0.2372909,
   0.01541379,
   0.01330838,
   0.03040403,
   0.02334929,
   0.01972393,
   0.04175573,
   0.02189808,
   0.01788261,
   0.01820868,
   0.0231567,
   0.004289408,
   0.07582139,
   0.04010926,
   0.005590138,
   0.0383199,
   0.09622201,
   0.02614965,
   0.0400088,
   0.06920435,
   0.01042497,
   0.02512063,
   0.02926349,
   0.009692285,
   0.0345512,
   0.02839634,
   0.1861742,
   0.06659398,
   0.03260244,
   0.02400392,
   0.02452736,
   0.02616715,
   0.02542946,
   0.05248925,
   0.01241419,
   0.04514312,
   0.01930292,
   0.03916932,
   0.07182647};
   gre = new TGraphErrors(51,Graph_fx1012,Graph_fy1012,Graph_fex1012,Graph_fey1012);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#de0b1d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1012 = new TH1F("Graph_Graph1012","Graph",100,296983.5,297793.5);
   Graph_Graph1012->SetMinimum(0.01993705);
   Graph_Graph1012->SetMaximum(1.735357);
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
   TLatex *   tex = new TLatex(0.685,0.94,"cosmic rays (2017)");
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
