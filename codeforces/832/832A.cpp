#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, v1, v2, t1, t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;
    
    int first_res, second_res;
    first_res = s * v1 + 2 * t1;
    second_res = s * v2 + 2 * t2;

    if (first_res < second_res) {
        cout << "First" << endl;
    } else if(second_res < first_res) {
        cout << "Second" << endl;
    } else {
        cout << "Friendship" << endl;
    }

    return 0;
}
