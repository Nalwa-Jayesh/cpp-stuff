#include<iostream>
using namespace std;

void primeSieve(int n)
{
    int prime[100] = {0};

    for (int i = 2; i <= n; i++) {
        if (prime[i] == 0) {
            for (int j = i*i; j<= n; j+= i) {
                prime[j] = 1;
            }
        }
    }

    for (int i = 2; i <= n; i++) {
        if (prime[i] == 0) {
            cout<<i<<" ";
        }
    }cout<<endl;
}

int main() {
    int n;
    cout<<"Input the number: ";
    cin>>n;

    cout<<"Prime numbers till "<<n<<" "<<"are: ";
    primeSieve(n);

    return 0;
}