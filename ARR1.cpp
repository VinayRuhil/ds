#include <iostream>
#include <algorithm>
using namespace std;

void SumAndAverage(const int arr[], int size, double& sum, double& average) {
    sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    average = sum/size;
}

void MinMax(const int arr[],int size,int& min, int& max) {
    min=max=arr[0];
    for (int i=1; i<size; ++i){
        if (arr[i] < min) {
            min =arr[i];
        }
        if (arr[i] > max) {
            max=arr[i];
        }
    }
}

void concatenateArrays(const int arr1[], int size1, const int arr2[], int size2, int result[], int& resultSize) {
    resultSize = size1 + size2;
    for (int i = 0; i < size1; ++i) {
        result[i] =arr1[i];
    }
    for (int i = 0; i < size2; ++i) {
        result[size1 + i] = arr2[i];
    }
}

int linSearch(const int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1; 
}
int binSearch(const int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; 
}
void printArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int choice;
    int arr1[100], arr2[100], result[200];
    int size1, size2, resultSize;
    double sum, average;
    int min, max;
    int target;

    cout << "Enter the size of the first array: ";
    cin >> size1;
    cout << "Enter elements of the first array: ";
    for (int i = 0; i < size1; ++i) {
        cin >> arr1[i];
    }

    cout << "Enter the size of the second array: ";
    cin >> size2;
    cout << "Enter elements of the second array: ";
    for (int i = 0; i < size2; ++i) {
        cin >> arr2[i];
    }

    do {
        cout << "Menu:\n";
        cout << "1. Calculate Sum and Average\n";
        cout << "2. Find Minimum and Maximum\n";
        cout << "3. Concatenate Arrays\n";
        cout << "4. Sort Array\n";
        cout << "5. Linear Search\n";
        cout << "6. Binary Search (Sorted Array)\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                SumAndAverage(arr1, size1, sum, average);
                cout<<"Sum of elements: "<<sum<<endl;
                cout<<"Average of elements: "<<average<<endl;
                break;
            case 2:
                MinMax(arr1, size1, min, max);
                cout<<"Minimum element: "<<min<<endl;
                cout<<"Maximum element: "<<max<<endl;
                break;
            case 3:
                concatenateArrays(arr1, size1, arr2, size2, result, resultSize);
                cout<<"Concatenated array: ";
                printArray(result, resultSize);
                break;
            case 4:
                sort(arr1, arr1 + size1);
                cout<<"Sorted array: ";
                printArray(arr1, size1);
                break;
            case 5:
                cout << "Enter the element to search: ";
                cin>>target;
                int linearResult = linSearch(arr1, size1, target);
                if (linearResult != -1) {
                    cout<<"Element "<< target<<" found at index "<<linearResult<<endl;
                } else {
                    cout<<"Element "<< target<<" not found in the array.\n";
                }
                break;
            case 6:
                cout<<"Enter the element to search (in a sorted array): ";
                cin >> target;
                int binaryResult = binSearch(arr1, size1,target);
                if (binaryResult != -1) {
                    cout << "Element " << target <<" found at index "<<binaryResult<<endl;
                } else {
                    cout<<"Element "<<target<<" not found in the array.\n";
                }
                break;
            case 7:
                cout<<"Exiting the program.\n";
                break;
            default:
                cout<<"Invalid choice. Please try again.\n";
        }
    } while (choice != 7);

    return 0;
}
