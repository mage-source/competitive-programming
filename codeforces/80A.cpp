#include <bits/stdc++.h>
using namespace std;

const int Nmax = 101;

bool isPrime[Nmax];

void sieve(int n) {
    for(int i = 2;i <= n;i++) {
        isPrime[i] = true;
    }
    for(int i = 2; i <= n/2; i++) {
        if(isPrime[i] == true)
            for(int j= i * 2; j <= n; j += i)
                isPrime[j] = false;
    }
}

int main()
{
    sieve(60);
    vector<int> primes;
    for(int i = 2; i <= 100; i++) {
        if(isPrime[i] == true)
           primes.push_back(i); 
    } 
    vector<int>::iterator it;
    int n, m;
    cin >> n >> m;

    it = find(primes.begin(), primes.end(), n);
    it++;
    if(*it == m) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}