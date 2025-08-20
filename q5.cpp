#include <iostream>
using namespace std;

int main() {
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    int rowSum[3] = {0};
    int colSum[3] = {0};

    // Calculate sums
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            rowSum[i] += matrix[i][j];
            colSum[j] += matrix[i][j];
        }
    }

    cout << "Sum of each row: ";
    for(int i = 0; i < 3; i++) cout << rowSum[i] << " ";
    cout << endl;

    cout << "Sum of each column: ";
    for(int i = 0; i < 3; i++) cout << colSum[i] << " ";
    cout << endl;

    return 0;
}
