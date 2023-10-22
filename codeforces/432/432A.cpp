#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, k,eligible=0;
	cin >> n >> k;
	int A[n];
	for(int i=0;i<n;i++)
	{
		cin >> A[i];
		if(A[i]+k <= 5)
		{
			count++;
		}
	}
	if(count<3)
	{
		cout << 0;
	}
	else
	{
		cout << count/3;
	}
	return 0;
}