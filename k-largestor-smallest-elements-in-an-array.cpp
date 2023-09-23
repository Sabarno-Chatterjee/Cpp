// k-largest-elements-in-an-array

#include<iostream>

using namespace std;

void sort_array(int arr[],int n){
    int temp=0;
    for(int i=0; i<n-1; i++)
        for(int j=0; j<n-1-i; j++)
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
}

void print(int arr[],int length, int k){
    for(int i=length-1; i>=length-k;i--)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main(){
    int arr[]={45,32,64,12,73,21,32,46,21,32,48,93};
    int length = sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"Enter the number of largest elements you want to print."<<endl;
    cin>>k;
    sort_array(arr, length);
    print(arr, length, k);
    
    return 0;
}