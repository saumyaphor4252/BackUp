void TEC2M_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug  3 18:11:33 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(343311.3,-0.0561148,344128.7,0.3774995);
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
   multigraph->SetName("track rate TEC2-");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1271[2] = {
   343772,
   343774};
   Double_t Graph_fy1271[2] = {
   0.1160937,
   0.1380666};
   Double_t Graph_fex1271[2] = {
   0,
   0};
   Double_t Graph_fey1271[2] = {
   0.009065398,
   0.00186747};
   TGraphErrors *gre = new TGraphErrors(2,Graph_fx1271,Graph_fy1271,Graph_fex1271,Graph_fey1271);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f5601b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1271 = new TH1F("Graph_Graph1271","",100,343771.8,343774.2);
   Graph_Graph1271->SetMinimum(0.1037378);
   Graph_Graph1271->SetMaximum(0.1432246);
   Graph_Graph1271->SetDirectory(0);
   Graph_Graph1271->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1271->SetLineColor(ci);
   Graph_Graph1271->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1271->GetXaxis()->SetNoExponent();
   Graph_Graph1271->GetXaxis()->SetNdivisions(5);
   Graph_Graph1271->GetXaxis()->SetLabelFont(42);
   Graph_Graph1271->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1271->GetXaxis()->SetTitleFont(42);
   Graph_Graph1271->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1271->GetYaxis()->SetLabelFont(42);
   Graph_Graph1271->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1271->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1271->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1271->GetYaxis()->SetTitleFont(42);
   Graph_Graph1271->GetZaxis()->SetLabelFont(42);
   Graph_Graph1271->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1271->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1271->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1271);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1272[9] = {
   343854,
   343860,
   343862,
   343864,
   343866,
   343932,
   343934,
   343936,
   343937};
   Double_t Graph_fy1272[9] = {
   0.00834735,
   0.1593051,
   0.1730343,
   0.169823,
   0.03097453,
   0.001418555,
   0.1622637,
   0.1696585,
   0.1723728};
   Double_t Graph_fex1272[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1272[9] = {
   0.005902468,
   0.01200807,
   0.002116004,
   0.005901757,
   0.006759196,
   0.001418555,
   0.008302135,
   0.004361704,
   0.002097744};
   gre = new TGraphErrors(9,Graph_fx1272,Graph_fy1272,Graph_fex1272,Graph_fey1272);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#196f3d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1272 = new TH1F("Graph_Graph1272","",100,343845.7,343945.3);
   Graph_Graph1272->SetMinimum(0);
   Graph_Graph1272->SetMaximum(0.1932972);
   Graph_Graph1272->SetDirectory(0);
   Graph_Graph1272->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1272->SetLineColor(ci);
   Graph_Graph1272->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1272->GetXaxis()->SetNoExponent();
   Graph_Graph1272->GetXaxis()->SetNdivisions(5);
   Graph_Graph1272->GetXaxis()->SetLabelFont(42);
   Graph_Graph1272->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1272->GetXaxis()->SetTitleFont(42);
   Graph_Graph1272->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1272->GetYaxis()->SetLabelFont(42);
   Graph_Graph1272->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1272->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1272->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1272->GetYaxis()->SetTitleFont(42);
   Graph_Graph1272->GetZaxis()->SetLabelFont(42);
   Graph_Graph1272->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1272->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1272->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1272);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1273[5] = {
   343644,
   343648,
   343650,
   343652,
   343663};
   Double_t Graph_fy1273[5] = {
   0.1406878,
   0.1471129,
   0.1674122,
   0.2685396,
   0.1342713};
   Double_t Graph_fex1273[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1273[5] = {
   0.003476159,
   0.005971126,
   0.06834575,
   0.05481542,
   0.01407546};
   gre = new TGraphErrors(5,Graph_fx1273,Graph_fy1273,Graph_fex1273,Graph_fey1273);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e317ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1273 = new TH1F("Graph_Graph1273","",100,343642.1,343664.9);
   Graph_Graph1273->SetMinimum(0.0766376);
   Graph_Graph1273->SetMaximum(0.3457839);
   Graph_Graph1273->SetDirectory(0);
   Graph_Graph1273->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1273->SetLineColor(ci);
   Graph_Graph1273->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1273->GetXaxis()->SetNoExponent();
   Graph_Graph1273->GetXaxis()->SetNdivisions(5);
   Graph_Graph1273->GetXaxis()->SetLabelFont(42);
   Graph_Graph1273->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1273->GetXaxis()->SetTitleFont(42);
   Graph_Graph1273->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1273->GetYaxis()->SetLabelFont(42);
   Graph_Graph1273->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1273->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1273->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1273->GetYaxis()->SetTitleFont(42);
   Graph_Graph1273->GetZaxis()->SetLabelFont(42);
   Graph_Graph1273->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1273->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1273->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1273);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1274[5] = {
   343638,
   343668,
   343673,
   343677,
   343680};
   Double_t Graph_fy1274[5] = {
   0.1425941,
   0.1409559,
   0.02144775,
   0.1412452,
   0.1388339};
   Double_t Graph_fex1274[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1274[5] = {
   0.004257015,
   0.004889706,
   0.006782375,
   0.002664529,
   0.002221698};
   gre = new TGraphErrors(5,Graph_fx1274,Graph_fy1274,Graph_fex1274,Graph_fey1274);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0bf9f4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1274 = new TH1F("Graph_Graph1274","",100,343633.8,343684.2);
   Graph_Graph1274->SetMinimum(0.001446803);
   Graph_Graph1274->SetMaximum(0.1600697);
   Graph_Graph1274->SetDirectory(0);
   Graph_Graph1274->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1274->SetLineColor(ci);
   Graph_Graph1274->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1274->GetXaxis()->SetNoExponent();
   Graph_Graph1274->GetXaxis()->SetNdivisions(5);
   Graph_Graph1274->GetXaxis()->SetLabelFont(42);
   Graph_Graph1274->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1274->GetXaxis()->SetTitleFont(42);
   Graph_Graph1274->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1274->GetYaxis()->SetLabelFont(42);
   Graph_Graph1274->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1274->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1274->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1274->GetYaxis()->SetTitleFont(42);
   Graph_Graph1274->GetZaxis()->SetLabelFont(42);
   Graph_Graph1274->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1274->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1274->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1274);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1275[2] = {
   343640,
   343642};
   Double_t Graph_fy1275[2] = {
   0.1196628,
   0.1346302};
   Double_t Graph_fex1275[2] = {
   0,
   0};
   Double_t Graph_fey1275[2] = {
   0.003696395,
   0.001768085};
   gre = new TGraphErrors(2,Graph_fx1275,Graph_fy1275,Graph_fex1275,Graph_fey1275);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2cf90b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1275 = new TH1F("Graph_Graph1275","",100,343639.8,343642.2);
   Graph_Graph1275->SetMinimum(0.1139232);
   Graph_Graph1275->SetMaximum(0.1384414);
   Graph_Graph1275->SetDirectory(0);
   Graph_Graph1275->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1275->SetLineColor(ci);
   Graph_Graph1275->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1275->GetXaxis()->SetNoExponent();
   Graph_Graph1275->GetXaxis()->SetNdivisions(5);
   Graph_Graph1275->GetXaxis()->SetLabelFont(42);
   Graph_Graph1275->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1275->GetXaxis()->SetTitleFont(42);
   Graph_Graph1275->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1275->GetYaxis()->SetLabelFont(42);
   Graph_Graph1275->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1275->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1275->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1275->GetYaxis()->SetTitleFont(42);
   Graph_Graph1275->GetZaxis()->SetLabelFont(42);
   Graph_Graph1275->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1275->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1275->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1275);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1276[4] = {
   343623,
   343625,
   343627,
   343629};
   Double_t Graph_fy1276[4] = {
   0.1399398,
   0.1383582,
   0.1319278,
   0.2335929};
   Double_t Graph_fex1276[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1276[4] = {
   0.007567077,
   0.002449681,
   0.0281271,
   0.06031344};
   gre = new TGraphErrors(4,Graph_fx1276,Graph_fy1276,Graph_fex1276,Graph_fey1276);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#f90b28");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1276 = new TH1F("Graph_Graph1276","",100,343622.4,343629.6);
   Graph_Graph1276->SetMinimum(0.08479013);
   Graph_Graph1276->SetMaximum(0.3129169);
   Graph_Graph1276->SetDirectory(0);
   Graph_Graph1276->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1276->SetLineColor(ci);
   Graph_Graph1276->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1276->GetXaxis()->SetNoExponent();
   Graph_Graph1276->GetXaxis()->SetNdivisions(5);
   Graph_Graph1276->GetXaxis()->SetLabelFont(42);
   Graph_Graph1276->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1276->GetXaxis()->SetTitleFont(42);
   Graph_Graph1276->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1276->GetYaxis()->SetLabelFont(42);
   Graph_Graph1276->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1276->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1276->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1276->GetYaxis()->SetTitleFont(42);
   Graph_Graph1276->GetZaxis()->SetLabelFont(42);
   Graph_Graph1276->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1276->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1276->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1276);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1277[2] = {
   343619,
   343621};
   Double_t Graph_fy1277[2] = {
   0.1383165,
   0.1349647};
   Double_t Graph_fex1277[2] = {
   0,
   0};
   Double_t Graph_fey1277[2] = {
   0.002411072,
   0.003207994};
   gre = new TGraphErrors(2,Graph_fx1277,Graph_fy1277,Graph_fex1277,Graph_fey1277);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#1b38f5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1277 = new TH1F("Graph_Graph1277","",100,343618.8,343621.2);
   Graph_Graph1277->SetMinimum(0.1308596);
   Graph_Graph1277->SetMaximum(0.1416247);
   Graph_Graph1277->SetDirectory(0);
   Graph_Graph1277->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1277->SetLineColor(ci);
   Graph_Graph1277->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1277->GetXaxis()->SetNoExponent();
   Graph_Graph1277->GetXaxis()->SetNdivisions(5);
   Graph_Graph1277->GetXaxis()->SetLabelFont(42);
   Graph_Graph1277->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1277->GetXaxis()->SetTitleFont(42);
   Graph_Graph1277->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1277->GetYaxis()->SetLabelFont(42);
   Graph_Graph1277->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1277->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1277->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1277->GetYaxis()->SetTitleFont(42);
   Graph_Graph1277->GetZaxis()->SetLabelFont(42);
   Graph_Graph1277->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1277->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1277->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1277);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1278[4] = {
   343494,
   343496,
   343498,
   343501};
   Double_t Graph_fy1278[4] = {
   0.1438853,
   0.1579283,
   0.155143,
   0.1775108};
   Double_t Graph_fex1278[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1278[4] = {
   0.01014889,
   0.004033564,
   0.002258194,
   0.02562148};
   gre = new TGraphErrors(4,Graph_fx1278,Graph_fy1278,Graph_fex1278,Graph_fey1278);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffc300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1278 = new TH1F("Graph_Graph1278","",100,343493.3,343501.7);
   Graph_Graph1278->SetMinimum(0.1267968);
   Graph_Graph1278->SetMaximum(0.2100719);
   Graph_Graph1278->SetDirectory(0);
   Graph_Graph1278->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1278->SetLineColor(ci);
   Graph_Graph1278->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1278->GetXaxis()->SetNoExponent();
   Graph_Graph1278->GetXaxis()->SetNdivisions(5);
   Graph_Graph1278->GetXaxis()->SetLabelFont(42);
   Graph_Graph1278->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1278->GetXaxis()->SetTitleFont(42);
   Graph_Graph1278->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1278->GetYaxis()->SetLabelFont(42);
   Graph_Graph1278->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1278->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1278->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1278->GetYaxis()->SetTitleFont(42);
   Graph_Graph1278->GetZaxis()->SetLabelFont(42);
   Graph_Graph1278->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1278->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1278->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1278);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1279[1] = {
   344068};
   Double_t Graph_fy1279[1] = {
   0.1708213};
   Double_t Graph_fex1279[1] = {
   0};
   Double_t Graph_fey1279[1] = {
   0.002202543};
   gre = new TGraphErrors(1,Graph_fx1279,Graph_fy1279,Graph_fex1279,Graph_fey1279);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1279 = new TH1F("Graph_Graph1279","",100,344067.9,344069.1);
   Graph_Graph1279->SetMinimum(0.1681783);
   Graph_Graph1279->SetMaximum(0.1734644);
   Graph_Graph1279->SetDirectory(0);
   Graph_Graph1279->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1279->SetLineColor(ci);
   Graph_Graph1279->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1279->GetXaxis()->SetNoExponent();
   Graph_Graph1279->GetXaxis()->SetNdivisions(5);
   Graph_Graph1279->GetXaxis()->SetLabelFont(42);
   Graph_Graph1279->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1279->GetXaxis()->SetTitleFont(42);
   Graph_Graph1279->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1279->GetYaxis()->SetLabelFont(42);
   Graph_Graph1279->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1279->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1279->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1279->GetYaxis()->SetTitleFont(42);
   Graph_Graph1279->GetZaxis()->SetLabelFont(42);
   Graph_Graph1279->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1279->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1279->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1279);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1280[6] = {
   344058,
   344062,
   344063,
   344064,
   344065,
   344067};
   Double_t Graph_fy1280[6] = {
   0.0007450717,
   0.1486198,
   0.173317,
   0.1725961,
   0.1781492,
   0.167663};
   Double_t Graph_fex1280[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1280[6] = {
   0.0005268452,
   0.01612008,
   0.001520033,
   0.001418827,
   0.007340511,
   0.003124216};
   gre = new TGraphErrors(6,Graph_fx1280,Graph_fy1280,Graph_fex1280,Graph_fey1280);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2fa4e1");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1280 = new TH1F("Graph_Graph1280","",100,344057.1,344067.9);
   Graph_Graph1280->SetMinimum(0.0001964038);
   Graph_Graph1280->SetMaximum(0.2040169);
   Graph_Graph1280->SetDirectory(0);
   Graph_Graph1280->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1280->SetLineColor(ci);
   Graph_Graph1280->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1280->GetXaxis()->SetNoExponent();
   Graph_Graph1280->GetXaxis()->SetNdivisions(5);
   Graph_Graph1280->GetXaxis()->SetLabelFont(42);
   Graph_Graph1280->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1280->GetXaxis()->SetTitleFont(42);
   Graph_Graph1280->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1280->GetYaxis()->SetLabelFont(42);
   Graph_Graph1280->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1280->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1280->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1280->GetYaxis()->SetTitleFont(42);
   Graph_Graph1280->GetZaxis()->SetLabelFont(42);
   Graph_Graph1280->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1280->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1280->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1280);
   
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
      tex = new TLatex(0.23,0.83,"TEC 2-");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
