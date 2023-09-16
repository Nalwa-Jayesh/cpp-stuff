#include<iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;
    }

    int prevfact = factorial(n-1);
    return n * prevfact;
}

int main() {
    int n;
    cout<<"Input the number: ";
    cin>>n;

    cout<<"Factorial: "<<factorial(n)<<endl;
    return 0;
}