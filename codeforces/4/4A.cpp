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
	if (n & 1 || n == 2) {
		cout << "NO\n";
	} else {
		cout << "YES\n";
	}

	return 0;
}