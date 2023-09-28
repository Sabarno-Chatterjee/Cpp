// #include<iostream>

// using namespace std;

// void pattern(int n){
//     for(int i=1; i<=n;i++){
//         for(int j=1; j<=n;j++){
//             cout<<j<<" ";
//         }
//     cout<<endl;     
//     }
        
        
// }

// int main(){
//     pattern(5);
//     return 0;
// }

// #include<iostream>

// using namespace std;

// void pattern(int n){
//     for(int i=1; i<=n;i++){
//         for(int j=1; j<=n;j++){
//             cout<<i<<" ";
//         }
//     cout<<endl;     
//     }
        
        
// }

// int main(){
//     pattern(5);
//     return 0;
// }

// #include<iostream>

// using namespace std;

// void pattern(int n){
//     for(int i=1; i<=n;i++){
//         for(int j=1; j<=n;j++){
//             cout<<j+i<<" ";
//         }
//     cout<<endl;     
//     }
        
        
// }

// int main(){
//     pattern(5);
//     return 0;
// }

// #include<iostream>

// using namespace std;

// void pattern(int n){
//     int j=1;
//     for(int i=1; i<=n;i++){
//         for(;j<=n*i;j++){
//             cout<<j<<" ";
//         }
        
//     cout<<endl;     
//     }
        
        
// }

int main(){
    pattern(5);
    return 0;
}

hollow rectangle

#include<iostream>

using namespace std;

void pattern(int n, int m){
    
    for(int i=1; i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==1 || i==n || j==1 || j==m)
                cout<<"*";
            else
                cout<<" ";
        }
    cout<<endl; 
    }       
}
        

int main(){
    pattern(7,9);
    return 0;
}



