#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;
int LeapYears(int m, int d, int y)
{
   // Check if the current year needs to be considered
   // for the count of leap years or not
   if (m <= 2)
     y--;
 
   // An year is a leap year if it is a multiple of 4,
   // multiple of 400 and not a multiple of 100.
   return y / 4 - y / 100 + y / 400;
}

int main() {
   /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
   int d1, m1, y1;
   int d2, m2, y2;
   const int monthDays[12] = {31, 28, 31, 30, 31, 30,
              31, 31, 30, 31, 30, 31};
   cin >> d1 >> m1 >> y1;
   cin >> d2 >> m2 >> y2;
   if (y1 != y2 && y1 > y2){
     cout << "10000" << endl;
   }
   else{
    
     long int n1 = y1*365 + d1;

     // Add days for months in given date
     for (int i=0; i<(m1 - 1); i++)
       n1 += monthDays[i];

     // Since every leap year is of 366 days,
     // Add a day for every leap year
     n1 += LeapYears(m1, d1, y1);

     // SIMILARLY, COUNT TOTAL NUMBER OF DAYS BEFORE 'dt2'

     long int n2 = y2*365 + d2;
     for (int i=0; i<(m2 - 1); i++)
       n2 += monthDays[i];
     n2 += LeapYears(m2, d2, y2);
     // return difference between two counts
     if ((n2-n1) > 0){
       cout << "0" << endl;
     }
     else if (m2 == m1 && y1 == y2){
       cout << (-1)*(n2-n1)*15 << endl;
     }
     else if (m2 != m1 && y1 == y2){
       cout << 500*(m1-m2)<< endl;
     }
   }
    
   return 0;
}

