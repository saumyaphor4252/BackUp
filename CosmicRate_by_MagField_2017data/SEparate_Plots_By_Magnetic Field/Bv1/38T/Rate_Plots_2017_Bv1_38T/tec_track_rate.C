void tec_track_rate()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 23 23:07:04 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",193,183,800,600);
   c->Range(296882.2,-0.1578695,297894.8,1.518069);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1009[51] = {
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
   Double_t Graph0_fy1009[51] = {
   0.5449256,
   0.6327908,
   0.6352976,
   0.6957467,
   0.7648194,
   0.7407867,
   0.6691822,
   0.6936072,
   0.7573212,
   0.7275106,
   0.68777,
   0.7043763,
   0.3775275,
   0.6291301,
   0.2727571,
   0.6447121,
   0.7273161,
   0.7011952,
   0.6814505,
   0.647965,
   0.6282055,
   0.5659177,
   0.7466381,
   0.01391668,
   0.7531592,
   0.6469377,
   0.7126397,
   0.3436996,
   0.534551,
   0.6054266,
   0.6883648,
   0.6043043,
   0.6918107,
   0.7098423,
   0.7546613,
   0.7066673,
   0.7151935,
   0.7183357,
   1.059096,
   0.6415284,
   0.7208688,
   0.7079712,
   0.6435222,
   0.6470331,
   0.7264301,
   0.7194156,
   0.5970064,
   0.677783,
   0.7246433,
   0.6468991,
   0.7778829};
   Double_t Graph0_fex1009[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1009[51] = {
   0.02624814,
   0.009183427,
   0.01904275,
   0.01282714,
   0.03276127,
   0.03584918,
   0.06267466,
   0.02776651,
   0.08027589,
   0.03224634,
   0.01588337,
   0.01003593,
   0.1258425,
   0.01242942,
   0.01080703,
   0.02358878,
   0.01877296,
   0.01640026,
   0.03290074,
   0.01721948,
   0.0141143,
   0.01440223,
   0.01897075,
   0.003111864,
   0.0617012,
   0.03198901,
   0.004547509,
   0.03137534,
   0.07018999,
   0.0195809,
   0.03252218,
   0.04901555,
   0.008390053,
   0.0211072,
   0.024382,
   0.007761359,
   0.02775489,
   0.02291135,
   0.169591,
   0.05103726,
   0.02658965,
   0.01935475,
   0.01908461,
   0.02048147,
   0.0206877,
   0.04202871,
   0.01019073,
   0.03547678,
   0.0158965,
   0.0303271,
   0.06130576};
   TGraphErrors *gre = new TGraphErrors(51,Graph0_fx1009,Graph0_fy1009,Graph0_fex1009,Graph0_fey1009);
   gre->SetName("Graph0");
   gre->SetTitle("TEC Track Rate");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1009 = new TH1F("Graph_Graph1009","TEC Track Rate",100,296983.5,297793.5);
   Graph_Graph1009->SetMinimum(0.009724333);
   Graph_Graph1009->SetMaximum(1.350475);
   Graph_Graph1009->SetDirectory(0);
   Graph_Graph1009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1009->SetLineColor(ci);
   Graph_Graph1009->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1009->GetXaxis()->SetNoExponent();
   Graph_Graph1009->GetXaxis()->SetLabelFont(42);
   Graph_Graph1009->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1009->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1009->GetXaxis()->SetTitleFont(42);
   Graph_Graph1009->GetYaxis()->SetTitle("Track Rate (in Hz)");
   Graph_Graph1009->GetYaxis()->SetLabelFont(42);
   Graph_Graph1009->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1009->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1009->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1009->GetYaxis()->SetTitleFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1009->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1009);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.3559148,0.94,0.6440852,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("TEC Track Rate");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
