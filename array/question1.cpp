#include<iostream>
#include<vector>
// #include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int count=0;
	vector<int> num(4);
	for(int i=0; i<num.size(); i++){
	    cin>>num[i];
	   if(num[i]>=10){
	    count++;   
	   }
	}
	cout<<count;
	return 0;
}
