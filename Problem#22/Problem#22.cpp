

/*

Question (22) :
Write a program print Fibonacci series of 10
(by recursion)

*/


#include <iostream>

using namespace std;

void printFibonacciUsingRecurssion(short number, short prev1, short prev2) {
    short FebNumber = 0;
    if (number > 0) {
        FebNumber = prev1 + prev2;
        cout << FebNumber << "   ";
        prev2 = prev1;
        prev1 = FebNumber;

        printFibonacciUsingRecurssion(number - 1, prev1, prev2);
    }


}

int main()
{

    cout << "\nFibonacci Using Recursive: \n";
    printFibonacciUsingRecurssion(10, 0, 1);

    system("pause>0");

}
