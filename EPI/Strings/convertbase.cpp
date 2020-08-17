#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

string ConstructFromBase(int NumAsInt, int base);

string ConvertBase(const string& NumAsString, int b1, int b2) {
    bool is_negative = NumAsString.front() == '-';
    int NumAsInt = 0;
    for (size_t i = (is_negative == true ? 1 : 0); i < NumAsString.size();
            ++i) {
        NumAsInt *= b1;
        NumAsInt += isdigit(NumAsString[i]) ? NumAsString[i] - '0'
                                            : NumAsString[i] - 'A' + 10;
    }
    return (is_negative ? "-" : "") + 
           (NumAsInt == 0 ? "0" : ConstructFromBase(NumAsInt, b2));
}

string ConstructFromBase(int NumAsInt, int base) {
    return NumAsInt == 0 
            ? ""
            : ConstructFromBase(NumAsInt / base, base) +
                    (char)(NumAsInt % base >= 10 ? 'A' + NumAsInt % base - 10
                                                 : '0' + NumAsInt % base);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen(\"input.tx\",\"r\",stdin);
    //freopen(\"ouput.txt\",\"w\",stdout);

    string s = "615";
    int b1 = 7;
    int b2 = 13;

    string ans = ConvertBase(s, b1, b2);
    cout << ans << endl;

    return 0;
}
// Think of the operations from the perspective of base 10 and they
// will make sense.
