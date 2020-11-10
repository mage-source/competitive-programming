#include<iostream>
using namespace std;

int main()
{
    int h,n;
    cin >> h >> n;
    int a[1000000];
    for(int i=0;i<n;i++) { 
        cin >> a[i];
        int b = a[i];
        h -= b;
        if(h<=0) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
