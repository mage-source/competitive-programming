#include <bits/stdc++.h>
using namespace std;

int perfectPermutations[101];

int main()
{
    for(int i=1;i<=100;i++) {
        if(i%2 != 0) perfectPermutations[i] = i + 1;
        if(i%2 == 0) perfectPermutations[i] = i - 1;
    }
    int n;
    cin >> n;

    if(n % 2 != 0) {
        cout << -1 << endl;
    }
    else {
        for(int i=1;i<=n;i++) {
            cout << perfectPermutations[i] << " ";
        }
    }

    return 0;    
}