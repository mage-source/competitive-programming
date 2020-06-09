#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s,t,m;
	cin >> s;
	cin >> t;
	int j=0;
	m = s;
	for(int i=s.length()-1;i>=0;i--)
	{
		m[j] = s[i];
		j++;
	}
	if(m==t)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
}