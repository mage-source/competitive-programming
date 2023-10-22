#include <bits/stdc++.h>
using namespace std;

// can be shown that only squares of prime numbers can be T-prime

set<long long> prime_square;

void precompute() 
{
    vector<int> is_prime(1000000+1,true);
    for(int i=2;i<=1e6;i++) {
        if(is_prime[i]) 
        {
            prime_square.insert((long long)i*i);
            
            for(int multiple=2*i;multiple<=1e6;multiple+=i)
                is_prime[multiple] = false;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    precompute();

    for(int i=1;i<=n;i++) {
        long long num;
        cin >> num;
        
        if(prime_square.count(num) == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
