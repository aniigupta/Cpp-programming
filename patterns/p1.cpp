#include <iostream>
using namespace std;
void p1(int n)
{
    /*
    1
    1 2
    1 2 3

    */
    // making loop for outter loop (for Rows)
    // increase the value of i by one and change row number
    for (int i = 1; i <= n; i++)
    {
        // making loop for inner loop (for column)
        // increase the value of j by one and print
        //  for priting values from 1 to till i
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
};
void p2(int n)
{
    /*
    n=5

    5 4 3 2 1
    4 3 2 1
    3 2 1
    2 1
    1

    n=3
    3 2 1
    2 1
    1


    */
    int k = n;
    for (int i = 1; i <= k; i++)
    {
        // making loop for inner loop (for column)
        // increase the value of j by one and print
        //  for priting values from 1 to till i
        for (int j = n; j >= 1; j--)
        {
            cout << j << " ";
        }
        n--;
        cout << endl;
    }
};
//
void p3(int n)
{
    int k = n-1;
    int v = 1;

    for (int i = 0; i < n; i++)
    {
        // for printing k spaces for this iteration
        for (int j = 0; j < k; j++)
        {
            cout << " ";
        }
        // for printing * v times for this iteration
        for (int j = 0; j < v; j++)
        {
            cout << "*";
        }
        // if()
        cout << "\n";
        if(i<((n/2)-1)){
            k--,v+=2;
        }
        if(i>=n/2){
            k++,v-=2;
        }
        // k++, v -= 2;
    }
}
int main()
{
    p3(5);
    return 0;
}
