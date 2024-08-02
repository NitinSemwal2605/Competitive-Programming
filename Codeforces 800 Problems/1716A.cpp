#include <iostream>
#include <vector>

using namespace std;

int min_moves(int n) {
    // If n is divisible by 3, use steps of 3
    if (n % 3 == 0) {
        return n / 3;
    }
    // If n modulo 3 is 1, adjust to use steps of 2 and 3
    else if (n % 3 == 1) {
        if (n >= 4) {
            return (n - 4) / 3 + 2;
        } else {
            return 2;
        }
    }
    // If n modulo 3 is 2, adjust to use steps of 2 and 3
    else { // n % 3 == 2
        return (n - 2) / 3 + 1;
    }
}

int main() {
    int t;
    cin >> t; 
    vector<int> results;
    results.reserve(t);

    while (t--) {
        int n;
        cin >> n; 
        results.push_back(min_moves(n));
    }

    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
