#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n; 
	    cin>>n;
	    vector<string> v(n);
	    int c1=0;
	    int c2=0;
	    for(int i=0; i<n; i++){
	         cin>>v[i];
             (v[i]=="START38")?c1++:c2++;
	    }
        cout<<c1<<" "<<c2<<endl;
	}
	return 0;
}
