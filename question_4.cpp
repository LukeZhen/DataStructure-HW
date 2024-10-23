#include <iostream>

using namespace std;

int searchElement(int matrix[3][3], int rows, int cols, int element) {
    int i = 0, j = cols - 1;
    while (i < rows && j >= 0)
    {
        if (matrix[i][j] == element) {
            return 1; // Element found
        } else if (matrix[i][j] > element) {
            j--;
        } else {
            i++;
        }
    }
    return 0;
}

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3, cols = 3;
    int element;
    cout << "Enter the element you want to find: " ;
    cin >> element;
    if (searchElement(matrix, rows, cols, element)) {
        cout << "Element found." << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
