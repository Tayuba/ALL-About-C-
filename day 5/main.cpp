#include <iostream>

using namespace std;

int main()
{
    string txt = "Ayuba Monnie";
        // print length of text
    cout << txt.length() << endl;
        // print specific letter in the text
    cout << txt[0] << endl;
        // modifying the text
    txt[0] = 'T';
    cout << txt << endl;
        // finding specific character inside the text
    cout << txt.find("Monnie", 0) << endl;
        // printing specific part of the text
    cout << txt.substr(1, 8) << endl;


    return 0;
}
