#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int i,j;
    int A[5][5] = {0};
    for(i=1;i<=3;i++) 
        for(j=1;j<=3;j++)
            cin >> A[i][j];
    for(i=1;i<=3;i++) {
        for(j=1;j<=3;j++) {
            cout << ((A[i][j] + A[i][j-1] + A[i][j+1] + A[i-1][j] + A[i+1][j] + 1) % 2);
        }
        cout << endl;
    }
    
    return 0;
}