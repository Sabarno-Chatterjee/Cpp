/* Write a class for a student with:
1. Roll
2. Name
3. Marks in 3 subjects
Write functions for total marks, grade and required methods.*/

#include<iostream>

using namespace std;

class Student{
    //data members
    private:
    int roll;
    string name;
    int marks_maths, marks_phy, marks_chem;

    //member functions
    public:
    Student(int roll, string name,int m1, int m2, int m3);

    //accessor functions
    int getRoll(){return roll;}
    string getName(){return name;}
    int getMarksMaths(){return marks_maths;}
    int getMarksPhysics(){return marks_phy;}
    int getMarksChemistry(){return marks_chem;}

    //mutator functions
    void setRoll(int roll);
    void setName(int name);
    void setMarks(int m1, int m2, int m3);

    //

};

int main(){

}