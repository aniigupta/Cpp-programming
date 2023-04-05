#include <iostream>
#include<string.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    for(int i=0; i<t; i++){
	        cin>>s;
	   }
	   // string r = reverse(s.begin(),s.end());
	    if(s==r) cout<<"wins";
	    else cout<<"loses";
	}
	return 0;
}