// WAP to find 2 unique no.s in an array where all numbers except two are present twice
#include<iostream>
using namespace std;

int setBit(int n, int pos)
{
    return (n | (1<<pos));
}

int unique(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i< n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    
    int temp = xorsum;
    int setbit = 0;
    int pos = 0;

    while(setbit != 1)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }
    int newxor = 0;
    for (int i = 0; i < n; i++)
    {
        if (setBit(arr[i], pos+1))
        {
            newxor = newxor ^ arr[i];
        }
    }

    cout<<newxor<<endl;
    cout<<temp ^ newxor<<endl;
}

int main()
{
    int n;
    cout<<"Input the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Input the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    unique(arr, n);
    return 0;
}