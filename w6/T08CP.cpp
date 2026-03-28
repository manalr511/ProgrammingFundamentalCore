#include <iostream>
using namespace std;

int main() {
    int arr1[2];
    int n;
    cout << "Enter 2 elements of first array:\n";
    for(int i = 0; i < 2; i++) {
        cin >> arr1[i];
    }
cout << "Enter size of second array: ";
    cin >> n;
    int arr2[n]; 
    cout << "Enter elements of second array:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr2[i];
    }
    int result[n + 2];
    result[0] = arr1[0];
    
    for(int i = 0; i < n; i++) {
        result[i + 1] = arr2[i];
    }
    result[n + 1] = arr1[1];
    cout << "Final array:\n";
    for(int i = 0; i < n + 2; i++) {
        cout << result[i] << " ";
    }

    return 0;
}


