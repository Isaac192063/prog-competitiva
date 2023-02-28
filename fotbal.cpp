#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1; // Si no se encuentra el elemento, devolver -1
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 5;
    int result = binarySearch(arr, 0, n-1, target);
    if (result == -1) {
        cout << "El elemento no esta en el arreglo." << endl;
    }
    else {
        cout << "El elemento esta en el indice " << result << endl;
    }
    return 0;
}