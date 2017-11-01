/**
*   Name: printArray
*   Print each element of the generic vector on a new line. Do not return anything.
*   @param A generic vector
**/

// Write your code here

template<typename T>
void printArray(vector<T>& s)
{
  typename vector<T>::iterator it; 
  for(it=s.begin() ; it < s.end(); it++) {
    cout << *it << endl;
   }
}
