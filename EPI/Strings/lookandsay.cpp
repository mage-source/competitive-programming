#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

string NextNumber(const string& s);

string LookAndSay(int n) {
    string s = "1";
    for (int i = 1; i < n; ++i) {
        s = NextNumber(s);
    }
    return s;
}

string NextNumber(const string& s) {
    string result;
    for (int i = 0; i < s.size(); ++i) {
        int count = 1;
        while (i + 1 < s.size() && s[i] == s[i + 1]) {
            ++i, ++count;
        }
        result += to_string(count) + s[i];
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen(\"input.tx\",\"r\",stdin);
    //freopen(\"ouput.txt\",\"w\",stdout);

    int n;
    cin >> n;

    string ans = LookAndSay(n);

    cout << ans << endl;

    return 0;
}
