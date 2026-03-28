#include <iostream>
using namespace std;

int main() {
    int element;
    cout << "Enter the number of elements: ";
    cin >> element;

    int n[element];
    bool isFound = false;

    cout << "Enter " << element << " numbers:" << endl;
    for (int i = 0; i < element; i++) {
        cin >> n[i];
    }
    for (int i = 0; i < element; i++) {
        for (int j = i + 1; j < element; j++) {
            if (n[i] == n[j]) {
                isFound = true;
                break;
            }
        }
        if (isFound) break;
    }

    if (isFound) {
        cout << "Already present";
    } else {
        cout << "All numbers are unique";
    }

    return 0;
}
