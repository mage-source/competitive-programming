/*
ID: yh89531
TASK: milk2
LANG: C++
*/

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ifstream fin("milk2.in");
    ofstream fout("milk2.out");

    int n, time, startTime = 1000000, maxEnd = 0;
    fin >> n;

    int store[n][2];
    int timeline[1000000] = {0};

    // store input data into structure and get time interval
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            fin >> time;
            store[i][j] = time;
            if (j == 1) {
                if (time > maxEnd) { maxEnd = time; }
            } else {
                if (time < startTime)  { startTime = time; }
            }
        }
    }

    // set milked time to 1 in array
    for (int i = 0; i < n; i++) {
        for (int j = store[i][0]; j <= store[i][1] - 1; j++) {
            timeline[j] = 1;
        }
    }

    // use the timeline array to find the answers
    bool isStart = false;
    int maxM = 0, maxNoM = 0, tempM = 0, tempNM = 0;
    for (int i = startTime; i <= maxEnd; i++) {
        if (timeline[i] > 0) { isStart = true; }
        else { isStart = false; }
        if (isStart) {
            tempM++;

            if (tempNM > maxNoM) {
                maxNoM = tempNM;
            }
            tempNM = 0;
        } else {
            tempNM++;
            if (tempM > maxM) {
                maxM = tempM;
            }
            tempM = 0;
        }
    }

    fout << maxM << ' ' << maxNoM << endl;

    return 0;
}
