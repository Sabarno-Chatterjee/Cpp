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


#include<iostream>

int main(){
    std::pair<int,int> p1(4,5);
    std::pair<int,int> p2(2,3);

    if(p1.first>p2.first)
        std::cout<<"P1 is greater"<<std::endl;
    else    
        std::cout<<"P2 is greater"<<std::endl;

    return 0;
}

