

/*

Question (19) :
Write a program to print the minimum and maximum numbers matrix.

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

int minNumberInMatrix(int matrix[3][3], short Rows, short Colums) {
    int minNumber = matrix[0][0];
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Colums; j++) {
            if (matrix[i][j] < minNumber)
                minNumber = matrix[i][j];
        }
    }
    return minNumber;
}

int maxNumberInMatrix(int matrix[3][3], short Rows, short Colums) {
    int maxNumber = matrix[0][0];
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Colums; j++) {
            if (matrix[i][j] > maxNumber)
                maxNumber = matrix[i][j];
        }
    }
    return maxNumber;
}

int main()
{
    int matrix1[3][3] = { {1,88,3},{4,5,6},{0,8,9} };
    cout << "Matrix(1) : \n";
    printMatrix3X3(matrix1, 3, 3);

    cout << "The min number in matrix(1) is : " << minNumberInMatrix(matrix1, 3, 3) << endl;
    cout << "The max number in matrix(1) is : " << maxNumberInMatrix(matrix1, 3, 3) << endl;




    system("pause>0");
}
