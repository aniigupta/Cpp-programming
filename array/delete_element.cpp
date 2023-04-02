#include <iostream>
using namespace std;

void deleteElement(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            break;
    // if (i < n)
    // {
    //     n = n - 1;
    //     for (int j = i; j < n; j++)
    //         arr[j] = arr[j + 1];
    // }
    for(;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    // while(i<(n-1)){
    //     arr[i]=arr[i+1];
    //     i++;
    // }
    for(int i =0;i<n-1;i++) cout<<arr[i]<<" ";
    // return arr;
}
int main()
{
    int arr[] = {9,8,7,6,5,4,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 6;
    cout << "Modified array is"<<endl;
    deleteElement(arr, n, x);
    // for (int i = 0; i < n-1; i++)
    //     cout << *(p+1) << " ";
    return 0;
}
