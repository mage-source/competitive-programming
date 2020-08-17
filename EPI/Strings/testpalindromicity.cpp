#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

bool IsPalindrom(const string& s) {
    int i = 0, j = s.size() - 1;
    while (i < j) {
        while (!isalnum(s[i]) && i < j) {
            ++i;
        }
        while (!isalnum(s[j]) && i < j) {
            --j;
        }
        if (tolower(s[i++]) != tolower(s[j--])) {
            return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen(\"input.tx\",\"r\",stdin);
    //freopen(\"ouput.txt\",\"w\",stdout);
    
    // ignore case for palindrome test.
    string s = " Able was I, ere I saw Elba!";
    bool ans = IsPalindrom(s);

    if(ans) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
// O(n) time - where n is length of s, since we only spend O(1) time
// per character.
// O(1) space - no auxillary space is needed.
