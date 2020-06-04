#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> B;
    for(int i=0;i<N;i++) {
        cin >> A[i];
    }
    int max1 = *max_element(A.begin(),A.end());
    int max1count = 0;
    for(int i=0;i<N;i++) {
        if(A[i]==max1) max1count++;
    }

    if(max1count>1) {
        for(int i=0;i<N;i++) {
            cout << max1 << endl;
        }
    }
    else {
        for (int i = 0; i < N; i++) {
            if (A[i] != max1) {
                B.push_back(A[i]);
            }
        }
        int max2 = *max_element(B.begin(),B.end());
        for(int i=0;i<N;i++) {
            if(A[i]==max1) cout << max2 << endl;
            else cout << max1 << endl;
        }
    }

    return 0;
}
