

/*

Question (6) :
Write a program to fill a 3X3 matrix with ordered numbers.

*/

#include <iostream>
#include<string>
#include<iomanip>

using namespace std;

void fillMatrix3X3WithOrderedNumber(int array[3][3], short Row, short Colum) {
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

int main()
{
    int array[3][3];
    fillMatrix3X3WithOrderedNumber(array, 3, 3);
    printMatrix3X3(array, 3, 3);



    return 0;
}

