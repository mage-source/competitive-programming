#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int G[6][6];

int main()
{
    int arr[5];
    for(int i=0;i<5;i++) arr[i] = i;
    int res = 0;
    for(int i=0;i<5;i++) for(int j=0;j<5;j++) cin >> G[i][j];
    do {
        int tot = 0;
        for(int i=-1;i<4;i++) {
            for(int j=i+1;j<4;j+=2) {
                tot += G[arr[j]][arr[j+1]] + G[arr[j+1]][arr[j]];
            }
        }
        res = max(res, tot);
    } while(next_permutation(arr, arr + 5));
    cout << res << endl;
    return 0;
}