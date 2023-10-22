#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen(\"input.tx\",\"r\",stdin);
    //freopen(\"ouput.txt\",\"w\",stdout);

    string first;
    string second;
    getline(cin, first);
    getline(cin, second);
    int ans = 0;

    for (int i = 0; i < first.size(); ++i) {
        first[i] = tolower(first[i]);
        second[i] = tolower(second[i]);
        if (first[i] == second[i]) {
            continue;
        } else if (first[i] > second[i]) {
            ans = 1;
            break;
        } else {
            ans = -1;
            break;
        }
    }
    cout << ans << endl;

    return 0;
}

