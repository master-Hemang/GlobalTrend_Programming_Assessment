#include <bits/stdc++.h>
using namespace std;

// Function to check if a given string contains only alphabetic characters
bool isAlphabetic(const string& str) {
    for (char ch : str) {
        if (!isalpha(ch)) {
            return false;
        }
    }
    return true;
}

int main() {
    string test1 = "HelloWorld";   // Example string with only alphabetic characters
    string test2 = "123Hello5";     // Example string with non-alphabetic characters

    cout << "Does '" << test1 << "' contain only alphabetic characters? : " 
         << (isAlphabetic(test1) ? "Yes" : "No") << endl;

    cout << "Does '" << test2 << "' contain only alphabetic characters? : " 
         << (isAlphabetic(test2) ? "Yes" : "No") << endl;

    return 0;
}
