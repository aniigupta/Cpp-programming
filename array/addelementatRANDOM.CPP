#include <iostream>
using namespace std;
int main()
{
    int i, n, x, k;
    int arr[] = {2, 4, 6, 8, 12};

    n = sizeof(arr) / sizeof(arr[0]);

    cout << "array elements before insertion operation:\n";

    for (i = 0; i < n; i++)
        cout << "arr[" << i << "] = " << arr[i] << "\n";
    cout << "\nEnter the element to be insert: ";
    cin >> x;
    cout << "\nEnter the position to insert the element: ";
    cin >> k;
    n = n + 1;
    cout << "\narray elements after insertion operation: ";

    for (i = n - 1; i >= k - 1; i--)
        arr[i + 1] = arr[i];
    arr[k - 1] = x;

    for (i = 0; i < n; i++)
        cout << "\narr[" << i << "] = " << arr[i];

    return 0;
}