#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;

int main() {
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
    
    int n; cin >> n;

    vector<pair<int, int>> swaps(n);
    vector<int> guesses(n);

    for (int i = 0; i < n; i++) {
        int a, b, guess; cin >> a >> b >> guess;
        swaps[i] = make_pair(a, b);
        guesses[i] = guess;
    }

    int max_points = 0;
    
    for (int starting_location = 1; starting_location <= 3; starting_location++) {
        vector<bool> has_pebble(4, false);

        has_pebble[starting_location] = true;

        int num_points = 0;
        
        for (int i = 0; i < n; i++) {
            int a = swaps[i].first;
            int b = swaps[i].second;

            swap(has_pebble[a], has_pebble[b]);

            int guess = guesses[i];

            if (has_pebble[guess]) {
                num_points++;
            }
        }

        max_points = max(max_points, num_points);
    }

    cout << max_points << endl;

    return 0;
}
