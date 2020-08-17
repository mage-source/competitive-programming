#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n-1);
    vector<int> c(n-2);

    int aSum = 0;
    int bSum = 0;
    int cSum = 0;

    int num;
    for(int i=0;i<a.size();i++) {
        cin >> num;
        aSum += num;
        a[i] = num;
    }
    for(int i=0;i<b.size();i++) {
        cin >> num;
        bSum += num;
        b[i] = num;
    }
    for(int i=0;i<c.size();i++) {
        cin >> num;
        cSum += num;
        c[i] = num;
    }

    cout << aSum - bSum << endl;
    cout << bSum - cSum << endl;

    return 0;
}



