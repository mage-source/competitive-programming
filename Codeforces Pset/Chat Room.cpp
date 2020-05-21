/* Algorithm
 * gather input string A and set string B to "hello"
 * iteratively compare string A to string B
 * treat string B as checkbox and only incrememnt to next letter if A has it
 * set counter for checks of comparisions
 * if counter gets to 5 then output "YES"
 * else output "NO"
 */

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string A;
    string B="hello";
    int counter=0,j=0;
    cin >> A;
    for(int i=0;i<A.length();i++)
    {
        if(A[i]==B[j])
        {
            j++;
            counter++;
        }
        if(counter==5)
        {
            break;
        }
    }
    if(counter==5)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;

}
