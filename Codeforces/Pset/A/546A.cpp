#include<iostream>
using namespace std;

int main()
{
	int k,n,w,cost=0,borrow=0;
	cin >> k >> n >> w;
	//Find total cost of bananas
	for(int i=1;i<=w;i++)
	{
		cost += i*k;
	}
	//soldier has enough
	if(cost<n)
	{
		cout << 0 << endl;
	}
	else
	{
		cout << cost-n << endl;
	}
	return 0;
}