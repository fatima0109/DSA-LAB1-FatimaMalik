#include <iostream>
#include <vector>
using namespace std;

// Function to find all indices of a given element in an array
vector<int> findAllIndices(int arr[], int size, int key) {
    vector<int> indices;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            indices.push_back(i);
        }
    }
    
    return indices;
}

// Function to print the array
void printArray(int arr[], int size) {
    
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) {
            cout << ", ";
        }
    }
}

// Function to print the test results
void printTestResult(int arr[], int size, int key, vector<int> result) {
    cout << "Array: ";
    printArray(arr, size);
    cout << "\nKey: " << key;
    cout << "\nIndices: ";
    
    if (result.empty()) {
        cout << "Key not found";
    } else {
        
        for (int i = 0; i < result.size(); i++) {
            cout << result[i];
            if (i < result.size() - 1) {
                cout << ", ";
            }
        }
    }
}

int main() {
    
    // Case 1: Multiple occurrences
    int arr1[] = {1, 2, 3, 2, 4, 2, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int key1 = 2;
    vector<int> result1 = findAllIndices(arr1, size1, key1);
    cout << "Case 1 - Multiple occurrences: " << endl;
    printTestResult(arr1, size1, key1, result1);
    
    // Case 2: Key not present
    int arr2[] = {1, 3, 5, 7, 9};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int key2 = 4;
    vector<int> result2 = findAllIndices(arr2, size2, key2);
    cout << "\n\nCase 2 - Key not present: " << endl;
    printTestResult(arr2, size2, key2, result2);
    
    // Case 3: Empty array
    int arr3[] = {};
    int size3 = 0;
    int key3 = 5;
    vector<int> result3 = findAllIndices(arr3, size3, key3);
    cout << "\n\nCase 3 - Empty array: " << endl;
    printTestResult(arr3, size3, key3, result3);
    
    // Case 4: Single occurrence
    int arr4[] = {10, 20, 30, 40, 50};
    int size4 = sizeof(arr4) / sizeof(arr4[0]);
    int key4 = 30;
    vector<int> result4 = findAllIndices(arr4, size4, key4);
    cout << "\n\nCase 4 - Single occurrence: " << endl;
    printTestResult(arr4, size4, key4, result4);
    
    return 0;
}


