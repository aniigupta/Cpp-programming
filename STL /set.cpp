#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    int q,y,x; 
    set <int> s;
    cin >> q;
    for(int i=0;i<q;i++){
        cin >> y >> x;
        if(y==1){
            s.insert(x);
        }
        else if(y==2){
            s.erase(x);
        }
        else{
            set<int>::iterator itr;
            itr=s.find(x); 
            if(itr != s.end()) cout << "Yes" <<endl;
            else cout << "No" <<endl;
        }
    }
    
    return 0;
}
