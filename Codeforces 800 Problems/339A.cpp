#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    // Read the string
    string s;
    cin >> s;
    
    vector<int> numbers;
    
    // Extract numbers
    for (char ch : s) {
        if (ch >= '1' && ch <= '3') {
            numbers.push_back(ch - '0');  
        }
    }

    sort(numbers.begin(), numbers.end());
    
    // Print the numbers
    for (size_t i = 0; i < numbers.size(); ++i) {
        if (i > 0) {
            cout << "+";
        }
        cout << numbers[i];
    }
    cout << endl;
    
    return 0;
}
