#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

vector<int> GeneratePrimes(int n) {
    vector<int> primes;
    // is_prime[p] represents if p is prime or not. Initially, set each
    // to true, except 0 and 1. The use sieving to eliminate nonprimes.
    deque<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for(int p = 2; p < n; ++p) {
        if(is_prime[p]) {
            primes.emplace_back(p);
            // Sieve p's multiples.
            for(int j = p; j <= n; j += p) {
                is_prime[j] = false;
            }
        }
    }
    return primes;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen(\"input.tx\",\"r\",stdin);
    //freopen(\"ouput.txt\",\"w\",stdout);

    int n;
    cin >> n;

    vector<int> ans = GeneratePrimes(n);
    
    for(int i = 0; i < ans.size(); ++i) {
        cout << ans[i] << " ";
    }
    cout << "\n";

    return 0;
}
// O(nloglogn) time 
// O(n) space - need to store bool array
