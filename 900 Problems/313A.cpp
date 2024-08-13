#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string n_str;
    cin >> n_str;
    
    // string to an integer
    int n = stoi(n_str);

    if (n >= 0) {
        cout << n << endl;
        return 0;
    }

    string abs_string = n_str.substr(1); // Remove the '-' sign
    int len = abs_string.size();

    //  Remove the last digit
    string case1 = abs_string.substr(0, len - 1);
    int num_case1 = stoi(case1);
    num_case1 = -num_case1;

    // Case 2: Remove the second-last digit
    string case2 = abs_string.substr(0, len - 2) + abs_string.substr(len - 1);
    int num_case2 = stoi(case2);
    num_case2 = -num_case2;

    // Compare the original number 
    int max_value = max(n, max(num_case1, num_case2));

    cout << max_value << endl;

    return 0;
}
