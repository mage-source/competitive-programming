#include<iostream>
using namespace std;
int t,r,b,g,w,x;
int main()
{
    cin >> t;
    while(t--){
        cin >> r >> b >> g >> w;
        x=(r&1)+(g&1)+(b&1)+(w&1);
        if(x==2 || (x==3 && (!r || !g || !b))) cout << "No\n";
        else cout << "Yes\n";
    }
    return 0;
}
