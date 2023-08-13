//fibonacci
#include<iostream>

using namespace std;

int fibonacci(int num){
    if (num==0)
        return 0;
    else if(num==1)
        return 1;
    else
        return fibonacci(num-1) + fibonacci(num-2);
}

int main(){
    int num=10;
    for(int i=0; i<num; i++){
        cout<<fibonacci(i);
    }
    return 0;
}