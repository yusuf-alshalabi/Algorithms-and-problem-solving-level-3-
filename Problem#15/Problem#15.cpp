
/*

Question (15) :
Write a program to count given number in matrix.


*/


#include <iostream>

using namespace std;

short readNumber(string s) {
    short number;
    cout << s;
    cin >> number;
    return number;

}

short countNumberInMatrix(int number, int matrix[3][3], int Rows, int Colums) {
    short numberCount = 0;
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Colums; j++) {
            if (matrix[i][j] == number)
                numberCount++;
        }
    }
    return numberCount;
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


int main()
{
    int matrix[3][3] = { {1,4,5},
                         {5,5,6},
                         {6,5,5} };
    cout << "The matrix : \n";
    printMatrix3X3(matrix, 3, 3);

    short number = readNumber("\nEnter the number to count in matrix? : ");

    cout << "\nNumber " << number << " count in matrix is " << countNumberInMatrix(number, matrix, 3, 3) << endl;


    system("pause>0");
}


