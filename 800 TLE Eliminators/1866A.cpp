#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    
    vector<int> array(N);
    bool hasZero = false;
    int minAbsValue = INT_MAX;
    
    for (int i = 0; i < N; ++i) {
        cin >> array[i];
        if (array[i] == 0) {
            hasZero = true;
        }

        minAbsValue = min(minAbsValue, abs(array[i]));
    }
    
    if (hasZero) {
        cout << 0 << endl;
    } else {
        cout << minAbsValue << endl;
    }
    
    return 0;
}
