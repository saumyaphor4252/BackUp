void track_rate_TID()
{
//=========Macro generated from canvas: Canvas6/Canvas6
//=========  (Thu Jun 24 11:10:45 2021) by ROOT version6.10/04
   TCanvas *Canvas6 = new TCanvas("Canvas6", "Canvas6",604,112,856,836);
   gStyle->SetOptStat(0);
   Canvas6->Range(297790.9,0.2068156,298440.2,0.5784412);
   Canvas6->SetFillColor(0);
   Canvas6->SetBorderMode(0);
   Canvas6->SetBorderSize(2);
   Canvas6->SetGridx();
   Canvas6->SetGridy();
   Canvas6->SetTickx(1);
   Canvas6->SetTicky(1);
   Canvas6->SetLeftMargin(0.1883886);
   Canvas6->SetRightMargin(0.03909953);
   Canvas6->SetTopMargin(0.0875817);
   Canvas6->SetBottomMargin(0.1294118);
   Canvas6->SetFrameLineWidth(3);
   Canvas6->SetFrameBorderMode(0);
   Canvas6->SetFrameLineWidth(3);
   Canvas6->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("track rate tid");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1013[29] = {
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
   Double_t Graph_fy1013[29] = {
   0.2926037,
   0.3931972,
   0.3380005,
   0.3544872,
   0.3681272,
   0.3249895,
   0.3366067,
   0.3462804,
   0.3439638,
   0.2921786,
   0.3516788,
   0.3460443,
   0.3409053,
   0.3451483,
   0.3446792,
   0.3353172,
   0.3488218,
   0.3442779,
   0.3472268,
   0.3405751,
   0.3468115,
   0.4046921,
   0.4014015,
   0.3937395,
   0.3318448,
   0.3858496,
   0.3757426,
   0.3520534,
   0.3539572};
   Double_t Graph_fex1013[29] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_fey1013[29] = {
   0.02446875,
   0.01011194,
   0.009724871,
   0.01336024,
   0.01718271,
   0.02382939,
   0.002871218,
   0.01666042,
   0.004905765,
   0.02006691,
   0.01563403,
   0.00848056,
   0.01173445,
   0.02594294,
   0.003363404,
   0.04790245,
   0.00599903,
   0.007594571,
   0.02566774,
   0.0206504,
   0.01540244,
   0.1279749,
   0.05566437,
   0.02218471,
   0.009389744,
   0.003700015,
   0.01869389,
   0.04471083,
   0.01564285};
   TGraphErrors *gre = new TGraphErrors(29,Graph_fx1013,Graph_fy1013,Graph_fex1013,Graph_fey1013);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3113ba");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1013 = new TH1F("Graph_Graph1013","Graph",100,297890.4,298437.6);
   Graph_Graph1013->SetMinimum(0.2416818);
   Graph_Graph1013->SetMaximum(0.5591202);
   Graph_Graph1013->SetDirectory(0);
   Graph_Graph1013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1013->SetLineColor(ci);
   Graph_Graph1013->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1013->GetXaxis()->SetNoExponent();
   Graph_Graph1013->GetXaxis()->SetLabelFont(42);
   Graph_Graph1013->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1013->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1013->GetXaxis()->SetTitleFont(42);
   Graph_Graph1013->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1013->GetYaxis()->SetLabelFont(42);
   Graph_Graph1013->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1013->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1013->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1013->GetYaxis()->SetTitleFont(42);
   Graph_Graph1013->GetZaxis()->SetLabelFont(42);
   Graph_Graph1013->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1013->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1013);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1014[51] = {
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
   Double_t Graph_fy1014[51] = {
   0.4361933,
   0.496317,
   0.513147,
   0.5294958,
   0.5052018,
   0.6210812,
   0.592872,
   0.5546635,
   0.5530998,
   0.5374145,
   0.5047315,
   0.5447977,
   0.7131076,
   0.4840029,
   0.2059595,
   0.5221564,
   0.539309,
   0.5400891,
   0.5432543,
   0.5152603,
   0.4877234,
   0.4427646,
   0.555279,
   0.01391668,
   0.5964616,
   0.5235608,
   0.5423293,
   0.2434539,
   0.5069018,
   0.5154992,
   0.5393215,
   0.5605718,
   0.5267692,
   0.5278315,
   0.5466962,
   0.5398461,
   0.5665539,
   0.5707225,
   0.6517511,
   0.4303925,
   0.542368,
   0.5455294,
   0.5076864,
   0.5018072,
   0.5337759,
   0.5328095,
   0.4378394,
   0.5329417,
   0.5324977,
   0.5303151,
   0.5314728};
   Double_t Graph_fex1014[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_fey1014[51] = {
   0.02348386,
   0.008133066,
   0.01711441,
   0.01119014,
   0.02662647,
   0.03282516,
   0.05899296,
   0.02483015,
   0.06860358,
   0.02771504,
   0.01360665,
   0.00882618,
   0.172954,
   0.01090196,
   0.009390944,
   0.02122868,
   0.01616554,
   0.01439342,
   0.02937583,
   0.01535527,
   0.01243642,
   0.01273912,
   0.01636006,
   0.003111864,
   0.05490874,
   0.0287775,
   0.003967072,
   0.02640628,
   0.06835063,
   0.01806824,
   0.02878685,
   0.04720866,
   0.007321183,
   0.01820108,
   0.0207523,
   0.006783678,
   0.02470292,
   0.02042206,
   0.1330381,
   0.04180342,
   0.02306383,
   0.01698982,
   0.01695116,
   0.01803709,
   0.01773352,
   0.03616947,
   0.008727167,
   0.03145855,
   0.01362694,
   0.02745868,
   0.05067394};
   gre = new TGraphErrors(51,Graph_fx1014,Graph_fy1014,Graph_fex1014,Graph_fey1014);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#de0b1d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph1014 = new TH1F("Graph_Graph1014","Graph",100,296983.5,297793.5);
   Graph_Graph1014->SetMinimum(0.009724333);
   Graph_Graph1014->SetMaximum(0.9735873);
   Graph_Graph1014->SetDirectory(0);
   Graph_Graph1014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1014->SetLineColor(ci);
   Graph_Graph1014->GetXaxis()->SetTitle("Run Number");
   Graph_Graph1014->GetXaxis()->SetNoExponent();
   Graph_Graph1014->GetXaxis()->SetLabelFont(42);
   Graph_Graph1014->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1014->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1014->GetXaxis()->SetTitleFont(42);
   Graph_Graph1014->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph1014->GetYaxis()->SetLabelFont(42);
   Graph_Graph1014->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1014->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1014->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1014->GetYaxis()->SetTitleFont(42);
   Graph_Graph1014->GetZaxis()->SetLabelFont(42);
   Graph_Graph1014->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1014->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1014);
   
   multigraph->Add(gre,"");
   multigraph->Draw("AP");
   multigraph->GetXaxis()->SetTitle("Run Number");
   multigraph->GetXaxis()->SetNoExponent();
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.03);
   multigraph->GetXaxis()->SetTitleSize(0.05);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("Track Rate (Hz)");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.05);
   multigraph->GetYaxis()->SetTitleSize(0.05);
   multigraph->GetYaxis()->SetTitleOffset(0);
   multigraph->GetYaxis()->SetTitleFont(42);
   TLatex *   tex = new TLatex(0.685,0.94,"cosmic rays (2017)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03717);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23,0.83,"TID");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.6978923,0.7320513,0.9262295,0.874359,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.03660131);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("NULL","Magnetic Field","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","0 T","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#3113ba");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","3.8 T","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#de0b1d");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(42);
   leg->Draw();
   Canvas6->Modified();
   Canvas6->cd();
   Canvas6->SetSelected(Canvas6);
}
