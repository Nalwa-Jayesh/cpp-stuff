#include<iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int main() {
    int a, b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    
    cout<<"GCD of "<<a<<" and "<<b<<" : "<<gcd(a, b)<<endl;
    return 0;
} 