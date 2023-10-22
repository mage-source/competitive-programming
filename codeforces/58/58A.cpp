#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen(\"input.tx\",\"r\",stdin);
    //freopen(\"ouput.txt\",\"w\",stdout);

    vector<char> word = {'h', 'e', 'l', 'l', 'o'};
    int j = 0;
    string s; 
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == word[j]) {
            ++j;
        }
    }
    if (j == word.size()) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
