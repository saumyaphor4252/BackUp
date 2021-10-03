{

  std::vector<int> v1={1,2,3};
  std::vector<int> v2={4,5,6};
  std::vector<int> v3={7,8,9,10};
  std::vector<int> vec;


  std::vector<int>::iterator it;
  
  for(int i=0;i<3;i++)
    {
      if(i==0) vec=v1;
      else if(i==1) vec=v2;
      else if(i==2) vec=v3;
      
      int key=10;
      
      it = std::find(vec.begin(), vec.end(), key);
      if (it != vec.end())	
	{
	  std::cout << "Element " << key <<" found at position in vector "<< it - vec.begin() <<" (counting from zero) in vector"<< i<<std::endl;
	}
	else {
	  std::cout << "Element not found"<<std::endl;
	}
      vec.clear();
    }
}
