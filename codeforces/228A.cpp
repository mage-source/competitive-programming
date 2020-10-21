#include<iostream>
#include<set>
using namespace std;

int main()
{
	int a,b,c,d,m;
	cin >> a >> b >> c >> d;
	set<int> s;
	s.insert(a);
	s.insert(b);
	s.insert(c);
	s.insert(d);
	m = 4 - s.size();
	cout << m << endl;

	return 0;
}