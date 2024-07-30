#include <iostream>
using namespace std;

int main() {

    long long k, n, w;
    cin >> k >> n >> w;
    
    // Total Cost = k * (1 + 2 + 3 + ... + w)
    // Sum of first w natural numbers = w * (w + 1) / 2
    long long totalCost = k * (w * (w + 1)) / 2;
    
    long long amountToBorrow = totalCost - n;
    
    if (amountToBorrow > 0) {
        cout << amountToBorrow << endl;
    } else {
        cout << 0 << endl;
    }
    
    return 0;
}
