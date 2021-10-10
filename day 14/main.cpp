#include <iostream>
#include <string>

double operation(double num1, double num2, char opr)
{

    if(opr == '+')
    {
        return num1 + num2;
    }
    else if(opr == '-')
    {
        return num1 - num2;
    }
    else if(opr == '*')
    {
        return num1 * num2;
    }
    else if(opr == '/')
    {
        return num1 / num2;
    }

}
using namespace std;
int main()
{
    double num1, num2;

    char opr;
    cout << "Enter first number:" << endl;
    cin >> num1;

    cout << "Enter operator:" << endl;
    cin >> opr;

    if(opr != '+' && opr != '-' && opr != '*' &&  opr != '/' )
    {
        cout << "You have entered invalid operator: "<<endl;
    }

    else
    {


        cout << "Enter second number:" << endl;
        cin >> num2;


        double ans = operation(num1, num2, opr);

        cout << "Your answer is: "<<ans<< endl;

    }


    return 0;
}
