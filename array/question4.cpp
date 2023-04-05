#include<iostream>
#include<string.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    string s1;
	    cin>>s1;
	    string s2;
	    cin>>s2;
	    for(int i=0;i<5;i++){
	        if(s1[i]==s2[i])cout<<"G";
	        else cout<<"B";
	    }
	    cout<<endl;
	}
	return 0;
}
	    