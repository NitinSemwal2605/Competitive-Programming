#include <bits/stdc++.h>
using namespace std;


int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n; // Number of teams
        cin >> n;

        vector<int> efficiencies(n - 1);
        int sum_efficiencies = 0; 

        for (int i = 0; i < n - 1; ++i) {
            cin >> efficiencies[i];
            sum_efficiencies += efficiencies[i];
        }

        int missing_efficiency = -sum_efficiencies;

        cout << missing_efficiency << "\n";
    }

    return 0;
}
