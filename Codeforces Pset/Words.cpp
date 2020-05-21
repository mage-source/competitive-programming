#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int upperCount=0,lowerCount=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]>96)
			lowerCount++;
		else
			upperCount++;
	}
	if(lowerCount>=upperCount)
	{
		for(int i=0;i<s.length();i++)
		{
			s[i] = tolower(s[i]);
		}
	}
	else
	{
		for(int i=0;i<s.length();i++)
		{
			s[i] = toupper(s[i]);
		}
	}
	cout << s << endl;

	return 0;
}