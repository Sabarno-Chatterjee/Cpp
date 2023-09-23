// maximum-and-minimum-in-an-array

// Simple sorting

#include<iostream>

using namespace std;

void max_and_min(int arr[],int n){
    int temp=0;
    for(int i=0; i<n-1; i++)
        for(int j=0; j<n-1-i; j++)
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
}

int main(){
    int arr[]= {45,23,8,4,2,64,2,45,32,53,74,46};
    int length =  sizeof(arr)/sizeof(arr[0]);
    max_and_min(arr,length);
    cout<<"Max: "<<arr[length-1]<<endl;
    cout<<"Min: "<<arr[0]<<endl;
    
    return 0;
}