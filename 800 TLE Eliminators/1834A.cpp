#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int count_1 = 0, count_neg1 = 0;

        // Count the number of 1s and -1s
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] == 1) {
                count_1++;
            } else {
                count_neg1++;
            }
        }
        
        int sum = count_1 - count_neg1;
        int min_operations = 0;
        
        // Check product condition
        if (count_neg1 % 2 != 0) {
            min_operations++;
            count_neg1--;
            count_1++;
        }
        
        // Check sum condition
        sum = count_1 - count_neg1;
        if (sum < 0) {
            min_operations += -sum;
        }
        
        cout << min_operations << endl;
    }
    
    return 0;
}
