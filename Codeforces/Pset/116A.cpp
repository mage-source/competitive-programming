#include<iostream>
#include<climits>
using namespace std;

int main()
{
	int n,a,b,capacity=0,maxCapacity=INT_MIN;
	cin >> n;
	while(n--)
	{
		cin >> a >> b;
		capacity = capacity+(b-a);
		if(capacity>maxCapacity)
			maxCapacity = capacity;
	}
	cout << maxCapacity << endl;
	return 0;
}