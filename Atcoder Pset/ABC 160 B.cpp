#include<iostream>
using namespace std;

int main()
{
    long long X,a,b;
    cin >> X;
    a = (X/500)*1000;
    b = ((X%500)/5)*5;
    cout << a+b << endl;
    return 0;
}
