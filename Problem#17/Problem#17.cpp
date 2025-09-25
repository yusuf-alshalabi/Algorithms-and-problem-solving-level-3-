

/*

Question (17) :
Write a program to check if a give number exists in matrix or not.

*/


#include <iostream>

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


int main()
{
    int matrix1[3][3] = { {4 ,3 ,55},
                          {44,33,22},
                          {11,66,77} };
    cout << "Matrix1 : \n";
    printMatrix3X3(matrix1, 3, 3);

    int Number = readNumber("\nPlease Enter the number to look for in matrix? ");

    if (isNumberInMatrix(Number, matrix1, 3, 3))
        cout << "\nYes,it is there.\n";
    else
        cout << "\nNo,it is not there.\n";


    system("pause>0");
}
