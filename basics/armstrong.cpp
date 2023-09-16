#include<iostream>
#include<math.h>
using namespace std;

int main() {

    int n;
    cout<<"Input a number: ";
    cin>>n;

    int sum = 0;
    int num = n;
    while (n > 0) {
        int lastdigit = n % 10;
        sum += pow(lastdigit, 3);
        n = n / 10;
    }

    if (sum == num) {
        cout<<"Armstrong Number"<<endl;
    }
    else {
        cout<<"Not Armstrong Number"<<endl;
    }
    return 0;
}