
// Write your MyBook class here
class MyBook :  public Book{
    private:
        int price;
    public:

     //  Class Constructor
     //  
     //  Parameters:
     //  title - The book's title.
     //  author - The book's author.
     //  price - The book's price.
     //
     // Write your constructor here
     MyBook(string title, string a, int price) : Book(title, a){
       this->price = price;
     }

     //  Function Name: display
     //  Print the title, author, and price in the specified format.
     //
     // Write your method here
     virtual void display(){
       cout << "Title: " << title << endl;
       cout << "Author: " << author << endl;
       cout << "Price: " << price << endl;
     } 

   // End class
};
