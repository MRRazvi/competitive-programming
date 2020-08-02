#include <iostream>
#include <string>

typedef long long ll;
using namespace std;

bool detectCapitalUse(string word) {
    if (isupper(word[0]) && isupper(word[1])) {
        for (int i=2; i<word.size(); i++) {
            if (islower(word[i]))
                return false;
        }
    } else if (isupper(word[0])) {
        for (int i=1; i<word.size(); i++) {
            if (isupper(word[i]))
                return false;
        }
    } else {
        for (auto c: word) {
            if (isupper(c))
                return false;
        }
    }
    return true;
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    return 0;
}