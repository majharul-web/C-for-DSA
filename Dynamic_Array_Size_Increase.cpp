#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *a = new int[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }

    int *b = new int[5];
    for (int i = 0; i < 5; i++)
    {
        b[i] = a[i];
    }
    b[3] = 4;
    b[4] = 5;

    delete[] a;

    cout << "printing copied array : ";

    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}