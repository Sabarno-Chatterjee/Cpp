//factorial
#include<iostream>

using namespace std;

int factorial(int num){
    return (num==0 || num==1) ? 1 : num*factorial(num-1);
}

int main(){
    int num;
    cout<<"Enter a number to obtain it's factorial."<<endl;
    cin>>num;
    cout<<"Factorial: "<<factorial(num);
    
    return 0;
}