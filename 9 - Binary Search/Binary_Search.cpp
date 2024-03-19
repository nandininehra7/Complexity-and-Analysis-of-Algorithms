#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& arr, int target) {
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            return mid; 
        } else if (arr[mid] < target) {
            start = mid + 1;  
        } else {
            end = mid - 1; 
        }
    }

    return -1;  
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13};  

    int target = 7;  
    int index = binarySearch(arr, target);

    if (index != -1) {
        cout << "Element " << target << " found at index " << index << endl;
    } else {
        cout << "Element " << target << " not found in the array" << endl;
    }

    return 0;
}
