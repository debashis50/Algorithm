#include <iostream>
#include <fstream>
#include <chrono>
#include <cstdlib>

using namespace std;
using namespace std::chrono;

void insertionSort(int A[], int n) {
    for (int i = 1; i < n; i++) {
        int key = A[i];
        int j = i - 1;

        while (j >= 0 && A[j] > key) {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = key;
    }
}

void mergeSort(int X[], int Y[], int C[], int n, int m) {
    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (X[i] > Y[j]) {
            C[k++] = Y[j++];
        } else {
            C[k++] = X[i++];
        }
    }
    while (i < n) {
        C[k++] = X[i++];
    }
    while (j < m) {
        C[k++] = Y[j++];
    }
}

int main() {
    srand(time(0));
    int n = 300000;
    int *a = new int[n];
    ofstream fout("300k.txt");
    for (int i = 0; i < n; i++) {
        fout << rand() << endl;
        a[i] = rand();
    }

    fout.close();

    auto start = high_resolution_clock::now();
    insertionSort(a, n);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Insertion Sort Duration: " << duration.count() << " microseconds" << endl;

    int m = 10000;
    int *b = new int[m];
    for (int i = 0; i < m; i++) {
        b[i] = rand();
    }
    int *c = new int[n + m];

    start = high_resolution_clock::now();
    mergeSort(a, b, c, n, m);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    cout << "Merge Sort Duration: " << duration.count() << " microseconds" << endl;


    return 0;
}
