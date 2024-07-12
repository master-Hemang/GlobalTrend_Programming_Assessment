#include <bits/stdc++.h>

using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> charIndexMap; // Map to store the last position of each character
    int maxLength = 0;
    int start = 0; // Start index of the current window

    for (int end = 0; end < s.length(); end++) {
        char currentChar = s[end];

        // If the character is already in the map and its index is within the current window
        if (charIndexMap.find(currentChar) != charIndexMap.end() && charIndexMap[currentChar] >= start) {
            // Move the start of the window right after the last occurrence of the current character
            start = charIndexMap[currentChar] + 1;
        }

        // Update the last position of the current character
        charIndexMap[currentChar] = end;

        // Update the maximum length of the substring
        maxLength = max(maxLength, end - start + 1);
    }

    return maxLength;
}

int main() {
    string s ;
    cout<<"Enter a string : ";
    cin>>s;
    cout << "The length of the longest substring without repeating characters is: " << lengthOfLongestSubstring(s) << endl;

    return 0;
}
