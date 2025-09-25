
/*

Question (11) :
Write a program compare two matrices and check
if they are equal or not.


*/

#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int randomNumber(int from, int to) {
    int random = rand() % (to - from + 1) + from;
    return random;
}


void fillArray3X3WithRandomNumber(int array[3][3], short Row, short Colum) {
    for (short i = 0; i < Row; i++) {
        for (short j = 0; j < Colum; j++) {
            array[i][j] = randomNumber(1, 10);
        }
    }
}

void printArray3X3(int array[3][3], short Row, short Colum) {
    for (short i = 0; i < Row; i++) {
        for (short j = 0; j < Colum; j++) {

            printf("%0*d", 2, array[i][j]);
            cout << "    ";
        }
        cout << "\n";
    }

}

int givSumNumberOfArray(int array[3][3], short Rows, short Colums) {
    int sumNumber = 0;
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Colums; j++) {
            sumNumber += array[i][j];
        }
    }
    return sumNumber;
}

bool areEqualMatrixes(int matrix1[3][3], int matrix2[3][3], short Rows, short Colums) {
    return (givSumNumberOfArray(matrix1, Rows, Colums) == givSumNumberOfArray(matrix2, Rows, Colums));
}
int main()
{
    srand((unsigned)time(NULL));

    int matrix1[3][3];
    int matrix2[3][3];

    fillArray3X3WithRandomNumber(matrix1, 3, 3);
    cout << "Matrix 1 :\n";
    printArray3X3(matrix1, 3, 3);


    fillArray3X3WithRandomNumber(matrix2, 3, 3);
    cout << "Matrix 2 :\n";
    printArray3X3(matrix2, 3, 3);

    if (areEqualMatrixes(matrix1, matrix2, 3, 3))
        cout << "Yes,The matrices is equal" << endl;
    else
        cout << "No,The matrices is not equal" << endl;






    return 0;
}


