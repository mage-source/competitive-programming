#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,cv,i=0,sum1=0,sum2=0,count=0;
    cin >> n;
    int m = n;
    int A[n];
    while(n--)
    {
        cin >> cv;
        A[i] = cv;
        sum1 += cv;
        i++;
    }
    sort(A,A+m);
    for(int j=(m-1);j>=0;j--)
    {
        sum2 += A[j];
        sum1 -= A[j];
        count++;
        if(sum2>sum1)
        {
            break;
        }
    }
    cout << count << endl;
    return 0;
}