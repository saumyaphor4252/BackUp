

void Hist()
{
   TH1F *histogram = new TH1F("histogram","histogram",100,-3,3);
   histogram->FillRandom("gaus",1000);

   
  
   TCanvas *c1 = new TCanvas("c1","c1",1200,1200);
   histogram->Draw();
   MakeNiceTrendPlotStyle(histogram,1);
   makeNewXAxis (histogram);
     TPad *current_pad = static_cast<TPad*>(canv->GetPad(k+1));
      cmsPrel(current_pad);
}

