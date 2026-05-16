#include <iostream>
using namespace std;

// Fungsi untuk menukar dua elemen
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Bubble Sort dengan perbandingan angka
void bubbleSort(int arr[], int n) {
    int nums[n];
    for (int i = 0; i < n; i++) nums[i] = arr[i]; // Salin data array

    cout << "\nBubble Sort steps with comparisons:\n";
    for (int i = 0; i < n - 1; i++) {
        cout << "\nOuter loop index " << i << ":\n";
        for (int j = 0; j < n - i - 1; j++) {
            cout << "Comparing nums[" << j << "] = " << nums[j] 
                 << " with nums[" << j + 1 << "] = " << nums[j + 1];
            if (nums[j] > nums[j + 1]) {
                swap(nums[j], nums[j + 1]);
                cout << " -> Swapped.";
            } else {
                cout << " -> No swap.";
            }
            cout << endl;
        }
        // Tampilkan array setelah setiap iterasi luar
        cout << "Array after step " << i + 1 << ": ";
        for (int k = 0; k < n; k++) cout << nums[k] << " ";
        cout << endl;
    }
}

// Insertion Sort
void insertionSort(int arr[], int n) {
    int nums[n];
    for (int i = 0; i < n; i++) nums[i] = arr[i]; // Salin data array

    cout << "\nInsertion Sort steps:\n";
    for (int i = 1; i < n; i++) {
        int key = nums[i];
        int j = i - 1;
        while (j >= 0 && nums[j] > key) {
            nums[j + 1] = nums[j];
            j--;
        }
        nums[j + 1] = key;
        cout << "Step " << i << ": ";
        for (int k = 0; k < n; k++) cout << nums[k] << " ";
        cout << endl;
    }
}

// Selection Sort
void selectionSort(int arr[], int n) {
    int nums[n];
    for (int i = 0; i < n; i++) nums[i] = arr[i]; // Salin data array

    cout << "\nSelection Sort steps:\n";
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (nums[j] < nums[min_idx]) {
                min_idx = j;
            }
        }
        swap(nums[min_idx], nums[i]);
        cout << "Step " << i + 1 << ": ";
        for (int k = 0; k < n; k++) cout << nums[k] << " ";
        cout << endl;
    }
}

// Quick Sort
void quickSortHelper(int nums[], int low, int high, int &step, int n) {
    if (low < high) {
        int pivot = nums[high];
        int i = low - 1;

        for (int j = low; j < high; j++) {
            if (nums[j] <= pivot) {
                i++;
                swap(nums[i], nums[j]);
            }
        }
        swap(nums[i + 1], nums[high]);

        step++;
        cout << "Step " << step << ": ";
        for (int k = 0; k < n; k++) cout << nums[k] << " ";
        cout << endl;

        quickSortHelper(nums, low, i, step, n);
        quickSortHelper(nums, i + 2, high, step, n);
    }
}

void quickSort(int arr[], int n) {
    int nums[n];
    for (int i = 0; i < n; i++) nums[i] = arr[i]; // Salin data array

    cout << "\nQuick Sort steps:\n";
    int step = 0;
    quickSortHelper(nums, 0, n - 1, step, n);
}

int main() {
    int arr[] = {18, 5, 26, 11, 25, 16, 18, 1, 20, 1, 13, 1, 18, 5, 26};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "NIM: 242046\n";
    cout << "Data: REZKYPRATAMAREZ\n";
    cout << "Converted data: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    int choice;
    do {
        cout << "\nMenu Sorting:\n";
        cout << "1. Bubble Sort\n";
        cout << "2. Insertion Sort\n";
        cout << "3. Selection Sort\n";
        cout << "4. Quick Sort\n";
        cout << "0. Exit\n";
        cout << "Pilih metode sorting (0-4): ";
        cin >> choice;

        switch (choice) {
            case 1: bubbleSort(arr, n); break;
            case 2: insertionSort(arr, n); break;
            case 3: selectionSort(arr, n); break;
            case 4: quickSort(arr, n); break;
            case 0: cout << "Program selesai.\n"; break;
            default: cout << "Pilihan tidak valid!\n";
        }
    } while (choice != 0);

    return 0;
}
