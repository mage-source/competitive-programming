#include <iostream>
#include <string>
using namespace std;

int main()
{
    int c1=0,c2=0,c3=0;
    string s,s1,s2,s3;
    cin >> s;
    for(int i=0;i<(s.length());i++)
    {
        if(s[i]=='1') {
            c1++;
        }
        else if(s[i]=='2') {
            c2++;
        }
        else if(s[i]=='3') {
            c3++;
        }
    }
    for(int i=0;i<c1;i++)
    {
        s1 += "1+";
    }
    for(int i=0;i<c2;i++)
    {
        s2 += "2+";
    }
    for(int i=0;i<c3;i++)
    {
        s3 += "3+";
    }

    // edge cases
    // cases for only 1, 2, or 3 exists
    if(c3!=0&&(c2==0&&c1==0))
    {
        s3 = s3.erase((s3.length()-1),1);
    }
    else if(c2!=0&&(c3==0&&c1==0))
    {
        s2 = s2.erase((s2.length()-1),1);
    }
    else if(c1!=0&&(c2==0&&c3==0))
    {
        s1 = s1.erase((s1.length()-1),1);
    }
    // missing one number, but have other two
    else if((c1!=0&&c2!=0)&&c3==0)
    {
        s2 = s2.erase((s2.length()-1),1);
    }
    else
    {
        s3 = s3.erase((s3.length()-1),1);
    }

    cout << s1 + s2 + s3 << endl;
    return 0;

}