#include<iostream>
#include<string.h>
#include<fstream>
#include<iomanip>
#include <cmath>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;
void new_array(int a[], int b[], int n) {
    for (int i = 0; i < n; i++) {
        cout << b[i];
        if (i != n - 1 || n > 0) cout << " ";
    }
    for (int i = 0; i < n; i++) {
        cout << a[i];
        if (i != n - 1) cout << " ";
    }
    cout << endl;
}
int main() {
    int n;
    cin >> n;

    int a[1005], b[1005];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    new_array(a, b, n);
}
  
