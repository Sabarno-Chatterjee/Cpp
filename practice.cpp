#include<iostream>
#include<math.h>

using namespace std;

void armstrong(int num){
    int original_num=num, sum=0, count=0;
    while(num){
        count++;
        num/=10;
    }
    
    num=original_num;
    
    while(num){
        sum+= pow(num%10, count);
        num /= 10;
    }
    if(original_num==sum)
        cout<<"Armstrong."<<endl;
    else
        cout<<"Not armstrong."<<endl;
    
}

int main(){
    int num;
    cout<<"Enter a number.\n"<<endl;
    cin>>num;
    armstrong(num);
    
    return 0;
}