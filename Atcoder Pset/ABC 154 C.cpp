#include<iostream>
#include<set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[200000];
    set<int> s;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        int b = a[i];
        s.insert(b);
    }
    if(s.size()==n)
    {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
