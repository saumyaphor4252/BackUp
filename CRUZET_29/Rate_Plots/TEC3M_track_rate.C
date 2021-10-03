void TEC3M_track_rate()
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
   multigraph->SetName("track rate TEC3-");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1301[2] = {
   343772,
   343774};
   Double_t Graph_fy1301[2] = {
   0.09768863,
   0.1251591};
   Double_t Graph_fex1301[2] = {
   0,
   0};
   Double_t Graph_fey1301[2] = {
   0.008315809,
   0.001778037};
   TGraphErrors *gre = new TGraphErrors(2,Graph_fx1301,Graph_fy1301,Graph_fex1301,Graph_fey1301);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f5601b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1301 = new TH1F("Graph_Graph1301","",100,343771.8,343774.2);
   Graph_Graph1301->SetMinimum(0.08561639);
   Graph_Graph1301->SetMaximum(0.1306936);
   Graph_Graph1301->SetDirectory(0);
   Graph_Graph1301->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1301->SetLineColor(ci);
   Graph_Graph1301->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1301->GetXaxis()->SetNoExponent();
   Graph_Graph1301->GetXaxis()->SetNdivisions(5);
   Graph_Graph1301->GetXaxis()->SetLabelFont(42);
   Graph_Graph1301->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1301->GetXaxis()->SetTitleFont(42);
   Graph_Graph1301->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1301->GetYaxis()->SetLabelFont(42);
   Graph_Graph1301->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1301->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1301->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1301->GetYaxis()->SetTitleFont(42);
   Graph_Graph1301->GetZaxis()->SetLabelFont(42);
   Graph_Graph1301->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1301->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1301->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1301);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1302[9] = {
   343854,
   343860,
   343862,
   343864,
   343866,
   343932,
   343934,
   343936,
   343937};
   Double_t Graph_fy1302[9] = {
   0.0166947,
   0.1430125,
   0.1609759,
   0.1538252,
   0.03539946,
   0.001418555,
   0.1507948,
   0.157548,
   0.1583573};
   Double_t Graph_fex1302[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1302[9] = {
   0.00834735,
   0.01137746,
   0.002040943,
   0.005616901,
   0.007225885,
   0.001418555,
   0.008003358,
   0.00420315,
   0.002010653};
   gre = new TGraphErrors(9,Graph_fx1302,Graph_fy1302,Graph_fex1302,Graph_fey1302);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#196f3d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1302 = new TH1F("Graph_Graph1302","",100,343845.7,343945.3);
   Graph_Graph1302->SetMinimum(0);
   Graph_Graph1302->SetMaximum(0.1793186);
   Graph_Graph1302->SetDirectory(0);
   Graph_Graph1302->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1302->SetLineColor(ci);
   Graph_Graph1302->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1302->GetXaxis()->SetNoExponent();
   Graph_Graph1302->GetXaxis()->SetNdivisions(5);
   Graph_Graph1302->GetXaxis()->SetLabelFont(42);
   Graph_Graph1302->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1302->GetXaxis()->SetTitleFont(42);
   Graph_Graph1302->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1302->GetYaxis()->SetLabelFont(42);
   Graph_Graph1302->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1302->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1302->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1302->GetYaxis()->SetTitleFont(42);
   Graph_Graph1302->GetZaxis()->SetLabelFont(42);
   Graph_Graph1302->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1302->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1302->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1302);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1303[5] = {
   343644,
   343648,
   343650,
   343652,
   343663};
   Double_t Graph_fy1303[5] = {
   0.1263442,
   0.1211803,
   0.1674122,
   0.2685396,
   0.1165652};
   Double_t Graph_fex1303[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1303[5] = {
   0.003294192,
   0.005419347,
   0.06834575,
   0.05481542,
   0.01311461};
   gre = new TGraphErrors(5,Graph_fx1303,Graph_fy1303,Graph_fex1303,Graph_fey1303);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e317ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1303 = new TH1F("Graph_Graph1303","",100,343642.1,343664.9);
   Graph_Graph1303->SetMinimum(0.0766376);
   Graph_Graph1303->SetMaximum(0.3457839);
   Graph_Graph1303->SetDirectory(0);
   Graph_Graph1303->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1303->SetLineColor(ci);
   Graph_Graph1303->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1303->GetXaxis()->SetNoExponent();
   Graph_Graph1303->GetXaxis()->SetNdivisions(5);
   Graph_Graph1303->GetXaxis()->SetLabelFont(42);
   Graph_Graph1303->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1303->GetXaxis()->SetTitleFont(42);
   Graph_Graph1303->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1303->GetYaxis()->SetLabelFont(42);
   Graph_Graph1303->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1303->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1303->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1303->GetYaxis()->SetTitleFont(42);
   Graph_Graph1303->GetZaxis()->SetLabelFont(42);
   Graph_Graph1303->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1303->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1303->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1303);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1304[5] = {
   343638,
   343668,
   343673,
   343677,
   343680};
   Double_t Graph_fy1304[5] = {
   0.1300123,
   0.1268773,
   0.02144775,
   0.1288799,
   0.1250038};
   Double_t Graph_fex1304[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1304[5] = {
   0.004064869,
   0.004639092,
   0.006782375,
   0.002545226,
   0.002108137};
   gre = new TGraphErrors(5,Graph_fx1304,Graph_fy1304,Graph_fex1304,Graph_fey1304);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0bf9f4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1304 = new TH1F("Graph_Graph1304","",100,343633.8,343684.2);
   Graph_Graph1304->SetMinimum(0.002724201);
   Graph_Graph1304->SetMaximum(0.1460183);
   Graph_Graph1304->SetDirectory(0);
   Graph_Graph1304->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1304->SetLineColor(ci);
   Graph_Graph1304->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1304->GetXaxis()->SetNoExponent();
   Graph_Graph1304->GetXaxis()->SetNdivisions(5);
   Graph_Graph1304->GetXaxis()->SetLabelFont(42);
   Graph_Graph1304->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1304->GetXaxis()->SetTitleFont(42);
   Graph_Graph1304->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1304->GetYaxis()->SetLabelFont(42);
   Graph_Graph1304->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1304->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1304->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1304->GetYaxis()->SetTitleFont(42);
   Graph_Graph1304->GetZaxis()->SetLabelFont(42);
   Graph_Graph1304->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1304->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1304->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1304);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1305[2] = {
   343640,
   343642};
   Double_t Graph_fy1305[2] = {
   0.1093864,
   0.122161};
   Double_t Graph_fex1305[2] = {
   0,
   0};
   Double_t Graph_fey1305[2] = {
   0.003534113,
   0.001684218};
   gre = new TGraphErrors(2,Graph_fx1305,Graph_fy1305,Graph_fex1305,Graph_fey1305);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2cf90b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1305 = new TH1F("Graph_Graph1305","",100,343639.8,343642.2);
   Graph_Graph1305->SetMinimum(0.104053);
   Graph_Graph1305->SetMaximum(0.1256445);
   Graph_Graph1305->SetDirectory(0);
   Graph_Graph1305->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1305->SetLineColor(ci);
   Graph_Graph1305->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1305->GetXaxis()->SetNoExponent();
   Graph_Graph1305->GetXaxis()->SetNdivisions(5);
   Graph_Graph1305->GetXaxis()->SetLabelFont(42);
   Graph_Graph1305->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1305->GetXaxis()->SetTitleFont(42);
   Graph_Graph1305->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1305->GetYaxis()->SetLabelFont(42);
   Graph_Graph1305->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1305->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1305->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1305->GetYaxis()->SetTitleFont(42);
   Graph_Graph1305->GetZaxis()->SetLabelFont(42);
   Graph_Graph1305->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1305->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1305->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1305);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1306[4] = {
   343623,
   343625,
   343627,
   343629};
   Double_t Graph_fy1306[4] = {
   0.1243909,
   0.1283391,
   0.1379245,
   0.2180201};
   Double_t Graph_fex1306[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1306[4] = {
   0.007134309,
   0.002359319,
   0.02875925,
   0.05826832};
   gre = new TGraphErrors(4,Graph_fx1306,Graph_fy1306,Graph_fex1306,Graph_fey1306);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#f90b28");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1306 = new TH1F("Graph_Graph1306","",100,343622.4,343629.6);
   Graph_Graph1306->SetMinimum(0.09245295);
   Graph_Graph1306->SetMaximum(0.2930007);
   Graph_Graph1306->SetDirectory(0);
   Graph_Graph1306->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1306->SetLineColor(ci);
   Graph_Graph1306->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1306->GetXaxis()->SetNoExponent();
   Graph_Graph1306->GetXaxis()->SetNdivisions(5);
   Graph_Graph1306->GetXaxis()->SetLabelFont(42);
   Graph_Graph1306->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1306->GetXaxis()->SetTitleFont(42);
   Graph_Graph1306->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1306->GetYaxis()->SetLabelFont(42);
   Graph_Graph1306->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1306->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1306->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1306->GetYaxis()->SetTitleFont(42);
   Graph_Graph1306->GetZaxis()->SetLabelFont(42);
   Graph_Graph1306->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1306->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1306->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1306);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1307[2] = {
   343619,
   343621};
   Double_t Graph_fy1307[2] = {
   0.1280195,
   0.1236795};
   Double_t Graph_fex1307[2] = {
   0,
   0};
   Double_t Graph_fey1307[2] = {
   0.002319589,
   0.003070947};
   gre = new TGraphErrors(2,Graph_fx1307,Graph_fy1307,Graph_fex1307,Graph_fey1307);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#1b38f5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1307 = new TH1F("Graph_Graph1307","",100,343618.8,343621.2);
   Graph_Graph1307->SetMinimum(0.1196355);
   Graph_Graph1307->SetMaximum(0.1313121);
   Graph_Graph1307->SetDirectory(0);
   Graph_Graph1307->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1307->SetLineColor(ci);
   Graph_Graph1307->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1307->GetXaxis()->SetNoExponent();
   Graph_Graph1307->GetXaxis()->SetNdivisions(5);
   Graph_Graph1307->GetXaxis()->SetLabelFont(42);
   Graph_Graph1307->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1307->GetXaxis()->SetTitleFont(42);
   Graph_Graph1307->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1307->GetYaxis()->SetLabelFont(42);
   Graph_Graph1307->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1307->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1307->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1307->GetYaxis()->SetTitleFont(42);
   Graph_Graph1307->GetZaxis()->SetLabelFont(42);
   Graph_Graph1307->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1307->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1307->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1307);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1308[4] = {
   343494,
   343496,
   343498,
   343501};
   Double_t Graph_fy1308[4] = {
   0.1352951,
   0.1468022,
   0.1385769,
   0.1590201};
   Double_t Graph_fex1308[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1308[4] = {
   0.009841273,
   0.003888886,
   0.002134227,
   0.02425034};
   gre = new TGraphErrors(4,Graph_fx1308,Graph_fy1308,Graph_fex1308,Graph_fey1308);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffc300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1308 = new TH1F("Graph_Graph1308","",100,343493.3,343501.7);
   Graph_Graph1308->SetMinimum(0.1196722);
   Graph_Graph1308->SetMaximum(0.1890521);
   Graph_Graph1308->SetDirectory(0);
   Graph_Graph1308->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1308->SetLineColor(ci);
   Graph_Graph1308->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1308->GetXaxis()->SetNoExponent();
   Graph_Graph1308->GetXaxis()->SetNdivisions(5);
   Graph_Graph1308->GetXaxis()->SetLabelFont(42);
   Graph_Graph1308->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1308->GetXaxis()->SetTitleFont(42);
   Graph_Graph1308->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1308->GetYaxis()->SetLabelFont(42);
   Graph_Graph1308->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1308->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1308->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1308->GetYaxis()->SetTitleFont(42);
   Graph_Graph1308->GetZaxis()->SetLabelFont(42);
   Graph_Graph1308->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1308->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1308->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1308);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1309[1] = {
   344068};
   Double_t Graph_fy1309[1] = {
   0.1585245};
   Double_t Graph_fex1309[1] = {
   0};
   Double_t Graph_fey1309[1] = {
   0.002121785};
   gre = new TGraphErrors(1,Graph_fx1309,Graph_fy1309,Graph_fex1309,Graph_fey1309);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1309 = new TH1F("Graph_Graph1309","",100,344067.9,344069.1);
   Graph_Graph1309->SetMinimum(0.1559783);
   Graph_Graph1309->SetMaximum(0.1610706);
   Graph_Graph1309->SetDirectory(0);
   Graph_Graph1309->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1309->SetLineColor(ci);
   Graph_Graph1309->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1309->GetXaxis()->SetNoExponent();
   Graph_Graph1309->GetXaxis()->SetNdivisions(5);
   Graph_Graph1309->GetXaxis()->SetLabelFont(42);
   Graph_Graph1309->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1309->GetXaxis()->SetTitleFont(42);
   Graph_Graph1309->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1309->GetYaxis()->SetLabelFont(42);
   Graph_Graph1309->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1309->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1309->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1309->GetYaxis()->SetTitleFont(42);
   Graph_Graph1309->GetZaxis()->SetLabelFont(42);
   Graph_Graph1309->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1309->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1309->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1309);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1310[6] = {
   344058,
   344062,
   344063,
   344064,
   344065,
   344067};
   Double_t Graph_fy1310[6] = {
   0.0007450717,
   0.138129,
   0.1589862,
   0.1596846,
   0.1630262,
   0.1537493};
   Double_t Graph_fex1310[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1310[6] = {
   0.0005268452,
   0.01554072,
   0.001455834,
   0.001364726,
   0.007022036,
   0.002991775};
   gre = new TGraphErrors(6,Graph_fx1310,Graph_fy1310,Graph_fex1310,Graph_fey1310);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2fa4e1");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1310 = new TH1F("Graph_Graph1310","",100,344057.1,344067.9);
   Graph_Graph1310->SetMinimum(0.0001964038);
   Graph_Graph1310->SetMaximum(0.1870312);
   Graph_Graph1310->SetDirectory(0);
   Graph_Graph1310->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1310->SetLineColor(ci);
   Graph_Graph1310->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1310->GetXaxis()->SetNoExponent();
   Graph_Graph1310->GetXaxis()->SetNdivisions(5);
   Graph_Graph1310->GetXaxis()->SetLabelFont(42);
   Graph_Graph1310->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1310->GetXaxis()->SetTitleFont(42);
   Graph_Graph1310->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1310->GetYaxis()->SetLabelFont(42);
   Graph_Graph1310->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1310->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1310->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1310->GetYaxis()->SetTitleFont(42);
   Graph_Graph1310->GetZaxis()->SetLabelFont(42);
   Graph_Graph1310->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1310->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1310->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1310);
   
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
      tex = new TLatex(0.23,0.83,"TEC 3-");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
