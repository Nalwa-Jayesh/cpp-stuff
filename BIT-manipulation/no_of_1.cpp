// WAP to count number of ones in a binary number
#include<iostream>
using namespace std;

int numberofones(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n-1);
        count++;
    }
    return count++;
}

int main()
{
    int n;
    cout<<"Input the number: ";
    cin>>n;

    cout<<numberofones(n)<<endl;
    return 0;
}