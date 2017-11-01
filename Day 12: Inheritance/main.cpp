class Student :  public Person{
    private:
        vector<int> testScores; 
    public:
     /*  
     *  Class Constructor
     *  
     *  Parameters:
     *  firstName - A string denoting the Person's first name.
     *  lastName - A string denoting the Person's last name.
     *  id - An integer denoting the Person's ID number.
     *  scores - An array of integers denoting the Person's test scores.
     */
     // Write your constructor here
     Student(string firstName, string lastName, int id, vector<int>& scores): Person(firstName, lastName, id){
       this->testScores = scores;
     }
     /*  
     *  Function Name: calculate
     *  Return: A character denoting the grade.
     */
     // Write your function here
  
     char calculate(){
       int sum_of_elements = 0, average = 0;
       char return_val = 'T';
       for(vector<int>::iterator it = testScores.begin(); it != testScores.end(); ++it)
         sum_of_elements += *it;
       average = sum_of_elements/testScores.size();
       if(average >=90 && average <= 100){
         return_val = 'O';
       } 
       else if(average >=80 && average < 90){
         return_val = 'E';
       } 
       else if(average >=70 && average < 80){
         return_val = 'A';
       }
       else if(average >=55 && average < 70){
         return_val = 'P';
       }
       else if(average >=40 && average < 55){
         return_val = 'D';
       }
       return return_val;
     }
};
