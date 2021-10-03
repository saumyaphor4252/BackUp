void tec_track_ratePM()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 23 23:09:38 2021) by ROOT version6.10/04
   TCanvas *c = new TCanvas("c", "c",193,183,800,600);
   c->Range(297850.5,0.06109928,298477.5,0.4333016);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("track rate");
   multigraph->SetTitle("TRack Rate TEC+/-");
   
   Double_t Graph_fx1010[29] = {
   298019,
   298030,
   297938,
   298211,
   298208,
   298020,
   298392,
   298025,
   297943,
   297944,
   297939,
   298023,
   298214,
   298022,
   298215,
   298024,
   297937,
   297940,
   298037,
   298036,
   298386,
   298035,
   298034,
   298029,
   298197,
   298034,
   298021,
   297936,
   298216};
   Double_t Graph_fy1010[29] = {
   0.1616482,
   0.2993188,
   0.1967006,
   0.2124909,
   0.1908808,
   0.1764728,
   0.2061667,
   0.2172269,
   0.2118638,
   0.1984609,
   0.200165,
   0.2159399,
   0.1967072,
   0.2593488,
   0.2038143,
   0.2463555,
   0.2144929,
   0.207907,
   0.2314845,
   0.1953299,
   0.2120544,
   0.2428153,
   0.2933318,
   0.2824925,
   0.2000633,
   0.292678,
   0.2027522,
   0.1930616,
   0.2136187};
   Double_t Graph_fex1010[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_fey1010[29] = {
   0.01818684,
   0.008822595,
   0.007418704,
   0.01034389,
   0.01237296,
   0.0175597,
   0.002247057,
   0.01319559,
   0.00385016,
   0.01653841,
   0.01179483,
   0.006699235,
   0.008913655,
   0.02248839,
   0.002586359,
   0.04105925,
   0.0047042,
   0.005901783,
   0.02095763,
   0.0156389,
   0.01204388,
   0.09912892,
   0.04758471,
   0.01879112,
   0.007290713,
   0.003222474,
   0.01373211,
   0.03310978,
   0.01215234};
   TGraphErrors *gre = new TGraphErrors(29,Graph_fx1010,Graph_fy1010,Graph_fex1010,Graph_fey1010);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1010 = new TH1F("Graph_Graph1010","Graph",100,297890.4,298437.6);
   Graph_Graph1010->SetMinimum(0.1236131);
   Graph_Graph1010->SetMaximum(0.3617925);
   Graph_Graph1010->SetDirectory(0);
   Graph_Graph1010->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1010->SetLineColor(ci);
   Graph_Graph1010->GetXaxis()->SetLabelFont(42);
   Graph_Graph1010->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1010->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1010->GetXaxis()->SetTitleFont(42);
   Graph_Graph1010->GetYaxis()->SetLabelFont(42);
   Graph_Graph1010->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1010->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1010->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1010->GetYaxis()->SetTitleFont(42);
   Graph_Graph1010->GetZaxis()->SetLabelFont(42);
   Graph_Graph1010->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1010->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1010);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1011[29] = {
   298019,
   298030,
   297938,
   298211,
   298208,
   298020,
   298392,
   298025,
   297943,
   297944,
   297939,
   298023,
   298214,
   298022,
   298215,
   298024,
   297937,
   297940,
   298037,
   298036,
   298386,
   298035,
   298034,
   298029,
   298197,
   298034,
   298021,
   297936,
   298216};
   Double_t Graph_fy1011[29] = {
   0.1800638,
   0.2777346,
   0.198939,
   0.205945,
   0.201307,
   0.2079234,
   0.2010235,
   0.2036001,
   0.2079456,
   0.1984609,
   0.1980799,
   0.192039,
   0.2068051,
   0.216449,
   0.2008933,
   0.2531987,
   0.2037631,
   0.202546,
   0.1802544,
   0.196582,
   0.1935851,
   0.202346,
   0.3319281,
   0.2837424,
   0.2098938,
   0.2832757,
   0.1915915,
   0.2157747,
   0.2004836};
   Double_t Graph_fex1011[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_fey1011[29] = {
   0.01919487,
   0.00849854,
   0.007460796,
   0.01018332,
   0.01270639,
   0.01906031,
   0.002218852,
   0.012775,
   0.003814391,
   0.01653841,
   0.01173324,
   0.006317618,
   0.009139582,
   0.02054443,
   0.002567759,
   0.04162561,
   0.004585028,
   0.005825195,
   0.01849371,
   0.01568895,
   0.01150744,
   0.09049191,
   0.05061857,
   0.01883265,
   0.007467687,
   0.00317029,
   0.01334881,
   0.03500328,
   0.0117728};
   gre = new TGraphErrors(29,Graph_fx1011,Graph_fy1011,Graph_fex1011,Graph_fey1011);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1011 = new TH1F("Graph_Graph1011","Graph",100,297890.4,298437.6);
   Graph_Graph1011->SetMinimum(0.08478489);
   Graph_Graph1011->SetMaximum(0.409616);
   Graph_Graph1011->SetDirectory(0);
   Graph_Graph1011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1011->SetLineColor(ci);
   Graph_Graph1011->GetXaxis()->SetLabelFont(42);
   Graph_Graph1011->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1011->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1011->GetXaxis()->SetTitleFont(42);
   Graph_Graph1011->GetYaxis()->SetLabelFont(42);
   Graph_Graph1011->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1011->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1011->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1011->GetYaxis()->SetTitleFont(42);
   Graph_Graph1011->GetZaxis()->SetLabelFont(42);
   Graph_Graph1011->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1011->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1011);
   
   multigraph->Add(gre,"");
   multigraph->Draw("AP");
   multigraph->GetXaxis()->SetTitle("Run Number");
   multigraph->GetXaxis()->SetNoExponent();
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.03);
   multigraph->GetXaxis()->SetTitleSize(0.035);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("Track Rate (in Hz)");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.035);
   multigraph->GetYaxis()->SetTitleSize(0.035);
   multigraph->GetYaxis()->SetTitleOffset(0);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TPaveText *pt = new TPaveText(0.3283459,0.94,0.6716541,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("TRack Rate TEC+/-");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.8,0.8,0.94,0.92,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph","TEC+","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","TEC-","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
