#include <bits/stdc++.h>
using namespace std;

int min_cost_compatible_array(int n, const string& s) {
    int max_length = 1;
    int current_length = 1;
    
    //  maximum contiguous segment lengths
    for (int i = 1; i < n; ++i) {
        if (s[i] == s[i - 1]) {
            current_length += 1;
        } else {
            max_length = max(max_length, current_length);
            current_length = 1;
        }
    }
    
    max_length = max(max_length, current_length); // Check the last segment
    return max_length + 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int result = min_cost_compatible_array(n, s);
        cout << result << endl;
    }
    
    return 0;
}
