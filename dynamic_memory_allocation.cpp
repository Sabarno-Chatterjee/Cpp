/*Write a C++ program to dynamically allocate an integer, a character and a string and assign a value to them.*/

// #include<iostream>
// #include<cstring>

// int main(){

//     int *Iptr=new (int);
//     *Iptr=21;

//     char *Cptr=new char;
//     *Cptr='J';

//     std::string *Sptr=new std::string;
//     *Sptr = "Dodo";

//     std::cout<<"Dynamically allocated integer: "<<*Iptr<<std::endl;
//     std::cout<<"Dynamically allocated character: "<<*Cptr<<std::endl;
//     std::cout<<"Dynamically allocated string: "<<*Sptr<<std::endl;

//     //Deallocate memory:
//     delete Iptr;
//     delete Cptr;
//     delete Sptr;

//     return 0;
// }


/*Write a C++ program to dynamically allocate an array of integers and strings and initialize its elements.*/


#include<iostream>
#include<cstring>

int main(){
    int size=5;
    int *IntegerArray= new int[size];

    std::string *StringArray=new std::string[size];

    for(int i=0; i<size; i++){
        IntegerArray[i]=i+1;
        StringArray[i]="Element_"+std::to_string(i+1);
    }

    for(int i=0; i<size;i++){
        std::cout<<IntegerArray[i]<<" "<<StringArray[i]<<std::endl;
    }

    //deallocation of memory
    delete []IntegerArray;
    delete []StringArray;

    return 0;
}