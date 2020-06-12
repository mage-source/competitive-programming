#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
   ll t;
   cin >> t;
   while(t--) {
       ll a,b,c,d,ans;
       cin >> a >> b >> c >> d;

       if(b >= a) ans = b;
       else {
           if(d >= c) ans = -1;
           else {
               ll x = ceil(1.0*(a - b)/(c - d));
               ans = b + (x*c);
           }
       }
       cout << ans << endl;
   } 
   return 0;
}