#include<iostream>

using namespace std;

int capacity[3];
int amount[3];

void pour(int src, int dst) {
    int transfer = min(amount[src], capacity[dst] - amount[dst]);
    amount[src] -= transfer;
    amount[dst] += transfer;
}

int main() {
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);

    for (int i = 0; i < 3; i++) {
        cin >> capacity[i] >> amount[i];
    }

    for (int i = 0; i < 100; i++) {
        pour(i % 3, (i + 1) % 3);
    }

    for (int i = 0; i < 3; i++) {
        cout << amount[i] << endl;
    }

    return 0;
}
