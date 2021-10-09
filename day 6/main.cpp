#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << pow(2, 100) << endl; // takes the square or power of the number
    cout << sqrt(100) << endl; // takes the square root of the number
    cout << round(2.3) << endl; // round number based on the decimal value
    cout << ceil(4.1) << endl; // no matter what the decimal is it increase it my one
    cout << floor(9.9) << endl; // no matter what the decimal is it only consider the whole number part
    cout << fmax(106 , 100) << endl; // returns the maximum number
    cout << fmin(2, 100) << endl ;// returns the minimum number

    return 0;
}
