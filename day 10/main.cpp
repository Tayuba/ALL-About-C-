#include <iostream>

using namespace std;


// Creating a function
void Hi(string name, double age)
{
    cout << "Hello " << name << " you are " << age << " years old";
}

int main()
{
    string name;
    double age;

    cout <<"Please enter your name" << endl;
    getline(cin, name);


    cout <<"Please enter your age" << endl;
    cin >> age;

    Hi(name, age);


    return 0;
}
