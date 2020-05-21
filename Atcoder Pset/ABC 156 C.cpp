#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int main()
{
    int N,sum,stamina=INT_MAX;
    int X[101];
    cin >> N;
    for(int i=1;i<=N;i++)
    {
        cin >> X[i];
    }
    for(int i=1;i<=100;i++)
    {
        sum = 0;
        for(int j=1;j<=N;j++)
        {
            sum += (X[j]-i)*(X[j]-i);
        }
        stamina = min(sum,stamina);
    }
    cout << stamina << endl;
    return 0;
}
