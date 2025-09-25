

/*

Question (18) :
Write a program to print the intersected numbers in two given matrices.

*/


#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int readNumber(string s) {
    int number;
    cout << s;
    cin >> number;
    return number;

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

bool isNumberInMatrix(short number, int matrix[3][3], short Rows, int Colums) {
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Colums; j++) {
            if (matrix[i][j] == number)
                return true;
        }
    }
    return false;
}

void printIntersectedNumbersInTwoMatreces(int matrix1[3][3], int matrix2[3][3], short Rows, short Colums) {
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Colums; j++) {
            int number = matrix1[i][j];
            if (isNumberInMatrix(number, matrix2, 3, 3))
                cout << setw(2) << number << "      ";
        }
    }
}


int main()
{
    int matrix1[3][3] = { {4 ,3 ,55},
                          {44,33,22},
                          {11,66,77} };
    cout << "\nMatrix1 : \n";
    printMatrix3X3(matrix1, 3, 3);

    int matrix2[3][3] = { {4 ,3 ,55},
                          {0 ,99,22},
                          {11,88,12} };
    cout << "\nMatrix2 : \n";
    printMatrix3X3(matrix2, 3, 3);

    cout << "\nIntersected numbers are :\n";
    printIntersectedNumbersInTwoMatreces(matrix1, matrix2, 3, 3);


    system("pause>0");
}