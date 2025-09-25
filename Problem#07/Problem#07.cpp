

/*

Question (7) :
Write a program to fill a 3X3 matrix with ordered numbers
and print it , then transpose matrix and print it.

*/


#include <iostream>
#include<string>
#include<iomanip>

using namespace std;

void fillMatrixWithOrderedNumber(int array[3][3], short Row, short Colum) {
    int counter = 0;
    for (int i = 0; i < Row; i++) {
        for (int j = 0; j < Colum; j++) {
            array[i][j] = ++counter;
        }
    }


}

void printMatrix3X3(int array[3][3], short Row, short Colum) {
    for (int i = 0; i < Row; i++) {
        for (int j = 0; j < Colum; j++) {
            cout << setw(3) << array[i][j] << "    ";
        }
        cout << "\n";
    }
}

void TransposeMatrix(int array[3][3], int arrayTransposed[3][3], short Row, short Colum) {
    for (int i = 0; i < Row; i++) {
        for (int j = 0; j < Colum; j++) {
            arrayTransposed[i][j] = array[j][i];
        }
    }
}

int main()
{
    int array[3][3], arrayTransposed[3][3];
    fillMatrixWithOrderedNumber(array, 3, 3);
    cout << "\nOrdered array : " << endl;
    printMatrix3X3(array, 3, 3);
    TransposeMatrix(array, arrayTransposed, 3, 3);
    cout << "\nTransposed array : " << endl;
    printMatrix3X3(arrayTransposed, 3, 3);


    return 0;
}

