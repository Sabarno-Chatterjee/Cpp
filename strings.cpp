// Find length of a string without using library functions

#include<iostream>
#include<cstring>

using namespace std;

int get_length(char str[]){
    int count=0;
    while(str[count]!='\0'){
            count++;
    }
    return count;
}

int main(){

    char str[50];
    cout<<"Enter a string"<<endl;
    cin.getline(str,50);
    cout<<get_length(str)<<endl;

    return 0;
}