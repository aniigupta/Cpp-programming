#include <iostream>
#include<string.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	   int n;
	   cin>>n;
	   string s;
	   string sb =s.substr(0,n/2);
	   string re =s.substr(n/2,n);
	   if(sb==re) cout<<"YES";
	    else cout<<"NO";
	}
	return 0;
}
