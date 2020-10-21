#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen(\"input.tx\",\"r\",stdin);
    //freopen(\"ouput.txt\",\"w\",stdout);

    string s;
    cin >> s;
    vector<char> nums;

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '+') {
            continue;
        } else {
            nums.push_back(s[i]);
        }
    }
    
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); ++i) {
        if (i == nums.size() - 1) {
            cout << nums[i] << endl;
        } else {
            cout << nums[i] << "+";
        }
    }

    return 0;
}
