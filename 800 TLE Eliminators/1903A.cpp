#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Check if the array is already sorted
        if (k == 1 && !is_sorted(a.begin(), a.end())) {
            cout << "No" << endl;
        } else {
            // If k >= n or k > 1, sorting is always possible
            cout << "Yes" << endl;
        }
    }
}

int main() {
    solve();
    return 0;
}
