#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
long n, val,q;
cin>>n;
vector<long>v(n);
for(int i=0; i<v.size(); i++){
    cin>>v[i];
}   cin>>q;
for(int i=0; i<q; i++){
    cin>>val;
    vector<long>::iterator p =lower_bound(v.begin(), v.end(), val);
    if (val!=*p){
    cout<<"No" <<" "<< (p-v.begin()+1)<<endl;
    }
    else { 
    cout<<"Yes" <<" "<< (p-v.begin()+1)<<endl;
    }
}
return 0;
}