#include <iostream>
#include <vector>
using namespace std;

void insort(vector<int> &v, int temp)
{
    if (v.size() == 0 || v[v.size() - 1] <= temp)
    {
        v.push_back(temp);
        return;
    }
    else if (v[0] >= temp)
    {
        v.insert(v.begin(), temp);
        return;
    }
    int val = v[v.size() - 1];
    v.pop_back();
    insort(v, val);
    return;
}
void sort(vector<int> &arr)
{
    if (arr.size() == 1)
    {
        return;
    }
    int temp = arr[arr.size() - 1];
    arr.pop_back();
    sort(arr);
    insort(arr, temp);
}

int main()
{
    vector<int>arr = {3, 2, 4, 5, 10, 1};
    sort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
// void sort(vector<int> &v)
// {
//     if (v.size() == 1)
//         return;
//     int temp = v[v.size() - 1];
//     v.pop_back();
//     sort(v);
//     insert(v, temp);
// }
// void insert(vector<int> &v, int temp)
// {
//     if (v.size() == 0 || v[v.size() - 1] <= temp)
//     {
//         v.push_back(temp);
//         return;
//     }
//     // int v = v[v.size() - 1];
//     // v.pop_back();
//     // insert(v, temp)
//     //     v.push_back(val) return;
// else if(v[0] >= temp){
//         v.insert(v.begin(),temp);
//         return;
//     }
// }
// int main()
// {
//     vector<int> v;
//     for (int i = 0; i < v.size(); i++)
//     {
//         cin >> v[i];
//     }
//     sort(v);
// }