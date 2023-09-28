// rotate an array by k times.

#include<iostream>

using namespace std;

void rotate(int a[], int k,int n){
    int temp;
    int i=0;
    while(k){
        temp=a[0];
        for(int i=1; i<=n;i++)
            a[i-1] = a[i];
        a[n-1]=temp; 
        k--;
    }
    
}

void print_array(int arr[], int n){
    for(int i=0; i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main(){
    int arr[]={1,2,3,4,5,6,7}, k;
    int length = sizeof(arr)/sizeof(arr[0]);
    print_array(arr, length);
    cout<<"Enter k"<<endl;
    cin>>k;
    rotate(arr,k,length);
    print_array(arr, length);

    return 0;
}