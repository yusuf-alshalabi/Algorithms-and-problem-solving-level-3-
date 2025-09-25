
/*

Question (12) :
Write a program compare two matrices and check
if they are typical or not.


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

bool areTypicalMatrixes(int matrix1[3][3], int matrix2[3][3], short Rows, short Colums) {
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Colums; j++) {
            if (matrix1[i][j] != matrix2[i][j])
                return 0;
        }
    }
    return 1;
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

    if (areTypicalMatrixes(matrix1, matrix2, 3, 3))
        cout << "Yes,both matrices is typical" << endl;
    else
        cout << "No,The matrices is not typical" << endl;






    return 0;
}
