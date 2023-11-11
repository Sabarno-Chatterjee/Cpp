// Swap the elements of a pair and print the result.

// #include<iostream>

// using namespace std;

// int main(){
    
//     pair<int,int> p1(1,2);
    
//     cout<<p1.first<<" : "<<p1.second<<endl;
    
//     //swap
//     int temp=p1.first;
//     p1.first=p1.second;
//     p1.second=temp;
    
//     cout<<p1.first<<" : "<<p1.second<<endl;
        
//     return 0;
// }


// Write a function to compare two pairs of integers for equality.

// #include<iostream>

// int main(){
//     std::pair<int,int> p1(3,4);
//     std::pair<int,int> p2(4,5);

//     if(p1.first==p2.first && p1.second==p2.second)
//         std::cout<<"The pairs are equal"<<std::endl;
//     else
//         std::cout<<"The pairs are not equal"<<std::endl;

//     return 0;
// }




//Given two pairs, determine which one is greater based on their first elements.


// #include<iostream>

// int main(){
//     std::pair<int,int> p1(4,5);
//     std::pair<int,int> p2(2,3);

//     if(p1.first>p2.first)
//         std::cout<<"P1 is greater"<<std::endl;
//     else    
//         std::cout<<"P2 is greater"<<std::endl;

//     return 0;
// }


/*Write a function that takes two integers as input and returns a pair of their sum and difference. Call the function and display the results.*/

#include<iostream>

std::pair<int,int> fun1(int n1,int n2){
    std::pair<int,int> p1(n1+n2,n1-n2);
    return p1;
}

int main(){
    int n1,n2;

    std::cout<<"Enter the first integer"<<std::endl;
    std::cin>>n1;

    std::cout<<"Enter the second integer"<<std::endl;
    std::cin>>n2;

    std::pair<int,int> result=fun1(n1,n2);
    
    std::cout<<"The sum and difference are: "<<result.first<<" : "<<result.second<<std::endl;

    return 0;
}
