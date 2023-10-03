// Find length of a string without using library functions

// #include<iostream>
// #include<cstring>

// using namespace std;

// int get_length(char str[]){
//     int count=0;
//     while(str[count]!='\0'){
//             count++;
//     }
//     return count;
// }

// int main(){

//     char str[50];
//     cout<<"Enter a string"<<endl;
//     cin.getline(str,50);
//     cout<<get_length(str)<<endl;

//     return 0;
// }


// Convert uppercase string to lowercase

// #include<iostream>
// #include<cstring>

// void str_lower(char str[]){
//     int count=0;
//     while(str[count]!='\0'){
//         if(str[count]>=65 && str[count]<=90)
//             str[count]+=32;
//         count++;
//     }
//     std::cout<<str<<std::endl;
// }

// int main(){
//     char str[50];
//     std::cout<<"Enter a string to convert to lowercase"<<std::endl;
//     std::cin.getline(str,50);
//     str_lower(str);

//     return 0;
// }


// Convert lowercase string to uppercase

#include<iostream>
#include<cstring>

void str_lower(char str[]){
    int count=0;
    while(str[count]!='\0'){
        if(str[count]>=97 && str[count]<=122)
            str[count]-=32;
        count++;
    }
    std::cout<<str<<std::endl;
}

int main(){
    char str[50];
    std::cout<<"Enter a string to convert to uppercase"<<std::endl;
    std::cin.getline(str,50);
    str_lower(str);

    return 0;
}