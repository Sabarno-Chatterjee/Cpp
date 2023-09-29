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

// int main(){
//     pattern(5);
//     return 0;
// }

// hollow rectangle

// #include<iostream>

// using namespace std;

// void pattern(int n, int m){
    
//     for(int i=1; i<=n;i++){
//         for(int j=1;j<=m;j++){
//             if(i==1 || i==n || j==1 || j==m)
//                 cout<<"*";
//             else
//                 cout<<" ";
//         }
//     cout<<endl; 
//     }       
// }
        

// int main(){
//     pattern(7,9);
//     return 0;
// }



// Right angled triangle.

// #include<iostream>

// using namespace std;

// void pattern(int n){
//     for(int i=1; i<=n; i++){
//         for(int k=1; k<=n-i; k++){
//             cout<<" ";
//         }
//         for(int j=1; j<=i;j++){
//             cout<<"*";
//         }
//     cout<<endl;
//     }    
// }

// int main(){
//     pattern(5);

//     return 0;
// }


// Star pyramid

// #include<iostream>

// using namespace std;

// void pattern(int n){
//     for(int i=1; i<=n; i++){
//         for(int k=1; k<=n-i; k++){
//             cout<<" ";
//         }
//         for(int j=1; j<=i;j++){
//             cout<<"* ";
//         }
//     cout<<endl;
//     }    
// }

// int main(){
//     pattern(5);

//     return 0;
// }


// Diamond pattern

// #include<iostream>

// using namespace std;

// void pattern(int n){
//     for(int i=1;i<=n;i++){
//         for(int k=1; k<=n-i;k++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
        
//     for(int i=n-1;i>=1;i--){
//         for(int k=1; k<=n-i;k++){
//             cout<<" ";
//         }
//         for(int j=i;j>=1;j--){
//             cout<<"* ";
//         }
    
//     cout<<endl;
//     }
// }

// int main(){
//     pattern(8);
    
//     return 0;
// }


// Solid Rhombus

// #include<iostream>

// using namespace std;

// void pattern(int n){
//     for(int i=1; i<=n; i++){
//         for(int k=1; k<=n-i; k++)
//             cout<<" ";
//         for(int j=1; j<=n; j++)
//             cout<<"*";
        
//         cout<<endl;
//     }
    
// }

// int main(){
//     pattern(8);
    
//     return 0;
// }


// Inverted solid pyramid

// #include<iostream>

// using namespace std;

// void pattern(int n){
//     for(int i=n; i>=1; i--){
//         for(int k=1; k<=n-i; k++)
//             cout<<" ";
//         for(int j=i; j>=1; j--)
//             cout<<"* ";
            
//         cout<<endl;
//     }
    
// }

// int main(){
//     pattern(10);
//     return 0;
// }

// numbered triangle

// #include<iostream>

// using namespace std;

// void pattern(int m, int n){
//     for(int i=1; i<=n; i++){
//         for(int k=1; k<=n-i;k++)
//             cout<<" ";
//         for(int j=1;j<=i;j++)
//             cout<<j;
            
//     cout<<endl;
//     }
// }

// int main(){
//     pattern(5,7);
    
//     return 0;
// }

// number pyramid

// #include<iostream>

// using namespace std;

// void pattern(int m, int n){
//     for(int i=1; i<=n; i++){
//         for(int k=1; k<=n-i;k++)
//             cout<<" ";
//         for(int j=1;j<=i;j++)
//             cout<<j<<" ";
            
//     cout<<endl;
//     }
// }

// int main(){
//     pattern(5,7);
    
//     return 0;
// }

// number pyramid

// #include<iostream>

// using namespace std;

// void pattern(int m, int n){
//     for(int i=1; i<=n; i++){
//         for(int k=1; k<=n-i;k++)
//             cout<<" ";
//         for(int j=1;j<=i;j++)
//             cout<<i<<" ";
            
//     cout<<endl;
//     }
// }

// int main(){
//     pattern(5,7);
    
//     return 0;
// }


// number increasing pyramid

// #include<iostream>

// using namespace std;

// void pattern(int m, int n){
//     for(int i=1; i<=n; i++){
//         for(int j=1;j<=i;j++)
//             cout<<j<<" ";
            
//     cout<<endl;
//     }
// }

// int main(){
//     pattern(5,7);
    
//     return 0;
// }

// number increasing reverse pyramid

// number increasing pyramid

// #include<iostream>

// using namespace std;

// void pattern(int n){
//     int count=0;
//     for(int i=n; i>=1; i--){
//         for(int j=1;j<=n-count;j++){
//             cout<<j;
//         }
//         count++;
            
//     cout<<endl;
//     }
// }

// int main(){
//     pattern(5);
    
//     return 0;
// }

// number changing pyramid

// #include<iostream>

// using namespace std;

// void pattern(int n){
//     int count=1;
//     for(int i=1; i<=n; i++){
//         for(int j=1;j<=i;j++){
//             cout<<count<<" ";
//             count++;
//         }      
//     cout<<endl;
//     }
// }

// int main(){
//     pattern(4);
    
//     return 0;
// }


// zero-one triangle

#include<iostream>

using namespace std;

void pattern(int n){
    
    for(int i=1; i<=n; i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0)
                cout<<"1"<<" ";
            else
                cout<<"0"<<" ";
        }
    cout<<endl;
    }
}

int main(){
    pattern(8);
    return 0;
}