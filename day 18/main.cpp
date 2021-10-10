#include <iostream>

using namespace std;

int main()
{
    int numarray[3][2] =
    {
        {10, 48},
        {15, 98},
        {0, 4}
    };

     for(int i = 0; i < 3; i++)
     {
         for(int j = 0; j < 2; j++)
         {
             cout << numarray[i][j];
         }
         cout << endl;
     }
    return 0;
}
