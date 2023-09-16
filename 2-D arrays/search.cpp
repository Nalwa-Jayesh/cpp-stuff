#include "bits/stdc++.h"
using namespace std;

int32_t main()
{
    int n, m;
    cout<<"Input the row size: ";
    cin>>n;
    cout<<"Input the col size: ";
    cin>>m;

    int mat[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>mat[i][j];
        }
    }

    int target;
    cout<<"Input the target: ";
    cin>>target;

    int r = 0, c= m-1;
    bool found = false;

    while (r < n && c >= 0)
    {
        if (mat[r][c] == target)
        {
            found = true;
        }
        if (mat[r][c] > target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }

    if (found)
    {
        cout<<"Element Found"<<endl;
    }
    else
    {
        cout<<"Element does not exist"<<endl;
    }
    return 0;
}