#include <bits/stdc++.h>
using namespace std;

void print1(int n){
    for(int i = 0; i < n; i++){
        for(int j =0; j < n; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void print2(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void print3(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << j+1;
        }
        cout << endl;
    }
}

void print4(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << i+1;
        }
        cout << endl;
    }
}




int main (){

    int t;
    cin >> t;

    for (int i = 0; i < t ; i++){
        int n;
        cin >> n;
        print4(n);
        cout << endl;
        
    }
    return 0;
}