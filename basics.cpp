#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    cin >> age;
    if (age >= 18)
    {
        cout << "Adult!";
    }
    else if (age < 18 && age >= 10)
    {
        cout << "Teen";
    }
    else
    {
        cout << "Child";
    }
    return 0;
}

// Given an integer age
// - if age >= 18 , print "Adult"
// - if age < 18 and age >= 10, print "Teen"
// if age < 10, print "Child"