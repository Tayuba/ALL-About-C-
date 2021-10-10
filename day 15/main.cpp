#include <iostream>

using namespace std;

    string getDayofWeek(int dayNum)
    {
        string dayName;


        switch(dayNum)
        {
        case 0:
            dayName = "Monday";
            break;
        case 1:
            dayName = "Tuesday";
            break;
        case 2:
            dayName = "Wednesday";
            break;
        case 3:
            dayName = "Thursday";
            break;
        case 4:
            dayName = "Friday";
            break;
        case 5:
            dayName = "Saturday";
            break;
        case 6:
            dayName = "Sunday";
            break;
        default:
            dayName = "Invalid day number";
        }
        return dayName;
    }

int main()
{
    string ans;
    int num;
    cout << "Enter day number starting from 0 - 7:"<< endl;
    cin >> num;

    ans = getDayofWeek(num);
    cout <<ans;


    return 0;
}
