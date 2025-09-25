

/*

Question (9) :
Write a program to fill two 3X3 matrix with random numbers
print it then print the middle row and middle column.


*/

#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

void fillMatrixWithOrderedNumber(int Matrix[3][3], short Row, short Colum) {
    int counter = 0;
    for (int i = 0; i < Row; i++) {
        for (int j = 0; j < Colum; j++) {
            Matrix[i][j] = ++counter;
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

enum RowColum { Row = 1, Colum = 2 };

void printColOrRow(int Matrix[3][3], RowColum status, short numberIt, int Colums, int Rows) {
    if (status == RowColum::Colum) {
        for (int i = 0; i < Rows; i++) {
            printf("%0*d", 2, Matrix[i][numberIt]);
            cout << "    ";
        }
        cout << endl;

    }
    else {
        for (int j = 0; j < Colums; j++) {
            printf("%0*d", 2, Matrix[numberIt][j]);
            cout << "    ";

        }
        cout << endl;
    }
}

void printMiddleRow(int Matrix[3][3], int Colums, int Rows) {
    int middleRow = (Rows - 1) / 2;
    printColOrRow(Matrix, Row, middleRow, Colums, Rows);
}

void printMiddleColum(int Matrix[3][3], int Colums, int Rows) {
    int middleColum = (Colums - 1) / 2;
    printColOrRow(Matrix, Colum, middleColum, Colums, Rows);
}

int main()
{
    int Matrix[3][3];
    fillMatrixWithOrderedNumber(Matrix, 3, 3);
    cout << "The Matrix 1 is:\n";
    printMatrix3X3(Matrix, 3, 3);

    cout << "\nMiddle Row of Matrix 1 is : \n";
    printMiddleRow(Matrix, 3, 3);
    cout << "\nMiddle Colum of Matrix 1 is : \n";
    printMiddleColum(Matrix, 3, 3);



    return 0;
}
