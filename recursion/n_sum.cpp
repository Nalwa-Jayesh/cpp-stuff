#include<iostream>
using namespace std;

int Sum(int n) {
    if (n == 0) {
        return 0;
    }

    int prevSum = Sum(n-1);
    return n + prevSum;
}

int main()
{
    int n;
    cout<<"Input the number: ";
    cin>>n;

    cout<<"Sum of all natural numbers till "<<n<<" : "<<Sum(n)<<endl;
    return 0;
}