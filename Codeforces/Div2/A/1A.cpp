#include <iostream>
using namespace std;

int main()
{

	long long n,m,a;
	long long length,breadth;
	cin >> n >> m >> a;

	if(n%a == 0)
		length = n/a;
	else
		length = (n/a) + 1;

	if(m%a == 0)
		breadth = m/a;
	else
		breadth = (m/a) + 1;

	cout << length*breadth;


	return 0;

}