#include<iostream>
using namespace std;
int main()
{
    int Bytes;
    cout<<"Enter Bytes:";
    cin>>Bytes;

    int Bits=Bytes*8;
    cout << "Equivalent Bits: " << Bits << endl;
    return 0;
}