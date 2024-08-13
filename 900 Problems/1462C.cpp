#include <bits/stdc++.h>
using namespace std;

int smallest_unique_number(int x) {
    if (x > 45) {  
        return -1;
    }

    vector<int> digits;
    
    // Start from largest digit 
    for (int d = 9; d >= 1; --d) { // 9, 8, 7, 6, 5, 4, 3, 2, 1
        if (x <= 0) {  
            break;
        }
        if (x >= d) {  // 45 >= 9 
            digits.push_back(d); // 9
            x -= d; // 45 - 9 = 36
        }
    }

    if (x > 0) {  // 36 > 0
        return -1; 
    }

    sort(digits.begin(), digits.end());  // 9, 8, 7, 6, 5

    int result = 0;
    for (int digit : digits) {
        result = result * 10 + digit;
    }

    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;
        cout << smallest_unique_number(x) << endl;
    }

    return 0;
}
