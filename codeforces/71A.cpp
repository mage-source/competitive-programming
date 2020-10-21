#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	//freopen(\"input.txt\",\"r\",stdin);
	//freopen(\"output.txt\",\"w\",stdout);

	int n;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;
		if (s.size() > 10) {
			cout << s[0] << s.size() - 2 << s[s.size() - 1] << endl;
		} else {
			cout << s << endl;
		}
	}

	return 0;
}