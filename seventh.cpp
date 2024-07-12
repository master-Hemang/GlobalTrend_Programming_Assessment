#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10; // Get the last digit and add it to sum
        n /= 10;       // Remove the last digit from n
    }
    return sum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int result = sumOfDigits(num);
    cout << "Sum of the digits of " << num << " is: " << result << endl;

    return 0;
}
