void bpix_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug  3 18:11:26 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(343311.3,-0.06373306,344128.7,0.4287495);
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
   multigraph->SetName("track rate BPIX");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1041[2] = {
   343772,
   343774};
   Double_t Graph_fy1041[2] = {
   0.1458251,
   0.1626437};
   Double_t Graph_fex1041[2] = {
   0,
   0};
   Double_t Graph_fey1041[2] = {
   0.01016011,
   0.00202688};
   TGraphErrors *gre = new TGraphErrors(2,Graph_fx1041,Graph_fy1041,Graph_fex1041,Graph_fey1041);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f5601b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1041 = new TH1F("Graph_Graph1041","",100,343771.8,343774.2);
   Graph_Graph1041->SetMinimum(0.1327644);
   Graph_Graph1041->SetMaximum(0.1675712);
   Graph_Graph1041->SetDirectory(0);
   Graph_Graph1041->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1041->SetLineColor(ci);
   Graph_Graph1041->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1041->GetXaxis()->SetNoExponent();
   Graph_Graph1041->GetXaxis()->SetNdivisions(5);
   Graph_Graph1041->GetXaxis()->SetLabelFont(42);
   Graph_Graph1041->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1041->GetXaxis()->SetTitleFont(42);
   Graph_Graph1041->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1041->GetYaxis()->SetLabelFont(42);
   Graph_Graph1041->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1041->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1041->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1041->GetYaxis()->SetTitleFont(42);
   Graph_Graph1041->GetZaxis()->SetLabelFont(42);
   Graph_Graph1041->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1041->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1041);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1042[9] = {
   343854,
   343860,
   343862,
   343864,
   343866,
   343932,
   343934,
   343936,
   343937};
   Double_t Graph_fy1042[9] = {
   0,
   0.1918902,
   0.1744574,
   0.1728995,
   0.001474977,
   0,
   0.1652371,
   0.1753773,
   0.1789337};
   Double_t Graph_fex1042[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1042[9] = {
   0,
   0.01317907,
   0.002124688,
   0.005954974,
   0.001474977,
   0,
   0.008377856,
   0.004434606,
   0.002137294};
   gre = new TGraphErrors(9,Graph_fx1042,Graph_fy1042,Graph_fex1042,Graph_fey1042);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#196f3d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1042 = new TH1F("Graph_Graph1042","",100,343845.7,343945.3);
   Graph_Graph1042->SetMinimum(0);
   Graph_Graph1042->SetMaximum(0.2255762);
   Graph_Graph1042->SetDirectory(0);
   Graph_Graph1042->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1042->SetLineColor(ci);
   Graph_Graph1042->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1042->GetXaxis()->SetNoExponent();
   Graph_Graph1042->GetXaxis()->SetNdivisions(5);
   Graph_Graph1042->GetXaxis()->SetLabelFont(42);
   Graph_Graph1042->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1042->GetXaxis()->SetTitleFont(42);
   Graph_Graph1042->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1042->GetYaxis()->SetLabelFont(42);
   Graph_Graph1042->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1042->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1042->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1042->GetYaxis()->SetTitleFont(42);
   Graph_Graph1042->GetZaxis()->SetLabelFont(42);
   Graph_Graph1042->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1042->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1042->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1042);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1043[5] = {
   343644,
   343648,
   343650,
   343652,
   343663};
   Double_t Graph_fy1043[5] = {
   0.1424056,
   0.1400844,
   0.2790203,
   0.1678373,
   0};
   Double_t Graph_fex1043[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1043[5] = {
   0.003497316,
   0.005826743,
   0.08823398,
   0.0433354,
   0};
   gre = new TGraphErrors(5,Graph_fx1043,Graph_fy1043,Graph_fex1043,Graph_fey1043);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e317ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1043 = new TH1F("Graph_Graph1043","",100,343642.1,343664.9);
   Graph_Graph1043->SetMinimum(0);
   Graph_Graph1043->SetMaximum(0.4039798);
   Graph_Graph1043->SetDirectory(0);
   Graph_Graph1043->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1043->SetLineColor(ci);
   Graph_Graph1043->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1043->GetXaxis()->SetNoExponent();
   Graph_Graph1043->GetXaxis()->SetNdivisions(5);
   Graph_Graph1043->GetXaxis()->SetLabelFont(42);
   Graph_Graph1043->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1043->GetXaxis()->SetTitleFont(42);
   Graph_Graph1043->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1043->GetYaxis()->SetLabelFont(42);
   Graph_Graph1043->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1043->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1043->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1043->GetYaxis()->SetTitleFont(42);
   Graph_Graph1043->GetZaxis()->SetLabelFont(42);
   Graph_Graph1043->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1043->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1043);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1044[5] = {
   343638,
   343668,
   343673,
   343677,
   343680};
   Double_t Graph_fy1044[5] = {
   0.1631826,
   0,
   0,
   5.026519e-05,
   3.555286e-05};
   Double_t Graph_fex1044[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1044[5] = {
   0.004553982,
   0,
   0,
   5.026519e-05,
   3.555286e-05};
   gre = new TGraphErrors(5,Graph_fx1044,Graph_fy1044,Graph_fex1044,Graph_fey1044);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0bf9f4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1044 = new TH1F("Graph_Graph1044","",100,343633.8,343684.2);
   Graph_Graph1044->SetMinimum(0);
   Graph_Graph1044->SetMaximum(0.1845102);
   Graph_Graph1044->SetDirectory(0);
   Graph_Graph1044->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1044->SetLineColor(ci);
   Graph_Graph1044->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1044->GetXaxis()->SetNoExponent();
   Graph_Graph1044->GetXaxis()->SetNdivisions(5);
   Graph_Graph1044->GetXaxis()->SetLabelFont(42);
   Graph_Graph1044->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1044->GetXaxis()->SetTitleFont(42);
   Graph_Graph1044->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1044->GetYaxis()->SetLabelFont(42);
   Graph_Graph1044->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1044->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1044->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1044->GetYaxis()->SetTitleFont(42);
   Graph_Graph1044->GetZaxis()->SetLabelFont(42);
   Graph_Graph1044->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1044->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1044->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1044);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1045[2] = {
   343640,
   343642};
   Double_t Graph_fy1045[2] = {
   0.01096147,
   0.01353732};
   Double_t Graph_fex1045[2] = {
   0,
   0};
   Double_t Graph_fey1045[2] = {
   0.001118751,
   0.0005606585};
   gre = new TGraphErrors(2,Graph_fx1045,Graph_fy1045,Graph_fex1045,Graph_fey1045);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2cf90b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1045 = new TH1F("Graph_Graph1045","",100,343639.8,343642.2);
   Graph_Graph1045->SetMinimum(0.009417197);
   Graph_Graph1045->SetMaximum(0.0145235);
   Graph_Graph1045->SetDirectory(0);
   Graph_Graph1045->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1045->SetLineColor(ci);
   Graph_Graph1045->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1045->GetXaxis()->SetNoExponent();
   Graph_Graph1045->GetXaxis()->SetNdivisions(5);
   Graph_Graph1045->GetXaxis()->SetLabelFont(42);
   Graph_Graph1045->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1045->GetXaxis()->SetTitleFont(42);
   Graph_Graph1045->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1045->GetYaxis()->SetLabelFont(42);
   Graph_Graph1045->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1045->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1045->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1045->GetYaxis()->SetTitleFont(42);
   Graph_Graph1045->GetZaxis()->SetLabelFont(42);
   Graph_Graph1045->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1045->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1045);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1046[4] = {
   343623,
   343625,
   343627,
   343629};
   Double_t Graph_fy1046[4] = {
   0.03764462,
   0.1648154,
   0.1739048,
   0.1868743};
   Double_t Graph_fex1046[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1046[4] = {
   0.003924723,
   0.002673659,
   0.03229331,
   0.05394598};
   gre = new TGraphErrors(4,Graph_fx1046,Graph_fy1046,Graph_fex1046,Graph_fey1046);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#f90b28");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1046 = new TH1F("Graph_Graph1046","",100,343622.4,343629.6);
   Graph_Graph1046->SetMinimum(0.01300985);
   Graph_Graph1046->SetMaximum(0.2615304);
   Graph_Graph1046->SetDirectory(0);
   Graph_Graph1046->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1046->SetLineColor(ci);
   Graph_Graph1046->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1046->GetXaxis()->SetNoExponent();
   Graph_Graph1046->GetXaxis()->SetNdivisions(5);
   Graph_Graph1046->GetXaxis()->SetLabelFont(42);
   Graph_Graph1046->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1046->GetXaxis()->SetTitleFont(42);
   Graph_Graph1046->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1046->GetYaxis()->SetLabelFont(42);
   Graph_Graph1046->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1046->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1046->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1046->GetYaxis()->SetTitleFont(42);
   Graph_Graph1046->GetZaxis()->SetLabelFont(42);
   Graph_Graph1046->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1046->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1046->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1046);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1047[2] = {
   343619,
   343621};
   Double_t Graph_fy1047[2] = {
   0.03505195,
   0.03538058};
   Double_t Graph_fex1047[2] = {
   0,
   0};
   Double_t Graph_fey1047[2] = {
   0.00121375,
   0.001642502};
   gre = new TGraphErrors(2,Graph_fx1047,Graph_fy1047,Graph_fex1047,Graph_fey1047);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#1b38f5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1047 = new TH1F("Graph_Graph1047","",100,343618.8,343621.2);
   Graph_Graph1047->SetMinimum(0.03340958);
   Graph_Graph1047->SetMaximum(0.03735158);
   Graph_Graph1047->SetDirectory(0);
   Graph_Graph1047->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1047->SetLineColor(ci);
   Graph_Graph1047->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1047->GetXaxis()->SetNoExponent();
   Graph_Graph1047->GetXaxis()->SetNdivisions(5);
   Graph_Graph1047->GetXaxis()->SetLabelFont(42);
   Graph_Graph1047->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1047->GetXaxis()->SetTitleFont(42);
   Graph_Graph1047->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1047->GetYaxis()->SetLabelFont(42);
   Graph_Graph1047->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1047->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1047->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1047->GetYaxis()->SetTitleFont(42);
   Graph_Graph1047->GetZaxis()->SetLabelFont(42);
   Graph_Graph1047->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1047->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1047);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1048[4] = {
   343494,
   343496,
   343498,
   343501};
   Double_t Graph_fy1048[4] = {
   0.1861203,
   0.1601947,
   0.1667459,
   0.1849071};
   Double_t Graph_fex1048[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1048[4] = {
   0.01154269,
   0.004062403,
   0.002341115,
   0.02614982};
   gre = new TGraphErrors(4,Graph_fx1048,Graph_fy1048,Graph_fex1048,Graph_fey1048);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffc300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1048 = new TH1F("Graph_Graph1048","",100,343493.3,343501.7);
   Graph_Graph1048->SetMinimum(0.1506399);
   Graph_Graph1048->SetMaximum(0.2165494);
   Graph_Graph1048->SetDirectory(0);
   Graph_Graph1048->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1048->SetLineColor(ci);
   Graph_Graph1048->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1048->GetXaxis()->SetNoExponent();
   Graph_Graph1048->GetXaxis()->SetNdivisions(5);
   Graph_Graph1048->GetXaxis()->SetLabelFont(42);
   Graph_Graph1048->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1048->GetXaxis()->SetTitleFont(42);
   Graph_Graph1048->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1048->GetYaxis()->SetLabelFont(42);
   Graph_Graph1048->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1048->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1048->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1048->GetYaxis()->SetTitleFont(42);
   Graph_Graph1048->GetZaxis()->SetLabelFont(42);
   Graph_Graph1048->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1048->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1048->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1048);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1049[1] = {
   344068};
   Double_t Graph_fy1049[1] = {
   0.1777508};
   Double_t Graph_fex1049[1] = {
   0};
   Double_t Graph_fey1049[1] = {
   0.002246772};
   gre = new TGraphErrors(1,Graph_fx1049,Graph_fy1049,Graph_fex1049,Graph_fey1049);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1049 = new TH1F("Graph_Graph1049","",100,344067.9,344069.1);
   Graph_Graph1049->SetMinimum(0.1750546);
   Graph_Graph1049->SetMaximum(0.1804469);
   Graph_Graph1049->SetDirectory(0);
   Graph_Graph1049->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1049->SetLineColor(ci);
   Graph_Graph1049->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1049->GetXaxis()->SetNoExponent();
   Graph_Graph1049->GetXaxis()->SetNdivisions(5);
   Graph_Graph1049->GetXaxis()->SetLabelFont(42);
   Graph_Graph1049->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1049->GetXaxis()->SetTitleFont(42);
   Graph_Graph1049->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1049->GetYaxis()->SetLabelFont(42);
   Graph_Graph1049->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1049->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1049->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1049->GetYaxis()->SetTitleFont(42);
   Graph_Graph1049->GetZaxis()->SetLabelFont(42);
   Graph_Graph1049->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1049->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1049->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1049);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1050[6] = {
   344058,
   344062,
   344063,
   344064,
   344065,
   344067};
   Double_t Graph_fy1050[6] = {
   0,
   0.1626075,
   0.1787028,
   0.1828716,
   0.1805689,
   0.1779091};
   Double_t Graph_fex1050[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1050[6] = {
   0,
   0.01686162,
   0.001543469,
   0.001460451,
   0.007390194,
   0.003218262};
   gre = new TGraphErrors(6,Graph_fx1050,Graph_fy1050,Graph_fex1050,Graph_fey1050);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2fa4e1");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1050 = new TH1F("Graph_Graph1050","",100,344057.1,344067.9);
   Graph_Graph1050->SetMinimum(0);
   Graph_Graph1050->SetMaximum(0.206755);
   Graph_Graph1050->SetDirectory(0);
   Graph_Graph1050->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1050->SetLineColor(ci);
   Graph_Graph1050->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1050->GetXaxis()->SetNoExponent();
   Graph_Graph1050->GetXaxis()->SetNdivisions(5);
   Graph_Graph1050->GetXaxis()->SetLabelFont(42);
   Graph_Graph1050->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1050->GetXaxis()->SetTitleFont(42);
   Graph_Graph1050->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1050->GetYaxis()->SetLabelFont(42);
   Graph_Graph1050->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1050->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1050->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1050->GetYaxis()->SetTitleFont(42);
   Graph_Graph1050->GetZaxis()->SetLabelFont(42);
   Graph_Graph1050->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1050->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1050->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1050);
   
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
      tex = new TLatex(0.23,0.83,"BPIX");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
