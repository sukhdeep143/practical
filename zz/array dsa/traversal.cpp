#include <iostream>
using namespace std;

int main() {
    int n, arr[50];
    
    cout << "Enter size of array: ";
    cin >> n;
    
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    cout << "Forward traversal: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    
    cout << "\nReverse traversal: ";
    for(int i = n - 1; i >= 0; i--)
        cout << arr[i] << " ";
        
    return 0;
}

