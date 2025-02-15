#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t; 
    cin.ignore(); 
    

    while (t--) {
        string s;
        getline(cin, s); 

        
        transform(s.begin(), s.end(), s.begin(), ::toupper);

        
        if (s == "YES") {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
