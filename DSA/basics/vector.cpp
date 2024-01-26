//vector of pairs
/*Sample input:
3 
1 harry 
2 hemione 
3 ron
*/

#include<bits/stdc++.h>

using namespace std;

void print_vector(vector<pair<int,string>> &v){
    for(int i=0;i<v.size();++i){
        cout<<v[i].first<<" : "<<v[i].second<<endl;
    }
}  //access by reference to make it storage efficient as we just need to access the values 


int main(){
    vector<pair<int,string>> v;
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        int x;
        string s;
        cin>>x>>s;
        v.push_back({x,s});
    }

    print_vector(v);
    return 0;
}

/*
-> array of vectors(fixed in size as we take the size of the array as input)
-> access of elements is similar to 2-D vector in with the number of rows is fixed but the number of columns varies(dynamic)
*/

/*sample input: 
3 
2 
1 3 
4 
5 6 7 8 
3 
1 2 3 
*/

// #include<bits/stdc++.h>

// using namespace std;

// void print_vec(vector<int> &v){
//     cout<<"size: "<<v.size()<<endl;
//     for(int i=0;i<v.size();++i){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
    
//     int N; //number of vectors
//     cin>>N;
//     vector<int> v[N];
    
//     for(int i=0;i<N;++i){
//         int n; //size of each vector
//         cin>>n;
//         for(int j=0;j<n;++j){   //input of a single vector
//             int x;
//             cin>>x; //input of individual elements
//             v[i].push_back(x);
//         }
//     }
    
//     for(int i=0;i<N;++i)
//         print_vec(v[i]);
    
    
//     return 0;
// }


//vector of vectors
/*sample input: 
3 
2 
1 3 
4 
5 6 7 8 
3 
1 2 3 
*/
//vector of vectors
/*sample input: 
3 
2 
1 3 
4 
5 6 7 8 
3 
1 2 3 
*/
#include<bits/stdc++.h>

using namespace std;

void print_vec(vector<int> &v){
    cout<<"size: "<<v.size()<<endl;
    for(int i=0;i<v.size();++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    
    int N; //number of vectors
    cin>>N;
    vector<vector<int>> v;   //vector initialised
    
    for(int i=0;i<N;i++){
        int n;  //number of elements in each vector
        cin>>n;
        //vector<int> temp;   //to take input of each vector seperately and push into the main vector(v)[alternative way]

        v.push_back(vector<int> ());    //we declare an empty vector and then push back elements using index
        for(int j=0;j<n;++j){
            int x;
            cin>>x;
            v[i].push_back(x);          //pushing back elements using index
            //temp.push_back(x); //[alternative way]
        }
        // v.push_back(temp);  //push the sub vector into the main vector[alternative way]
    }
    
    for(int i=0;i<v.size();++i)     //or we can use i<N
        print_vec(v[i]);
    
    return 0;
}