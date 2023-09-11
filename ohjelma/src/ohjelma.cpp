//============================================================================
// Name        : ohjelma.cpp
// Author      : Abdullah
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
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

void testi2() {
int ika;
cout << "Kuinka vanha olet? ";
cin >> ika;
if (ika < 0 || ika > 120) {
    cout << "Mahdotonta";
} else if (ika < 18) {
    cout << "Olet alaikäinen";
} else {
    cout << "Olet aikuinen" "\n";
}

}


int main() {
    testi();
    cout << x << "\n"; // 1
    testi2();
}
