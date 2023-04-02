#include<iostream>
#include<vector>
using namespace std;

  int main (){
   int n;
   cin>>n;

   vector<int> v,w;
   for(int i=0; i<n; i++)
   {
     int x;
     cin>>x;
     v.push_back(x);
   }
    for(int i=0; i<n; i++)
   {
     int x;
     cin>>x;
     w.push_back(x);
   }
     vector<int> sum(n);
      for(int i=0;i<n; i++){
          sum[i]=v[i]+w[i];
        }
   for(int i=0;i<n;i++)
   {
     cout<<sum[i]<<" ";
   }
    return 0;
}
