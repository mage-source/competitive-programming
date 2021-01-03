/* 
ID: yh89531
TASK: friday
LANG: C++
*/

#include<bits/stdc++.h>
using namespace std;

bool isLeap(int year) {
    if (year % 100 == 0) {
        return year % 400 == 0;
    } else {
        return year % 4 == 0;
    }
}

int main() {
    ofstream fout ("friday.out");
    ifstream fin ("friday.in");

    int N;
    fin >> N;

    int calendarDay = 0;
    int freq[7] = {0, 0, 0, 0, 0, 0, 0};
    int normDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int leapDays[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (int year = 1900; year < 1900 + N; ++year) {
        for (int month = 0; month < 12; ++month) {
            int weekday = (calendarDay + 12) % 7; // get the first 13th day
            freq[(weekday + 2) % 7]++; // sets array to start at sat.
            calendarDay += isLeap(year) ? leapDays[month]:normDays[month]; // don't need to reset day count for each month
        }
    }

    for (int i = 0; i < 7; ++i) {
        if (i == 6) {
            fout << freq[6] << endl;
        } else {
            fout << freq[i] << " ";
        }
    }

    return 0;
}
