// WAP to find a unique number in an array where all numbers except one are present twice
#include<iostream>
using namespace std;

int unique(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    return xorsum;
}

int main()
{
    int n;
    cout<<"Input the size: ";
    cin>>n;

    int arr[n];
    cout<<"Input the array: ";
    for (int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<unique(arr, n)<<endl;
    return 0;
}