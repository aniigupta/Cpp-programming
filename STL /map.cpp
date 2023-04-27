#include<iostream>
#include<map>
void printmap(map<int,string> &m){
    cout<<m.size()<<endl;
    for(auto &pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    
}
int main(){
    map<int,string> m;
    m[2]="ani";
    m[8]="dnj";
    m[5]="dygy";
 
    // map<int,string>:: iterator it;
    // for(it = m.begin(); it!= m.end(); ++it ){
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }
    printmap(m);
}