#include <iostream>
#include <string>

using namespace std;

int minStonesToRemove(const string &s) {
    int removeCount = 0;
    int n = s.length();

    for (int i = 0; i < n - 1; ++i) {
        if (s[i] == s[i + 1]) {
            ++removeCount;
        }
    }

    return removeCount;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    cout << minStonesToRemove(s) << endl;

    return 0;
}
