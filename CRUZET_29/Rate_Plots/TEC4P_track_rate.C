void TEC4P_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug  3 18:11:34 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(343311.3,-0.0355711,344128.7,0.2392964);
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
   multigraph->SetName("track rate TEC4+");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1321[2] = {
   343772,
   343774};
   Double_t Graph_fy1321[2] = {
   0.07645198,
   0.09062986};
   Double_t Graph_fex1321[2] = {
   0,
   0};
   Double_t Graph_fey1321[2] = {
   0.007356594,
   0.001513021};
   TGraphErrors *gre = new TGraphErrors(2,Graph_fx1321,Graph_fy1321,Graph_fex1321,Graph_fey1321);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f5601b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1321 = new TH1F("Graph_Graph1321","",100,343771.8,343774.2);
   Graph_Graph1321->SetMinimum(0.06679063);
   Graph_Graph1321->SetMaximum(0.09444763);
   Graph_Graph1321->SetDirectory(0);
   Graph_Graph1321->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1321->SetLineColor(ci);
   Graph_Graph1321->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1321->GetXaxis()->SetNoExponent();
   Graph_Graph1321->GetXaxis()->SetNdivisions(5);
   Graph_Graph1321->GetXaxis()->SetLabelFont(42);
   Graph_Graph1321->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1321->GetXaxis()->SetTitleFont(42);
   Graph_Graph1321->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1321->GetYaxis()->SetLabelFont(42);
   Graph_Graph1321->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1321->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1321->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1321->GetYaxis()->SetTitleFont(42);
   Graph_Graph1321->GetZaxis()->SetLabelFont(42);
   Graph_Graph1321->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1321->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1321->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1321);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1322[9] = {
   343854,
   343860,
   343862,
   343864,
   343866,
   343932,
   343934,
   343936,
   343937};
   Double_t Graph_fy1322[9] = {
   0.0333894,
   0.1285302,
   0.1177368,
   0.1173173,
   0.03097453,
   0.001418555,
   0.09684851,
   0.118974,
   0.115647};
   Double_t Graph_fex1322[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1322[9] = {
   0.01180494,
   0.01078602,
   0.001745446,
   0.004905283,
   0.006759196,
   0.001418555,
   0.006413949,
   0.003652535,
   0.001718246};
   gre = new TGraphErrors(9,Graph_fx1322,Graph_fy1322,Graph_fex1322,Graph_fey1322);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#196f3d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1322 = new TH1F("Graph_Graph1322","",100,343845.7,343945.3);
   Graph_Graph1322->SetMinimum(0);
   Graph_Graph1322->SetMaximum(0.1532479);
   Graph_Graph1322->SetDirectory(0);
   Graph_Graph1322->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1322->SetLineColor(ci);
   Graph_Graph1322->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1322->GetXaxis()->SetNoExponent();
   Graph_Graph1322->GetXaxis()->SetNdivisions(5);
   Graph_Graph1322->GetXaxis()->SetLabelFont(42);
   Graph_Graph1322->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1322->GetXaxis()->SetTitleFont(42);
   Graph_Graph1322->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1322->GetYaxis()->SetLabelFont(42);
   Graph_Graph1322->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1322->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1322->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1322->GetYaxis()->SetTitleFont(42);
   Graph_Graph1322->GetZaxis()->SetLabelFont(42);
   Graph_Graph1322->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1322->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1322->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1322);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1323[5] = {
   343644,
   343648,
   343650,
   343652,
   343663};
   Double_t Graph_fy1323[5] = {
   0.09439311,
   0.08628036,
   0.1116081,
   0.07832406,
   0.08557954};
   Double_t Graph_fex1323[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1323[5] = {
   0.002847354,
   0.00457285,
   0.05580407,
   0.02960371,
   0.01123714};
   gre = new TGraphErrors(5,Graph_fx1323,Graph_fy1323,Graph_fex1323,Graph_fey1323);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e317ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1323 = new TH1F("Graph_Graph1323","",100,343642.1,343664.9);
   Graph_Graph1323->SetMinimum(0.03685116);
   Graph_Graph1323->SetMaximum(0.1792814);
   Graph_Graph1323->SetDirectory(0);
   Graph_Graph1323->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1323->SetLineColor(ci);
   Graph_Graph1323->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1323->GetXaxis()->SetNoExponent();
   Graph_Graph1323->GetXaxis()->SetNdivisions(5);
   Graph_Graph1323->GetXaxis()->SetLabelFont(42);
   Graph_Graph1323->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1323->GetXaxis()->SetTitleFont(42);
   Graph_Graph1323->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1323->GetYaxis()->SetLabelFont(42);
   Graph_Graph1323->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1323->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1323->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1323->GetYaxis()->SetTitleFont(42);
   Graph_Graph1323->GetZaxis()->SetLabelFont(42);
   Graph_Graph1323->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1323->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1323->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1323);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1324[5] = {
   343638,
   343668,
   343673,
   343677,
   343680};
   Double_t Graph_fy1324[5] = {
   0.0885812,
   0.08973005,
   0.0257373,
   0.09258848,
   0.09041091};
   Double_t Graph_fex1324[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1324[5] = {
   0.003355252,
   0.003901306,
   0.00742972,
   0.002157308,
   0.001792865};
   gre = new TGraphErrors(5,Graph_fx1324,Graph_fy1324,Graph_fex1324,Graph_fey1324);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0bf9f4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1324 = new TH1F("Graph_Graph1324","",100,343633.8,343684.2);
   Graph_Graph1324->SetMinimum(0.01066376);
   Graph_Graph1324->SetMaximum(0.1023896);
   Graph_Graph1324->SetDirectory(0);
   Graph_Graph1324->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1324->SetLineColor(ci);
   Graph_Graph1324->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1324->GetXaxis()->SetNoExponent();
   Graph_Graph1324->GetXaxis()->SetNdivisions(5);
   Graph_Graph1324->GetXaxis()->SetLabelFont(42);
   Graph_Graph1324->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1324->GetXaxis()->SetTitleFont(42);
   Graph_Graph1324->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1324->GetYaxis()->SetLabelFont(42);
   Graph_Graph1324->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1324->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1324->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1324->GetYaxis()->SetTitleFont(42);
   Graph_Graph1324->GetZaxis()->SetLabelFont(42);
   Graph_Graph1324->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1324->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1324->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1324);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1325[2] = {
   343640,
   343642};
   Double_t Graph_fy1325[2] = {
   0.07456086,
   0.09018688};
   Double_t Graph_fex1325[2] = {
   0,
   0};
   Double_t Graph_fey1325[2] = {
   0.002917792,
   0.001447117};
   gre = new TGraphErrors(2,Graph_fx1325,Graph_fy1325,Graph_fex1325,Graph_fey1325);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2cf90b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1325 = new TH1F("Graph_Graph1325","",100,343639.8,343642.2);
   Graph_Graph1325->SetMinimum(0.06964397);
   Graph_Graph1325->SetMaximum(0.09363309);
   Graph_Graph1325->SetDirectory(0);
   Graph_Graph1325->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1325->SetLineColor(ci);
   Graph_Graph1325->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1325->GetXaxis()->SetNoExponent();
   Graph_Graph1325->GetXaxis()->SetNdivisions(5);
   Graph_Graph1325->GetXaxis()->SetLabelFont(42);
   Graph_Graph1325->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1325->GetXaxis()->SetTitleFont(42);
   Graph_Graph1325->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1325->GetYaxis()->SetLabelFont(42);
   Graph_Graph1325->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1325->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1325->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1325->GetYaxis()->SetTitleFont(42);
   Graph_Graph1325->GetZaxis()->SetLabelFont(42);
   Graph_Graph1325->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1325->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1325->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1325);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1326[4] = {
   343623,
   343625,
   343627,
   343629};
   Double_t Graph_fy1326[4] = {
   0.09042892,
   0.09099545,
   0.07196062,
   0.1557286};
   Double_t Graph_fex1326[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1326[4] = {
   0.006082908,
   0.00198663,
   0.02077324,
   0.04924571};
   gre = new TGraphErrors(4,Graph_fx1326,Graph_fy1326,Graph_fex1326,Graph_fey1326);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#f90b28");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1326 = new TH1F("Graph_Graph1326","",100,343622.4,343629.6);
   Graph_Graph1326->SetMinimum(0.03580868);
   Graph_Graph1326->SetMaximum(0.220353);
   Graph_Graph1326->SetDirectory(0);
   Graph_Graph1326->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1326->SetLineColor(ci);
   Graph_Graph1326->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1326->GetXaxis()->SetNoExponent();
   Graph_Graph1326->GetXaxis()->SetNdivisions(5);
   Graph_Graph1326->GetXaxis()->SetLabelFont(42);
   Graph_Graph1326->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1326->GetXaxis()->SetTitleFont(42);
   Graph_Graph1326->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1326->GetYaxis()->SetLabelFont(42);
   Graph_Graph1326->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1326->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1326->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1326->GetYaxis()->SetTitleFont(42);
   Graph_Graph1326->GetZaxis()->SetLabelFont(42);
   Graph_Graph1326->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1326->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1326->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1326);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1327[2] = {
   343619,
   343621};
   Double_t Graph_fy1327[2] = {
   0.09069798,
   0.09371279};
   Double_t Graph_fex1327[2] = {
   0,
   0};
   Double_t Graph_fey1327[2] = {
   0.001952414,
   0.002673147};
   gre = new TGraphErrors(2,Graph_fx1327,Graph_fy1327,Graph_fex1327,Graph_fey1327);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#1b38f5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1327 = new TH1F("Graph_Graph1327","",100,343618.8,343621.2);
   Graph_Graph1327->SetMinimum(0.08798153);
   Graph_Graph1327->SetMaximum(0.09714997);
   Graph_Graph1327->SetDirectory(0);
   Graph_Graph1327->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1327->SetLineColor(ci);
   Graph_Graph1327->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1327->GetXaxis()->SetNoExponent();
   Graph_Graph1327->GetXaxis()->SetNdivisions(5);
   Graph_Graph1327->GetXaxis()->SetLabelFont(42);
   Graph_Graph1327->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1327->GetXaxis()->SetTitleFont(42);
   Graph_Graph1327->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1327->GetYaxis()->SetLabelFont(42);
   Graph_Graph1327->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1327->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1327->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1327->GetYaxis()->SetTitleFont(42);
   Graph_Graph1327->GetZaxis()->SetLabelFont(42);
   Graph_Graph1327->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1327->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1327->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1327);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1328[4] = {
   343494,
   343496,
   343498,
   343501};
   Double_t Graph_fy1328[4] = {
   0.1037979,
   0.1015769,
   0.104853,
   0.103548};
   Double_t Graph_fex1328[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1328[4] = {
   0.008619943,
   0.003234866,
   0.00185646,
   0.01956873};
   gre = new TGraphErrors(4,Graph_fx1328,Graph_fy1328,Graph_fex1328,Graph_fey1328);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffc300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1328 = new TH1F("Graph_Graph1328","",100,343493.3,343501.7);
   Graph_Graph1328->SetMinimum(0.08006552);
   Graph_Graph1328->SetMaximum(0.1270305);
   Graph_Graph1328->SetDirectory(0);
   Graph_Graph1328->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1328->SetLineColor(ci);
   Graph_Graph1328->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1328->GetXaxis()->SetNoExponent();
   Graph_Graph1328->GetXaxis()->SetNdivisions(5);
   Graph_Graph1328->GetXaxis()->SetLabelFont(42);
   Graph_Graph1328->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1328->GetXaxis()->SetTitleFont(42);
   Graph_Graph1328->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1328->GetYaxis()->SetLabelFont(42);
   Graph_Graph1328->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1328->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1328->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1328->GetYaxis()->SetTitleFont(42);
   Graph_Graph1328->GetZaxis()->SetLabelFont(42);
   Graph_Graph1328->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1328->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1328->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1328);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1329[1] = {
   344068};
   Double_t Graph_fy1329[1] = {
   0.1203843};
   Double_t Graph_fex1329[1] = {
   0};
   Double_t Graph_fey1329[1] = {
   0.001849006};
   gre = new TGraphErrors(1,Graph_fx1329,Graph_fy1329,Graph_fex1329,Graph_fey1329);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1329 = new TH1F("Graph_Graph1329","",100,344067.9,344069.1);
   Graph_Graph1329->SetMinimum(0.1181655);
   Graph_Graph1329->SetMaximum(0.1226031);
   Graph_Graph1329->SetDirectory(0);
   Graph_Graph1329->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1329->SetLineColor(ci);
   Graph_Graph1329->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1329->GetXaxis()->SetNoExponent();
   Graph_Graph1329->GetXaxis()->SetNdivisions(5);
   Graph_Graph1329->GetXaxis()->SetLabelFont(42);
   Graph_Graph1329->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1329->GetXaxis()->SetTitleFont(42);
   Graph_Graph1329->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1329->GetYaxis()->SetLabelFont(42);
   Graph_Graph1329->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1329->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1329->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1329->GetYaxis()->SetTitleFont(42);
   Graph_Graph1329->GetZaxis()->SetLabelFont(42);
   Graph_Graph1329->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1329->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1329->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1329);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1330[6] = {
   344058,
   344062,
   344063,
   344064,
   344065,
   344067};
   Double_t Graph_fy1330[6] = {
   0.002235215,
   0.1188958,
   0.1180465,
   0.119294,
   0.1212867,
   0.1212064};
   Double_t Graph_fex1330[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1330[6] = {
   0.0009125228,
   0.01441824,
   0.001254466,
   0.001179569,
   0.006056767,
   0.002656349};
   gre = new TGraphErrors(6,Graph_fx1330,Graph_fy1330,Graph_fex1330,Graph_fey1330);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2fa4e1");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1330 = new TH1F("Graph_Graph1330","",100,344057.1,344067.9);
   Graph_Graph1330->SetMinimum(0.001190423);
   Graph_Graph1330->SetMaximum(0.1465132);
   Graph_Graph1330->SetDirectory(0);
   Graph_Graph1330->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1330->SetLineColor(ci);
   Graph_Graph1330->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1330->GetXaxis()->SetNoExponent();
   Graph_Graph1330->GetXaxis()->SetNdivisions(5);
   Graph_Graph1330->GetXaxis()->SetLabelFont(42);
   Graph_Graph1330->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1330->GetXaxis()->SetTitleFont(42);
   Graph_Graph1330->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1330->GetYaxis()->SetLabelFont(42);
   Graph_Graph1330->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1330->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1330->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1330->GetYaxis()->SetTitleFont(42);
   Graph_Graph1330->GetZaxis()->SetLabelFont(42);
   Graph_Graph1330->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1330->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1330->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1330);
   
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
      tex = new TLatex(0.23,0.83,"TEC 4+");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
