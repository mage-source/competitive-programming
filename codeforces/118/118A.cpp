#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	//freopen(\"input.txt\",\"r\",stdin);
	//freopen(\"output.txt\",\"w\",stdout);

	string s;
	string result;
	vector<char> vowels = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u', 'Y', 'y'};
	cin >> s;
	for (int i = 0; i < s.size(); ++i) {
		if (find(vowels.begin(), vowels.end(), s[i]) != vowels.end()) {
			continue;
		} else {
			result += ('.');
			result += tolower(s[i]);
		}

	}
	cout << result << endl;

	return 0;
}
