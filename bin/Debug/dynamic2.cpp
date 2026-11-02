
#include <iostream>
using namespace std;

int main() {

    int rows, cols;

    cout << "Enter number of rows (maximum 3): ";
    cin >> rows;

    cout << "Enter number of columns (maximum 3): ";
    cin >> cols;

    while (rows < 1 || rows > 3 || cols < 1 || cols > 3) {

        cout << "\nInvalid dimensions!";
        cout << "\nPlease enter dimensions between 1 and 3.\n";

        cout << "Enter number of rows: ";
        cin >> rows;

        cout << "Enter number of columns: ";
        cin >> cols;
    }

    double **arr = new double*[rows];

    for (int i = 0; i < rows; i++) {
        arr[i] = new double[cols];
    }

    // Input values using nested loops
    cout << "\nEnter the array elements:\n";

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < cols; j++) {

            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];

        }
    }

    // Display the array elements
    cout << "\nThe elements of the array are:\n";

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < cols; j++) {

            cout << arr[i][j] << "\t";

        }

        cout << endl;
    }

    // Release dynamically allocated memory
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }

    delete[] arr;

    return 0;
}
