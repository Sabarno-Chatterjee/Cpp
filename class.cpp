// //Basic structure of class 

// #include<iostream>

// using namespace std;

// class Rectangle{
// private:
//     // data_members
//     int length;
//     int breadth;

// public:
//     //member functions
//     Rectangle()     //Non parameterised constructor; default constructor
//     {
//         length=breadth=1;
//         }
//     Rectangle(int l, int b){    //Parameterised constructor
//         length=l;
//         breadth=b;
//     }

//     int area(){
//         return length*breadth;
//     }

//     int perimeter(){
//         return 2*(length+breadth);
//     }

//     int getlength(){        //Accessor functions
//         return length;
//     }

//     int getbreadth(){       //Accessor functions
//         return breadth;
//     }

//     void setlength(int l){      //Mutator functions
//         length=l;
//     }

//     void setbreadth(int b){     //Mutator functions
//         breadth=b;
//     }

//     ~Rectangle(){
//         cout<<"Destructor";
//     }
// };


// int main(){
//     Rectangle r(10, 5);

//     cout<<"Area: "<<r.area()<<endl;
//     cout<<"Perimeter: "<<r.perimeter()<<endl;

//     return 0;
// }

/*Write a C++ program to create a class Book, 
to keep the records of books available in
your library. This program should have
proper constructor and member functions,
to get the details such as publisher, author
and price etc. of the books. Make necessary
assumptions where ever required.
*/

#include<iostream>
#include<cstring>

using namespace std;

class Book{
    private:
    //data members
    string title, publisher, author;
    double price;

    public:
    //constructor
    Book(string title="abc", string publisher="xyz", string author="pqr", float price=0);
    //member functions
    //accessor methods
    string getTitle(){return title;}
    string getPublisher(){return publisher;}
    string getAuthor(){return author;}
    double getPrice(){return price;}

    //mutator methods
    void setTitle(string title);
    void setPublisher(string publisher);
    void setAuthor(string author);
    void setPrice(double price);

    friend ostream & operator<<(ostream &out, Book &b); 
};

Book::Book(string title, string publisher, string author, float price){
    this->title=title;
    this->publisher=publisher;
    this->author=author;
    this->price=price;
}

void Book::setTitle(string title){
    this->title=title;
}
void Book::setPublisher(string publisher){
    this->publisher=publisher;  
}
void Book::setAuthor(string author){
    this->author=author;
}
void Book::setPrice(double price){
    this->price=price;
}

ostream & operator<<(ostream &out, Book &b){
    out<<"Title: "<<b.title<<endl;
    out<<"Author: "<<b.author<<endl;
    out<<"Publisher: "<<b.publisher<<endl;
    out<<"Price: "<<b.price<<endl;

    return out; 
}

int main(){
    Book b("The Count of Monte Cristo","Alexandre Dumas","Penguin Classics", 1000);
    cout<<b;

    return 0;
}


// Write a program in C++, which take two 3 x 3 matrices as input and find sum of them. Implement suitable constructor and destructor for this program.