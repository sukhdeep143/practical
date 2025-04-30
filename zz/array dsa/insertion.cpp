#include <iostream>
using namespace std;

int main() {
    int arr[10], size, pos, value, i;
    
    cout << "Enter size of array (max 9): ";
    cin >> size;
    
    cout << "Enter elements: ";
    for(i = 0; i < size; i++)
        cin >> arr[i];
        
    cout << "Enter position and value to insert: ";
    cin >> pos >> value;
    
    for(i = size; i > pos; i--)
        arr[i] = arr[i-1];
    
    arr[pos] = value;
    size++;
    
    cout << "Array after insertion: ";
    for(i = 0; i < size; i++)
        cout << arr[i] << " ";
    
    return 0;
}

