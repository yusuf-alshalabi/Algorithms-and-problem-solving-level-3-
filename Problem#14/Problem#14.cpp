
/*

Question (14) :
Write a program to check if the matrix is scalar or not.


*/


#include<iostream>
#include<string>
#include<iomanip>

using namespace std;



void printArray3X3(int array[3][3], short Row, short Colum) {
    for (short i = 0; i < Row; i++) {
        for (short j = 0; j < Colum; j++) {

            printf("%0*d", 2, array[i][j]);
            cout << "    ";
        }
        cout << "\n";
    }
}

bool isScalarMatrix(int matrix[3][3], short Rows, short Colums) {
    int firstDiagElement = matrix[0][0];
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Colums; j++) {
            if (i == j && matrix[i][j] != firstDiagElement)
                return false;
            else if (i != j && matrix[i][j] != 0)
                return false;
        }
    }
    return true;
}

int main()
{
    int matrix[3][3] = { {9,0,0},
                         {0,9,0},
                         {0,0,9} };

    cout << "The array is :" << endl;
    printArray3X3(matrix, 3, 3);

    if (isScalarMatrix(matrix, 3, 3))
        cout << "\nThe matrix is Scalar" << endl;
    else
        cout << "\nThe matrix is not Scalar" << endl;






    system("pause>0");
}
