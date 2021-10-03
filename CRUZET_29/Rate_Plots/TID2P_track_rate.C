void TID2P_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug  3 18:11:30 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(343311.3,-0.04670569,344128.7,0.3142018);
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
   multigraph->SetName("track rate TID2+");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1171[2] = {
   343772,
   343774};
   Double_t Graph_fy1171[2] = {
   0.04742854,
   0.06254167};
   Double_t Graph_fex1171[2] = {
   0,
   0};
   Double_t Graph_fey1171[2] = {
   0.005794318,
   0.001256881};
   TGraphErrors *gre = new TGraphErrors(2,Graph_fx1171,Graph_fy1171,Graph_fex1171,Graph_fey1171);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f5601b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1171 = new TH1F("Graph_Graph1171","",100,343771.8,343774.2);
   Graph_Graph1171->SetMinimum(0.03941779);
   Graph_Graph1171->SetMaximum(0.06601499);
   Graph_Graph1171->SetDirectory(0);
   Graph_Graph1171->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1171->SetLineColor(ci);
   Graph_Graph1171->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1171->GetXaxis()->SetNoExponent();
   Graph_Graph1171->GetXaxis()->SetNdivisions(5);
   Graph_Graph1171->GetXaxis()->SetLabelFont(42);
   Graph_Graph1171->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1171->GetXaxis()->SetTitleFont(42);
   Graph_Graph1171->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1171->GetYaxis()->SetLabelFont(42);
   Graph_Graph1171->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1171->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1171->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1171->GetYaxis()->SetTitleFont(42);
   Graph_Graph1171->GetZaxis()->SetLabelFont(42);
   Graph_Graph1171->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1171->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1171->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1171);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1172[9] = {
   343854,
   343860,
   343862,
   343864,
   343866,
   343932,
   343934,
   343936,
   343937};
   Double_t Graph_fy1172[9] = {
   0.02086838,
   0.07874739,
   0.07255691,
   0.07527178,
   0.0132748,
   0,
   0.06286657,
   0.0752418,
   0.06783092};
   Double_t Graph_fex1172[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1172[9] = {
   0.009332621,
   0.008442606,
   0.001370218,
   0.003929155,
   0.004424932,
   0,
   0.005167601,
   0.002904678,
   0.001315928};
   gre = new TGraphErrors(9,Graph_fx1172,Graph_fy1172,Graph_fex1172,Graph_fey1172);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#196f3d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1172 = new TH1F("Graph_Graph1172","",100,343845.7,343945.3);
   Graph_Graph1172->SetMinimum(0);
   Graph_Graph1172->SetMaximum(0.095909);
   Graph_Graph1172->SetDirectory(0);
   Graph_Graph1172->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1172->SetLineColor(ci);
   Graph_Graph1172->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1172->GetXaxis()->SetNoExponent();
   Graph_Graph1172->GetXaxis()->SetNdivisions(5);
   Graph_Graph1172->GetXaxis()->SetLabelFont(42);
   Graph_Graph1172->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1172->GetXaxis()->SetTitleFont(42);
   Graph_Graph1172->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1172->GetYaxis()->SetLabelFont(42);
   Graph_Graph1172->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1172->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1172->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1172->GetYaxis()->SetTitleFont(42);
   Graph_Graph1172->GetZaxis()->SetLabelFont(42);
   Graph_Graph1172->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1172->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1172->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1172);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1173[5] = {
   343644,
   343648,
   343650,
   343652,
   343663};
   Double_t Graph_fy1173[5] = {
   0.0626997,
   0.05622765,
   0.1953142,
   0.0671349,
   0.06197139};
   Double_t Graph_fex1173[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1173[5] = {
   0.00232062,
   0.003691526,
   0.07382184,
   0.02740771,
   0.009562393};
   gre = new TGraphErrors(5,Graph_fx1173,Graph_fy1173,Graph_fex1173,Graph_fey1173);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e317ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1173 = new TH1F("Graph_Graph1173","",100,343642.1,343664.9);
   Graph_Graph1173->SetMinimum(0.0167863);
   Graph_Graph1173->SetMaximum(0.292077);
   Graph_Graph1173->SetDirectory(0);
   Graph_Graph1173->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1173->SetLineColor(ci);
   Graph_Graph1173->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1173->GetXaxis()->SetNoExponent();
   Graph_Graph1173->GetXaxis()->SetNdivisions(5);
   Graph_Graph1173->GetXaxis()->SetLabelFont(42);
   Graph_Graph1173->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1173->GetXaxis()->SetTitleFont(42);
   Graph_Graph1173->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1173->GetYaxis()->SetLabelFont(42);
   Graph_Graph1173->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1173->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1173->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1173->GetYaxis()->SetTitleFont(42);
   Graph_Graph1173->GetZaxis()->SetLabelFont(42);
   Graph_Graph1173->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1173->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1173->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1173);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1174[5] = {
   343638,
   343668,
   343673,
   343677,
   343680};
   Double_t Graph_fy1174[5] = {
   0.06062156,
   0.0608943,
   0.006434326,
   0.06152459,
   0.06243081};
   Double_t Graph_fex1174[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1174[5] = {
   0.002775671,
   0.003213879,
   0.00371486,
   0.001758563,
   0.00148983};
   gre = new TGraphErrors(5,Graph_fx1174,Graph_fy1174,Graph_fex1174,Graph_fey1174);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0bf9f4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1174 = new TH1F("Graph_Graph1174","",100,343633.8,343684.2);
   Graph_Graph1174->SetMinimum(0.00244752);
   Graph_Graph1174->SetMaximum(0.07024705);
   Graph_Graph1174->SetDirectory(0);
   Graph_Graph1174->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1174->SetLineColor(ci);
   Graph_Graph1174->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1174->GetXaxis()->SetNoExponent();
   Graph_Graph1174->GetXaxis()->SetNdivisions(5);
   Graph_Graph1174->GetXaxis()->SetLabelFont(42);
   Graph_Graph1174->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1174->GetXaxis()->SetTitleFont(42);
   Graph_Graph1174->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1174->GetYaxis()->SetLabelFont(42);
   Graph_Graph1174->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1174->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1174->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1174->GetYaxis()->SetTitleFont(42);
   Graph_Graph1174->GetZaxis()->SetLabelFont(42);
   Graph_Graph1174->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1174->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1174->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1174);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1175[2] = {
   343640,
   343642};
   Double_t Graph_fy1175[2] = {
   0.05138191,
   0.06369274};
   Double_t Graph_fex1175[2] = {
   0,
   0};
   Double_t Graph_fey1175[2] = {
   0.002422166,
   0.001216122};
   gre = new TGraphErrors(2,Graph_fx1175,Graph_fy1175,Graph_fex1175,Graph_fey1175);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2cf90b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1175 = new TH1F("Graph_Graph1175","",100,343639.8,343642.2);
   Graph_Graph1175->SetMinimum(0.04736483);
   Graph_Graph1175->SetMaximum(0.06650378);
   Graph_Graph1175->SetDirectory(0);
   Graph_Graph1175->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1175->SetLineColor(ci);
   Graph_Graph1175->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1175->GetXaxis()->SetNoExponent();
   Graph_Graph1175->GetXaxis()->SetNdivisions(5);
   Graph_Graph1175->GetXaxis()->SetLabelFont(42);
   Graph_Graph1175->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1175->GetXaxis()->SetTitleFont(42);
   Graph_Graph1175->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1175->GetYaxis()->SetLabelFont(42);
   Graph_Graph1175->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1175->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1175->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1175->GetYaxis()->SetTitleFont(42);
   Graph_Graph1175->GetZaxis()->SetLabelFont(42);
   Graph_Graph1175->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1175->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1175->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1175);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1176[4] = {
   343623,
   343625,
   343627,
   343629};
   Double_t Graph_fy1176[4] = {
   0.05687611,
   0.06093832,
   0.04197703,
   0.1245829};
   Double_t Graph_fex1176[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1176[4] = {
   0.004824169,
   0.001625745,
   0.01586582,
   0.0440467};
   gre = new TGraphErrors(4,Graph_fx1176,Graph_fy1176,Graph_fex1176,Graph_fey1176);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#f90b28");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1176 = new TH1F("Graph_Graph1176","",100,343622.4,343629.6);
   Graph_Graph1176->SetMinimum(0.01185936);
   Graph_Graph1176->SetMaximum(0.1828814);
   Graph_Graph1176->SetDirectory(0);
   Graph_Graph1176->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1176->SetLineColor(ci);
   Graph_Graph1176->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1176->GetXaxis()->SetNoExponent();
   Graph_Graph1176->GetXaxis()->SetNdivisions(5);
   Graph_Graph1176->GetXaxis()->SetLabelFont(42);
   Graph_Graph1176->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1176->GetXaxis()->SetTitleFont(42);
   Graph_Graph1176->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1176->GetYaxis()->SetLabelFont(42);
   Graph_Graph1176->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1176->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1176->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1176->GetYaxis()->SetTitleFont(42);
   Graph_Graph1176->GetZaxis()->SetLabelFont(42);
   Graph_Graph1176->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1176->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1176->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1176);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1177[2] = {
   343619,
   343621};
   Double_t Graph_fy1177[2] = {
   0.06459814,
   0.06321229};
   Double_t Graph_fex1177[2] = {
   0,
   0};
   Double_t Graph_fey1177[2] = {
   0.001647719,
   0.002195453};
   gre = new TGraphErrors(2,Graph_fx1177,Graph_fy1177,Graph_fex1177,Graph_fey1177);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#1b38f5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1177 = new TH1F("Graph_Graph1177","",100,343618.8,343621.2);
   Graph_Graph1177->SetMinimum(0.06049393);
   Graph_Graph1177->SetMaximum(0.06676877);
   Graph_Graph1177->SetDirectory(0);
   Graph_Graph1177->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1177->SetLineColor(ci);
   Graph_Graph1177->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1177->GetXaxis()->SetNoExponent();
   Graph_Graph1177->GetXaxis()->SetNdivisions(5);
   Graph_Graph1177->GetXaxis()->SetLabelFont(42);
   Graph_Graph1177->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1177->GetXaxis()->SetTitleFont(42);
   Graph_Graph1177->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1177->GetYaxis()->SetLabelFont(42);
   Graph_Graph1177->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1177->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1177->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1177->GetYaxis()->SetTitleFont(42);
   Graph_Graph1177->GetZaxis()->SetLabelFont(42);
   Graph_Graph1177->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1177->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1177->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1177);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1178[4] = {
   343494,
   343496,
   343498,
   343501};
   Double_t Graph_fy1178[4] = {
   0.06084702,
   0.06500506,
   0.06692187,
   0.07396285};
   Double_t Graph_fex1178[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1178[4] = {
   0.006599786,
   0.002587811,
   0.00148313,
   0.0165386};
   gre = new TGraphErrors(4,Graph_fx1178,Graph_fy1178,Graph_fex1178,Graph_fey1178);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffc300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1178 = new TH1F("Graph_Graph1178","",100,343493.3,343501.7);
   Graph_Graph1178->SetMinimum(0.05062181);
   Graph_Graph1178->SetMaximum(0.09412687);
   Graph_Graph1178->SetDirectory(0);
   Graph_Graph1178->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1178->SetLineColor(ci);
   Graph_Graph1178->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1178->GetXaxis()->SetNoExponent();
   Graph_Graph1178->GetXaxis()->SetNdivisions(5);
   Graph_Graph1178->GetXaxis()->SetLabelFont(42);
   Graph_Graph1178->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1178->GetXaxis()->SetTitleFont(42);
   Graph_Graph1178->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1178->GetYaxis()->SetLabelFont(42);
   Graph_Graph1178->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1178->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1178->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1178->GetYaxis()->SetTitleFont(42);
   Graph_Graph1178->GetZaxis()->SetLabelFont(42);
   Graph_Graph1178->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1178->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1178->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1178);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1179[1] = {
   344068};
   Double_t Graph_fy1179[1] = {
   0.07216243};
   Double_t Graph_fex1179[1] = {
   0};
   Double_t Graph_fey1179[1] = {
   0.001431558};
   gre = new TGraphErrors(1,Graph_fx1179,Graph_fy1179,Graph_fex1179,Graph_fey1179);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1179 = new TH1F("Graph_Graph1179","",100,344067.9,344069.1);
   Graph_Graph1179->SetMinimum(0.07044457);
   Graph_Graph1179->SetMaximum(0.0738803);
   Graph_Graph1179->SetDirectory(0);
   Graph_Graph1179->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1179->SetLineColor(ci);
   Graph_Graph1179->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1179->GetXaxis()->SetNoExponent();
   Graph_Graph1179->GetXaxis()->SetNdivisions(5);
   Graph_Graph1179->GetXaxis()->SetLabelFont(42);
   Graph_Graph1179->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1179->GetXaxis()->SetTitleFont(42);
   Graph_Graph1179->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1179->GetYaxis()->SetLabelFont(42);
   Graph_Graph1179->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1179->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1179->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1179->GetYaxis()->SetTitleFont(42);
   Graph_Graph1179->GetZaxis()->SetLabelFont(42);
   Graph_Graph1179->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1179->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1179->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1179);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1180[6] = {
   344058,
   344062,
   344063,
   344064,
   344065,
   344067};
   Double_t Graph_fy1180[6] = {
   0.0007450717,
   0.08042953,
   0.06968142,
   0.07150876,
   0.05988718,
   0.0727704};
   Double_t Graph_fex1180[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1180[6] = {
   0.0005268452,
   0.01185869,
   0.0009638086,
   0.0009132582,
   0.004255996,
   0.002058258};
   gre = new TGraphErrors(6,Graph_fx1180,Graph_fy1180,Graph_fex1180,Graph_fey1180);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2fa4e1");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1180 = new TH1F("Graph_Graph1180","",100,344057.1,344067.9);
   Graph_Graph1180->SetMinimum(0.0001964038);
   Graph_Graph1180->SetMaximum(0.1014952);
   Graph_Graph1180->SetDirectory(0);
   Graph_Graph1180->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1180->SetLineColor(ci);
   Graph_Graph1180->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1180->GetXaxis()->SetNoExponent();
   Graph_Graph1180->GetXaxis()->SetNdivisions(5);
   Graph_Graph1180->GetXaxis()->SetLabelFont(42);
   Graph_Graph1180->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1180->GetXaxis()->SetTitleFont(42);
   Graph_Graph1180->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1180->GetYaxis()->SetLabelFont(42);
   Graph_Graph1180->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1180->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1180->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1180->GetYaxis()->SetTitleFont(42);
   Graph_Graph1180->GetZaxis()->SetLabelFont(42);
   Graph_Graph1180->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1180->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1180->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1180);
   
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
      tex = new TLatex(0.23,0.83,"TID 2+");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
