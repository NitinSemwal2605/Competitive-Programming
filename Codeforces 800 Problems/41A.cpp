#include <iostream>
using namespace std;

int main() {

    string s, t;
    cin >> s >> t;
    
    int n = s.length();
    int m = t.length();
    
    if (n != m) {
        cout << "NO" << endl;
        return 0;
    }
    
    for (int i = 0; i < n; i++) {
        if (s[i] != t[n - i - 1]) {
            cout << "NO" << endl;
            return 0;
        }
    }
    
    cout << "YES" << endl;
    
    return 0;
}