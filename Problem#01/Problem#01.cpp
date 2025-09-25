

/*

Question (1) :
Write a program to fill a 3X3 matrix with random numbers.

*/


#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int randomNumber(int from, int to) {
    int random = rand() % (to - from + 1) + from;
    return random;
}

void fillMatrix3X3WithRandomNumber(int matrix[3][3], short Row, short Colum) {
    for (int i = 0; i < Row; i++) {
        for (int j = 0; j < Colum; j++) {
            matrix[i][j] = randomNumber(1, 100);
        }
    }
}

void printMatrix3X3(int matrix[3][3], short Row, short Colum) {
    for (int i = 0; i < Row; i++) {
        for (int j = 0; j < Colum; j++) {
            cout << setw(3) << matrix[i][j] << "    ";
        }
        cout << "\n";
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int matrix[3][3];
    fillMatrix3X3WithRandomNumber(matrix, 3, 3);
    cout << "The following is a 3X3 random matrix :" << endl;
    printMatrix3X3(matrix, 3, 3);




    return 0;
}
