#include<iostream>
#include<string>

using namespace std;

int main(){
    string s ;
    cout<<"Enter string"<<endl;
    cin>>s;
    string N = s.substr(0,3);
    cout<<N<<endl;

    string E =s.erase(2);
    cout<<E<<endl;

    cout<<s.insert(0,"insert")<<endl;

    reverse(s.begin(),s.end());
    sort(s.begin(),s.end());
    cout<<s<<endl;
    

    return 0;
}