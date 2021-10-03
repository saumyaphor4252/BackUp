void TEC4M_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug  3 18:11:34 2021) by ROOT version6.10/04
   TCanvas *c1 = new TCanvas("c1", "c1",604,112,856,836);
   gStyle->SetOptStat(0);
   c1->Range(343311.3,-0.04101594,344128.7,0.2759253);
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
   multigraph->SetName("track rate TEC4-");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1331[2] = {
   343772,
   343774};
   Double_t Graph_fy1331[2] = {
   0.07645198,
   0.1045477};
   Double_t Graph_fex1331[2] = {
   0,
   0};
   Double_t Graph_fey1331[2] = {
   0.007356594,
   0.001625049};
   TGraphErrors *gre = new TGraphErrors(2,Graph_fx1331,Graph_fy1331,Graph_fex1331,Graph_fey1331);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f5601b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1331 = new TH1F("Graph_Graph1331","",100,343771.8,343774.2);
   Graph_Graph1331->SetMinimum(0.06538765);
   Graph_Graph1331->SetMaximum(0.1098804);
   Graph_Graph1331->SetDirectory(0);
   Graph_Graph1331->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1331->SetLineColor(ci);
   Graph_Graph1331->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1331->GetXaxis()->SetNoExponent();
   Graph_Graph1331->GetXaxis()->SetNdivisions(5);
   Graph_Graph1331->GetXaxis()->SetLabelFont(42);
   Graph_Graph1331->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1331->GetXaxis()->SetTitleFont(42);
   Graph_Graph1331->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1331->GetYaxis()->SetLabelFont(42);
   Graph_Graph1331->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1331->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1331->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1331->GetYaxis()->SetTitleFont(42);
   Graph_Graph1331->GetZaxis()->SetLabelFont(42);
   Graph_Graph1331->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1331->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1331->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1331);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1332[9] = {
   343854,
   343860,
   343862,
   343864,
   343866,
   343932,
   343934,
   343936,
   343937};
   Double_t Graph_fy1332[9] = {
   0.0166947,
   0.1131428,
   0.1352809,
   0.1306488,
   0.03687444,
   0.001418555,
   0.1236093,
   0.131533,
   0.1343599};
   Double_t Graph_fex1332[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1332[9] = {
   0.00834735,
   0.0101198,
   0.001870977,
   0.005176495,
   0.007374887,
   0.001418555,
   0.007246104,
   0.003840482,
   0.001852051};
   gre = new TGraphErrors(9,Graph_fx1332,Graph_fy1332,Graph_fex1332,Graph_fey1332);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#196f3d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1332 = new TH1F("Graph_Graph1332","",100,343845.7,343945.3);
   Graph_Graph1332->SetMinimum(0);
   Graph_Graph1332->SetMaximum(0.150867);
   Graph_Graph1332->SetDirectory(0);
   Graph_Graph1332->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1332->SetLineColor(ci);
   Graph_Graph1332->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1332->GetXaxis()->SetNoExponent();
   Graph_Graph1332->GetXaxis()->SetNdivisions(5);
   Graph_Graph1332->GetXaxis()->SetLabelFont(42);
   Graph_Graph1332->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1332->GetXaxis()->SetTitleFont(42);
   Graph_Graph1332->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1332->GetYaxis()->SetLabelFont(42);
   Graph_Graph1332->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1332->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1332->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1332->GetYaxis()->SetTitleFont(42);
   Graph_Graph1332->GetZaxis()->SetLabelFont(42);
   Graph_Graph1332->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1332->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1332->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1332);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1333[5] = {
   343644,
   343648,
   343650,
   343652,
   343663};
   Double_t Graph_fy1333[5] = {
   0.1026386,
   0.1025185,
   0.1395102,
   0.1902156,
   0.09443259};
   Double_t Graph_fex1333[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1333[5] = {
   0.002969112,
   0.004984621,
   0.06239085,
   0.04613405,
   0.01180407};
   gre = new TGraphErrors(5,Graph_fx1333,Graph_fy1333,Graph_fex1333,Graph_fey1333);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e317ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1333 = new TH1F("Graph_Graph1333","",100,343642.1,343664.9);
   Graph_Graph1333->SetMinimum(0.0611963);
   Graph_Graph1333->SetMaximum(0.2522726);
   Graph_Graph1333->SetDirectory(0);
   Graph_Graph1333->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1333->SetLineColor(ci);
   Graph_Graph1333->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1333->GetXaxis()->SetNoExponent();
   Graph_Graph1333->GetXaxis()->SetNdivisions(5);
   Graph_Graph1333->GetXaxis()->SetLabelFont(42);
   Graph_Graph1333->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1333->GetXaxis()->SetTitleFont(42);
   Graph_Graph1333->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1333->GetYaxis()->SetLabelFont(42);
   Graph_Graph1333->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1333->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1333->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1333->GetYaxis()->SetTitleFont(42);
   Graph_Graph1333->GetZaxis()->SetLabelFont(42);
   Graph_Graph1333->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1333->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1333->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1333);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1334[5] = {
   343638,
   343668,
   343673,
   343677,
   343680};
   Double_t Graph_fy1334[5] = {
   0.1084071,
   0.1065226,
   0.0171582,
   0.1056574,
   0.1030677};
   Double_t Graph_fex1334[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1334[5] = {
   0.003711789,
   0.004250716,
   0.006066341,
   0.002304537,
   0.00191425};
   gre = new TGraphErrors(5,Graph_fx1334,Graph_fy1334,Graph_fex1334,Graph_fey1334);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0bf9f4");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1334 = new TH1F("Graph_Graph1334","",100,343633.8,343684.2);
   Graph_Graph1334->SetMinimum(0.0009891581);
   Graph_Graph1334->SetMaximum(0.1222216);
   Graph_Graph1334->SetDirectory(0);
   Graph_Graph1334->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1334->SetLineColor(ci);
   Graph_Graph1334->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1334->GetXaxis()->SetNoExponent();
   Graph_Graph1334->GetXaxis()->SetNdivisions(5);
   Graph_Graph1334->GetXaxis()->SetLabelFont(42);
   Graph_Graph1334->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1334->GetXaxis()->SetTitleFont(42);
   Graph_Graph1334->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1334->GetYaxis()->SetLabelFont(42);
   Graph_Graph1334->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1334->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1334->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1334->GetYaxis()->SetTitleFont(42);
   Graph_Graph1334->GetZaxis()->SetLabelFont(42);
   Graph_Graph1334->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1334->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1334->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1334);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1335[2] = {
   343640,
   343642};
   Double_t Graph_fy1335[2] = {
   0.09157398,
   0.1019363};
   Double_t Graph_fex1335[2] = {
   0,
   0};
   Double_t Graph_fey1335[2] = {
   0.00323359,
   0.001538496};
   gre = new TGraphErrors(2,Graph_fx1335,Graph_fy1335,Graph_fex1335,Graph_fey1335);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2cf90b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1335 = new TH1F("Graph_Graph1335","",100,343639.8,343642.2);
   Graph_Graph1335->SetMinimum(0.08682695);
   Graph_Graph1335->SetMaximum(0.1049882);
   Graph_Graph1335->SetDirectory(0);
   Graph_Graph1335->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1335->SetLineColor(ci);
   Graph_Graph1335->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1335->GetXaxis()->SetNoExponent();
   Graph_Graph1335->GetXaxis()->SetNdivisions(5);
   Graph_Graph1335->GetXaxis()->SetLabelFont(42);
   Graph_Graph1335->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1335->GetXaxis()->SetTitleFont(42);
   Graph_Graph1335->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1335->GetYaxis()->SetLabelFont(42);
   Graph_Graph1335->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1335->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1335->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1335->GetYaxis()->SetTitleFont(42);
   Graph_Graph1335->GetZaxis()->SetLabelFont(42);
   Graph_Graph1335->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1335->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1335->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1335);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1336[4] = {
   343623,
   343625,
   343627,
   343629};
   Double_t Graph_fy1336[4] = {
   0.1072053,
   0.107824,
   0.1079409,
   0.1401558};
   Double_t Graph_fex1336[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1336[4] = {
   0.006623168,
   0.002162543,
   0.02544192,
   0.04671859};
   gre = new TGraphErrors(4,Graph_fx1336,Graph_fy1336,Graph_fex1336,Graph_fey1336);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#f90b28");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1336 = new TH1F("Graph_Graph1336","",100,343622.4,343629.6);
   Graph_Graph1336->SetMinimum(0.07206147);
   Graph_Graph1336->SetMaximum(0.1973119);
   Graph_Graph1336->SetDirectory(0);
   Graph_Graph1336->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1336->SetLineColor(ci);
   Graph_Graph1336->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1336->GetXaxis()->SetNoExponent();
   Graph_Graph1336->GetXaxis()->SetNdivisions(5);
   Graph_Graph1336->GetXaxis()->SetLabelFont(42);
   Graph_Graph1336->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1336->GetXaxis()->SetTitleFont(42);
   Graph_Graph1336->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1336->GetYaxis()->SetLabelFont(42);
   Graph_Graph1336->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1336->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1336->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1336->GetYaxis()->SetTitleFont(42);
   Graph_Graph1336->GetZaxis()->SetLabelFont(42);
   Graph_Graph1336->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1336->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1336->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1336);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1337[2] = {
   343619,
   343621};
   Double_t Graph_fy1337[2] = {
   0.1049877,
   0.1022529};
   Double_t Graph_fex1337[2] = {
   0,
   0};
   Double_t Graph_fey1337[2] = {
   0.002100595,
   0.002792295};
   gre = new TGraphErrors(2,Graph_fx1337,Graph_fy1337,Graph_fex1337,Graph_fey1337);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#1b38f5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1337 = new TH1F("Graph_Graph1337","",100,343618.8,343621.2);
   Graph_Graph1337->SetMinimum(0.09869786);
   Graph_Graph1337->SetMaximum(0.1078511);
   Graph_Graph1337->SetDirectory(0);
   Graph_Graph1337->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1337->SetLineColor(ci);
   Graph_Graph1337->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1337->GetXaxis()->SetNoExponent();
   Graph_Graph1337->GetXaxis()->SetNdivisions(5);
   Graph_Graph1337->GetXaxis()->SetLabelFont(42);
   Graph_Graph1337->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1337->GetXaxis()->SetTitleFont(42);
   Graph_Graph1337->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1337->GetYaxis()->SetLabelFont(42);
   Graph_Graph1337->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1337->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1337->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1337->GetYaxis()->SetTitleFont(42);
   Graph_Graph1337->GetZaxis()->SetLabelFont(42);
   Graph_Graph1337->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1337->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1337->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1337);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1338[4] = {
   343494,
   343496,
   343498,
   343501};
   Double_t Graph_fy1338[4] = {
   0.1073771,
   0.1244471,
   0.1170475,
   0.1183406};
   Double_t Graph_fex1338[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph_fey1338[4] = {
   0.008767303,
   0.003580563,
   0.001961446,
   0.02091985};
   gre = new TGraphErrors(4,Graph_fx1338,Graph_fy1338,Graph_fex1338,Graph_fey1338);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffc300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1338 = new TH1F("Graph_Graph1338","",100,343493.3,343501.7);
   Graph_Graph1338->SetMinimum(0.09323674);
   Graph_Graph1338->SetMaximum(0.1434444);
   Graph_Graph1338->SetDirectory(0);
   Graph_Graph1338->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1338->SetLineColor(ci);
   Graph_Graph1338->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1338->GetXaxis()->SetNoExponent();
   Graph_Graph1338->GetXaxis()->SetNdivisions(5);
   Graph_Graph1338->GetXaxis()->SetLabelFont(42);
   Graph_Graph1338->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1338->GetXaxis()->SetTitleFont(42);
   Graph_Graph1338->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1338->GetYaxis()->SetLabelFont(42);
   Graph_Graph1338->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1338->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1338->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1338->GetYaxis()->SetTitleFont(42);
   Graph_Graph1338->GetZaxis()->SetLabelFont(42);
   Graph_Graph1338->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1338->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1338->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1338);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1339[1] = {
   344068};
   Double_t Graph_fy1339[1] = {
   0.1352371};
   Double_t Graph_fex1339[1] = {
   0};
   Double_t Graph_fey1339[1] = {
   0.001959752};
   gre = new TGraphErrors(1,Graph_fx1339,Graph_fy1339,Graph_fex1339,Graph_fey1339);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1339 = new TH1F("Graph_Graph1339","",100,344067.9,344069.1);
   Graph_Graph1339->SetMinimum(0.1328854);
   Graph_Graph1339->SetMaximum(0.1375888);
   Graph_Graph1339->SetDirectory(0);
   Graph_Graph1339->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1339->SetLineColor(ci);
   Graph_Graph1339->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1339->GetXaxis()->SetNoExponent();
   Graph_Graph1339->GetXaxis()->SetNdivisions(5);
   Graph_Graph1339->GetXaxis()->SetLabelFont(42);
   Graph_Graph1339->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1339->GetXaxis()->SetTitleFont(42);
   Graph_Graph1339->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1339->GetYaxis()->SetLabelFont(42);
   Graph_Graph1339->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1339->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1339->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1339->GetYaxis()->SetTitleFont(42);
   Graph_Graph1339->GetZaxis()->SetLabelFont(42);
   Graph_Graph1339->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1339->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1339->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1339);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1340[6] = {
   344058,
   344062,
   344063,
   344064,
   344065,
   344067};
   Double_t Graph_fy1340[6] = {
   0.0003725359,
   0.1031596,
   0.1342837,
   0.135273,
   0.1306629,
   0.1295313};
   Double_t Graph_fex1340[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1340[6] = {
   0.0003725359,
   0.01343024,
   0.001337962,
   0.001256086,
   0.006286523,
   0.002746059};
   gre = new TGraphErrors(6,Graph_fx1340,Graph_fy1340,Graph_fex1340,Graph_fey1340);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#2fa4e1");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.8);
   
   TH1F *Graph_Graph1340 = new TH1F("Graph_Graph1340","",100,344057.1,344067.9);
   Graph_Graph1340->SetMinimum(0);
   Graph_Graph1340->SetMaximum(0.1506444);
   Graph_Graph1340->SetDirectory(0);
   Graph_Graph1340->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1340->SetLineColor(ci);
   Graph_Graph1340->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1340->GetXaxis()->SetNoExponent();
   Graph_Graph1340->GetXaxis()->SetNdivisions(5);
   Graph_Graph1340->GetXaxis()->SetLabelFont(42);
   Graph_Graph1340->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1340->GetXaxis()->SetTitleFont(42);
   Graph_Graph1340->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1340->GetYaxis()->SetLabelFont(42);
   Graph_Graph1340->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1340->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1340->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1340->GetYaxis()->SetTitleFont(42);
   Graph_Graph1340->GetZaxis()->SetLabelFont(42);
   Graph_Graph1340->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1340->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1340->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1340);
   
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
      tex = new TLatex(0.23,0.83,"TEC 4-");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
