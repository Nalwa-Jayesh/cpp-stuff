#include<iostream>
using namespace std;

int getBit(int n, int pos)
{
    return ((n & (1<<pos)) != 0);
}

int setBit(int n, int pos)
{
    return (n | (1<<pos));
}

int clearBit(int n, int pos)
{
    int mask = ~(1<<pos);
    return (n & mask);
}

int updateBit(int n, int pos, int value)
{
    int mask = ~(1<<pos);
    n = n & mask;
    return (n | (value<<pos));
}
int main()
{
    int n;
    cout<<"Input the number: ";
    cin>>n;

    int pos;
    cout<<"Input the pos: ";
    cin>>pos;

    char op;
    cout<<"Input an option: ";
    cin>>op;

    switch (op)
    {
    case 'a':
        cout<<getBit(n, pos)<<endl;
        break;
    case 'b':
        cout<<setBit(n, pos)<<endl;
        break;
    case 'c':
        cout<<clearBit(n, pos)<<endl;
        break;
    case 'd':
        int value;
        cout<<"Input the value";
        cin>>value;

        cout<<updateBit(n, pos, value)<<endl;
        break;
    
    default:
        break;
    }
}