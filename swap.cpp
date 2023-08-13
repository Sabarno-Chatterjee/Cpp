#include<iostream>

using namespace std;

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b =temp;
}
int main(){
    int a=4, b=5;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    swap(&a, &b);
    
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    return 0;
}