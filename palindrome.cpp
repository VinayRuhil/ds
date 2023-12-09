#include <iostream>

using namespace std;

bool isPalindrome(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        if (arr[i] != arr[size - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int size;
    cout << "Enter the size of the sequence: ";
    cin >> size;

    int arr[size];
    cout << "Enter the sequence of integers: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    if (isPalindrome(arr, size)) {
        cout << "The sequence is a palindrome." << endl;
    } 
	else {
        cout << "The sequence is not a palindrome." << endl;
    }

    return 0;
}

