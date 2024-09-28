#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int temp = 0;
        bool found = false;

        for (int i = 0; i < n; i++) {
            if (!isVowel(s[i])) {
                temp++;
                if (temp >= 4) {
                    found = true;
                    break;
                }
            } else {
                temp = 0;
            }
        }

        if (found) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}

