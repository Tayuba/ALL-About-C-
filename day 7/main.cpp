#include <iostream>

using namespace std;

int main()
{
    double age;
    string name;
    cout << "Please enter your name: " ;
    getline(cin, name);

    cout << "Please enter your age :" ;
    cin >> age;

    cout << "Hi "<< name << " you are " << age << " years old";

    return 0;
}
