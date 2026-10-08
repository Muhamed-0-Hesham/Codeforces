#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; (long long)i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

bool isPalindrome(int n) {
    string s = to_string(n);
    string r = s;
    reverse(r.begin(), r.end());
    return s == r;
}

int countDivisors(int n) {
    int cnt = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0) cnt++;
    return cnt;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;

    int mx = *max_element(a.begin(), a.end());
    int mn = *min_element(a.begin(), a.end());

    int primeCount = 0, palindromeCount = 0;
    for (int x : a) {
        if (isPrime(x)) primeCount++;
        if (isPalindrome(x)) palindromeCount++;
    }

    int bestDivCount = -1, bestNum = -1;
    for (int x : a) {
        int d = countDivisors(x);
        if (d > bestDivCount || (d == bestDivCount && x > bestNum)) {
            bestDivCount = d;
            bestNum = x;
        }
    }

    cout << "The maximum number : " << mx << "\n";
    cout << "The minimum number : " << mn << "\n";
    cout << "The number of prime numbers : " << primeCount << "\n";
    cout << "The number of palindrome numbers : " << palindromeCount << "\n";
    cout << "The number that has the maximum number of divisors : " << bestNum << "\n";

    return 0;
}