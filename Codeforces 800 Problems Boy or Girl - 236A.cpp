#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    // Read the username
    string username;
    cin >> username;  


    set<char> distinct_chars;  

    // Insert distinct characters
    for (char ch : username) {
        distinct_chars.insert(ch);
    }

    // Check Distinct characters
    if (distinct_chars.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
