#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Read the number of people

    bool isHard = false; // Flag to determine if the problem is hard

    for (int i = 0; i < n; ++i) {
        int opinion;
        cin >> opinion; // Read each person's opinion

        if (opinion == 1) {
            isHard = true; // If any opinion is 1, the problem is hard
        }
    }

    if (isHard) {
        cout << "HARD" << endl; // Output HARD if any opinion was 1
    } else {
        cout << "EASY" << endl; // Output EASY if all opinions were 0
    }

    return 0;
}
