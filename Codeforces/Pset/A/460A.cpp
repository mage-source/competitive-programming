#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, m;
    cin >> n >> m;
    
    int day = 1;
    bool outOfSocks = false;
    while(outOfSocks == false) {
        n -= 1;
        if(day%m == 0) 
            n += 1;
        if(n == 0)
            outOfSocks = true;
        day++;
    }
    cout << day - 1 << endl;

    return 0;
}