//============================================================================
// Name        : montako.cpp
// Author      : Abdullah
// Version     :
// Copyright   : Your copyright notice
// Description : This program prints numbers
//============================================================================

#include <iostream>

using namespace std;

int x = 1;

void testi() {
    int x = 2;
    {
        int x = 3;
        cout << x << "\n"; // 3
    }
    cout << x << "\n"; // 2
}

int main() {
    testi();
    cout << x << "\n"; // 1
}
