//============================================================================
// Name        : bitti.cpp
// Author      : Abdullah
// Version     :
// Copyright   : Your copyright notice
// Description : prints out bits
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int x = 37;
	for (int k = 31; k >= 0; k--) {
	    if (x&(1<<k)) cout << "1";
	    else cout << "0";
	}
	cout << "\n";
}
