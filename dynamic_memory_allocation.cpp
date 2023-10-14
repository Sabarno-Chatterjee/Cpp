/*Write a C++ program to dynamically allocate an integer, a character and a string and assign a value to them.*/

#include<iostream>
#include<cstring>

int main(){

    int *Iptr=new (int);
    *Iptr=21;

    char *Cptr=new char;
    *Cptr='J';

    std::string *Sptr=new std::string;
    *Sptr = "Dodo";

    std::cout<<"Dynamically allocated integer: "<<*Iptr<<std::endl;
    std::cout<<"Dynamically allocated character: "<<*Cptr<<std::endl;
    std::cout<<"Dynamically allocated string: "<<*Sptr<<std::endl;

    //Deallocate memory:
    delete Iptr;
    delete Cptr;
    delete Sptr;

    return 0;
}