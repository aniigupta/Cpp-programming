#include <iostream>
#include<vector>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	   // int arr[n];
	    vector<int>arr(n);
	    int c=0;
	    for(int i =0; i<n; i++)
        {
            cin>>arr[i];
            c+=(arr[i]>=1000);
        }	    
        cout<<c<<endl;
	}
	
	return 0;
}
