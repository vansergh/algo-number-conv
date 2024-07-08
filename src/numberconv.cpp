#include <iostream>

using namespace std;

string ToHex(int value) {
    string result = "0"s;
    if (value > 0) {
        result.clear();
        const char hexChars[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
        int rest;
        do {
            rest = value % 16;
            result = hexChars[rest] + result;
            value /= 16;
        } while (value != 0);
    }
    return result;
}

int main() {
    cout << ToHex(756) << endl;
    cout << endl;
}