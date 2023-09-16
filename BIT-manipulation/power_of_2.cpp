// WAP to check if the given number is a power of 2
#include<iostream>
using namespace std;

bool ispowerof2(int n)
{
    return (n && !(n & n-1));
}

int main()
{
    int n;
    cout<<"Input the number: ";
    cin>>n;

    cout<<ispowerof2(n)<<endl;
    return 0;
}