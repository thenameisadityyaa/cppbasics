#include <bits/stdc++.h>
using namespace std;

int main()
{
    int day;
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    default:
        cout << "Sunday";
        break;
        break;
    }
    return 0;
}

/*
Switch Case:
Given the day number print which day it is of the week,
assume week starts from Monday and ends on Sunday.
*/