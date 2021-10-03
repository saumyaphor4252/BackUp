void TEC1M_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug  3 18:11:32 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(343311.3,-0.05397276,344128.7,0.3630893);
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
   multigraph->SetName("track rate TEC1-");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1241[2] = {
   343772,
   343774};
   Double_t Graph_fy1241[2] = {
   0.1422856,
   0.154384};
   Double_t Graph_fex1241[2] = {
   0,
   0};
   Double_t Graph_fey1241[2] = {
   0.01003605,
   0.001974743};
   TGraphErrors *gre = new TGraphErrors(2,Graph_fx1241,Graph_fy1241,Graph_fex1241,Graph_fey1241);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f5601b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1241 = new TH1F("Graph_Graph1241","",100,343771.8,343774.2);
   Graph_Graph1241->SetMinimum(0.1298387);
   Graph_Graph1241->SetMaximum(0.1587696);
   Graph_Graph1241->SetDirectory(0);
   Graph_Graph1241->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1241->SetLineColor(ci);
   Graph_Graph1241->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1241->GetXaxis()->SetNoExponent();
   Graph_Graph1241->GetXaxis()->SetNdivisions(5);
   Graph_Graph1241->GetXaxis()->SetLabelFont(42);
   Graph_Graph1241->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1241->GetXaxis()->SetTitleFont(42);
   Graph_Graph1241->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1241->GetYaxis()->SetLabelFont(42);
   Graph_Graph1241->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1241->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1241->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1241->GetYaxis()->SetTitleFont(42);
   Graph_Graph1241->GetZaxis()->SetLabelFont(42);
   Graph_Graph1241->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1241->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1241->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1241);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1242[9] = {
   343854,
   343860,
   343862,
   343864,
   343866,
   343932,
   343934,
   343936,
   343937};
   Double_t Graph_fy1242[9] = {
   0.02086838,
   0.1665462,
   0.1936835,
   0.1843851,
   0.03392448,
   0.001418555,
   0.1813786,
   0.186815,
   0.1928982};
   Double_t Graph_fex1242[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1242[9] = {
   0.009332621,
   0.01227795,
   0.002238704,
   0.006149587,
   0.007073744,
   0.001418555,
   0.008777524,
   0.004576929,
   0.002219127};
   gre = new TGraphErrors(9,Graph_fx1242,Graph_fy1242,Graph_fex1242,Graph_fey1242);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#196f3d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1242 = new TH1F("Graph_Graph1242","",100,343845.7,343945.3);
   Graph_Graph1242->SetMinimum(0);
   Graph_Graph1242->SetMaximum(0.2155144);
   Graph_Graph1242->SetDirectory(0);
   Graph_Graph1242->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1242->SetLineColor(ci);
   Graph_Graph1242->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1242->GetXaxis()->SetNoExponent();
   Graph_Graph1242->GetXaxis()->SetNdivisions(5);
   Graph_Graph1242->GetXaxis()->SetLabelFont(42);
   Graph_Graph1242->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1242->GetXaxis()->SetTitleFont(42);
   Graph_Graph1242->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1242->GetYaxis()->SetLabelFont(42);
   Graph_Graph1242->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1242->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1242->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1242->GetYaxis()->SetTitleFont(42);
   Graph_Graph1242->GetZaxis()->SetLabelFont(42);
   Graph_Graph1242->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1242->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1242->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1242);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1243[5] = {
   343644,
   343648,
   343650,
   343652,
   343663};
   Double_t Graph_fy1243[5] = {
   0.1505652,
   0.1597156,
   0.2232163,
   0.2573505,
   0.1386979};
   Double_t Graph_fex1243[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1243[5] = {
   0.003596115,
   0.006221637,
   0.07891887,
   0.05366128,
   0.01430559};
   gre = new TGraphErrors(5,Graph_fx1243,Graph_fy1243,Graph_fex1243,Graph_fey1243);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e317ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1243 = new TH1F("Graph_Graph1243","",100,343642.1,343664.9);
   Graph_Graph1243->SetMinimum(0.1057303);
   Graph_Graph1243->SetMaximum(0.3296737);
   Graph_Graph1243->SetDirectory(0);
   Graph_Graph1243->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1243->SetLineColor(ci);
   Graph_Graph1243->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1243->GetXaxis()->SetNoExponent();
   Graph_Graph1243->GetXaxis()->SetNdivisions(5);
   Graph_Graph1243->GetXaxis()->SetLabelFont(42);
   Graph_Graph1243->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1243->GetXaxis()->SetTitleFont(42);
   Graph_Graph1243->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1243->GetYaxis()->SetLabelFont(42);
   Graph_Graph1243->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1243->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1243->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1243->GetYaxis()->SetTitleFont(42);
   Graph_Graph1243->GetZaxis()->SetLabelFont(42);
   Graph_Graph1243->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1243->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1243->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1243);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1244[5] = {
   343638,
   343668,
   343673,
   343677,
   343680};
   Double_t Graph_fy1244[5] = {
   0.1578448,
   0.1585966,
   0.03002686,
   0.1572295,
   0.1548327};
   Double_t Graph_fex1244[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1244[5] = {
   0.004478881,
   0.005186663,
   0.008025015,
   0.002811258,
   0.002346219};
   gre = new TGraphErrors(5,Graph_fx1244,Graph_fy1244,Graph_fex1244,Graph_fey1244);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0bf9f4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1244 = new TH1F("Graph_Graph1244","",100,343633.8,343684.2);
   Graph_Graph1244->SetMinimum(0.0078237);
   Graph_Graph1244->SetMaximum(0.1779614);
   Graph_Graph1244->SetDirectory(0);
   Graph_Graph1244->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1244->SetLineColor(ci);
   Graph_Graph1244->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1244->GetXaxis()->SetNoExponent();
   Graph_Graph1244->GetXaxis()->SetNdivisions(5);
   Graph_Graph1244->GetXaxis()->SetLabelFont(42);
   Graph_Graph1244->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1244->GetXaxis()->SetTitleFont(42);
   Graph_Graph1244->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1244->GetYaxis()->SetLabelFont(42);
   Graph_Graph1244->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1244->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1244->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1244->GetYaxis()->SetTitleFont(42);
   Graph_Graph1244->GetZaxis()->SetLabelFont(42);
   Graph_Graph1244->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1244->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1244->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1244);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1245[2] = {
   343640,
   343642};
   Double_t Graph_fy1245[2] = {
   0.1359908,
   0.1506288};
   Double_t Graph_fex1245[2] = {
   0,
   0};
   Double_t Graph_fey1245[2] = {
   0.003940521,
   0.001870192};
   gre = new TGraphErrors(2,Graph_fx1245,Graph_fy1245,Graph_fex1245,Graph_fey1245);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2cf90b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1245 = new TH1F("Graph_Graph1245","",100,343639.8,343642.2);
   Graph_Graph1245->SetMinimum(0.1300054);
   Graph_Graph1245->SetMaximum(0.1545439);
   Graph_Graph1245->SetDirectory(0);
   Graph_Graph1245->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1245->SetLineColor(ci);
   Graph_Graph1245->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1245->GetXaxis()->SetNoExponent();
   Graph_Graph1245->GetXaxis()->SetNdivisions(5);
   Graph_Graph1245->GetXaxis()->SetLabelFont(42);
   Graph_Graph1245->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1245->GetXaxis()->SetTitleFont(42);
   Graph_Graph1245->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1245->GetYaxis()->SetLabelFont(42);
   Graph_Graph1245->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1245->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1245->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1245->GetYaxis()->SetTitleFont(42);
   Graph_Graph1245->GetZaxis()->SetLabelFont(42);
   Graph_Graph1245->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1245->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1245->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1245);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1246[4] = {
   343623,
   343625,
   343627,
   343629};
   Double_t Graph_fy1246[4] = {
   0.156307,
   0.1530181,
   0.1379245,
   0.2024472};
   Double_t Graph_fex1246[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1246[4] = {
   0.007997362,
   0.002576193,
   0.02875925,
   0.05614875};
   gre = new TGraphErrors(4,Graph_fx1246,Graph_fy1246,Graph_fex1246,Graph_fey1246);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#f90b28");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1246 = new TH1F("Graph_Graph1246","",100,343622.4,343629.6);
   Graph_Graph1246->SetMinimum(0.0942222);
   Graph_Graph1246->SetMaximum(0.273539);
   Graph_Graph1246->SetDirectory(0);
   Graph_Graph1246->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1246->SetLineColor(ci);
   Graph_Graph1246->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1246->GetXaxis()->SetNoExponent();
   Graph_Graph1246->GetXaxis()->SetNdivisions(5);
   Graph_Graph1246->GetXaxis()->SetLabelFont(42);
   Graph_Graph1246->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1246->GetXaxis()->SetTitleFont(42);
   Graph_Graph1246->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1246->GetYaxis()->SetLabelFont(42);
   Graph_Graph1246->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1246->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1246->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1246->GetYaxis()->SetTitleFont(42);
   Graph_Graph1246->GetZaxis()->SetLabelFont(42);
   Graph_Graph1246->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1246->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1246->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1246);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1247[2] = {
   343619,
   343621};
   Double_t Graph_fy1247[2] = {
   0.1562628,
   0.15174};
   Double_t Graph_fex1247[2] = {
   0,
   0};
   Double_t Graph_fey1247[2] = {
   0.002562718,
   0.003401524};
   gre = new TGraphErrors(2,Graph_fx1247,Graph_fy1247,Graph_fex1247,Graph_fey1247);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#1b38f5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1247 = new TH1F("Graph_Graph1247","",100,343618.8,343621.2);
   Graph_Graph1247->SetMinimum(0.1472898);
   Graph_Graph1247->SetMaximum(0.1598742);
   Graph_Graph1247->SetDirectory(0);
   Graph_Graph1247->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1247->SetLineColor(ci);
   Graph_Graph1247->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1247->GetXaxis()->SetNoExponent();
   Graph_Graph1247->GetXaxis()->SetNdivisions(5);
   Graph_Graph1247->GetXaxis()->SetLabelFont(42);
   Graph_Graph1247->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1247->GetXaxis()->SetTitleFont(42);
   Graph_Graph1247->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1247->GetYaxis()->SetLabelFont(42);
   Graph_Graph1247->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1247->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1247->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1247->GetYaxis()->SetTitleFont(42);
   Graph_Graph1247->GetZaxis()->SetLabelFont(42);
   Graph_Graph1247->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1247->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1247->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1247);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1248[4] = {
   343494,
   343496,
   343498,
   343501};
   Double_t Graph_fy1248[4] = {
   0.1560547,
   0.1764718,
   0.1729582,
   0.1664164};
   Double_t Graph_fex1248[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1248[4] = {
   0.01056936,
   0.004263797,
   0.002384326,
   0.02480789};
   gre = new TGraphErrors(4,Graph_fx1248,Graph_fy1248,Graph_fex1248,Graph_fey1248);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffc300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1248 = new TH1F("Graph_Graph1248","",100,343493.3,343501.7);
   Graph_Graph1248->SetMinimum(0.1366469);
   Graph_Graph1248->SetMaximum(0.1961859);
   Graph_Graph1248->SetDirectory(0);
   Graph_Graph1248->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1248->SetLineColor(ci);
   Graph_Graph1248->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1248->GetXaxis()->SetNoExponent();
   Graph_Graph1248->GetXaxis()->SetNdivisions(5);
   Graph_Graph1248->GetXaxis()->SetLabelFont(42);
   Graph_Graph1248->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1248->GetXaxis()->SetTitleFont(42);
   Graph_Graph1248->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1248->GetYaxis()->SetLabelFont(42);
   Graph_Graph1248->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1248->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1248->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1248->GetYaxis()->SetTitleFont(42);
   Graph_Graph1248->GetZaxis()->SetLabelFont(42);
   Graph_Graph1248->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1248->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1248->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1248);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1249[1] = {
   344068};
   Double_t Graph_fy1249[1] = {
   0.1890537};
   Double_t Graph_fex1249[1] = {
   0};
   Double_t Graph_fey1249[1] = {
   0.002317105};
   gre = new TGraphErrors(1,Graph_fx1249,Graph_fy1249,Graph_fex1249,Graph_fey1249);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1249 = new TH1F("Graph_Graph1249","",100,344067.9,344069.1);
   Graph_Graph1249->SetMinimum(0.1862731);
   Graph_Graph1249->SetMaximum(0.1918342);
   Graph_Graph1249->SetDirectory(0);
   Graph_Graph1249->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1249->SetLineColor(ci);
   Graph_Graph1249->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1249->GetXaxis()->SetNoExponent();
   Graph_Graph1249->GetXaxis()->SetNdivisions(5);
   Graph_Graph1249->GetXaxis()->SetLabelFont(42);
   Graph_Graph1249->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1249->GetXaxis()->SetTitleFont(42);
   Graph_Graph1249->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1249->GetYaxis()->SetLabelFont(42);
   Graph_Graph1249->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1249->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1249->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1249->GetYaxis()->SetTitleFont(42);
   Graph_Graph1249->GetZaxis()->SetLabelFont(42);
   Graph_Graph1249->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1249->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1249->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1249);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1250[6] = {
   344058,
   344062,
   344063,
   344064,
   344065,
   344067};
   Double_t Graph_fy1250[6] = {
   0.0007450717,
   0.1783437,
   0.1905141,
   0.1896481,
   0.1905501,
   0.1851861};
   Double_t Graph_fex1250[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1250[6] = {
   0.0005268452,
   0.01765866,
   0.001593661,
   0.001487264,
   0.007591698,
   0.003283421};
   gre = new TGraphErrors(6,Graph_fx1250,Graph_fy1250,Graph_fex1250,Graph_fey1250);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2fa4e1");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1250 = new TH1F("Graph_Graph1250","",100,344057.1,344067.9);
   Graph_Graph1250->SetMinimum(0.0001964038);
   Graph_Graph1250->SetMaximum(0.2179342);
   Graph_Graph1250->SetDirectory(0);
   Graph_Graph1250->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1250->SetLineColor(ci);
   Graph_Graph1250->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1250->GetXaxis()->SetNoExponent();
   Graph_Graph1250->GetXaxis()->SetNdivisions(5);
   Graph_Graph1250->GetXaxis()->SetLabelFont(42);
   Graph_Graph1250->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1250->GetXaxis()->SetTitleFont(42);
   Graph_Graph1250->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1250->GetYaxis()->SetLabelFont(42);
   Graph_Graph1250->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1250->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1250->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1250->GetYaxis()->SetTitleFont(42);
   Graph_Graph1250->GetZaxis()->SetLabelFont(42);
   Graph_Graph1250->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1250->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1250->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1250);
   
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
      tex = new TLatex(0.23,0.83,"TEC 1-");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
