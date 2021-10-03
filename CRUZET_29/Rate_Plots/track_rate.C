void track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug  3 18:11:25 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(343311.3,-0.6036754,344128.7,4.061087);
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
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("track rate");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1011[2] = {
   343772,
   343774};
   Double_t Graph_fy1011[2] = {
   1.928997,
   2.256931};
   Double_t Graph_fex1011[2] = {
   0,
   0};
   Double_t Graph_fey1011[2] = {
   0.03695287,
   0.007550376};
   TGraphErrors *gre = new TGraphErrors(2,Graph_fx1011,Graph_fy1011,Graph_fex1011,Graph_fey1011);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f5601b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1011 = new TH1F("Graph_Graph1011","",100,343771.8,343774.2);
   Graph_Graph1011->SetMinimum(1.8548);
   Graph_Graph1011->SetMaximum(2.301725);
   Graph_Graph1011->SetDirectory(0);
   Graph_Graph1011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1011->SetLineColor(ci);
   Graph_Graph1011->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1011->GetXaxis()->SetNoExponent();
   Graph_Graph1011->GetXaxis()->SetNdivisions(5);
   Graph_Graph1011->GetXaxis()->SetLabelFont(42);
   Graph_Graph1011->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1011->GetXaxis()->SetTitleFont(42);
   Graph_Graph1011->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1011->GetYaxis()->SetLabelFont(42);
   Graph_Graph1011->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1011->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1011->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1011->GetYaxis()->SetTitleFont(42);
   Graph_Graph1011->GetZaxis()->SetLabelFont(42);
   Graph_Graph1011->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1011->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1011);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1012[9] = {
   343854,
   343860,
   343862,
   343864,
   343866,
   343932,
   343934,
   343936,
   343937};
   Double_t Graph_fy1012[9] = {
   0.1085156,
   2.725384,
   2.665794,
   2.690505,
   0.1253731,
   0.00567422,
   2.561813,
   2.652077,
   2.679972};
   Double_t Graph_fex1012[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1012[9] = {
   0.02128165,
   0.0496675,
   0.008305459,
   0.02349091,
   0.01359862,
   0.00283711,
   0.03298775,
   0.01724493,
   0.008271481};
   gre = new TGraphErrors(9,Graph_fx1012,Graph_fy1012,Graph_fex1012,Graph_fey1012);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#196f3d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1012 = new TH1F("Graph_Graph1012","",100,343845.7,343945.3);
   Graph_Graph1012->SetMinimum(0.002553399);
   Graph_Graph1012->SetMaximum(3.052273);
   Graph_Graph1012->SetDirectory(0);
   Graph_Graph1012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1012->SetLineColor(ci);
   Graph_Graph1012->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1012->GetXaxis()->SetNoExponent();
   Graph_Graph1012->GetXaxis()->SetNdivisions(5);
   Graph_Graph1012->GetXaxis()->SetLabelFont(42);
   Graph_Graph1012->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1012->GetXaxis()->SetTitleFont(42);
   Graph_Graph1012->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1012->GetYaxis()->SetLabelFont(42);
   Graph_Graph1012->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1012->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1012->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1012->GetYaxis()->SetTitleFont(42);
   Graph_Graph1012->GetZaxis()->SetLabelFont(42);
   Graph_Graph1012->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1012->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1012);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1013[5] = {
   343644,
   343648,
   343650,
   343652,
   343663};
   Double_t Graph_fy1013[5] = {
   2.264404,
   2.213964,
   3.180832,
   2.64064,
   2.166048};
   Double_t Graph_fex1013[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1013[5] = {
   0.01394596,
   0.02316414,
   0.2979122,
   0.171891,
   0.05653338};
   gre = new TGraphErrors(5,Graph_fx1013,Graph_fy1013,Graph_fex1013,Graph_fey1013);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e317ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1013 = new TH1F("Graph_Graph1013","",100,343642.1,343664.9);
   Graph_Graph1013->SetMinimum(1.972591);
   Graph_Graph1013->SetMaximum(3.615667);
   Graph_Graph1013->SetDirectory(0);
   Graph_Graph1013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1013->SetLineColor(ci);
   Graph_Graph1013->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1013->GetXaxis()->SetNoExponent();
   Graph_Graph1013->GetXaxis()->SetNdivisions(5);
   Graph_Graph1013->GetXaxis()->SetLabelFont(42);
   Graph_Graph1013->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1013->GetXaxis()->SetTitleFont(42);
   Graph_Graph1013->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1013->GetYaxis()->SetLabelFont(42);
   Graph_Graph1013->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1013->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1013->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1013->GetYaxis()->SetTitleFont(42);
   Graph_Graph1013->GetZaxis()->SetLabelFont(42);
   Graph_Graph1013->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1013->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1013);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1014[5] = {
   343638,
   343668,
   343673,
   343677,
   343680};
   Double_t Graph_fy1014[5] = {
   2.246302,
   2.265472,
   0.1029492,
   2.272439,
   2.254229};
   Double_t Graph_fex1014[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1014[5] = {
   0.01689618,
   0.0196029,
   0.01485944,
   0.01068759,
   0.008952333};
   gre = new TGraphErrors(5,Graph_fx1014,Graph_fy1014,Graph_fex1014,Graph_fey1014);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0bf9f4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1014 = new TH1F("Graph_Graph1014","",100,343633.8,343684.2);
   Graph_Graph1014->SetMinimum(0.0792808);
   Graph_Graph1014->SetMaximum(2.504773);
   Graph_Graph1014->SetDirectory(0);
   Graph_Graph1014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1014->SetLineColor(ci);
   Graph_Graph1014->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1014->GetXaxis()->SetNoExponent();
   Graph_Graph1014->GetXaxis()->SetNdivisions(5);
   Graph_Graph1014->GetXaxis()->SetLabelFont(42);
   Graph_Graph1014->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1014->GetXaxis()->SetTitleFont(42);
   Graph_Graph1014->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1014->GetYaxis()->SetLabelFont(42);
   Graph_Graph1014->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1014->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1014->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1014->GetYaxis()->SetTitleFont(42);
   Graph_Graph1014->GetZaxis()->SetLabelFont(42);
   Graph_Graph1014->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1014->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1014);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1015[2] = {
   343640,
   343642};
   Double_t Graph_fy1015[2] = {
   1.920313,
   2.270555};
   Double_t Graph_fex1015[2] = {
   0,
   0};
   Double_t Graph_fey1015[2] = {
   0.01480761,
   0.007261027};
   gre = new TGraphErrors(2,Graph_fx1015,Graph_fy1015,Graph_fex1015,Graph_fey1015);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2cf90b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1015 = new TH1F("Graph_Graph1015","",100,343639.8,343642.2);
   Graph_Graph1015->SetMinimum(1.868275);
   Graph_Graph1015->SetMaximum(2.315047);
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
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1016[4] = {
   343623,
   343625,
   343627,
   343629};
   Double_t Graph_fy1016[4] = {
   2.297959,
   2.242183,
   2.260763,
   3.145718};
   Double_t Graph_fex1016[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1016[4] = {
   0.03066399,
   0.009861492,
   0.1164352,
   0.221332};
   gre = new TGraphErrors(4,Graph_fx1016,Graph_fy1016,Graph_fex1016,Graph_fey1016);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#f90b28");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1016 = new TH1F("Graph_Graph1016","",100,343622.4,343629.6);
   Graph_Graph1016->SetMinimum(2.022055);
   Graph_Graph1016->SetMaximum(3.489322);
   Graph_Graph1016->SetDirectory(0);
   Graph_Graph1016->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1016->SetLineColor(ci);
   Graph_Graph1016->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1016->GetXaxis()->SetNoExponent();
   Graph_Graph1016->GetXaxis()->SetNdivisions(5);
   Graph_Graph1016->GetXaxis()->SetLabelFont(42);
   Graph_Graph1016->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1016->GetXaxis()->SetTitleFont(42);
   Graph_Graph1016->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1016->GetYaxis()->SetLabelFont(42);
   Graph_Graph1016->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1016->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1016->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1016->GetYaxis()->SetTitleFont(42);
   Graph_Graph1016->GetZaxis()->SetLabelFont(42);
   Graph_Graph1016->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1016->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1016);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1017[2] = {
   343619,
   343621};
   Double_t Graph_fy1017[2] = {
   2.258413,
   2.271677};
   Double_t Graph_fex1017[2] = {
   0,
   0};
   Double_t Graph_fey1017[2] = {
   0.009742598,
   0.01316124};
   gre = new TGraphErrors(2,Graph_fx1017,Graph_fy1017,Graph_fex1017,Graph_fey1017);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#1b38f5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1017 = new TH1F("Graph_Graph1017","",100,343618.8,343621.2);
   Graph_Graph1017->SetMinimum(2.245054);
   Graph_Graph1017->SetMaximum(2.288455);
   Graph_Graph1017->SetDirectory(0);
   Graph_Graph1017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1017->SetLineColor(ci);
   Graph_Graph1017->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1017->GetXaxis()->SetNoExponent();
   Graph_Graph1017->GetXaxis()->SetNdivisions(5);
   Graph_Graph1017->GetXaxis()->SetLabelFont(42);
   Graph_Graph1017->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1017->GetXaxis()->SetTitleFont(42);
   Graph_Graph1017->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1017->GetYaxis()->SetLabelFont(42);
   Graph_Graph1017->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1017->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1017->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1017->GetYaxis()->SetTitleFont(42);
   Graph_Graph1017->GetZaxis()->SetLabelFont(42);
   Graph_Graph1017->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1017->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1017);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1018[4] = {
   343494,
   343496,
   343498,
   343501};
   Double_t Graph_fy1018[4] = {
   2.584209,
   2.636671,
   2.611859,
   2.74772};
   Double_t Graph_fex1018[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1018[4] = {
   0.04301045,
   0.01648113,
   0.009265525,
   0.1008041};
   gre = new TGraphErrors(4,Graph_fx1018,Graph_fy1018,Graph_fex1018,Graph_fey1018);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffc300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1018 = new TH1F("Graph_Graph1018","",100,343493.3,343501.7);
   Graph_Graph1018->SetMinimum(2.510466);
   Graph_Graph1018->SetMaximum(2.879257);
   Graph_Graph1018->SetDirectory(0);
   Graph_Graph1018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1018->SetLineColor(ci);
   Graph_Graph1018->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1018->GetXaxis()->SetNoExponent();
   Graph_Graph1018->GetXaxis()->SetNdivisions(5);
   Graph_Graph1018->GetXaxis()->SetLabelFont(42);
   Graph_Graph1018->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1018->GetXaxis()->SetTitleFont(42);
   Graph_Graph1018->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1018->GetYaxis()->SetLabelFont(42);
   Graph_Graph1018->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1018->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1018->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1018->GetYaxis()->SetTitleFont(42);
   Graph_Graph1018->GetZaxis()->SetLabelFont(42);
   Graph_Graph1018->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1018->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1018);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1019[1] = {
   344068};
   Double_t Graph_fy1019[1] = {
   2.698835};
   Double_t Graph_fex1019[1] = {
   0};
   Double_t Graph_fey1019[1] = {
   0.008754704};
   gre = new TGraphErrors(1,Graph_fx1019,Graph_fy1019,Graph_fex1019,Graph_fey1019);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1019 = new TH1F("Graph_Graph1019","",100,344067.9,344069.1);
   Graph_Graph1019->SetMinimum(2.68833);
   Graph_Graph1019->SetMaximum(2.709341);
   Graph_Graph1019->SetDirectory(0);
   Graph_Graph1019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1019->SetLineColor(ci);
   Graph_Graph1019->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1019->GetXaxis()->SetNoExponent();
   Graph_Graph1019->GetXaxis()->SetNdivisions(5);
   Graph_Graph1019->GetXaxis()->SetLabelFont(42);
   Graph_Graph1019->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1019->GetXaxis()->SetTitleFont(42);
   Graph_Graph1019->GetYaxis()->SetTitle("Track Rate (Hz)");
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
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1020[6] = {
   344058,
   344062,
   344063,
   344064,
   344065,
   344067};
   Double_t Graph_fy1020[6] = {
   0.004097894,
   2.739849,
   2.681035,
   2.693936,
   2.687059,
   2.68645};
   Double_t Graph_fex1020[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1020[6] = {
   0.001235562,
   0.06921372,
   0.00597838,
   0.005605413,
   0.02850841,
   0.01250581};
   gre = new TGraphErrors(6,Graph_fx1020,Graph_fy1020,Graph_fex1020,Graph_fey1020);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2fa4e1");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1020 = new TH1F("Graph_Graph1020","",100,344057.1,344067.9);
   Graph_Graph1020->SetMinimum(0.002576099);
   Graph_Graph1020->SetMaximum(3.089683);
   Graph_Graph1020->SetDirectory(0);
   Graph_Graph1020->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1020->SetLineColor(ci);
   Graph_Graph1020->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1020->GetXaxis()->SetNoExponent();
   Graph_Graph1020->GetXaxis()->SetNdivisions(5);
   Graph_Graph1020->GetXaxis()->SetLabelFont(42);
   Graph_Graph1020->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1020->GetXaxis()->SetTitleFont(42);
   Graph_Graph1020->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1020->GetYaxis()->SetLabelFont(42);
   Graph_Graph1020->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1020->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1020->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1020->GetYaxis()->SetTitleFont(42);
   Graph_Graph1020->GetZaxis()->SetLabelFont(42);
   Graph_Graph1020->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1020->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1020);
   
   multigraph->Add(gre,"");
   multigraph->Draw("AP");
   multigraph->GetXaxis()->SetTitle("Run Number");
   multigraph->GetXaxis()->SetNoExponent();
   multigraph->GetXaxis()->SetNdivisions(5);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleSize(0.05);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("Track Rate (Hz)");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.05);
   multigraph->GetYaxis()->SetTitleSize(0.05);
   multigraph->GetYaxis()->SetTitleOffset(0);
   multigraph->GetYaxis()->SetTitleFont(42);
   TLatex *   tex = new TLatex(0.64,0.94,"0T cosmic rays (2021)");
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
