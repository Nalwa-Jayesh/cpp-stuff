// You are given an array arr[] of N integers include 0. The task is to find the smallest positive number missing from the array.
#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cout<<"Input the size of array: ";
    cin>>n;

    int a[n];
    cout<<"Input the array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    const int N = 1e6+2;
    bool check[N];
    for (int i = 0; i < N; i++)
    {
        check[i] = 0;
    }

    for (int i = 0; i < N; i++)
    {
        if (a[i] >= 0)
        {
            check[a[i]] = 1;
        }
    }

    int ans = -1;
    for (int i = 1; i < N; i++)
    {
        if (check[i] == false)
        {
            ans = i;
            break;
        }
    }

    cout<<ans<<endl;
    return 0;
}