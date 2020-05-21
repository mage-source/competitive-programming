#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	string S;
	set<string> mySet;
	cin >> N;
	while(N--)
	{
		cin >> S;
		mySet.insert(S);
	}
	cout << mySet.size() << endl;
	return 0;
}