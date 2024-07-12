#include <bits/stdc++.h>
using namespace std;

// Function to find the maximum difference between any two elements in an array
int maxDifference(const vector<int>& arr) {
    if (arr.size() < 2) {
        // If the array has less than 2 elements, no valid difference can be found
        return 0;
    }

    int maxElement = INT_MIN;
    int minElement = INT_MAX;

    // Find the maximum and minimum elements in the array
    for (int num : arr) {
        if (num > maxElement) {
            maxElement = num;
        }
        if (num < minElement) {
            minElement = num;
        }
    }

    // Compute the difference
    return maxElement - minElement;
}

int main() {
    vector<int> arr = {-1, 2, 19, 14, -5}; // Example array

    int result = maxDifference(arr);
    cout << "Maximum difference between any two elements in the array is: " << result << endl;

    return 0;
}
