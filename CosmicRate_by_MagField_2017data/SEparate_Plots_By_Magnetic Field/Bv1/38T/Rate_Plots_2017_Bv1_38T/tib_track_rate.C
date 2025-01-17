void tib_track_rate()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 23 23:07:03 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",193,183,800,600);
   c->Range(296882.2,-0.1944905,297894.8,1.949784);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1007[51] = {
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
   Double_t Graph0_fy1007[51] = {
   0.7800907,
   0.9673116,
   1.126184,
   1.06514,
   1.147931,
   1.226549,
   1.156394,
   1.04708,
   1.021107,
   1.116279,
   1.01093,
   1.085735,
   1.34232,
   0.9675146,
   0.4136317,
   1.071068,
   1.125135,
   1.014201,
   1.097628,
   1.04791,
   1.008427,
   0.9045886,
   1.112486,
   0.02644169,
   1.137321,
   1.017068,
   1.076882,
   0.5126853,
   1.004587,
   1.079762,
   1.041766,
   1.204633,
   1.068089,
   1.005453,
   1.08709,
   1.102026,
   1.108334,
   1.103446,
   1.276346,
   1.092222,
   1.083755,
   1.088942,
   1.062915,
   1.056129,
   1.097599,
   1.122092,
   0.8859421,
   1.097451,
   1.068483,
   1.079113,
   1.067777};
   Double_t Graph0_fex1007[51] = {
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
   Double_t Graph0_fey1007[51] = {
   0.03140527,
   0.01135424,
   0.02535395,
   0.01587112,
   0.04013646,
   0.04612911,
   0.08238965,
   0.03411571,
   0.09321391,
   0.03994359,
   0.01925669,
   0.01245997,
   0.2372909,
   0.01541379,
   0.01330838,
   0.03040403,
   0.02334929,
   0.01972393,
   0.04175573,
   0.02189808,
   0.01788261,
   0.01820868,
   0.0231567,
   0.004289408,
   0.07582139,
   0.04010926,
   0.005590138,
   0.0383199,
   0.09622201,
   0.02614965,
   0.0400088,
   0.06920435,
   0.01042497,
   0.02512063,
   0.02926349,
   0.009692285,
   0.0345512,
   0.02839634,
   0.1861742,
   0.06659398,
   0.03260244,
   0.02400392,
   0.02452736,
   0.02616715,
   0.02542946,
   0.05248925,
   0.01241419,
   0.04514312,
   0.01930292,
   0.03916932,
   0.07182647};
   TGraphErrors *gre = new TGraphErrors(51,Graph0_fx1007,Graph0_fy1007,Graph0_fex1007,Graph0_fey1007);
   gre->SetName("Graph0");
   gre->SetTitle("TIB Track Rate");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1007 = new TH1F("Graph_Graph1007","TIB Track Rate",100,296983.5,297793.5);
   Graph_Graph1007->SetMinimum(0.01993705);
   Graph_Graph1007->SetMaximum(1.735357);
   Graph_Graph1007->SetDirectory(0);
   Graph_Graph1007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1007->SetLineColor(ci);
   Graph_Graph1007->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1007->GetXaxis()->SetNoExponent();
   Graph_Graph1007->GetXaxis()->SetLabelFont(42);
   Graph_Graph1007->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1007->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1007->GetXaxis()->SetTitleFont(42);
   Graph_Graph1007->GetYaxis()->SetTitle("Track Rate (in Hz)");
   Graph_Graph1007->GetYaxis()->SetLabelFont(42);
   Graph_Graph1007->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1007->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1007->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1007->GetYaxis()->SetTitleFont(42);
   Graph_Graph1007->GetZaxis()->SetLabelFont(42);
   Graph_Graph1007->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1007->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1007);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.362807,0.94,0.637193,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("TIB Track Rate");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
