//array of vectors

/*sample input: 
3 
2 
1 3 
4 
5 6 7 8 
3 
1 2 3 */
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
    vector<int> v[N];
    
    for(int i=0;i<N;++i){
        int n; //size of each vector
        cin>>n;
        for(int j=0;j<n;++j){   //input of a single vector
            int x;
            cin>>x; //input of individual elements
            v[i].push_back(x);
        }
    }
    
    for(int i=0;i<N;++i)
        print_vec(v[i]);
    
    
    return 0;
}