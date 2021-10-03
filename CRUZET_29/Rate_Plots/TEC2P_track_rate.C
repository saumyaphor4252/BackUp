void TEC2P_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug  3 18:11:32 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(343311.3,-0.04669882,344128.7,0.3141556);
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
   multigraph->SetName("track rate TEC2+");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1261[2] = {
   343772,
   343774};
   Double_t Graph_fy1261[2] = {
   0.12742,
   0.1345555};
   Double_t Graph_fex1261[2] = {
   0,
   0};
   Double_t Graph_fey1261[2] = {
   0.009497323,
   0.001843572};
   TGraphErrors *gre = new TGraphErrors(2,Graph_fx1261,Graph_fy1261,Graph_fex1261,Graph_fey1261);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f5601b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1261 = new TH1F("Graph_Graph1261","",100,343771.8,343774.2);
   Graph_Graph1261->SetMinimum(0.1160232);
   Graph_Graph1261->SetMaximum(0.1388167);
   Graph_Graph1261->SetDirectory(0);
   Graph_Graph1261->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1261->SetLineColor(ci);
   Graph_Graph1261->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1261->GetXaxis()->SetNoExponent();
   Graph_Graph1261->GetXaxis()->SetNdivisions(5);
   Graph_Graph1261->GetXaxis()->SetLabelFont(42);
   Graph_Graph1261->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1261->GetXaxis()->SetTitleFont(42);
   Graph_Graph1261->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1261->GetYaxis()->SetLabelFont(42);
   Graph_Graph1261->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1261->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1261->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1261->GetYaxis()->SetTitleFont(42);
   Graph_Graph1261->GetZaxis()->SetLabelFont(42);
   Graph_Graph1261->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1261->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1261->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1261);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1262[9] = {
   343854,
   343860,
   343862,
   343864,
   343866,
   343932,
   343934,
   343936,
   343937};
   Double_t Graph_fy1262[9] = {
   0.05843145,
   0.1674513,
   0.1691011,
   0.1628496,
   0.04719928,
   0.00283711,
   0.1444232,
   0.1687614,
   0.16428};
   Double_t Graph_fex1262[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1262[9] = {
   0.01561646,
   0.01231127,
   0.002091816,
   0.005779315,
   0.008343733,
   0.00200614,
   0.007832448,
   0.004350157,
   0.002047908};
   gre = new TGraphErrors(9,Graph_fx1262,Graph_fy1262,Graph_fex1262,Graph_fey1262);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#196f3d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1262 = new TH1F("Graph_Graph1262","",100,343845.7,343945.3);
   Graph_Graph1262->SetMinimum(0.0007478733);
   Graph_Graph1262->SetMaximum(0.1976558);
   Graph_Graph1262->SetDirectory(0);
   Graph_Graph1262->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1262->SetLineColor(ci);
   Graph_Graph1262->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1262->GetXaxis()->SetNoExponent();
   Graph_Graph1262->GetXaxis()->SetNdivisions(5);
   Graph_Graph1262->GetXaxis()->SetLabelFont(42);
   Graph_Graph1262->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1262->GetXaxis()->SetTitleFont(42);
   Graph_Graph1262->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1262->GetYaxis()->SetLabelFont(42);
   Graph_Graph1262->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1262->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1262->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1262->GetYaxis()->SetTitleFont(42);
   Graph_Graph1262->GetZaxis()->SetLabelFont(42);
   Graph_Graph1262->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1262->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1262->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1262);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1263[5] = {
   343644,
   343648,
   343650,
   343652,
   343663};
   Double_t Graph_fy1263[5] = {
   0.1387982,
   0.1306323,
   0.1953142,
   0.145459,
   0.1401734};
   Double_t Graph_fex1263[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1263[5] = {
   0.003452735,
   0.005626733,
   0.07382184,
   0.04034306,
   0.01438149};
   gre = new TGraphErrors(5,Graph_fx1263,Graph_fy1263,Graph_fex1263,Graph_fey1263);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e317ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1263 = new TH1F("Graph_Graph1263","",100,343642.1,343664.9);
   Graph_Graph1263->SetMinimum(0.08871388);
   Graph_Graph1263->SetMaximum(0.2855381);
   Graph_Graph1263->SetDirectory(0);
   Graph_Graph1263->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1263->SetLineColor(ci);
   Graph_Graph1263->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1263->GetXaxis()->SetNoExponent();
   Graph_Graph1263->GetXaxis()->SetNdivisions(5);
   Graph_Graph1263->GetXaxis()->SetLabelFont(42);
   Graph_Graph1263->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1263->GetXaxis()->SetTitleFont(42);
   Graph_Graph1263->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1263->GetYaxis()->SetLabelFont(42);
   Graph_Graph1263->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1263->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1263->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1263->GetYaxis()->SetTitleFont(42);
   Graph_Graph1263->GetZaxis()->SetLabelFont(42);
   Graph_Graph1263->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1263->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1263->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1263);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1264[5] = {
   343638,
   343668,
   343673,
   343677,
   343680};
   Double_t Graph_fy1264[5] = {
   0.1307748,
   0.1323052,
   0.02359253,
   0.1400388,
   0.1341765};
   Double_t Graph_fex1264[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1264[5] = {
   0.004076772,
   0.004737285,
   0.007113415,
   0.002653126,
   0.002184115};
   gre = new TGraphErrors(5,Graph_fx1264,Graph_fy1264,Graph_fex1264,Graph_fey1264);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0bf9f4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1264 = new TH1F("Graph_Graph1264","",100,343633.8,343684.2);
   Graph_Graph1264->SetMinimum(0.003857831);
   Graph_Graph1264->SetMaximum(0.1553132);
   Graph_Graph1264->SetDirectory(0);
   Graph_Graph1264->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1264->SetLineColor(ci);
   Graph_Graph1264->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1264->GetXaxis()->SetNoExponent();
   Graph_Graph1264->GetXaxis()->SetNdivisions(5);
   Graph_Graph1264->GetXaxis()->SetLabelFont(42);
   Graph_Graph1264->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1264->GetXaxis()->SetTitleFont(42);
   Graph_Graph1264->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1264->GetYaxis()->SetLabelFont(42);
   Graph_Graph1264->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1264->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1264->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1264->GetYaxis()->SetTitleFont(42);
   Graph_Graph1264->GetZaxis()->SetLabelFont(42);
   Graph_Graph1264->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1264->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1264->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1264);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1265[2] = {
   343640,
   343642};
   Double_t Graph_fy1265[2] = {
   0.1123551,
   0.1351642};
   Double_t Graph_fex1265[2] = {
   0,
   0};
   Double_t Graph_fey1265[2] = {
   0.00358175,
   0.001771589};
   gre = new TGraphErrors(2,Graph_fx1265,Graph_fy1265,Graph_fex1265,Graph_fey1265);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2cf90b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1265 = new TH1F("Graph_Graph1265","",100,343639.8,343642.2);
   Graph_Graph1265->SetMinimum(0.1059571);
   Graph_Graph1265->SetMaximum(0.1397521);
   Graph_Graph1265->SetDirectory(0);
   Graph_Graph1265->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1265->SetLineColor(ci);
   Graph_Graph1265->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1265->GetXaxis()->SetNoExponent();
   Graph_Graph1265->GetXaxis()->SetNdivisions(5);
   Graph_Graph1265->GetXaxis()->SetLabelFont(42);
   Graph_Graph1265->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1265->GetXaxis()->SetTitleFont(42);
   Graph_Graph1265->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1265->GetYaxis()->SetLabelFont(42);
   Graph_Graph1265->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1265->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1265->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1265->GetYaxis()->SetTitleFont(42);
   Graph_Graph1265->GetZaxis()->SetLabelFont(42);
   Graph_Graph1265->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1265->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1265->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1265);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1266[4] = {
   343623,
   343625,
   343627,
   343629};
   Double_t Graph_fy1266[4] = {
   0.1395306,
   0.1346282,
   0.1079409,
   0.1868743};
   Double_t Graph_fex1266[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1266[4] = {
   0.007556005,
   0.002416435,
   0.02544192,
   0.05394598};
   gre = new TGraphErrors(4,Graph_fx1266,Graph_fy1266,Graph_fex1266,Graph_fey1266);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#f90b28");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1266 = new TH1F("Graph_Graph1266","",100,343622.4,343629.6);
   Graph_Graph1266->SetMinimum(0.06666687);
   Graph_Graph1266->SetMaximum(0.2566525);
   Graph_Graph1266->SetDirectory(0);
   Graph_Graph1266->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1266->SetLineColor(ci);
   Graph_Graph1266->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1266->GetXaxis()->SetNoExponent();
   Graph_Graph1266->GetXaxis()->SetNdivisions(5);
   Graph_Graph1266->GetXaxis()->SetLabelFont(42);
   Graph_Graph1266->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1266->GetXaxis()->SetTitleFont(42);
   Graph_Graph1266->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1266->GetYaxis()->SetLabelFont(42);
   Graph_Graph1266->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1266->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1266->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1266->GetYaxis()->SetTitleFont(42);
   Graph_Graph1266->GetZaxis()->SetLabelFont(42);
   Graph_Graph1266->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1266->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1266->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1266);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1267[2] = {
   343619,
   343621};
   Double_t Graph_fy1267[2] = {
   0.1326006,
   0.1414461};
   Double_t Graph_fex1267[2] = {
   0,
   0};
   Double_t Graph_fey1267[2] = {
   0.002360728,
   0.003284119};
   gre = new TGraphErrors(2,Graph_fx1267,Graph_fy1267,Graph_fex1267,Graph_fey1267);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#1b38f5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1267 = new TH1F("Graph_Graph1267","",100,343618.8,343621.2);
   Graph_Graph1267->SetMinimum(0.1287909);
   Graph_Graph1267->SetMaximum(0.1461792);
   Graph_Graph1267->SetDirectory(0);
   Graph_Graph1267->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1267->SetLineColor(ci);
   Graph_Graph1267->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1267->GetXaxis()->SetNoExponent();
   Graph_Graph1267->GetXaxis()->SetNdivisions(5);
   Graph_Graph1267->GetXaxis()->SetLabelFont(42);
   Graph_Graph1267->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1267->GetXaxis()->SetTitleFont(42);
   Graph_Graph1267->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1267->GetYaxis()->SetLabelFont(42);
   Graph_Graph1267->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1267->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1267->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1267->GetYaxis()->SetTitleFont(42);
   Graph_Graph1267->GetZaxis()->SetLabelFont(42);
   Graph_Graph1267->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1267->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1267->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1267);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1268[4] = {
   343494,
   343496,
   343498,
   343501};
   Double_t Graph_fy1268[4] = {
   0.1417378,
   0.1505109,
   0.1518561,
   0.1257368};
   Double_t Graph_fex1268[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1268[4] = {
   0.01007286,
   0.003937703,
   0.002234145,
   0.02156369};
   gre = new TGraphErrors(4,Graph_fx1268,Graph_fy1268,Graph_fex1268,Graph_fey1268);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffc300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1268 = new TH1F("Graph_Graph1268","",100,343493.3,343501.7);
   Graph_Graph1268->SetMinimum(0.09914561);
   Graph_Graph1268->SetMaximum(0.1594762);
   Graph_Graph1268->SetDirectory(0);
   Graph_Graph1268->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1268->SetLineColor(ci);
   Graph_Graph1268->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1268->GetXaxis()->SetNoExponent();
   Graph_Graph1268->GetXaxis()->SetNdivisions(5);
   Graph_Graph1268->GetXaxis()->SetLabelFont(42);
   Graph_Graph1268->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1268->GetXaxis()->SetTitleFont(42);
   Graph_Graph1268->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1268->GetYaxis()->SetLabelFont(42);
   Graph_Graph1268->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1268->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1268->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1268->GetYaxis()->SetTitleFont(42);
   Graph_Graph1268->GetZaxis()->SetLabelFont(42);
   Graph_Graph1268->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1268->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1268->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1268);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1269[1] = {
   344068};
   Double_t Graph_fy1269[1] = {
   0.1713041};
   Double_t Graph_fex1269[1] = {
   0};
   Double_t Graph_fey1269[1] = {
   0.002205653};
   gre = new TGraphErrors(1,Graph_fx1269,Graph_fy1269,Graph_fex1269,Graph_fey1269);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1269 = new TH1F("Graph_Graph1269","",100,344067.9,344069.1);
   Graph_Graph1269->SetMinimum(0.1686574);
   Graph_Graph1269->SetMaximum(0.1739509);
   Graph_Graph1269->SetDirectory(0);
   Graph_Graph1269->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1269->SetLineColor(ci);
   Graph_Graph1269->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1269->GetXaxis()->SetNoExponent();
   Graph_Graph1269->GetXaxis()->SetNdivisions(5);
   Graph_Graph1269->GetXaxis()->SetLabelFont(42);
   Graph_Graph1269->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1269->GetXaxis()->SetTitleFont(42);
   Graph_Graph1269->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1269->GetYaxis()->SetLabelFont(42);
   Graph_Graph1269->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1269->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1269->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1269->GetYaxis()->SetTitleFont(42);
   Graph_Graph1269->GetZaxis()->SetLabelFont(42);
   Graph_Graph1269->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1269->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1269->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1269);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1270[6] = {
   344058,
   344062,
   344063,
   344064,
   344065,
   344067};
   Double_t Graph_fy1270[6] = {
   0.001862679,
   0.1661045,
   0.1682512,
   0.1691437,
   0.1693779,
   0.166324};
   Double_t Graph_fex1270[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1270[6] = {
   0.0008330155,
   0.01704196,
   0.001497654,
   0.001404565,
   0.007157522,
   0.003111716};
   gre = new TGraphErrors(6,Graph_fx1270,Graph_fy1270,Graph_fex1270,Graph_fey1270);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2fa4e1");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1270 = new TH1F("Graph_Graph1270","",100,344057.1,344067.9);
   Graph_Graph1270->SetMinimum(0.0009266974);
   Graph_Graph1270->SetMaximum(0.2013581);
   Graph_Graph1270->SetDirectory(0);
   Graph_Graph1270->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1270->SetLineColor(ci);
   Graph_Graph1270->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1270->GetXaxis()->SetNoExponent();
   Graph_Graph1270->GetXaxis()->SetNdivisions(5);
   Graph_Graph1270->GetXaxis()->SetLabelFont(42);
   Graph_Graph1270->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1270->GetXaxis()->SetTitleFont(42);
   Graph_Graph1270->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1270->GetYaxis()->SetLabelFont(42);
   Graph_Graph1270->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1270->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1270->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1270->GetYaxis()->SetTitleFont(42);
   Graph_Graph1270->GetZaxis()->SetLabelFont(42);
   Graph_Graph1270->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1270->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1270->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1270);
   
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
      tex = new TLatex(0.23,0.83,"TEC 2+");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
