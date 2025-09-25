

/*

Question (5) :
Write a program to fill a 3X3 matrix with random numbers
Then sum each column in another array and print them.

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

int sumColum(int array[3][3], short Rows, short ColumNumber) {
    int sum = 0;
    for (int i = 0; i < Rows; i++) {
        sum += array[i][ColumNumber];
    }
    return sum;
}


void CalculateTheSumOfEachColum(int array[3][3], int Rows, int Colums, int arrSum[3]) {
    for (int j = 0; j < Colums; j++) {
        arrSum[j] = sumColum(array, Rows, j);
    }
}

void printTheSumOfEachColum(int arrSum[3], short Colums) {
    cout << "\nThe following are the sum of each Colum in the matrix :" << endl;
    for (int j = 0; j < Colums; j++) {
        cout << "Colum " << j + 1 << " Sum : " << arrSum[j] << "\n";
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int array[3][3];
    int arrSum[3];

    fillMatrix3X3WithRandomNumber(array, 3, 3);
    printMatrix3X3(array, 3, 3);

    CalculateTheSumOfEachColum(array, 3, 3, arrSum);
    printTheSumOfEachColum(arrSum, 3);



    return 0;
}
