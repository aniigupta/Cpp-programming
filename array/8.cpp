#include<iostream>
#include<vector>
using namespace std;

int main() {
   
     void printvec(vector<pair<int,int> > &V){
        cout<<"size: "<<V.size<<endl;
        for(int i =0; i<V.size(); ++i){
            cout<<V[i].first<<V[i].second<<endl;
        }
        cout<<endl;
    }
    
    
    int N;
    cin>>N;
    vector<int> V(N);
    for(int i=0; i<N; i++){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int j=0; j<n; j++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        V.push_back(v);
    }
    for(int i =0; i<N; i++){
        cout<<V.[i]<<endl;
    }
    
}