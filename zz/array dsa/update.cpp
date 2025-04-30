#include <iostream>
using namespace std;

int main() {
    int size, pos, newVal;
    
    cout << "Enter array size: ";
    cin >> size;
    int arr[size];
    
    cout << "Enter " << size << " elements: ";
    for(int i = 0; i < size; i++)
        cin >> arr[i];
    
    cout << "Enter position to update (0-" << size-1 << "): ";
    cin >> pos;
    cout << "Enter new value: ";
    cin >> newVal;
    
    arr[pos] = newVal;
    
    cout << "Updated array: ";
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
    
    return 0;
}

