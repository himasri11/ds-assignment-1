#include <iostream>
using namespace std;

int arr[100];   
int n = 0;      

void create() {
    cout << "Enter number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Array created successfully!" << endl;
}

void display() {
    if (n == 0) {
        cout << "Array is empty!" << endl;
    } else {
        cout << "Current Array: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

void insertElement() {
    if (n == 0) {
        cout << "Array is empty! Please create it first." << endl;
        return;
    }
    int pos, val;
    cout << "Enter position to insert (0-based index): ";
    cin >> pos;
    if (pos < 0 || pos > n) {
        cout << "Invalid position!" << endl;
        return;
    }
    cout << "Enter element to insert: ";
    cin >> val;

    // shift elements to right
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    n++;

    cout << "Element inserted successfully!" << endl;
}

void deleteElement() {
    if (n == 0) {
        cout << "Array is empty! Please create it first." << endl;
        return;
    }
    int pos;
    cout << "Enter position to delete (0-based index): ";
    cin >> pos;
    if (pos < 0 || pos >= n) {
        cout << "Invalid position!" << endl;
        return;
    }

    int deleted = arr[pos];
    
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    cout << "Element " << deleted << " deleted successfully!" << endl;
}

void linearSearch() {
    if (n == 0) {
        cout << "Array is empty! Please create it first." << endl;
        return;
    }
    int val;
    cout << "Enter element to search: ";
    cin >> val;
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == val) {
            cout << "Element found at position " << i << " (0-based index)." << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Element not found in the array." << endl;
    }
}

int main() {
    int choice;
    while (true) {
        cout << "\n--- MENU ---\n";
        cout << "1. CREATE\n";
        cout << "2. DISPLAY\n";
        cout << "3. INSERT\n";
        cout << "4. DELETE\n";
        cout << "5. LINEAR SEARCH\n";
        cout << "6. EXIT\n";
        cout << "Enter your choice (1-6): ";
        cin >> choice;}
    }
    
