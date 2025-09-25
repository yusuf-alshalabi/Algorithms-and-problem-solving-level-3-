
/*

Question (10) :
Write a program to fill two 3X3 matrix with random numbers
then Write function to sum all numbers in this matrix and
print it.


*/


#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int randomNumber(int from, int to) {
    int random = rand() % (to - from + 1) + from;
    return random;
}


void fillMatrix3X3WithRandomNumber(int Matrix[3][3], short Row, short Colum) {
    for (short i = 0; i < Row; i++) {
        for (short j = 0; j < Colum; j++) {
            Matrix[i][j] = randomNumber(1, 100);
        }
    }
}

void printMatrix3X3(int Matrix[3][3], short Row, short Colum) {
    for (short i = 0; i < Row; i++) {
        for (short j = 0; j < Colum; j++) {

            printf("%0*d", 2, Matrix[i][j]);
            cout << "    ";
        }
        cout << "\n";
    }

}

int givSumNumberOfMatrix(int Matrix[3][3], short Rows, short Colums) {
    int sumNumber = 0;
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Colums; j++) {
            sumNumber += Matrix[i][j];
        }
    }
    return sumNumber;
}

int main()
{
    srand((unsigned)time(NULL));

    int Matrix[3][3];
    fillMatrix3X3WithRandomNumber(Matrix, 3, 3);
    cout << "Matrix 1 :\n";
    printMatrix3X3(Matrix, 3, 3);
    cout << "The sum of Numbers : \n" << givSumNumberOfMatrix(Matrix, 3, 3) << endl;




    return 0;
}
