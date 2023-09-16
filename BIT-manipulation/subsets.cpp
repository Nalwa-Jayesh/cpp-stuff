// WAP to generate all possible subets of a set
#include<iostream>
using namespace std;

void subsets(int arr[], int n)
{
    for (int i = 0; i < (1<<n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout<<arr[j]<<" ";
            }
        } cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"Input the size of subsets: ";
    cin>>n;

    int arr[n];
    cout<<"Input the set: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Subsets: ";
    subsets(arr, n);
    return 0; 
}