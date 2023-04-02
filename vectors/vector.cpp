#include<iostream>
#include<vector>
using namespace std;

// void printvec(vector<int> v){
//     cout<<"size:"<<v.size()<<endl;
//     for(int i=0; i<v.size(); ++i){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }

int main (){
   int n;
   cin>>n;

   vector<int> v;
   for(int i=0; i<n; i++){
    int x;
    cin>>x;
    v.push_back(x);
    // cin>>v[i];
   }
   for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
   }
   

    // printvec(v);
    return 0;
}