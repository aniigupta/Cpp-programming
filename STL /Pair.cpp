#include <iostream>
#include<bits/stdc++.h>
#include<array>
using namespace std;
int main()
{
    pair<int, string> p;
    p = make_pair(1, "apple");
    p = {1, "dhjc"};
    cout << p.first << endl
         << p.second << endl;
    int a[] = {1, 2, 3, 4};
    int b[] = {5, 6, 7, 8};
    pair<int, int> p_array[4];
    p_array[0]={1,5};
    p_array[1]={2,6};
    p_array[2]={3,7};
    p_array[3]={4,8};
    swap(p_array[0], p_array[3]);
    for (int i = 0; i < 4; ++i)
    {
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }

    return 0;
}