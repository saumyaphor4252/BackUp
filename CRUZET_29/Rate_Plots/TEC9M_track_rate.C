void TEC9M_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug  3 18:11:39 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(343311.3,-0.01165054,344128.7,0.07837636);
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
   multigraph->SetName("track rate TEC9-");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1481[2] = {
   343772,
   343774};
   Double_t Graph_fy1481[2] = {
   0.01415777,
   0.01747934};
   Double_t Graph_fex1481[2] = {
   0,
   0};
   Double_t Graph_fey1481[2] = {
   0.003165774,
   0.0006644647};
   TGraphErrors *gre = new TGraphErrors(2,Graph_fx1481,Graph_fy1481,Graph_fex1481,Graph_fey1481);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f5601b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1481 = new TH1F("Graph_Graph1481","",100,343771.8,343774.2);
   Graph_Graph1481->SetMinimum(0.01027682);
   Graph_Graph1481->SetMaximum(0.01885898);
   Graph_Graph1481->SetDirectory(0);
   Graph_Graph1481->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1481->SetLineColor(ci);
   Graph_Graph1481->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1481->GetXaxis()->SetNoExponent();
   Graph_Graph1481->GetXaxis()->SetNdivisions(5);
   Graph_Graph1481->GetXaxis()->SetLabelFont(42);
   Graph_Graph1481->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1481->GetXaxis()->SetTitleFont(42);
   Graph_Graph1481->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1481->GetYaxis()->SetLabelFont(42);
   Graph_Graph1481->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1481->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1481->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1481->GetYaxis()->SetTitleFont(42);
   Graph_Graph1481->GetZaxis()->SetLabelFont(42);
   Graph_Graph1481->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1481->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1481->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1481);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1482[9] = {
   343854,
   343860,
   343862,
   343864,
   343866,
   343932,
   343934,
   343936,
   343937};
   Double_t Graph_fy1482[9] = {
   0.004173675,
   0.02624913,
   0.02836033,
   0.02707323,
   0.004424932,
   0,
   0.01953961,
   0.0288184,
   0.02989462};
   Double_t Graph_fex1482[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1482[9] = {
   0.004173675,
   0.004874341,
   0.0008566552,
   0.002356422,
   0.002554736,
   0,
   0.002880958,
   0.001797642,
   0.0008736041};
   gre = new TGraphErrors(9,Graph_fx1482,Graph_fy1482,Graph_fex1482,Graph_fey1482);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#196f3d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1482 = new TH1F("Graph_Graph1482","",100,343845.7,343945.3);
   Graph_Graph1482->SetMinimum(0);
   Graph_Graph1482->SetMaximum(0.03423582);
   Graph_Graph1482->SetDirectory(0);
   Graph_Graph1482->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1482->SetLineColor(ci);
   Graph_Graph1482->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1482->GetXaxis()->SetNoExponent();
   Graph_Graph1482->GetXaxis()->SetNdivisions(5);
   Graph_Graph1482->GetXaxis()->SetLabelFont(42);
   Graph_Graph1482->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1482->GetXaxis()->SetTitleFont(42);
   Graph_Graph1482->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1482->GetYaxis()->SetLabelFont(42);
   Graph_Graph1482->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1482->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1482->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1482->GetYaxis()->SetTitleFont(42);
   Graph_Graph1482->GetZaxis()->SetLabelFont(42);
   Graph_Graph1482->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1482->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1482->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1482);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1483[5] = {
   343644,
   343648,
   343650,
   343652,
   343663};
   Double_t Graph_fy1483[5] = {
   0.01692033,
   0.01429927,
   0.02790203,
   0.0447566,
   0.01032857};
   Double_t Graph_fex1483[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1483[5] = {
   0.001205524,
   0.001861607,
   0.02790203,
   0.0223783,
   0.003903831};
   gre = new TGraphErrors(5,Graph_fx1483,Graph_fy1483,Graph_fex1483,Graph_fey1483);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e317ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1483 = new TH1F("Graph_Graph1483","",100,343642.1,343664.9);
   Graph_Graph1483->SetMinimum(0);
   Graph_Graph1483->SetMaximum(0.07384839);
   Graph_Graph1483->SetDirectory(0);
   Graph_Graph1483->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1483->SetLineColor(ci);
   Graph_Graph1483->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1483->GetXaxis()->SetNoExponent();
   Graph_Graph1483->GetXaxis()->SetNdivisions(5);
   Graph_Graph1483->GetXaxis()->SetLabelFont(42);
   Graph_Graph1483->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1483->GetXaxis()->SetTitleFont(42);
   Graph_Graph1483->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1483->GetYaxis()->SetLabelFont(42);
   Graph_Graph1483->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1483->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1483->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1483->GetYaxis()->SetTitleFont(42);
   Graph_Graph1483->GetZaxis()->SetLabelFont(42);
   Graph_Graph1483->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1483->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1483->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1483);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1484[5] = {
   343638,
   343668,
   343673,
   343677,
   343680};
   Double_t Graph_fy1484[5] = {
   0.01690287,
   0.01509636,
   0.002144775,
   0.0180452,
   0.0168165};
   Double_t Graph_fex1484[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1484[5] = {
   0.001465665,
   0.001600211,
   0.002144775,
   0.0009523894,
   0.0007732235};
   gre = new TGraphErrors(5,Graph_fx1484,Graph_fy1484,Graph_fex1484,Graph_fey1484);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0bf9f4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1484 = new TH1F("Graph_Graph1484","",100,343633.8,343684.2);
   Graph_Graph1484->SetMinimum(0);
   Graph_Graph1484->SetMaximum(0.02089735);
   Graph_Graph1484->SetDirectory(0);
   Graph_Graph1484->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1484->SetLineColor(ci);
   Graph_Graph1484->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1484->GetXaxis()->SetNoExponent();
   Graph_Graph1484->GetXaxis()->SetNdivisions(5);
   Graph_Graph1484->GetXaxis()->SetLabelFont(42);
   Graph_Graph1484->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1484->GetXaxis()->SetTitleFont(42);
   Graph_Graph1484->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1484->GetYaxis()->SetLabelFont(42);
   Graph_Graph1484->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1484->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1484->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1484->GetYaxis()->SetTitleFont(42);
   Graph_Graph1484->GetZaxis()->SetLabelFont(42);
   Graph_Graph1484->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1484->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1484->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1484);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1485[2] = {
   343640,
   343642};
   Double_t Graph_fy1485[2] = {
   0.01427275,
   0.01655593};
   Double_t Graph_fex1485[2] = {
   0,
   0};
   Double_t Graph_fey1485[2] = {
   0.001276594,
   0.0006200246};
   gre = new TGraphErrors(2,Graph_fx1485,Graph_fy1485,Graph_fex1485,Graph_fey1485);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2cf90b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1485 = new TH1F("Graph_Graph1485","",100,343639.8,343642.2);
   Graph_Graph1485->SetMinimum(0.01257818);
   Graph_Graph1485->SetMaximum(0.01759394);
   Graph_Graph1485->SetDirectory(0);
   Graph_Graph1485->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1485->SetLineColor(ci);
   Graph_Graph1485->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1485->GetXaxis()->SetNoExponent();
   Graph_Graph1485->GetXaxis()->SetNdivisions(5);
   Graph_Graph1485->GetXaxis()->SetLabelFont(42);
   Graph_Graph1485->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1485->GetXaxis()->SetTitleFont(42);
   Graph_Graph1485->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1485->GetYaxis()->SetLabelFont(42);
   Graph_Graph1485->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1485->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1485->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1485->GetYaxis()->SetTitleFont(42);
   Graph_Graph1485->GetZaxis()->SetLabelFont(42);
   Graph_Graph1485->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1485->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1485->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1485);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1486[4] = {
   343623,
   343625,
   343627,
   343629};
   Double_t Graph_fy1486[4] = {
   0.01718559,
   0.01821644,
   0.02998359,
   0.01557286};
   Double_t Graph_fex1486[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1486[4] = {
   0.002651794,
   0.0008888712,
   0.01340907,
   0.01557286};
   gre = new TGraphErrors(4,Graph_fx1486,Graph_fy1486,Graph_fex1486,Graph_fey1486);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#f90b28");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1486 = new TH1F("Graph_Graph1486","",100,343622.4,343629.6);
   Graph_Graph1486->SetMinimum(0);
   Graph_Graph1486->SetMaximum(0.04773193);
   Graph_Graph1486->SetDirectory(0);
   Graph_Graph1486->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1486->SetLineColor(ci);
   Graph_Graph1486->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1486->GetXaxis()->SetNoExponent();
   Graph_Graph1486->GetXaxis()->SetNdivisions(5);
   Graph_Graph1486->GetXaxis()->SetLabelFont(42);
   Graph_Graph1486->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1486->GetXaxis()->SetTitleFont(42);
   Graph_Graph1486->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1486->GetYaxis()->SetLabelFont(42);
   Graph_Graph1486->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1486->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1486->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1486->GetYaxis()->SetTitleFont(42);
   Graph_Graph1486->GetZaxis()->SetLabelFont(42);
   Graph_Graph1486->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1486->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1486->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1486);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1487[2] = {
   343619,
   343621};
   Double_t Graph_fy1487[2] = {
   0.01866075,
   0.01791904};
   Double_t Graph_fex1487[2] = {
   0,
   0};
   Double_t Graph_fey1487[2] = {
   0.0008856001,
   0.00116891};
   gre = new TGraphErrors(2,Graph_fx1487,Graph_fy1487,Graph_fex1487,Graph_fey1487);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#1b38f5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1487 = new TH1F("Graph_Graph1487","",100,343618.8,343621.2);
   Graph_Graph1487->SetMinimum(0.01647051);
   Graph_Graph1487->SetMaximum(0.01982597);
   Graph_Graph1487->SetDirectory(0);
   Graph_Graph1487->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1487->SetLineColor(ci);
   Graph_Graph1487->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1487->GetXaxis()->SetNoExponent();
   Graph_Graph1487->GetXaxis()->SetNdivisions(5);
   Graph_Graph1487->GetXaxis()->SetLabelFont(42);
   Graph_Graph1487->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1487->GetXaxis()->SetTitleFont(42);
   Graph_Graph1487->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1487->GetYaxis()->SetLabelFont(42);
   Graph_Graph1487->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1487->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1487->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1487->GetYaxis()->SetTitleFont(42);
   Graph_Graph1487->GetZaxis()->SetLabelFont(42);
   Graph_Graph1487->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1487->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1487->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1487);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1488[4] = {
   343494,
   343496,
   343498,
   343501};
   Double_t Graph_fy1488[4] = {
   0.01932788,
   0.0258578,
   0.0242904,
   0.02218886};
   Double_t Graph_fex1488[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1488[4] = {
   0.003719651,
   0.00163213,
   0.000893537,
   0.009058563};
   gre = new TGraphErrors(4,Graph_fx1488,Graph_fy1488,Graph_fex1488,Graph_fey1488);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffc300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1488 = new TH1F("Graph_Graph1488","",100,343493.3,343501.7);
   Graph_Graph1488->SetMinimum(0.01131858);
   Graph_Graph1488->SetMaximum(0.03305913);
   Graph_Graph1488->SetDirectory(0);
   Graph_Graph1488->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1488->SetLineColor(ci);
   Graph_Graph1488->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1488->GetXaxis()->SetNoExponent();
   Graph_Graph1488->GetXaxis()->SetNdivisions(5);
   Graph_Graph1488->GetXaxis()->SetLabelFont(42);
   Graph_Graph1488->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1488->GetXaxis()->SetTitleFont(42);
   Graph_Graph1488->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1488->GetYaxis()->SetLabelFont(42);
   Graph_Graph1488->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1488->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1488->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1488->GetYaxis()->SetTitleFont(42);
   Graph_Graph1488->GetZaxis()->SetLabelFont(42);
   Graph_Graph1488->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1488->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1488->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1488);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1489[1] = {
   344068};
   Double_t Graph_fy1489[1] = {
   0.02862642};
   Double_t Graph_fex1489[1] = {
   0};
   Double_t Graph_fey1489[1] = {
   0.0009016475};
   gre = new TGraphErrors(1,Graph_fx1489,Graph_fy1489,Graph_fex1489,Graph_fey1489);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1489 = new TH1F("Graph_Graph1489","",100,344067.9,344069.1);
   Graph_Graph1489->SetMinimum(0.02754444);
   Graph_Graph1489->SetMaximum(0.0297084);
   Graph_Graph1489->SetDirectory(0);
   Graph_Graph1489->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1489->SetLineColor(ci);
   Graph_Graph1489->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1489->GetXaxis()->SetNoExponent();
   Graph_Graph1489->GetXaxis()->SetNdivisions(5);
   Graph_Graph1489->GetXaxis()->SetLabelFont(42);
   Graph_Graph1489->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1489->GetXaxis()->SetTitleFont(42);
   Graph_Graph1489->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1489->GetYaxis()->SetLabelFont(42);
   Graph_Graph1489->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1489->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1489->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1489->GetYaxis()->SetTitleFont(42);
   Graph_Graph1489->GetZaxis()->SetLabelFont(42);
   Graph_Graph1489->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1489->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1489->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1489);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1490[6] = {
   344058,
   344062,
   344063,
   344064,
   344065,
   344067};
   Double_t Graph_fy1490[6] = {
   0.0003725359,
   0.01923315,
   0.02840848,
   0.02904205,
   0.02903621,
   0.02870065};
   Double_t Graph_fex1490[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1490[6] = {
   0.0003725359,
   0.005799013,
   0.0006153982,
   0.0005820062,
   0.002963496,
   0.001292612};
   gre = new TGraphErrors(6,Graph_fx1490,Graph_fy1490,Graph_fex1490,Graph_fey1490);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2fa4e1");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1490 = new TH1F("Graph_Graph1490","",100,344057.1,344067.9);
   Graph_Graph1490->SetMinimum(0);
   Graph_Graph1490->SetMaximum(0.03519967);
   Graph_Graph1490->SetDirectory(0);
   Graph_Graph1490->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1490->SetLineColor(ci);
   Graph_Graph1490->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1490->GetXaxis()->SetNoExponent();
   Graph_Graph1490->GetXaxis()->SetNdivisions(5);
   Graph_Graph1490->GetXaxis()->SetLabelFont(42);
   Graph_Graph1490->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1490->GetXaxis()->SetTitleFont(42);
   Graph_Graph1490->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1490->GetYaxis()->SetLabelFont(42);
   Graph_Graph1490->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1490->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1490->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1490->GetYaxis()->SetTitleFont(42);
   Graph_Graph1490->GetZaxis()->SetLabelFont(42);
   Graph_Graph1490->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1490->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1490->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1490);
   
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
      tex = new TLatex(0.23,0.83," TEC 9-");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
