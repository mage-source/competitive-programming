#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int N,min=INT_MAX,swap=0;
    cin >> N;
    int P[N];
    for(int i=0;i<N;i++) {
        cin >> P[i];
    }
    for(int i=0;i<N;i++) {
        if(P[i]<min) {
            min = P[i];
            swap += 1;
        }
    }
    cout << swap << endl;
    return 0;
}
