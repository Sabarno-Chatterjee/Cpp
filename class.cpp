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

// #include<iostream>
// #include<cstring>

// using namespace std;

// class Book{
//     private:
//     //data members
//     string title, publisher, author;
//     double price;

//     public:
//     //constructor
//     Book(string title="abc", string publisher="xyz", string author="pqr", float price=0);
//     //member functions
//     //accessor methods
//     string getTitle(){return title;}
//     string getPublisher(){return publisher;}
//     string getAuthor(){return author;}
//     double getPrice(){return price;}

//     //mutator methods
//     void setTitle(string title);
//     void setPublisher(string publisher);
//     void setAuthor(string author);
//     void setPrice(double price);

//     friend ostream & operator<<(ostream &out, Book &b); 
// };

// Book::Book(string title, string publisher, string author, float price){
//     this->title=title;
//     this->publisher=publisher;
//     this->author=author;
//     this->price=price;
// }

// void Book::setTitle(string title){
//     this->title=title;
// }
// void Book::setPublisher(string publisher){
//     this->publisher=publisher;  
// }
// void Book::setAuthor(string author){
//     this->author=author;
// }
// void Book::setPrice(double price){
//     this->price=price;
// }

// ostream & operator<<(ostream &out, Book &b){
//     out<<"Title: "<<b.title<<endl;
//     out<<"Author: "<<b.author<<endl;
//     out<<"Publisher: "<<b.publisher<<endl;
//     out<<"Price: "<<b.price<<endl;

//     return out; 
// }

// int main(){
//     Book b("The Count of Monte Cristo","Alexandre Dumas","Penguin Classics", 1000);
//     cout<<b;

//     return 0;
// }


/*Write a C++ program to create a class 
NUMBER with a constructor to initialize
object of NUMBER class with three integer
data values. Define a function largest to find
the largest number among the three member
data.
*/


// #include<iostream>

// class NUMBER{
//     //data members
//     private:
//         int num1,num2,num3;

//     public:
//     //constructor
//     NUMBER(int num1=0, int num2=0, int num3=0);

//     int largest_number();
// };

// NUMBER::NUMBER(int n1, int n2, int n3){
//     this->num1=n1;
//     this->num2=n2;
//     this->num3=n3;
// }

// int NUMBER::largest_number(){
//     return (num1>num2 && num1>num3) ? num1 : (num2>num3) ? num2:num3;
// }

// int main(){
//     NUMBER n(676,233,78);
//     std::cout<<n.largest_number()<<std::endl;

//     return 0;
// }

/*Write a program in C++ to create class Doctor with
a virtual function salary. Derive class
Visiting - Doctor and implement function
salary in it.
*/

// #include<iostream>
// #include<cstring>

// class Doctor{
//     public:
//         virtual double salary() const{
//             return 0.0;
//         }
// };

// class Visiting:public Doctor{
//     //data members
//     private: 
//         int number_of_visits;
//         double visiting_fee;

//     public:
//         //member functions
//         Visiting(int n, double f);
//         double salary() const override;

// };

// Visiting::Visiting(int n, double f){
//     this->number_of_visits=n;
//     this->visiting_fee=f;
// }

// double Visiting::salary() const{
//     return number_of_visits*visiting_fee;
// }


// int main(){
//     Visiting v1(5, 7.0);
//     std::cout<<v1.salary()<<std::endl;
//     return 0;
// }

/*Q. Write a C++ program to implement simple 
calculator to perform '+, —, *, /' on two
integer operands. Your program should
have methods for reading data and for
performing arithmetical operations.
*/


// #include<iostream>

// class Calculator{
//     public:
//         double add(int a, int b);
//         double sub(int a, int b);
//         double multiply(int a, int b);
//         double divide(int a, int b);
// };

// double Calculator::add(int a, int b){
//     return a+b;
// }
// double Calculator::sub(int a, int b){
//     return a-b;
// }
// double Calculator::multiply(int a, int b){
//     return a*b;
// }
// double Calculator::divide(int a, int b){
//     if(b==0){
//         std::cout<<"Division by zero not allowed"<<std::endl;
//         return 0;
//     }    
//      return a/b;   
// }

// int main(){
//     Calculator calculator;
//     double operand1, operand2, result;
//     char operation;
//     std::cout<<"Enter the first operand"<<std::endl;
//     std::cin>>operand1;

//     std::cout<<"Enter the operator"<<std::endl;
//     std::cin>>operation;

//     std::cout<<"Enter the first operand"<<std::endl;
//     std::cin>>operand2;

//     switch(operation){
//         case '+':
//             result=calculator.add(operand1,operand2);
//             break;
//         case '-':
//             result=calculator.sub(operand1,operand2);
//             break;
//         case '*':
//             result=calculator.multiply(operand1,operand2);
//             break;
//         case '/':
//             result=calculator.divide(operand1,operand2);
//             break;
//         default:
//             std::cout<<"Invalid operation"<<std::endl;
//             return 1;
//     }
//     std::cout<<"Result: "<<result<<std::endl;
//     return 0;
// }


/*Write a C++ program to create a class student, with basic data members such as name, address, age.Create a class PG_student by inheriting from student class. PG_student class should have a function to display, name, address subject of the student.
*/

// #include<iostream>
// #include<string>


// class Student{
//     //data members
//     public:
//         std::string name, address;
//         int age;
// };

// class PG_student:public Student{
    
//     public:
//         //constructor
//         PG_student(std::string name="abc", std::string address="xyz", int age=0);

//         //member function for display
//         void display();
// };

// PG_student::PG_student(std::string name, std::string address, int age){
//     this->name=name;
//     this->address=address;
//     this->age=age;
// }

// void PG_student::display(){
//     std::cout<<"Student data: "<<std::endl;
//     std::cout<<"Name: "<<name<<std::endl;
//     std::cout<<"Address: "<<address<<std::endl;
//     std::cout<<"Age: "<<age<<std::endl;
// }

// int main(){
//     std::string name,address;
//     int age;

//     std::cout<<"Enter student name"<<std::endl;
//     std::getline(std::cin,name);
//     std::cout<<"Enter student address"<<std::endl;
//     std::getline(std::cin,address);
//     std::cout<<"Enter student age"<<std::endl;
//     std::cin>>age;

//     PG_student pg1(name,address,age);

//     pg1.display();

//     return 0;
// }


// Youtube channel class

#include<iostream>
#include<list>

using namespace std;

class YouTubeChannel{
    //data members
    private:
        string Name;
        string OwnerName;
        int SubscriberCount;
        list<string> PublishedVideoTitles;
    public:
    //member functions
        YouTubeChannel(string name,string ownerName){
            Name=name;
            OwnerName=ownerName;
            SubscriberCount=0;
        }
        
        //getter method or accessor methods
        string getName(){
            return Name;
        }
        
        string getOwnerName(){
            return OwnerName;
        }
        
        //setter method or mutator methods
        void setName(string name){
            Name=name;
        }
        
        void setOwnerName(string ownerName){
            OwnerName=ownerName;
        }
        
        void Subscribe(){
            SubscriberCount++;
        }
        
        void UnSubscribe(){
            if (SubscriberCount>0)
                SubscriberCount--;
        }
        
        void PublishVideo(string title){
            PublishedVideoTitles.push_back(title);            
        }
        
        void getInfo(){
            cout<<"Channel Name:"<<Name<<endl;
            cout<<"Owner Name:"<<OwnerName<<endl;
            cout<<"Subs count:"<<SubscriberCount<<endl;
            cout<<"Published videos:"<<endl;
            for(string videoTitle : PublishedVideoTitles){
                cout<<videoTitle<<endl;
            }
            cout<<endl;
        }
};

int main(){
    YouTubeChannel ytChannel("SunnyRocks","Sabarno");
    YouTubeChannel ytChannel2("BikiniBaes","Jenny");
    ytChannel.PublishVideo("Health");
    ytChannel.PublishVideo("Wealth");
    ytChannel.PublishVideo("Success");
    
    
    ytChannel2.PublishVideo("Detox");
    ytChannel2.PublishVideo("Shades");
    
    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.UnSubscribe();
    
    ytChannel2.Subscribe();
    
    
    
    ytChannel.getInfo();
    ytChannel2.getInfo();
    
    
    return 0;
}


// Write a program in C++, which take two 3 x 3 matrices as input and find sum of them. Implement suitable constructor and destructor for this program.

/*Create a custom class that mimics the functionality of std::pair.
Include methods to get and set the values of the pair elements.*/