#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

string IntToString(int x) {
    bool is_negative = false;
    if (x < 0) {
        is_negative = true;
    }

    string s;

    while (x) {
        s += '0' + abs(x % 10);
        x /= 10;
    }

    if (is_negative) {
        s += '-';
    }
    return {s.rbegin(), s.rend()};
}

int StringToInt(const string& s) {
    int result = 0;
    for (int i = s[0] == '-' ? 1 : 0; i < s.size(); ++i) {
        const int digit = s[i] - '0';
        result = result * 10 + digit;
    }
    return s[0] == '-' ? -result : result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen(\"input.tx\",\"r\",stdin);
    //freopen(\"ouput.txt\",\"w\",stdout);
    
    string s = "1234";
    int n = 5432;

    string ans1 = IntToString(n);
    int ans2 = StringToInt(s);

    cout << ans1 << endl;
    cout << ans2 << endl;

    return 0;
}
// O(n) time
// O(1) space
