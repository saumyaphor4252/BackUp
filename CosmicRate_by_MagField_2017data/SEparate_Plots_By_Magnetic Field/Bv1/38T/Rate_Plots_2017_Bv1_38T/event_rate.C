void event_rate()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 23 23:07:02 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",193,183,800,600);
   c->Range(296882.2,-0.5081203,297894.8,5.309817);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[51] = {
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
   Double_t Graph0_fy1001[51] = {
   2.765086,
   3.328149,
   3.575476,
   3.452247,
   3.563076,
   3.840988,
   3.657022,
   3.337985,
   3.710023,
   3.753326,
   3.23527,
   3.654006,
   3.901118,
   3.193781,
   1.344945,
   3.450548,
   3.654994,
   3.461863,
   3.57563,
   3.61872,
   3.252969,
   2.902161,
   3.674385,
   0.08976257,
   3.796124,
   3.49726,
   3.711629,
   1.738547,
   3.354768,
   3.441306,
   3.424922,
   3.741121,
   3.641189,
   3.429963,
   3.600002,
   3.722321,
   3.713836,
   3.686677,
   3.937663,
   3.57307,
   3.719095,
   3.594885,
   3.466078,
   3.634536,
   3.593266,
   3.668283,
   2.938064,
   3.591321,
   3.601596,
   3.572874,
   3.681657};
   Double_t Graph0_fex1001[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1001[51] = {
   0.05912679,
   0.02106086,
   0.04517602,
   0.02857295,
   0.07071211,
   0.08163082,
   0.1465155,
   0.06091254,
   0.1776779,
   0.07324347,
   0.03444897,
   0.02285808,
   0.4045271,
   0.02800485,
   0.02399776,
   0.05457159,
   0.04208376,
   0.03644067,
   0.07536415,
   0.04069318,
   0.03211801,
   0.03261472,
   0.04208445,
   0.007903154,
   0.1385225,
   0.07437611,
   0.01037817,
   0.07056545,
   0.1758377,
   0.0466835,
   0.07254303,
   0.1219571,
   0.01924831,
   0.04639748,
   0.05325307,
   0.017813,
   0.06324688,
   0.05190444,
   0.3270051,
   0.1204482,
   0.06039529,
   0.04361363,
   0.04429153,
   0.04854254,
   0.04601083,
   0.09490466,
   0.02260719,
   0.08166314,
   0.03543944,
   0.07127241,
   0.1333724};
   TGraphErrors *gre = new TGraphErrors(51,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("Event Rate");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","Event Rate",100,296983.5,297793.5);
   Graph_Graph1001->SetMinimum(0.07367348);
   Graph_Graph1001->SetMaximum(4.728024);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1001->GetXaxis()->SetNoExponent();
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetTitle("Event Rate (in Hz)");
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.396015,0.94,0.603985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Event Rate");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
