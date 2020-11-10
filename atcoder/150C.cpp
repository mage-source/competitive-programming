#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> P(N),Q(N);
    for(int i=0;i<N;i++) {
        cin >> P[i];
    }
    for(int i=0;i<N;i++) {
        cin >> Q[i];
    }

    vector<int> v;
    for(int i=1;i<=N;i++) {
        v.push_back(i);
    }
    int a=0,b=0,cnt=0;
    while(next_permutation(v.begin(),v.end())) { // if its the first one it will never check so value stays 0
        cnt++;
        bool check = true;
        for(int i=0;i<N;i++) {
            if(P[i] != v[i]) check = false;
        }
        if(check) a = cnt;
        check = true;
        for(int i=0;i<N;i++) {
            if(Q[i] != v[i]) check = false;
        }
        if(check) b = cnt;
    }
    cout << abs(a-b) << endl;
    return 0;
}
