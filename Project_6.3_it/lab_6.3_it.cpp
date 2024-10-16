#include <iostream>
#include <cmath>
using namespace std;

void inputArray(double* arr, int n) {
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

double sumOfSquares(double* arr, int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i] * arr[i]; 
    }
    return sum;
}

void printArray(double* arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of array elements: ";
    cin >> n;

    double* arr = new double[n];

    inputArray(arr, n);

    double sumSquares = sumOfSquares(arr, n);
    cout << "Sum of squares of array elements: " << sumSquares << endl;

    cout << "Array: ";
    printArray(arr, n);

    delete[] arr;
    return 0;
}
