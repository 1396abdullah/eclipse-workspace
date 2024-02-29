//============================================================================
// Name        : vector.cpp
// Author      : Abdullah
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++ using vector
//============================================================================

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "Abdullah", "Desktop"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}
