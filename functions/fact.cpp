#include<iostream>
using namespace std;

int fact(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n; 
    cout<<"Input a number: ";
    cin>>n;

    int ans = fact(n);
    cout<<ans<<endl;
    return 0;
}