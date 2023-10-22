#include<bits/stdc++.h>
using namespace std;

int main()
{
	/* find number of moves(+1) it will take for
	 * the number a to be divisible by b
	 */
	int t, a, b;
	cin >> t;

	while(t--)
	{
		cin >> a >> b;
		if(a%b==0)
		{
			cout << 0 << endl;
		}
		else
		{
			cout << b-(a%b) << endl;
		}
	}
	return 0;
}