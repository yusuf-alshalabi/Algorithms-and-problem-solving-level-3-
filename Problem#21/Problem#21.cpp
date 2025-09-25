

/*

Question (21) :
Write a program print Fibonacci series of 10
(by for loop).

*/


#include <iostream>

using namespace std;

void printFibonacciUsingLoop(short number, int prev1,int prev2) {
    short FebNumber = 0;

        for (int i = 1; i <= number; i++) {

            FebNumber = prev1 + prev2;
            cout << FebNumber << "   ";

            prev2 = prev1;
            prev1 = FebNumber;

        }
}

int main()
{
    cout << "\nFibonacci Using Loop: \n";
    printFibonacciUsingLoop(10,0,1);

    system("pause>0");

}
