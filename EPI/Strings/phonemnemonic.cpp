#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

vector<string> PhoneMnemonic(const string& phone_number) {
    string partial_mnemonic(phone_number.size(), 0);
    vector<string> mnemonics;
    PhoneMnemonicHelper(phone_number, 0, &partial_mnemonic, &mnemonics);
    return mnemonics;
}

const int kNumTelDigits = 10;

// The mapping from digit to corresponding characters.
const array<string, kNumTelDigits> kMapping = {
    {"0", "1", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"}};

void PhoneMnemonicHelper(const string& phone_number, int digit, 
                         string* partial_mnemonic,
                         vector<string>* mnemonics) {
    if (digit == phone_number.size()) {
        // All digits are processed, so add partial_mnemonic to mnemonics.
        // (We add a copy since subsequent calls modify partial_mnemonic.)
        mnemonics->emplace_back(*partial_mnemonic);
    } else {
        // Try all possible characters for this digit.
        for (char c : kMapping[phone_number[digit] - '0']) {
            (*partial_mnemonic)[digit] = c;
            PhoneMnemonicHelper(phone_number, digit + 1, partial_mnemonic,
                                mnemonics);
        }
    }
}
// O(n * 4^n) time
// O(n) space
