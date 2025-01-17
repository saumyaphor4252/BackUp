void track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Mon Jun 28 19:38:12 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(316727.5,-0.7172934,317797.7,4.881743);
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
   
   Double_t Graph0_fx1002[85] = {
   316998,
   317001,
   317002,
   317065,
   317083,
   317160,
   317162,
   317163,
   317172,
   317190,
   317192,
   317194,
   317202,
   317203,
   317206,
   317207,
   317216,
   317228,
   317230,
   317234,
   317236,
   317241,
   317243,
   317246,
   317247,
   317249,
   317251,
   317265,
   317287,
   317322,
   317342,
   317343,
   317344,
   317346,
   317347,
   317348,
   317349,
   317350,
   317351,
   317352,
   317353,
   317355,
   317358,
   317362,
   317371,
   317387,
   317418,
   317419,
   317421,
   317422,
   317428,
   317442,
   317443,
   317464,
   317489,
   317491,
   317493,
   317495,
   317496,
   317497,
   317498,
   317520,
   317557,
   317579,
   317581,
   317584,
   317585,
   317592,
   317595,
   317600,
   317602,
   317603,
   317604,
   317605,
   317615,
   317618,
   317620,
   317629,
   317632,
   317634,
   317642,
   317684,
   317685,
   317686,
   317687};
   Double_t Graph0_fy1002[85] = {
   0.2002155,
   0.2344864,
   0.2157667,
   0.7204814,
   1.31423,
   0.0309342,
   0.07812437,
   0.3140752,
   0.8356215,
   1.561806,
   2.252914,
   2.47741,
   2.494132,
   2.066429,
   0.01007319,
   2.258296,
   2.402048,
   2.832904,
   2.538409,
   2.30789,
   0.7819333,
   2.450655,
   2.52691,
   2.367507,
   2.401442,
   2.485623,
   1.892556,
   1.893059,
   1.965008,
   2.38425,
   2.317599,
   2.28433,
   2.395023,
   2.506745,
   2.334621,
   2.428992,
   2.481247,
   2.501758,
   2.456322,
   2.456849,
   2.251727,
   2.307072,
   2.45235,
   2.437082,
   2.292491,
   2.347933,
   2.378258,
   0.7298454,
   2.413844,
   2.383889,
   1.855648,
   2.384203,
   1.756266,
   1.554995,
   1.834706,
   2.417631,
   0.3980851,
   1.648078,
   2.460397,
   2.617664,
   1.842397,
   2.386415,
   0.9765582,
   2.271178,
   0.7793815,
   2.50651,
   2.282716,
   2.189409,
   2.244686,
   2.216211,
   2.174354,
   3.529451,
   2.392845,
   2.403484,
   2.204332,
   2.215639,
   2.124158,
   2.044106,
   2.195306,
   0.9984748,
   0.7745131,
   2.403178,
   2.409135,
   2.296601,
   2.263221};
   Double_t Graph0_fex1002[85] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1002[85] = {
   0.03018362,
   0.04145173,
   0.02655905,
   0.02134818,
   0.0267321,
   0.01785987,
   0.01450733,
   0.01710876,
   0.01623561,
   0.05264846,
   0.0748894,
   0.0274086,
   0.08988227,
   0.03262421,
   0.001975514,
   0.01384494,
   0.02836954,
   0.2360753,
   0.06515171,
   0.1596401,
   0.03023129,
   0.07523579,
   0.06351106,
   0.04336937,
   0.02673058,
   0.04813087,
   0.02609491,
   0.03998926,
   0.02106105,
   0.07425444,
   0.08531201,
   0.0903667,
   0.01161839,
   0.03828095,
   0.07404969,
   0.02060318,
   0.05266154,
   0.03195325,
   0.02995069,
   0.0106007,
   0.0305658,
   0.08782873,
   0.03541137,
   0.02349547,
   0.01718729,
   0.009244045,
   0.05069312,
   0.04353892,
   0.04336091,
   0.02149917,
   0.02679234,
   0.1933844,
   0.03328554,
   0.02358491,
   0.101615,
   0.08935821,
   0.01299794,
   0.03296815,
   0.06035172,
   0.1048745,
   0.02782264,
   0.02904868,
   0.02340447,
   0.01820733,
   0.05908476,
   0.08378338,
   0.01003326,
   0.1270424,
   0.03250439,
   0.04672184,
   0.04115025,
   0.4634396,
   0.02844597,
   0.01569129,
   0.06326561,
   0.0149832,
   0.03037923,
   0.03059435,
   0.03796879,
   0.0185958,
   0.02284908,
   0.04314149,
   0.02252512,
   0.08380415,
   0.01828153};
   TGraphErrors *gre = new TGraphErrors(85,Graph0_fx1002,Graph0_fy1002,Graph0_fex1002,Graph0_fey1002);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","",100,316929.1,317755.9);
   Graph_Graph1002->SetMinimum(0.007287905);
   Graph_Graph1002->SetMaximum(4.39137);
   Graph_Graph1002->SetDirectory(0);
   Graph_Graph1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1002->SetLineColor(ci);
   Graph_Graph1002->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1002->GetXaxis()->SetNoExponent();
   Graph_Graph1002->GetXaxis()->SetNdivisions(5);
   Graph_Graph1002->GetXaxis()->SetLabelFont(42);
   Graph_Graph1002->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1002->GetXaxis()->SetTitleFont(42);
   Graph_Graph1002->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1002->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1002->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1002->GetYaxis()->SetTitleFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1002->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1002);
   
   gre->Draw("ap");
   TLatex *   tex = new TLatex(0.685,0.94,"cosmic rays (2018)");
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
