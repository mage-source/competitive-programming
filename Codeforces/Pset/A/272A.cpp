#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, fingers=0, options=0;
    cin >> n;
    int temp = n;
    while(temp--) {
       int x;
       cin >> x;
       fingers += x;
    }
    for(int i=1;i<=5;i++) {
        if(((fingers+i)%(n+1)) != 1) options++;
    } 
    cout << options << endl;
    return 0;
}