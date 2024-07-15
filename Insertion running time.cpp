#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    const int size = 300000;
    int values[size];
    auto f = []() -> int { return rand() % 300000; };

    for (int i = 0; i < size; ++i) {
        values[i] = f();
    }

    auto start = high_resolution_clock::now();

    insertionSort(values, size);

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<seconds>(stop - start);
    cout << "Time taken by insertion sort: "
         << duration.count() << " seconds" << endl;

    return 0;
}
