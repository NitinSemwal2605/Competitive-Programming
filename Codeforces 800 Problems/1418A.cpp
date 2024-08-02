#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;
        
        long long total_sticks_needed = k * (y + 1);
        
        long long additional_sticks_needed = total_sticks_needed - 1;
        
        long long trades_for_sticks = (additional_sticks_needed + (x - 2)) / (x - 1);
        
        long long total_trades = trades_for_sticks + k;
        
        cout << total_trades << endl;
    }
    
    return 0;
}
