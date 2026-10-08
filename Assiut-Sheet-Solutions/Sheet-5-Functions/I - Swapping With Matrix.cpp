#include <algorithm>
#include <cstdio>
#include <vector>
using namespace std;
 
void swapRows(vector<vector<int>>& a, int x, int y) {
    swap(a[x], a[y]);
}
 
void swapCols(vector<vector<int>>& a, int x, int y) {
    for (size_t i = 0; i < a.size(); i++)
        swap(a[i][x], a[i][y]);
}
 
int main() {
    int n, x, y;
    scanf("%d %d %d", &n, &x, &y);
    x--; y--;
    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
 
    swapRows(a, x, y);
    swapCols(a, x, y);
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}