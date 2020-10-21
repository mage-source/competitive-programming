#include<iostream>
using namespace std;

int main()
{
    int moves=0,x=0,y=0;
    int A[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++) {
            cin >> A[i][j];
            if (A[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }
    while(A[2][2]!=1)
    {
        // Get 1 into correct column first
        if(x>2)
        {
            A[x-1][y] = 1;
            A[x][y] = 0;
            x--;
            moves++;
        }
        else if(x<2)
        {
            A[x+1][y] = 1;
            A[x][y] = 0;
            x++;
            moves++;
        }
        else if(y>2)
        {
            A[x][y-1] = 1;
            A[x][y] = 0;
            y--;
            moves++;
        }
        else if(y<2)
        {
            A[x][y+1] = 1;
            A[x][y] = 0;
            y++;
            moves++;
        }
    }
    cout << moves << endl;
    return 0;
}