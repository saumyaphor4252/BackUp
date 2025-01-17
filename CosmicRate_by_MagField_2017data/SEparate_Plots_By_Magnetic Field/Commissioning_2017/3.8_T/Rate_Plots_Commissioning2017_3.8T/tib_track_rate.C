void tib_track_rate()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 23 22:40:32 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",155,145,800,600);
   c->Range(293241,-0.1272226,294741,1.680819);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1007[62] = {
   293849,
   293502,
   293843,
   294315,
   293580,
   294313,
   294291,
   294058,
   294491,
   294048,
   294406,
   294034,
   293998,
   293864,
   293693,
   293688,
   294383,
   294298,
   294308,
   294042,
   294307,
   293879,
   293684,
   293837,
   293678,
   294011,
   294393,
   294003,
   293492,
   293860,
   294490,
   294487,
   293866,
   294059,
   294008,
   294311,
   293965,
   294418,
   294287,
   294481,
   294006,
   293581,
   294300,
   293963,
   294317,
   294482,
   294053,
   294309,
   294485,
   293967,
   293491,
   294040,
   294000,
   293699,
   293971,
   294398,
   293997,
   293964,
   293696,
   294060,
   293877,
   293501};
   Double_t Graph0_fy1007[62] = {
   1.062956,
   0.5522471,
   0.9831441,
   0.09807264,
   1.124953,
   0.07055365,
   1.139556,
   1.116339,
   0.5409738,
   1.135913,
   1.054956,
   1.115203,
   1.00484,
   1.083488,
   0.8327441,
   1.047366,
   1.128317,
   1.173272,
   0.2644626,
   1.133638,
   1.112937,
   0.8054015,
   1.100038,
   1.146101,
   1.103156,
   0.9934031,
   1.164037,
   1.104948,
   1.144259,
   1.271064,
   1.155572,
   1.171788,
   1.161068,
   1.054411,
   1.150568,
   0.09242155,
   1.143022,
   1.141861,
   0.09394523,
   1.259925,
   1.129894,
   1.12602,
   1.15204,
   0.796149,
   0.06789368,
   1.012645,
   1.117339,
   0.06753459,
   0.903591,
   0.4052683,
   1.161169,
   1.121352,
   1.076798,
   0.9396446,
   1.100139,
   1.133028,
   1.115674,
   1.163104,
   1.079622,
   0.06882888,
   1.177574,
   1.296038};
   Double_t Graph0_fex1007[62] = {
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
   Double_t Graph0_fey1007[62] = {
   0.02030673,
   0.01842872,
   0.07700578,
   0.01461981,
   0.01152783,
   0.01101863,
   0.01867623,
   0.05171342,
   0.02126787,
   0.03840088,
   0.03518476,
   0.01747202,
   0.02329917,
   0.1001685,
   0.1032892,
   0.02179177,
   0.07572771,
   0.04855033,
   0.1182713,
   0.02396853,
   0.005512901,
   0.03683821,
   0.02671916,
   0.02623131,
   0.01832243,
   0.04646943,
   0.05561983,
   0.02591462,
   0.005731983,
   0.05932818,
   0.02746695,
   0.04550847,
   0.03458564,
   0.02372611,
   0.03805742,
   0.007811047,
   0.0438975,
   0.05928249,
   0.01744519,
   0.1057306,
   0.03774711,
   0.01190173,
   0.03391287,
   0.01586281,
   0.005435845,
   0.02920821,
   0.08470526,
   0.00774675,
   0.04250135,
   0.2339818,
   0.02126027,
   0.03150313,
   0.02762838,
   0.02684699,
   0.03352276,
   0.03287247,
   0.03287087,
   0.03435786,
   0.01942507,
   0.003812079,
   0.1248226,
   0.07302349};
   TGraphErrors *gre = new TGraphErrors(62,Graph0_fx1007,Graph0_fy1007,Graph0_fex1007,Graph0_fey1007);
   gre->SetName("Graph0");
   gre->SetTitle("TIB Track Rate");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1007 = new TH1F("Graph_Graph1007","TIB Track Rate",100,293391,294591);
   Graph_Graph1007->SetMinimum(0.05358152);
   Graph_Graph1007->SetMaximum(1.500014);
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
