#include <iostream>
using namespace std;
int main(){
    int n = 9;
    int arr[] = {2,5,6,4,7,8,3,6,4};
    int temp;
    int *ptr1 = arr;
    int *ptr2 = arr+(n-1);
    // cout<<*ptr2<<endl;
    for(int i = 0; i<n/2; i++){
        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
        ptr1++;
        ptr2--;
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}