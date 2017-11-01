#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   /* Enter your code here. Read input from STDIN. Print output to STDOUT */
   double cost, total;
   double tax;
   double tip;

  
   cin >> cost;
   cin >> tax;
   cin >> tip;
  
   total = (1 + (tax/100) + (tip/100))*cost;
  
   cout << "The total meal cost is " << int(round(total)) << " dollars." << endl;
  
   return 0;
}

