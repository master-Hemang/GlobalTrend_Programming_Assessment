#include <bits/stdc++.h>
using namespace std;

long long factorial(int n) {
    if (n <= 1) return 1; // Base case: factorial of 0 or 1 is 1
    return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    long long result = factorial(num);
    cout << "Factorial of " << num << " is: " << result << endl;

    return 0;
}
