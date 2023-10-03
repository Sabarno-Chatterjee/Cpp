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

// #include<iostream>
// #include<cstring>

// void str_lower(char str[]){
//     int count=0;
//     while(str[count]!='\0'){
//         if(str[count]>=97 && str[count]<=122)
//             str[count]-=32;
//         count++;
//     }
//     std::cout<<str<<std::endl;
// }

// int main(){
//     char str[50];
//     std::cout<<"Enter a string to convert to uppercase"<<std::endl;
//     std::cin.getline(str,50);
//     str_lower(str);

//     return 0;
// }


// Program to count the number of vowels and consonents 

// #include<iostream>
// #include<cstring>

// void count_vowels(char str[]){
//     int i=0, vowels=0, consonents=0;
//     while(str[i]!='\0'){
//         if(str[i]>=65 && str[i]<=90)
//             str[i]+=32;
//         if(str[i]=='a' || str[i]=='e' ||str[i]=='u' || str[i]=='o' ||str[i]=='u')
//             vowels++;
//         else if((str[i]!=32) && (str[i]>=97 && str[i]<=122))
//             consonents++;
//         i++;
//     }
//     std::cout<<"Vowels: "<<vowels<<std::endl;
//     std::cout<<"Consonents: "<<consonents<<std::endl;
// }


// int main(){
//     char str[50];
//     std::cout<<"Enter a string to count the number of vowels and consonents."<<std::endl;
//     std::cin.getline(str,50);
    
//     count_vowels(str);

//     return 0;
// }


// Program to count words and spaces


#include<iostream>
#include<cstring>

void count_words(char str[]){
    int i=0, space=0;
    while(str[i]!='\0'){
        if(str[i]==32)
            space++;
        i++;
    }
    std::cout<<"Space: "<<space<<std::endl;
    std::cout<<"Words: "<<space+1<<std::endl;
}


int main(){
    char str[50];
    std::cout<<"Enter a string to count the number of words and spaces."<<std::endl;
    std::cin.getline(str,50);
    
    count_words(str);

    return 0;
}