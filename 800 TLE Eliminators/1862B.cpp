#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        vector<long long> v(n), res;

        for (long long i = 0; i < n; ++i) {
            cin >> v[i];
        }

        res.push_back(v[0]);

        for (long long i = 1; i < n; ++i) {
            if (v[i - 1] > v[i]) {
                res.push_back(v[i]);
                res.push_back(v[i]);
            } else {
                res.push_back(v[i]);
            }
        }

        cout << res.size() << endl;
        for (const auto &val : res) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}


/*
Given - 4 6 3
Output - 4 6 3 3
        4 pushed first 
        6  pushed second
        3 pushed third
        3 pushed fourth

*/