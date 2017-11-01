#include <bits/stdc++.h>

using namespace std;

int solve_helper(int n){
  if (n < 38)
    return n;
  else if ((n % 5 >= 3) && (n % 5 != 0))
    return (n + (5 - (n % 5)));
  else
    return n;
}

vector < int > solve(vector < int > grades){
  vector < int > newGrades; 
  for(int i = 0; i < grades.size(); ++i){
    newGrades.push_back(solve_helper(grades[i]));
   }
  return newGrades;
}

int main() {
  int n;
  cin >> n;
  vector<int> grades(n);
  for(int grades_i = 0; grades_i < n; grades_i++){
    cin >> grades[grades_i];
   }
  vector < int > result = solve(grades);
  for (ssize_t i = 0; i < result.size(); i++) {
    cout << result[i] << (i != result.size() - 1 ? "\n" : "");
   }
  cout << endl;
  

  return 0;
}

