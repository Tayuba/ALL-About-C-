#include <iostream>

using namespace std;

int main()
{
    bool isMale = false;
    bool isTall = false;

    if(isMale && isTall)
    {
        cout << "You are a male and tall";
    }
    else if(isMale && ! isTall)
    {
        cout << "You are a male and short";
    }
    else if(! isMale &&  isTall)
    {
        cout << "You are a tall but not male";
    }
    else
    {
        cout << "You are not male and not tall";
    }
    return 0;
}
