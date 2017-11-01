    // Add your code here

  Difference(vector<int>& numbers){
    elements = numbers;
   }

  void computeDifference()
   {   
   int max_diff = abs(elements[1] - elements[0]);
   int i, j;
    
   for (i = 0; i < elements.size(); i++)
    {
    for (j = i+1; j < elements.size(); j++)
     {    
     if (abs(elements[j] - elements[i]) > max_diff)  
       max_diff = abs(elements[j] - elements[i]);
     }  
    }     
   maximumDifference = max_diff;
   } 
