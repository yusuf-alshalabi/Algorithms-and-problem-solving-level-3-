

/*

Question (3) :
Write a program to fill a 3X3 matrix with random numbers
Then sum each row in separate array and print the results.

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
    for (int i = 0; i < Row; i++) {
        for (int j = 0; j < Colum; j++) {
            array[i][j] = randomNumber(1, 100);
        }
    }
}

void printMatrix3X3(int array[3][3], short Row, short Colum) {
    cout << "\nThe following is a 3X3 random matrix :" << endl;
    for (int i = 0; i < Row; i++) {
        for (int j = 0; j < Colum; j++) {
            cout << setw(3) << array[i][j] << "    ";
        }
        cout << "\n";
    }

}

int sumRow(int array[3][3], short RowNumber, short colums) {
    int sum = 0;
    for (int i = 0; i < colums; i++) {
        sum += array[RowNumber][i];
    }
    return sum;
}

void CalculateTheSumOfEachRow(int array[3][3], int Row, int Colum, int arrSum[3]) {
    for (int i = 0; i < Row; i++) {
        arrSum[i] = sumRow(array, i, Colum);
    }
}

void printTheSumOfEachRow(int arrSum[3], short Row) {
    cout << "\nThe following are the sum of each row in the matrix :" << endl;
    for (int i = 0; i < Row; i++) {
        cout << "Row " << i + 1 << " Sum : " << arrSum[i] << "\n";
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int array[3][3];
    int arrSum[3] = { 0,0,0 };

    fillMatrix3X3WithRandomNumber(array, 3, 3);
    printMatrix3X3(array, 3, 3);

    CalculateTheSumOfEachRow(array, 3, 3, arrSum);
    printTheSumOfEachRow(arrSum, 3);



    return 0;
}
