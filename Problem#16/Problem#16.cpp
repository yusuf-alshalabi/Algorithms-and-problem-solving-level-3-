
/*

Question (16) :
Write a program to check if the matrix is sparce or not.

*/


#include <iostream>

using namespace std;

int readNumber(string s) {
    int number;
    cout << s;
    cin >> number;
    return number;

}

short countNumberInMatrix(int number, int matrix[3][3], short Rows, short Colums) {
    short numberCount = 0;
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Colums; j++) {
            if (matrix[i][j] == number)
                numberCount++;
        }
    }
    return numberCount;
}

bool isSparseMatrix(int matrix[3][3], short Rows, short Colums) {
    short matrrixSize = Rows * Colums;
    return(countNumberInMatrix(0, matrix, Rows, Colums) >= ceil((float)matrrixSize / 2));
}

void printMatrix3X3(int matrix[3][3], short Row, short Colum) {
    for (short i = 0; i < Row; i++) {
        for (short j = 0; j < Colum; j++) {

            printf("%0*d", 2, matrix[i][j]);
            cout << "    ";
        }
        cout << "\n";
    }
}


int main()
{
    int matrix[3][3] = { {0,4,0},
                         {0,5,6},
                         {0,5,5} };
    cout << "The matrix : \n";
    printMatrix3X3(matrix, 3, 3);

    if (isSparseMatrix(matrix, 3, 3))
        cout << "\nYES,The matrix is sparse \n";
    else
        cout << "\nNO,The matrix is NOT sparse \n";


    system("pause>0");
}

