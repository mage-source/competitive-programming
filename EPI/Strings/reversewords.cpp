#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

void ReverseWords(string* s) {
    // Reverse the whole string first.
    reverse(s->begin(), s->end());

    size_t start = 0, end;
    while((end = s->find(" ", start)) != string::npos) {
        // Reverse each word in the string.
        reverse(s->begin() + start, s->begin() + end);
        start = end + 1;
    }
    // Reverse last word in the string.
    reverse(s->begin() + start, s->end());
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen(\"input.tx\",\"r\",stdin);
    //freopen(\"ouput.txt\",\"w\",stdout);

    string s = "ram is costly";
    ReverseWords(&s);
    
    cout << s << endl;

    return 0;
}
