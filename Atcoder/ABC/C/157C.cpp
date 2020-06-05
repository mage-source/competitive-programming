#include<iostream>
using namespace std;
int a[5];
int main()
{
    int n,m,i,s,c;
    cin >> n >> m;
    for(i=1;i<=n;i++) a[i] = -1;
    for(i=1;i<=m;i++) {
        cin >> s >> c;
        if(a[s]!=-1&&a[s]!=c) { //check if a value has already been input and if new input is equal to original
            cout << -1 << endl;
            return 0;
        } else {
            a[s] = c;
        }
    }
    if(n>1&&a[1]==0) { //check for leading zero
        cout << -1 << endl;
    }
    else if(n==1) {
        if(a[1]==-1) cout << "0" << endl; //check no input, if 1 digit 0 is allowed
        else cout << a[1] << endl;
    }
    else {
        for(int i=1;i<=n;i++) { //fill no inputs with 1 or 0 to make lowest number possible
            if(i==1&&a[i]==-1) cout << "1";
            else if(a[i]==-1) cout << "0";
            else cout << a[i];
        }
        cout << endl;
    }
    return 0;
}
