#include<bits/stdc++.h>
using namespace std;

void Merge(int *A, int *B, int n, int m) {

    sort(A, A + n);
    sort(B, B + m);

    int *c = new int[n + m];
    int i = 0, j = 0, k = 0;

    while(i <= n - 1 && j <= m - 1) {
        if(A[i] > B[j]) {
            c[k++] = B[j++];
        } else {
            c[k++] = A[i++];
        }
    }

    while(i <= n - 1) {
        c[k++] = A[i++];
    }

    while(j <= m - 1) {
        c[k++] = B[j++];
    }

    for(int x = 0; x < n + m; x++) {
        cout << c[x] << " ";
    }
    cout << endl;

}

int main() {
    int a[5] = {5, 10, 15, 20, 25};
    int b[5] = {50, 45, 40, 35, 30};
    Merge(a, b, 5, 5);

    return 0;
}
