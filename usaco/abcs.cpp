#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    vector<int> nums;
    int num = 0;

    for (int i = 0; i < 7; i++) {
        cin >> num;
        nums.push_back(num);
    }

    sort(nums.begin(), nums.end());

    int a = nums[0];
    int b = nums[1];
    int c = nums[6] - (a + b);

    cout << a << " " << b << " " << c << endl;

    return 0;
}
