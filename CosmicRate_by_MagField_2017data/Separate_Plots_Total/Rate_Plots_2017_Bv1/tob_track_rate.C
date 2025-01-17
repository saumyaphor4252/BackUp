void tob_track_rate()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 23 19:45:25 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",117,107,800,600);
   c->Range(296715.7,-0.4474321,298727.3,4.495542);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1006[80] = {
   297642,
   298019,
   297104,
   297439,
   297725,
   297724,
   298030,
   297633,
   297508,
   297344,
   297463,
   297638,
   297667,
   297938,
   297117,
   297393,
   298211,
   297720,
   298208,
   298020,
   297345,
   297506,
   297360,
   297719,
   298392,
   298025,
   297943,
   297414,
   297944,
   297385,
   297939,
   298023,
   297464,
   297051,
   298214,
   298022,
   297452,
   297686,
   298215,
   297475,
   298024,
   297392,
   297119,
   297937,
   297940,
   297415,
   297389,
   298037,
   297437,
   297510,
   297120,
   297103,
   297726,
   298036,
   297436,
   297118,
   298386,
   298035,
   298034,
   298029,
   297121,
   297362,
   297446,
   297622,
   298197,
   297365,
   297443,
   297624,
   298034,
   297384,
   297449,
   297364,
   297608,
   298021,
   297936,
   297623,
   298216,
   297361,
   297680,
   297368};
   Double_t Graph0_fy1006[80] = {
   1.868677,
   2.330599,
   2.207038,
   2.452146,
   2.38285,
   2.507766,
   2.517815,
   2.635258,
   2.512368,
   2.339813,
   2.52724,
   2.515557,
   2.255886,
   2.359288,
   2.435003,
   2.68464,
   2.430553,
   2.184766,
   2.466212,
   2.33608,
   0.9270317,
   2.434716,
   2.494001,
   2.339874,
   2.323624,
   2.468851,
   2.379269,
   2.492298,
   2.37464,
   2.41431,
   2.477737,
   2.38386,
   2.218222,
   2.005269,
   2.373008,
   2.378989,
   2.505504,
   0.05845005,
   2.364147,
   2.72957,
   2.504614,
   2.342579,
   2.43951,
   2.382429,
   2.387161,
   1.205813,
   2.193502,
   2.398332,
   2.373576,
   2.321695,
   2.449023,
   2.42149,
   2.33727,
   2.387782,
   2.478251,
   2.464556,
   2.251197,
   3.278006,
   2.740337,
   2.518683,
   2.455785,
   2.510156,
   2.471223,
   2.52145,
   2.394384,
   2.473512,
   2.475254,
   2.372599,
   2.44893,
   2.41049,
   2.453248,
   2.519182,
   2.006373,
   2.381873,
   2.572261,
   2.499441,
   2.389211,
   2.413153,
   2.456795,
   2.435112};
   Double_t Graph0_fex1006[80] = {
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
   Double_t Graph0_fey1006[80] = {
   0.04860681,
   0.06905667,
   0.01715061,
   0.03741228,
   0.02373846,
   0.05932322,
   0.02558829,
   0.06761518,
   0.1214399,
   0.05099823,
   0.1466454,
   0.05996225,
   0.028766,
   0.02569305,
   0.01865971,
   0.33558,
   0.03498376,
   0.02316238,
   0.04447417,
   0.06388841,
   0.0199235,
   0.04584023,
   0.03476319,
   0.02995902,
   0.007543758,
   0.04448561,
   0.01290245,
   0.06291997,
   0.05720779,
   0.03323845,
   0.04149783,
   0.02225866,
   0.0265223,
   0.02711061,
   0.0309596,
   0.06811024,
   0.03475177,
   0.006377423,
   0.008808638,
   0.117462,
   0.1309183,
   0.06087187,
   0.008413753,
   0.01567795,
   0.01999814,
   0.05876772,
   0.1421836,
   0.06745835,
   0.03877068,
   0.05972729,
   0.09867394,
   0.01569685,
   0.03830047,
   0.05467885,
   0.04418409,
   0.01449438,
   0.03924185,
   0.3642229,
   0.145442,
   0.05610945,
   0.05143075,
   0.04282894,
   0.2590546,
   0.1011823,
   0.02522221,
   0.04925399,
   0.03619008,
   0.03664492,
   0.009321431,
   0.03953217,
   0.03801772,
   0.07864768,
   0.01868193,
   0.04706671,
   0.1208554,
   0.06812717,
   0.04064131,
   0.02900894,
   0.0591013,
   0.1084685};
   TGraphErrors *gre = new TGraphErrors(80,Graph0_fx1006,Graph0_fy1006,Graph0_fex1006,Graph0_fey1006);
   gre->SetName("Graph0");
   gre->SetTitle("TOB Track Rate");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1006 = new TH1F("Graph_Graph1006","TOB Track Rate",100,296916.9,298526.1);
   Graph_Graph1006->SetMinimum(0.04686536);
   Graph_Graph1006->SetMaximum(4.001244);
   Graph_Graph1006->SetDirectory(0);
   Graph_Graph1006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1006->SetLineColor(ci);
   Graph_Graph1006->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1006->GetXaxis()->SetNoExponent();
   Graph_Graph1006->GetXaxis()->SetLabelFont(42);
   Graph_Graph1006->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1006->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1006->GetXaxis()->SetTitleFont(42);
   Graph_Graph1006->GetYaxis()->SetTitle("Track Rate (in Hz)");
   Graph_Graph1006->GetYaxis()->SetLabelFont(42);
   Graph_Graph1006->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1006->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1006->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1006->GetYaxis()->SetTitleFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1006->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1006);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.3540351,0.94,0.6459649,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("TOB Track Rate");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
