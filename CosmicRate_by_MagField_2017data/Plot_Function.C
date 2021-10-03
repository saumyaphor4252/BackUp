void Get_RateGraph(TVectorD , TVectorD , TVectorD , TVectorD , TString , TString );

void Plot_Function()
{

  vector<double> x, y, x_err, y_err;

  for(int i=0; i<50; i++)
    {
      if((i%2)==0)
	{
	  y.push_back(10);
	}
      else
	{
	  y.push_back(8);
	}

      x.push_back(i);
      x_err.push_back(0.5);
      y_err.push_back(0.2);

  }

  TVectorD  x_Vec;
  TVectorD  y_Vec;
  TVectorD  x_error_Vec;
  TVectorD  y_error_Vec;
  
  x_Vec.Use( x.size(),&(x[0]) );
  y_Vec.Use( y.size(),&(y[0]) );
  x_error_Vec.Use( x_err.size(),&(x_err[0]) );
  y_error_Vec.Use( y_err.size(),&(y_err[0]) );

  TString x_title="saumya",y_title="cjhiraf";
  Get_RateGraph(x_Vec, y_Vec, x_error_Vec, y_error_Vec, x_title, y_title);
}


void Get_RateGraph(TVectorD X_Vector, TVectorD Y_Vector, TVectorD X_err_Vector, TVectorD Y_err_Vector, TString X_Title, TString Y_Title)
{
  // Declare canvas
  TCanvas *c = new TCanvas("c", "c",513,87,800,794);
  c->Range(298435.9,-0.8918666,299415.6,7.221623);
  c->SetFillColor(0);
  c->SetBorderMode(0);
  c->SetBorderSize(2);
  c->SetGridx();
  c->SetGridy();
  c->SetLeftMargin(0.1466165);
  c->SetRightMargin(0.03884712);
  c->SetTopMargin(0.08536585);
  c->SetBottomMargin(0.1287263);
  c->SetFrameBorderMode(0);
  c->SetFrameLineWidth(3);
  c->SetFrameBorderMode(0);
    
  TGraphErrors gre(X_Vector, Y_Vector, X_err_Vector, Y_err_Vector);
  gre.GetXaxis()->SetTitle("Run Number");
  gre.GetXaxis()->SetLabelSize(0.05);
  gre.GetXaxis()->SetNoExponent();
  //   gre.GetYaxis()->SetTitle("Event Rate (in Hz)");
  gre.SetMarkerStyle(20);
  gre.SetMarkerSize(1.2);
  gre.SetMarkerColor(kRed);
  // gr.SetTitle("Event Rate");
  
  //if
  gre.Draw("AP");
  c.SetGrid();
  // file_format_string = //!!!!!!!!!!!!!!
  c.SaveAs("event_rate.png");
  c.Clear();
  // mv_folder_string = //!!!!!!!!!1
  //  gSystem->Exec("mv event_rate.png Rate_Plots");
  std::cout<<" Titles: "<<std::endl;
  std::cout<<X_Title<<std::endl;
  std::cout<<Y_Title<<std::endl;


  TPaveText *pt = new TPaveText(0.1704261,0.8441734,0.3796992,0.898374,"blNDC");
  pt->SetName("title");
  pt->SetBorderSize(0);
  pt->SetFillColor(0);
  pt->SetFillStyle(0);
  pt->SetTextSize(0.04336043);
  TText *pt_LaTex = pt->AddText("Event Rate");
  pt->Draw();
  TLatex *   tex = new TLatex(298682.7,5.860409,"");
  tex->SetTextSize(0.005934718);
  tex->SetLineWidth(2);
  tex->Draw();
  tex = new TLatex(298748.9,5.947079,"");
  tex->SetTextSize(0.005934718);
  tex->SetLineWidth(2);
  tex->Draw();
  tex = new TLatex(298913.4,6.726898,"Cosmic rays 2018 (Commissioning)");
  tex->SetTextFont(42);
  tex->SetTextSize(0.03466667);
  tex->SetLineWidth(2);
  tex->Draw();
  tex = new TLatex(298688.8,6.781867,"");
  tex->SetLineWidth(2);
  tex->Draw();
  tex = new TLatex(298667.9,6.814849,"");
  tex->SetLineWidth(2);
  tex->Draw();
  tex = new TLatex(298762.4,6.75988,"");
  tex->SetLineWidth(2);
  tex->Draw();
}
