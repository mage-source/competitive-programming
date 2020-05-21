#include<iostream>
#include<string>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;
    if(N%2!=0) {
        puts("No");
    }
    else {
        string a = S.substr(0,(N/2));
        string b = S.substr((N/2),(N/2));
        if(a==b) {
            puts("Yes");
        }
        else {
            puts("No");
        }
    }
    return 0;
}
