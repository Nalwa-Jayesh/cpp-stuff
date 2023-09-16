// Check if there exists two elements in an array such that their sum is equal to the given k
#include<iostream>
using namespace std;

bool pairsum(int arr[], int n, int k)
{
    int low = 0;
    int high = n-1;

    while (low < high)
    {
        if (arr[low] + arr[high] == k)
        {
            cout<<low<<" "<<high<<endl;
            return true;
        }

        else if (arr[low] + arr[high] > k)
        {
            high--;
        }
        else 
        {
            low++;
        }
    }
    return false;
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
        cin>>arr[i];
    }

    int k;
    cout<<"Input the number: ";
    cin>>k;

    cout<<pairsum(arr, n, k)<<endl;
    return 0;
}