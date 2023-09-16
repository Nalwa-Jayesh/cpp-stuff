#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cout<<"Input the size of array: ";
    cin>>n;

    int arr[n];

    cout<<"Input the array: ";

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        maxNo = max(maxNo, arr[i]);
        minNo = min(minNo, arr[i]);
    }

    cout<<"Max Num: "<<maxNo<<endl;
    cout<<"Min Num: "<<minNo<<endl;

    return 0;
}