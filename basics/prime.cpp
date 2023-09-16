#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Input the number: ";
    cin>>n;

    for (int i = 2; i < n; i++) 
    {
        if (n % i == 0) {
            cout<<"Non Prime"<<endl;
        }
        if (i == n) {
            cout<<"Prime"<<endl;
        }
    }
    cout<<"Prime"<<endl;
    return 0;
}