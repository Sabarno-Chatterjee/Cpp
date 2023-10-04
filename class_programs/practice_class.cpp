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

#include<iostream>

using namespace std;

class Rational{
    // data members
    private:
        int p;
        int q;

    // member functions
    public:
        //constructor
    Rational(int p=1, int q=1);

    //copy constructor
    Rational (Rational &r);

    //accessor functions
    int getP(){return p;}
    int getQ(){return q;}

    //mutator functions
    void setP();
    void setQ();

    //facilitator functions
    Rational operator+(Rational r){
        Rational temp;
        temp.p=this->p*r.q+this->q*r.p;
        temp.q=this->q*r.q;
        return temp;
    }

    friend 

};

int main(){

    return 0;
}
