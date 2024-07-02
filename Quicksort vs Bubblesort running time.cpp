#include <bits/stdc++.h>
#include <ctime>

using namespace std;

int Partition(int *p, int start, int End) {
    int pivot = p[End];
    int pindex = start;
    for (int i = start; i < End; i++) {
        if (p[i] < pivot) {
            swap(p[i], p[pindex]);
            pindex++;
        }
    }
    swap(p[pindex], p[End]);
    return pindex;
}

void quicksort(int *p, int S, int E) {
    if (S <= E) {
        int pindex = Partition(p, S, E);
        quicksort(p, S, pindex - 1);
        quicksort(p, pindex + 1, E);
    }
}

void bubblesort(int *p, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (p[j] > p[j + 1]) {
                swap(p[j], p[j + 1]);
            }
        }
    }
}

int main() {
    int n = 1000;
    int *a = new int[n];
    ifstream fin("../data/1000k.txt");
    for (int i = 0; i < n; i++) {
        fin >> a[i];
    }

    clock_t start = clock();
    quicksort(a, 0, n - 1);
    clock_t stop = clock();
    double duration = double(stop - start) / CLOCKS_PER_SEC * 1e6;  // converting to microseconds
    cout << "Quicksort Duration: " << duration << " microseconds" << endl;

    clock_t start2 = clock();
    bubblesort(a, n);
    clock_t stop2 = clock();
    double duration2 = double(stop2 - start2) / CLOCKS_PER_SEC * 1e6;  // converting to microseconds
    cout << "Bubblesort Duration: " << duration2 << " microseconds" << endl;

    delete[] a;
    return 0;
}
