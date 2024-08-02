#include <iostream>
using namespace std;

// Function to count extremely round numbers <= n
int countExtremelyRound(int n) {
    int count = 0;
    for (int d = 1; d <= 9; ++d) {
        int power_of_ten = 1;
        while (d * power_of_ten <= n) {
            ++count;
            power_of_ten *= 10;
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << countExtremelyRound(n) << endl;
    }
    return 0;
}

// Explanation:
// We can count the number of extremely round numbers <= n by iterating over all digits d from 1 to 9.
// For each digit d, we calculate the maximum power of 10 that can be formed by repeating the digit d.
// If d * power_of_ten <= n, then we increment the count of extremely round numbers.
// Finally, we return the total count of extremely round numbers <= n.
