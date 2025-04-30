#include <iostream>
using namespace std;

int main() {
    int arr[50], size, pos;
    
    cout << "Enter array size: ";
    cin >> size;
    
    cout << "Enter array elements: ";
    for(int i = 0; i < size; i++)
        cin >> arr[i];
    
    cout << "Enter position to delete (0-" << size-1 << "): ";
    cin >> pos;
    
    for(int i = pos; i < size-1; i++)
        arr[i] = arr[i+1];
    
    cout << "Array after deletion: ";
    for(int i = 0; i < size-1; i++)
        cout << arr[i] << " ";
    
    return 0;
}

