#include <iostream>
using namespace std;

void shiftRight(int A[], int N, int X) {
    X = X % N;
    if (X == 0) return;

    int temp[10005];
    for (int i = 0; i < N; i++) {
        temp[(i + X) % N] = A[i];
    }
    for (int i = 0; i < N; i++) {
        A[i] = temp[i];
    }
}

int main() {
    int N, X;
    cin >> N >> X;

    int A[10005];
    for (int i = 0; i < N; i++) cin >> A[i];

    shiftRight(A, N, X);

    for (int i = 0; i < N; i++) cout << A[i] << " ";
    cout << endl;

    return 0;
}