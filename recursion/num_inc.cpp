#include<iostream>
using namespace std;

void inc(int n) {
    if (n == 1) {
        cout<<"1"<<endl;
        return;
    }
    inc(n-1);
    cout<<n<<endl;
}

int main()
{
    int n;
    cout<<"Input the number: ";
    cin>>n;

    cout<<"Increasing Order: ";
    inc(n);

    return 0;
}