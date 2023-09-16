#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Input the size of word: ";
    cin>>n;

    char arr[n+1];
    cout<<"Input the word: ";
    cin>>arr;

    bool check = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n-1-i])
        {
            check = 0;
            break;
        }
    }

    if (check == true)
    {
        cout<<"Palindrome"<<endl;
    }

    else
    {
        cout<<"Not a Palindrome"<<endl;
    }

    return 0;
}