void tob_track_rate()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 23 23:07:03 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",193,183,800,600);
   c->Range(296882.2,-0.3619059,297894.8,3.725806);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1006[51] = {
   297642,
   297104,
   297439,
   297725,
   297724,
   297633,
   297508,
   297344,
   297463,
   297638,
   297667,
   297117,
   297393,
   297720,
   297345,
   297506,
   297360,
   297719,
   297414,
   297385,
   297464,
   297051,
   297452,
   297686,
   297475,
   297392,
   297119,
   297415,
   297389,
   297437,
   297510,
   297120,
   297103,
   297726,
   297436,
   297118,
   297121,
   297362,
   297446,
   297622,
   297365,
   297443,
   297624,
   297384,
   297449,
   297364,
   297608,
   297623,
   297361,
   297680,
   297368};
   Double_t Graph0_fy1006[51] = {
   1.868677,
   2.207038,
   2.452146,
   2.38285,
   2.507766,
   2.635258,
   2.512368,
   2.339813,
   2.52724,
   2.515557,
   2.255886,
   2.435003,
   2.68464,
   2.184766,
   0.9270317,
   2.434716,
   2.494001,
   2.339874,
   2.492298,
   2.41431,
   2.218222,
   2.005269,
   2.505504,
   0.05845005,
   2.72957,
   2.342579,
   2.43951,
   1.205813,
   2.193502,
   2.373576,
   2.321695,
   2.449023,
   2.42149,
   2.33727,
   2.478251,
   2.464556,
   2.455785,
   2.510156,
   2.471223,
   2.52145,
   2.473512,
   2.475254,
   2.372599,
   2.41049,
   2.453248,
   2.519182,
   2.006373,
   2.499441,
   2.413153,
   2.456795,
   2.435112};
   Double_t Graph0_fex1006[51] = {
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
   Double_t Graph0_fey1006[51] = {
   0.04860681,
   0.01715061,
   0.03741228,
   0.02373846,
   0.05932322,
   0.06761518,
   0.1214399,
   0.05099823,
   0.1466454,
   0.05996225,
   0.028766,
   0.01865971,
   0.33558,
   0.02316238,
   0.0199235,
   0.04584023,
   0.03476319,
   0.02995902,
   0.06291997,
   0.03323845,
   0.0265223,
   0.02711061,
   0.03475177,
   0.006377423,
   0.117462,
   0.06087187,
   0.008413753,
   0.05876772,
   0.1421836,
   0.03877068,
   0.05972729,
   0.09867394,
   0.01569685,
   0.03830047,
   0.04418409,
   0.01449438,
   0.05143075,
   0.04282894,
   0.2590546,
   0.1011823,
   0.04925399,
   0.03619008,
   0.03664492,
   0.03953217,
   0.03801772,
   0.07864768,
   0.01868193,
   0.06812717,
   0.02900894,
   0.0591013,
   0.1084685};
   TGraphErrors *gre = new TGraphErrors(51,Graph0_fx1006,Graph0_fy1006,Graph0_fex1006,Graph0_fey1006);
   gre->SetName("Graph0");
   gre->SetTitle("TOB Track Rate");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1006 = new TH1F("Graph_Graph1006","TOB Track Rate",100,296983.5,297793.5);
   Graph_Graph1006->SetMinimum(0.04686536);
   Graph_Graph1006->SetMaximum(3.317035);
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
