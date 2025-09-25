
/*

Question (8) :
Write a program to fill two 3X3 matrix with random numbers
then multiply them into a 3rd matrix and print it.

*/


#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int randomNumber(int from, int to) {
    int random = rand() % (to - from + 1) + from;
    return random;
}


void fillMatrix3X3WithRandomNumber(int array[3][3], short Row, short Colum) {
    for (short i = 0; i < Row; i++) {
        for (short j = 0; j < Colum; j++) {
            array[i][j] = randomNumber(1, 10);
        }
    }
}

void calcMatrixResultOf2Array(int array1[3][3], int array2[3][3], short Rows, short Colums, int result[3][3]) {
    for (short i = 0; i < Rows; i++) {
        for (short j = 0; j < Colums; j++) {
            result[i][j] = array1[i][j] * array2[i][j];
        }
    }
}

void printMatrix3X3(int array[3][3], short Row, short Colum) {
    for (short i = 0; i < Row; i++) {
        for (short j = 0; j < Colum; j++) {

            printf("%0*d", 2, array[i][j]);
            cout << "    ";
        }
        cout << "\n";
    }

}

int main()
{
    srand((unsigned)time(NULL));

    int Matrix1[3][3], Matrix2[3][3], result[3][3];
    fillMatrix3X3WithRandomNumber(Matrix1, 3, 3);
    fillMatrix3X3WithRandomNumber(Matrix2, 3, 3);
    calcMatrixResultOf2Array(Matrix1, Matrix2, 3, 3, result);
    cout << "\n\nThe array 1 : \n";
    printMatrix3X3(Matrix1, 3, 3);
    cout << "\n\nThe array 2 : \n";
    printMatrix3X3(Matrix2, 3, 3);
    cout << "\n\nThe result array : \n";
    printMatrix3X3(result, 3, 3);



    return 0;
}

