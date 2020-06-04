#include<iostream>
using namespace std;

int main()
{
	long long n,sum;
	cin >> n;
	if(n%2==0)
	{
		sum = n/2;
	}
	else
	{
		sum = ((-1)*(n+1))/2;
	}
	cout << sum << endl;

	return 0;
}

1
1 = 1

2
2 = 2
1 = 1
result =  1

3
1,2,3
2 = 2
1,3 = 4
result = -2

4
1,2,3,4
2,4 = 6
1,3 = 4
result = 2

5
1,2,3,4,5
2,4 = 6
1,3,5 = 9
result = -3

6
1,2,3,4,5,6
2,4,6 = 12
1,3,5 = 9
result = 3

7
1,2,3,4,5,6,7
2,4,6 = 12
1,3,5,7 = 16
result = -4

8
1,2,3,4,5,6,7,8
2,4,6,8 = 20
1,3,5,7 = 16
result = 4






