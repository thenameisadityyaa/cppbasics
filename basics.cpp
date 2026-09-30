#include <bits/stdc++.h>
using namespace std;

void explainPassByValueAndReference(int &x){
    x = x + 10;
}

int main()
{
    int num = 5;
    explainPassByValueAndReference(num);
    cout << num;
    return 0;
}

