#include <iostream>
using namespace std;

void createArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void merge(int arr[], int str, int mid, int end) {
    int n1 = mid - str + 1;
    int n2 = end - mid;
    int left[n1];
    int right[n2];

    for (int i = 0; i < n1; i++) {
        left[i] = arr[str + i];
    }
    for (int i = 0; i < n2; i++) {
        right[i] = arr[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int s = str;

    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[s] = left[i];
            i++;
        } else {
            arr[s] = right[j];
            j++;
        }
        s++;
    }
    while (i < n1) {
        arr[s] = left[i];
        i++;
        s++;
    }
    while (j < n2) {
        arr[s] = right[j];
        j++;
        s++;
    }
}

void mergeSort(int arr[], int str, int end) {
    if (str >= end) {
        return;
    }
    int mid = str + (end - str) / 2;
    mergeSort(arr, str, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, str, mid, end);
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << " " << arr[i];
    }
    cout << "\n";
}

int main() {
    int N;
    cin >> N;
    int arr[N];

    createArray(arr, N);
    mergeSort(arr, 0, N - 1);
    cout << "Sorted array: \n";
    printArray(arr, N);
    return 0;
}
