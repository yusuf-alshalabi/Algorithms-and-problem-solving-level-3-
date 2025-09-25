
/*

Question (4) :
Write a program to fill a 3X3 matrix with random numbers
Then print each column sum.

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

void printEachColumSum(int array[3][3], short Rows, short Colums) {
    cout << "\nThe following are the sum of each colum in the matrix :" << endl;
    for (int j = 0; j < Colums; j++) {
        cout << "Colum " << j + 1 << " Sum : " << sumColum(array, Rows, j) << "\n";
    }
}




int main()
{
    srand((unsigned)time(NULL));

    int array[3][3];
    fillMatrix3X3WithRandomNumber(array, 3, 3);
    printMatrix3X3(array, 3, 3);
    printEachColumSum(array, 3, 3);



    return 0;
}
