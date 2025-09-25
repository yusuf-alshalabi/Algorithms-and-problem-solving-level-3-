

/*

Question (20) :
Write a program to check if the matrix is palindrom or not.

*/

#include <iostream>

using namespace std;

void printMatrix3X3(int matrix[3][3], short Row, short Colum) {
    for (short i = 0; i < Row; i++) {
        for (short j = 0; j < Colum; j++) {

            printf("%0*d", 2, matrix[i][j]);
            cout << "    ";
        }
        cout << "\n";
    }
}

bool isPalindromMatrix(int matrix[3][3], short Rows, short Columns) {
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Columns / 2; j++) {
            if (matrix[i][j] != matrix[i][Columns - j - 1])
                return false;
        }
    }
    return true;
}
int main()
{
    int matrix1[3][3] = { {1,2,1},{2,3,2},{3,4,3} };
    cout << "Matrix(1):\n";
    printMatrix3X3(matrix1, 3, 3);

    if (isPalindromMatrix(matrix1, 3, 3))
        cout << "Yes,is palindrom\n";
    else
        cout << "No,is not palindrom\n";






    system("pause>0");
}
