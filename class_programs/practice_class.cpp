/* Write a class for a student with:
1. Roll
2. Name
3. Marks in 3 subjects
Write functions for total marks, grade and required methods.*/

// #include<iostream>

// using namespace std;

// class Student{
//     //data members
//     private:
//     int roll;
//     string name;
//     int marks_maths, marks_phy, marks_chem;

//     //member functions
//     public:
//     //Constructor
//     Student(int roll, string name,int m1, int m2, int m3);

//     //accessor functions
//     int getRoll(){return roll;}
//     string getName(){return name;}
//     int getMarksMaths(){return marks_maths;}
//     int getMarksPhysics(){return marks_phy;}
//     int getMarksChemistry(){return marks_chem;}

//     //mutator functions
//     void setRoll(int roll);
//     void setName(int name);
//     void setMarks(int m1, int m2, int m3);

//     //facilitators
//     int TotalMarks();
//     char Grade();
    
// };

// int main(){
//     int roll,m,p,c;
//     string name;

//     cout<<"Enter the roll number"<<endl;
//     cin>>roll;

//     cout<<"Enter the name of student"<<endl;
//     cin>>name;

//     cout<<"Enter the marks obtained in maths, physics and chemistry"<<endl;
//     cin>>m>>p>>c;

//     Student s1(roll,name,m,p,c);

//     cout<<"Total Marks: "<<s1.TotalMarks()<<endl;
//     cout<<"Grade: "<<s1.Grade()<<endl;
//     return 0;
// }


// Student::Student(int roll, string name,int m1, int m2, int m3){
//     this->roll=roll;
//     this->name=name;
//     this->marks_maths=m1;
//     this->marks_phy=m2;
//     this->marks_chem=m3;
// }

// void Student::setRoll(int roll){
//     this->roll=roll;
// }

// void Student::setName(int name){
//     this->name=name;
// }
    
// void Student::setMarks(int m1, int m2, int m3){
//     this->marks_maths=m1;
//     this->marks_phy=m2;
//     this->marks_chem=m3;
// }

//     //facilitators
// int Student::TotalMarks(){
//     return marks_maths+marks_phy+marks_chem;
// }

// char Student::Grade(){
//     float avg=TotalMarks()/3;
//     if(avg>=60)
//        return 'A';
//     else if(avg>=40 &&avg<60)
//         return 'B';
//     else
//         return 'C';
// }


// Adding complex numbers using operator overloading

// #include<iostream>

// using namespace std;

// class Complex{
//     //data members
//     private:
//     int real;
//     int imaginary;

//     //members functions
//     public:
//     Complex(int r=0, int i=0);
//     //accessor functions
//     int getReal(){return real;}
//     int getImaginary(){return imaginary;}
//     //facilitator
//     Complex operator+(Complex x){
//         Complex temp;
//         temp.real=x.real+real;
//         temp.imaginary=x.imaginary+imaginary;
//         return temp;
//     }

//     //Insertion operator overloading declaration
//     friend ostream & operator<<(ostream &out, Complex &c); 
// };

// int main(){
//     Complex c1(3,5);
//     Complex c2(1,2);
//     Complex c;
//     c=c1+c2;

//     cout<<c;
//     return 0;
// }

// Complex::Complex(int r, int i){
//     real=r;
//     imaginary=i;
// }

// // Insertion operator overloading definition
// ostream & operator<<(ostream &out, Complex &c){
//     out<<c.getReal()<<"+"<<c.getImaginary()<<"i"<<endl;
//     return out;
// }



/*Subtracting complex numbers using operator overloading and friend functions+insertion function overloading.*/ 

// #include<iostream>

// using namespace std;

// class Complex{
//     //data members
//     private:
//     int real;
//     int imaginary;

//     //members functions
//     public:
//     Complex(int r=0, int i=0);
//     //accessor functions
//     int getReal(){return real;}
//     int getImaginary(){return imaginary;}
//     //facilitator
//     friend Complex operator-(Complex x, Complex y);

//      //Insertion operator overloading declaration using friend function    
//     friend ostream & operator<<(ostream &o, Complex &c);
// };

// int main(){
//     Complex c1(3,5);
//     Complex c2(1,2);
//     Complex c;
//     c=c1-c2;

//     cout<<c;
//     return 0;
// }

// Complex::Complex(int r, int i){
//     real=r;
//     imaginary=i;
// }

// Complex operator-(Complex x, Complex y){
//     Complex temp;
//     temp.real=x.real-y.real;
//     temp.imaginary=x.imaginary-y.imaginary;
//     return temp;
// }

//// Insertion operator overloading definition
// ostream & operator<<(ostream &o, Complex &c){
//     o<<c.getReal()<<"+"<<c.getImaginary()<<"i"<<endl;
//     return o;
// }


// Write a class for Rational number (p/q) with overloading (addition)+ and (insertion)<< operator.

// #include<iostream>

// using namespace std;

// class Rational{
//     // data members
//     private:
//         int p;
//         int q;

//     // member functions
//     public:
//         //constructor
//     Rational(int p=1, int q=1);

//     //copy constructor
//     Rational (Rational &r);

//     //accessor functions
//     int getP(){return p;}
//     int getQ(){return q;}

//     //mutator functions
//     void setP(int p);
//     void setQ(int q);

//     //facilitator function using operator overloading
//     Rational operator+(Rational r){
//         Rational temp;
//         temp.p=this->p*r.q+this->q*r.p;
//         temp.q=this->q*r.q;
//         return temp;
//     }

//     // friend function for operator overloading
//     friend ostream & operator<<(ostream &out,Rational &r);

// };

// int main(){
//     Rational r1(1,4);
//     Rational r2(1,2);
//     Rational r;
    
//     r=r1+r2;
//     cout<<r;
//     return 0;
// }

// Rational::Rational(int p, int q){
//     this->p=p;
//     this->q=q;
// }

// Rational::Rational (Rational &r){
//     this->p=r.p;
//     this->q=r.q;
// }

// void Rational::setP(int p){
//     this->p=p;
// }

// void Rational::setQ(int q){
//     this->q=q;
// }


// ostream & operator<<(ostream &out,Rational &r){
//     out<<r.getP()<<"/"<<r.getQ()<<endl;
//     return out;
// }


/*Write a class for Employee
Derived classes:
1.Full time employee with salary
2.Part time employee with daily wages
Write the required methods.*/

// #include<iostream>

// using namespace std;

// class Employee{
//     //data members
//     private:
//     int empID;
//     string empNAME;

//     //members functions
//     public:
//     //accessor methods
//     Employee(int id=0, string name="abc");
//     int get_empID(){return empID;}
//     string get_empNAME(){return empNAME;}
// };

// class FullTimeEmployee:public Employee{
//     //data members
//     private:
//     int salary;
//     public:
//     FullTimeEmployee(int i, string n, int s):Employee(i,n){
//         this->salary=s;
//     }

//     int getSalary(){return salary;} 
// };

// class PartTimeEmployee:public Employee{
//     //data members
//     private:
//     int wage;
//     public:
//     PartTimeEmployee(int i, string n, int w):Employee(i,n){
//         this->wage=w;
//     }

//     int getWage(){return wage;}
// };

// int main(){
//     PartTimeEmployee p1(1,"Max",350);
//     FullTimeEmployee p2(2,"Sally",7000);
//     Employee e;
//     cout<<p1.get_empID()<<" "<<p1.get_empNAME()<<" "<<p1.getWage()<<endl;
//     cout<<p2.get_empID()<<" "<<p2.get_empNAME()<<" "<<p2.getSalary()<<endl;
//     cout<<e.get_empID()<<" "<<e.get_empNAME()<<endl;
    
//     return 0;
// }

// Employee::Employee(int id, string name){
//     this->empID=id;
//     this->empNAME=name;
// }


/*Write classes to demonstrate polymorphism. 
Base class Shape
Derived classes:
rectangle
circle*/


#include<iostream>

using namespace std;

#define PI 3.14

class Shape{
    //Abstract function/interface/pure virtual functions
    public:
        virtual float Area()=0;
        virtual float Perimeter()=0;
};

class Rectangle:public Shape{
    //data members
    private:
        float length;
        float breadth;

    public:
        //member functions
        Rectangle(float l=0,float b=0);
        float Area();
        float Perimeter();
};

class Circle:public Shape{
    //data members
    private:
        float radius;

    public:
        //member functions
        Circle(float r=0);
        float Area();
        float Perimeter();
};

int main(){
    Shape *Sptr;
    Sptr= new Rectangle(7,3);
    cout<<"Area of rectangle: "<<Sptr->Area()<<endl;
    cout<<"Perimeter of rectangle: "<<Sptr->Perimeter()<<endl;
    
    Sptr= new Circle(5);
    cout<<"Area of circle: "<<Sptr->Area()<<endl;
    cout<<"Perimeter of circle: "<<Sptr->Perimeter()<<endl;

    return 0;
}

Rectangle::Rectangle(float l,float b){
    this->length=l;
    this->breadth=b;
}

float Rectangle::Area(){
    return length*breadth;
}

float Rectangle::Perimeter(){
    return 2*(length+breadth);
}

Circle::Circle(float r){
    this->radius=r;
}

float Circle::Area(){
    return PI*radius*radius;
}
 

float Circle::Perimeter(){
    return 2*PI*radius;
}