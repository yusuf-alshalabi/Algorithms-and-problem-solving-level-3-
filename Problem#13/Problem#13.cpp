
/*

Question (13) :
Write a program to check if the matrix is identity or not.


*/

#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

void printArray3X3(int array[3][3], short Row, short Colum) {
    for (short i = 0; i < Row; i++) {
        for (short j = 0; j < Colum; j++) {

            printf("%0*d", 2, array[i][j]);
            cout << "    ";
        }
        cout << "\n";
    }
}

bool isIdentityArray(int array[3][3], short Rows, short Colums) {
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Colums; j++) {
            if (i == j && array[i][j] != 1)
                return false;
            else if (i != j && array[i][j] != 0)
                return false;
        }
    }
    return true;
}

int main()
{
    int array[3][3] = { {1,0,0},
                        {0,1,0},
                        {0,0,1} };
    cout << "The array is :" << endl;
    printArray3X3(array, 3, 3);

    if (isIdentityArray(array, 3, 3))
        cout << "\nThe array is identity" << endl;
    else
        cout << "\nThe array is not identity" << endl;






    return 0;
}
