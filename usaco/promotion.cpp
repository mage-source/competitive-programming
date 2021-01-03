#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("promote.in");
    ofstream fout("promote.out");

    vector<int> before(4);
    vector<int> after(4);

    for (int i = 0; i < 4; i++) {
        fin >> before[i] >> after[i];
    }

    int s_promo, g_promo, p_promo;
    p_promo = after[3] - before[3];
    g_promo = (after[3] + after[2]) - (before[3] + before[2]);
    s_promo = (after[3] + after[2] + after[1]) - (before[3] + before[2] + before[1]);

    fout << s_promo << '\n' << g_promo << '\n' << p_promo << '\n';

    return 0;
}


