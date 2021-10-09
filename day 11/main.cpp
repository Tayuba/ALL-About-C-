#include <iostream>
#include <cmath>

using namespace std;

double cube(double num)
{
    double result = pow(num, 3);
    return result;
}

int main()
{
    double num;
    cout << "Enter the number you want to cube" << endl;
    cin >> num;
    double ans = cube(num);
    cout << ans;

    return 0;
}
