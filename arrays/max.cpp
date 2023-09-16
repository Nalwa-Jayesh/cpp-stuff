// Given array a[] of size n. For every i from 0 to n-1. Output max(a[0], a[1], ..., a[i])
#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cout<<"Input the size: ";
    int mx = -19999999;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    for (int i = 0; i < n; i++)
    {
        mx = max(mx, a[i]);
        cout<<mx<<endl;
    }
}