#include <iostream>
#include <cmath>

double getMax(double num1, double num2)
{
    double numMax = fmax(num1, num2);

    return numMax;
}


double getMin1(double num1, double num2)

{   double minNum;

    if (num1 < num2)

    {
        minNum = num1;
    }
    else
    {
       minNum = num2;
    }
    return minNum;
}


using namespace std;

int main()
{
    double num1, num2;
    cout << "The numbers you want to compare" << endl;
    cin >> num1;
    cin >> num2;

    double ans = getMax(num1, num2);
    cout << "The maximum number is " << ans<< endl;

    double ans1 = getMin1(num1, num2);
    cout << "The minimum number is " << ans1;

    return 0;
}
