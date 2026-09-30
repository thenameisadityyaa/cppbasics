#include <bits/stdc++.h>
using namespace std;

int main()
{
    int grade;
    cin >> grade;
    if (grade >= 90)
    {
        cout << "Grade A";
    }
    else if (grade >= 75)
    {
        cout << "Grade B";
    }
    else if (grade >= 50)
    {
        cout << "Grade C";
    }
    else if (grade >= 35)
    {
        cout << "Grade D";
    }
    else
    {
        cout << "Fail";
    }
    return 0;
}

/*
Given the marks of a student, tell us the grade he is getting following the below rules
- Grade A (>=90)
- Grade B (>= 70 and < 90)
- Grade C (>= 50 and < 70)
- Grade D (>= 35 and < 50)
- Fail (< 30)
*/