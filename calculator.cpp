/*Develop a menu-driven calculator program in C++ using a switch-case statement. The menu should include options for addition, subtraction, multiplication, and division. Take two numbers as input and perform the selected operation, displaying the result.*/

#include<iostream>

int calculate(int, int, char);

void user_input(){
    int num1, num2;
    char operation;

    //First number user input
    std::cout<<"Enter the first number."<<std::endl;
    std::cin>>num1;
    
    //Operation user input
    std::cout<<"Enter the operator."<<std::endl;
    std::cin>>operation;

    //Second number user input
    std::cout<<"Enter the second number."<<std::endl;
    std::cin>>num2;

    calculate(num1, num2, operation);
}

int calculate(int num1,int num2,char operation){
    int calc;

    if(operation=='+')
        calc=1;
    else if(operation=='-')
        calc=2;
    else if(operation=='*')
        calc=3;
    else if(operation=='/')
        calc=4;
    else{
        std::cout<<"Operation not supported"<<std::endl;
        return; 
    }
}


int main(){
    user_input();


    return 0;
}