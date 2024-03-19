#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& a, int lb, int mid, int ub, vector<int>& b) {
    int i = lb;
    int j = mid + 1;
    int k = lb;

    while (i <= mid && j <= ub) {
        if (a[i] <= a[j]) {
            b[k] = a[i];
            i++;
        } else {
            b[k] = a[j];
            j++;
        }
        k++;
    }

    while (i <= mid) {
        b[k] = a[i];
        i++;
        k++;
    }

    while (j <= ub) {
        b[k] = a[j];
        j++;
        k++;
    }

    for (int x = lb; x <= ub; x++) {
        a[x] = b[x];
    }
}

void mergeSort(vector<int>& a, int lb, int ub, vector<int>& b) {
    if (lb < ub) {
        int mid = (lb + ub) / 2;
        mergeSort(a, lb, mid, b);
        mergeSort(a, mid + 1, ub, b);
        merge(a, lb, mid, ub, b);
    }
}

int main() {
    vector<int> Arr = {12, 11, 13, 5, 6, 7};
    int n = Arr.size();
    vector<int> temp(n);
    mergeSort(Arr, 0, n - 1, temp);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
    cout << Arr[i] << " ";
    }

    return 0;
}
