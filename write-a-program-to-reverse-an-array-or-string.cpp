//write-a-program-to-reverse-an-array-or-string

//Using swap and iteration.

#include<iostream>

using namespace std;

void reverse_array(int arr[],int n){
    int start=0, end= n-1, temp=0;
    
    while(start<end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void print_array(int arr[],int n){
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    
    cout<<endl;    
}

int main(){
    int arr[]={34,23,67,43,65,97,23,41,69};
    int length = sizeof(arr)/sizeof(arr[0]);
    
    //Function to print array
    print_array(arr, length);
    
    //Function to reverse the array
    reverse_array(arr, length);
    
    cout<<"Reversed array: "<<endl;
    print_array(arr, length);
    
    return 0;
}