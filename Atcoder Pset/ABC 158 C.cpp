#include<iostream>
using namespace std;

int main()
{
    int A,B,j;
    cin >> A >> B;
    bool success = false;
    for(int i=1;i<=1250;i++)
    {
        if((i*8)/100==A && (i/10)==B)
        {
            success = true;
            j = i;
            break;
        }
    }
    if(success)
    {
        cout << j << endl;
    }
    else
    {
        cout << -1 << endl;

    }

}
