/*
Ordered maps: it follows the "key"(unique) and "value" pair structure. In case of ordered map the elements are sorted
on the basis of the key and stored. It is implemented using Red and Black Tree data structure.
*/
/*
Sample input:
3
3 Ron
1 Harry
2 Hermione
*/

#include<bits/stdc++.h>

using namespace std;

void print_map(map<int,string> &m){
    map<int,string> :: iterator it;
    for(it=m.begin();it!=m.end();++it){
        cout<<it->first<<" : "<<it->second<<endl;
    }
}
int main(){
    map<int,string> m;
    
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        int x;
        string s;
        cin>>x>>s;
        m.insert({x,s});
    }
    
    
    auto it = m.find(30);    //find returns an iterator if the element is present
    if(it==m.end())         // if element is not present it returns an iterator to the position after the last element
        cout<<"Value not present."<<endl;
    else
        cout<<it->first<<" : "<<it->second<<endl;
        
    m.erase(3); // erasing an element using the key
    
    auto itt = m.find(2);   // erasing element using iterator
    if(itt!=m.end())        // to avoid error when element not present
        m.erase(itt);
        
    print_map(m);
    
    return 0;
}