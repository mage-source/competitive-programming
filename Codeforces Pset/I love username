#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,max,min,count=0;
	cin >> n;
	int A[n];
	for(int i=0;i<n;i++)
	{
		cin >> A[i];
	}
	max = A[0];
	min = A[0];
	for(int i=1;i<n;i++)
	{
		if(A[i]<min)
		{
			min = A[i];
			count++;
		}
		else if(A[i]>max)
		{
			max = A[i];
			count++;
		}
	}
	cout << count;
	return 0;
}