#include <iostream>
#include <climits>
using namespace std;

int counter = 0;

void MinMaxDaC(int arr[], int low, int high, int &min, int &max) {
    if (low == high) {
        if (max < arr[low]) {           
            counter++;
            max = arr[low];
        }
        if (min > arr[high]) {          
            counter++;
            min = arr[high];
        }
        return;
    }
    if (high - low == 1) {
        counter++;
        if (arr[low] < arr[high]) {
            counter++;
            if (min > arr[low]) {       
                counter++;
                min = arr[low];
            }
            if (max < arr[high]) {      
                counter++;
                max = arr[high];
            }
        }
        else {
            if (min > arr[high]) {      
                counter++;
                min = arr[high];
            }
            if (max < arr[low]) {       
                counter++;
                max = arr[low];
            }
        }
        return;
    }
    int mid = (low + high) / 2;
    MinMaxDaC(arr, low, mid, min, max);
    MinMaxDaC(arr, mid + 1, high, min, max);
}

int main() {
    int n;
    cout << "[*] Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "[*] Enter the element no. " << i + 1 << " of the array: ";
        cin >> arr[i];
    }
    int max = INT_MIN, min = INT_MAX;
    MinMaxDaC(arr, 0, n - 1, min, max);
    cout << "[!] Minimum element is : " << min << endl;
    cout << "[!] Maximum element is : " << max;
    cout << "[!] Counter value : " << counter;
    return 0;
}
