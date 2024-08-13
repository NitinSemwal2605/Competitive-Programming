#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int days = 0;
    int socks = n;
    
    // Continue until there are no socks left
    while (socks > 0) {
        days++;      // Start a new day
        socks--;     // Vasya uses a pair of socks
        
        if (days % m == 0) {
            socks++; // Mom buys a new pair of socks
        }
    }
    
    cout << days << endl;
    return 0;
}
