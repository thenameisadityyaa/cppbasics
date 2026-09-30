#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        cout << "A";
    }
    else if (b > c)
    {
        cout << "B";
    }
    else
    {
        cout << "C";
    }
    return 0;
}

/*
Given three intergers, a, b and c,
print which of these integers is the largest,
if two or more integers are equal and are the largest,
print any of them.
*/