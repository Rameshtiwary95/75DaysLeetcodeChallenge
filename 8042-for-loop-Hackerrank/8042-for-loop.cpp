#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a, b;
    // Read the two integers defining the range [a, b]
    cin >> a >> b;
    
    // Array to map numbers 1-9 to their English words
    // Index 0 is a placeholder so index 1 aligns with "one"
    string words[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    // Loop through the inclusive interval [a, b]
    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            cout << words[i] << endl;
        } else {
            if (i % 2 == 0) {
                cout << "even" << endl;
            } else {
                cout << "odd" << endl;
            }
        }
    }
    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna