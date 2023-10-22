#include<iostream>
using namespace std;

int main()
{
	int n,m,h,a,i=0,same=0;
	cin >> n;
	m = n;
	int A[n];
	int B[n];
	while(n--)
	{
		cin >> h >> a;
		A[i] = h;
		B[i] = a;
		i++;
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(A[i]==B[j])
			{
				same++;
			}
		}
	}
	cout << same << endl;

	return 0;
}