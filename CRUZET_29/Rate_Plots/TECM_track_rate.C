void TECM_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug  3 18:11:28 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(343311.3,-0.06888816,344128.7,0.4634293);
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
   multigraph->SetName("track rate TEC-");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1121[2] = {
   343772,
   343774};
   Double_t Graph_fy1121[2] = {
   0.1621065,
   0.1948744};
   Double_t Graph_fex1121[2] = {
   0,
   0};
   Double_t Graph_fey1121[2] = {
   0.0107123,
   0.00221864};
   TGraphErrors *gre = new TGraphErrors(2,Graph_fx1121,Graph_fy1121,Graph_fex1121,Graph_fey1121);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f5601b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1121 = new TH1F("Graph_Graph1121","",100,343771.8,343774.2);
   Graph_Graph1121->SetMinimum(0.1468243);
   Graph_Graph1121->SetMaximum(0.2016629);
   Graph_Graph1121->SetDirectory(0);
   Graph_Graph1121->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1121->SetLineColor(ci);
   Graph_Graph1121->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1121->GetXaxis()->SetNoExponent();
   Graph_Graph1121->GetXaxis()->SetNdivisions(5);
   Graph_Graph1121->GetXaxis()->SetLabelFont(42);
   Graph_Graph1121->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1121->GetXaxis()->SetTitleFont(42);
   Graph_Graph1121->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1121->GetYaxis()->SetLabelFont(42);
   Graph_Graph1121->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1121->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1121->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1121->GetYaxis()->SetTitleFont(42);
   Graph_Graph1121->GetZaxis()->SetLabelFont(42);
   Graph_Graph1121->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1121->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1121->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1121);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1122[9] = {
   343854,
   343860,
   343862,
   343864,
   343866,
   343932,
   343934,
   343936,
   343937};
   Double_t Graph_fy1122[9] = {
   0.02086838,
   0.2181393,
   0.2446596,
   0.2387366,
   0.04719928,
   0.001418555,
   0.2302276,
   0.2386208,
   0.2443649};
   Double_t Graph_fex1122[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1122[9] = {
   0.009332621,
   0.01405159,
   0.002516121,
   0.006997495,
   0.008343733,
   0.001418555,
   0.009889122,
   0.005172762,
   0.002497684};
   gre = new TGraphErrors(9,Graph_fx1122,Graph_fy1122,Graph_fex1122,Graph_fey1122);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#196f3d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1122 = new TH1F("Graph_Graph1122","",100,343845.7,343945.3);
   Graph_Graph1122->SetMinimum(0);
   Graph_Graph1122->SetMaximum(0.2718933);
   Graph_Graph1122->SetDirectory(0);
   Graph_Graph1122->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1122->SetLineColor(ci);
   Graph_Graph1122->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1122->GetXaxis()->SetNoExponent();
   Graph_Graph1122->GetXaxis()->SetNdivisions(5);
   Graph_Graph1122->GetXaxis()->SetLabelFont(42);
   Graph_Graph1122->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1122->GetXaxis()->SetTitleFont(42);
   Graph_Graph1122->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1122->GetYaxis()->SetLabelFont(42);
   Graph_Graph1122->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1122->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1122->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1122->GetYaxis()->SetTitleFont(42);
   Graph_Graph1122->GetZaxis()->SetLabelFont(42);
   Graph_Graph1122->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1122->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1122->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1122);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1123[5] = {
   343644,
   343648,
   343650,
   343652,
   343663};
   Double_t Graph_fy1123[5] = {
   0.1929948,
   0.1946155,
   0.2511183,
   0.3356745,
   0.1800121};
   Double_t Graph_fex1123[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1123[5] = {
   0.004071404,
   0.006867833,
   0.0837061,
   0.0612855,
   0.01629753};
   gre = new TGraphErrors(5,Graph_fx1123,Graph_fy1123,Graph_fex1123,Graph_fey1123);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e317ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1123 = new TH1F("Graph_Graph1123","",100,343642.1,343664.9);
   Graph_Graph1123->SetMinimum(0.1403901);
   Graph_Graph1123->SetMaximum(0.4202846);
   Graph_Graph1123->SetDirectory(0);
   Graph_Graph1123->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1123->SetLineColor(ci);
   Graph_Graph1123->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1123->GetXaxis()->SetNoExponent();
   Graph_Graph1123->GetXaxis()->SetNdivisions(5);
   Graph_Graph1123->GetXaxis()->SetLabelFont(42);
   Graph_Graph1123->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1123->GetXaxis()->SetTitleFont(42);
   Graph_Graph1123->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1123->GetYaxis()->SetLabelFont(42);
   Graph_Graph1123->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1123->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1123->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1123->GetYaxis()->SetTitleFont(42);
   Graph_Graph1123->GetZaxis()->SetLabelFont(42);
   Graph_Graph1123->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1123->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1123->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1123);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1124[5] = {
   343638,
   343668,
   343673,
   343677,
   343680};
   Double_t Graph_fy1124[5] = {
   0.1974967,
   0.2030376,
   0.03431641,
   0.1985978,
   0.1933364};
   Double_t Graph_fex1124[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1124[5] = {
   0.00500996,
   0.005868529,
   0.008579102,
   0.003159518,
   0.002621767};
   gre = new TGraphErrors(5,Graph_fx1124,Graph_fy1124,Graph_fex1124,Graph_fey1124);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0bf9f4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1124 = new TH1F("Graph_Graph1124","",100,343633.8,343684.2);
   Graph_Graph1124->SetMinimum(0.007420427);
   Graph_Graph1124->SetMaximum(0.227223);
   Graph_Graph1124->SetDirectory(0);
   Graph_Graph1124->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1124->SetLineColor(ci);
   Graph_Graph1124->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1124->GetXaxis()->SetNoExponent();
   Graph_Graph1124->GetXaxis()->SetNdivisions(5);
   Graph_Graph1124->GetXaxis()->SetLabelFont(42);
   Graph_Graph1124->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1124->GetXaxis()->SetTitleFont(42);
   Graph_Graph1124->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1124->GetYaxis()->SetLabelFont(42);
   Graph_Graph1124->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1124->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1124->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1124->GetYaxis()->SetTitleFont(42);
   Graph_Graph1124->GetZaxis()->SetLabelFont(42);
   Graph_Graph1124->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1124->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1124->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1124);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1125[2] = {
   343640,
   343642};
   Double_t Graph_fy1125[2] = {
   0.1709305,
   0.1887562};
   Double_t Graph_fex1125[2] = {
   0,
   0};
   Double_t Graph_fey1125[2] = {
   0.004417826,
   0.002093547};
   gre = new TGraphErrors(2,Graph_fx1125,Graph_fy1125,Graph_fex1125,Graph_fey1125);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2cf90b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1125 = new TH1F("Graph_Graph1125","",100,343639.8,343642.2);
   Graph_Graph1125->SetMinimum(0.1640789);
   Graph_Graph1125->SetMaximum(0.1932835);
   Graph_Graph1125->SetDirectory(0);
   Graph_Graph1125->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1125->SetLineColor(ci);
   Graph_Graph1125->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1125->GetXaxis()->SetNoExponent();
   Graph_Graph1125->GetXaxis()->SetNdivisions(5);
   Graph_Graph1125->GetXaxis()->SetLabelFont(42);
   Graph_Graph1125->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1125->GetXaxis()->SetTitleFont(42);
   Graph_Graph1125->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1125->GetYaxis()->SetLabelFont(42);
   Graph_Graph1125->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1125->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1125->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1125->GetYaxis()->SetTitleFont(42);
   Graph_Graph1125->GetZaxis()->SetLabelFont(42);
   Graph_Graph1125->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1125->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1125->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1125);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1126[4] = {
   343623,
   343625,
   343627,
   343629};
   Double_t Graph_fy1126[4] = {
   0.1996802,
   0.1943087,
   0.191895,
   0.2958844};
   Double_t Graph_fex1126[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1126[4] = {
   0.009039096,
   0.002903041,
   0.03392256,
   0.06788053};
   gre = new TGraphErrors(4,Graph_fx1126,Graph_fy1126,Graph_fex1126,Graph_fey1126);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#f90b28");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1126 = new TH1F("Graph_Graph1126","",100,343622.4,343629.6);
   Graph_Graph1126->SetMinimum(0.1373932);
   Graph_Graph1126->SetMaximum(0.3843442);
   Graph_Graph1126->SetDirectory(0);
   Graph_Graph1126->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1126->SetLineColor(ci);
   Graph_Graph1126->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1126->GetXaxis()->SetNoExponent();
   Graph_Graph1126->GetXaxis()->SetNdivisions(5);
   Graph_Graph1126->GetXaxis()->SetLabelFont(42);
   Graph_Graph1126->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1126->GetXaxis()->SetTitleFont(42);
   Graph_Graph1126->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1126->GetYaxis()->SetLabelFont(42);
   Graph_Graph1126->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1126->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1126->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1126->GetYaxis()->SetTitleFont(42);
   Graph_Graph1126->GetZaxis()->SetLabelFont(42);
   Graph_Graph1126->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1126->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1126->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1126);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1127[2] = {
   343619,
   343621};
   Double_t Graph_fy1127[2] = {
   0.1965683,
   0.1913906};
   Double_t Graph_fex1127[2] = {
   0,
   0};
   Double_t Graph_fey1127[2] = {
   0.002874285,
   0.00382018};
   gre = new TGraphErrors(2,Graph_fx1127,Graph_fy1127,Graph_fex1127,Graph_fey1127);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#1b38f5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1127 = new TH1F("Graph_Graph1127","",100,343618.8,343621.2);
   Graph_Graph1127->SetMinimum(0.1863832);
   Graph_Graph1127->SetMaximum(0.2006298);
   Graph_Graph1127->SetDirectory(0);
   Graph_Graph1127->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1127->SetLineColor(ci);
   Graph_Graph1127->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1127->GetXaxis()->SetNoExponent();
   Graph_Graph1127->GetXaxis()->SetNdivisions(5);
   Graph_Graph1127->GetXaxis()->SetLabelFont(42);
   Graph_Graph1127->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1127->GetXaxis()->SetTitleFont(42);
   Graph_Graph1127->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1127->GetYaxis()->SetLabelFont(42);
   Graph_Graph1127->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1127->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1127->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1127->GetYaxis()->SetTitleFont(42);
   Graph_Graph1127->GetZaxis()->SetLabelFont(42);
   Graph_Graph1127->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1127->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1127->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1127);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1128[4] = {
   343494,
   343496,
   343498,
   343501};
   Double_t Graph_fy1128[4] = {
   0.2054482,
   0.2243756,
   0.2194682,
   0.2292848};
   Double_t Graph_fex1128[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1128[4] = {
   0.01212722,
   0.004807804,
   0.002685845,
   0.0291192};
   gre = new TGraphErrors(4,Graph_fx1128,Graph_fy1128,Graph_fex1128,Graph_fey1128);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffc300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1128 = new TH1F("Graph_Graph1128","",100,343493.3,343501.7);
   Graph_Graph1128->SetMinimum(0.1868126);
   Graph_Graph1128->SetMaximum(0.2649124);
   Graph_Graph1128->SetDirectory(0);
   Graph_Graph1128->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1128->SetLineColor(ci);
   Graph_Graph1128->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1128->GetXaxis()->SetNoExponent();
   Graph_Graph1128->GetXaxis()->SetNdivisions(5);
   Graph_Graph1128->GetXaxis()->SetLabelFont(42);
   Graph_Graph1128->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1128->GetXaxis()->SetTitleFont(42);
   Graph_Graph1128->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1128->GetYaxis()->SetLabelFont(42);
   Graph_Graph1128->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1128->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1128->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1128->GetYaxis()->SetTitleFont(42);
   Graph_Graph1128->GetZaxis()->SetLabelFont(42);
   Graph_Graph1128->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1128->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1128->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1128);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1129[1] = {
   344068};
   Double_t Graph_fy1129[1] = {
   0.2413366};
   Double_t Graph_fex1129[1] = {
   0};
   Double_t Graph_fey1129[1] = {
   0.002617971};
   gre = new TGraphErrors(1,Graph_fx1129,Graph_fy1129,Graph_fex1129,Graph_fey1129);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1129 = new TH1F("Graph_Graph1129","",100,344067.9,344069.1);
   Graph_Graph1129->SetMinimum(0.2381951);
   Graph_Graph1129->SetMaximum(0.2444782);
   Graph_Graph1129->SetDirectory(0);
   Graph_Graph1129->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1129->SetLineColor(ci);
   Graph_Graph1129->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1129->GetXaxis()->SetNoExponent();
   Graph_Graph1129->GetXaxis()->SetNdivisions(5);
   Graph_Graph1129->GetXaxis()->SetLabelFont(42);
   Graph_Graph1129->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1129->GetXaxis()->SetTitleFont(42);
   Graph_Graph1129->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1129->GetYaxis()->SetLabelFont(42);
   Graph_Graph1129->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1129->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1129->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1129->GetYaxis()->SetTitleFont(42);
   Graph_Graph1129->GetZaxis()->SetLabelFont(42);
   Graph_Graph1129->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1129->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1129->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1129);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1130[6] = {
   344058,
   344062,
   344063,
   344064,
   344065,
   344067};
   Double_t Graph_fy1130[6] = {
   0.0007450717,
   0.2185585,
   0.2423319,
   0.2415972,
   0.2380364,
   0.2351939};
   Double_t Graph_fex1130[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1130[6] = {
   0.0005268452,
   0.01954847,
   0.00179737,
   0.001678649,
   0.008485082,
   0.003700287};
   gre = new TGraphErrors(6,Graph_fx1130,Graph_fy1130,Graph_fex1130,Graph_fey1130);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2fa4e1");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1130 = new TH1F("Graph_Graph1130","",100,344057.1,344067.9);
   Graph_Graph1130->SetMinimum(0.0001964038);
   Graph_Graph1130->SetMaximum(0.2711518);
   Graph_Graph1130->SetDirectory(0);
   Graph_Graph1130->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1130->SetLineColor(ci);
   Graph_Graph1130->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1130->GetXaxis()->SetNoExponent();
   Graph_Graph1130->GetXaxis()->SetNdivisions(5);
   Graph_Graph1130->GetXaxis()->SetLabelFont(42);
   Graph_Graph1130->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1130->GetXaxis()->SetTitleFont(42);
   Graph_Graph1130->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1130->GetYaxis()->SetLabelFont(42);
   Graph_Graph1130->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1130->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1130->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1130->GetYaxis()->SetTitleFont(42);
   Graph_Graph1130->GetZaxis()->SetLabelFont(42);
   Graph_Graph1130->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1130->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1130->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1130);
   
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
      tex = new TLatex(0.23,0.83,"TEC-");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
