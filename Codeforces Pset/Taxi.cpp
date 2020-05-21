#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int A[n];

	for(int i=0;i<n;i++)
	{
		cin >> A[i];
	}

	sort(A,A+n);
	int i = 0;
	int t = 1;
	int j = n-1;

	while(i != j)
	{
		if(A[i]+A[j]<=4)
		{
			A[j] += A[i];
			i++;
		}
		else
		{
			j--;
			t++;
		}
	}
	cout << t << endl;
	return 0;
}