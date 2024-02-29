//============================================================================
// Name        : files.cpp
// Author      : Abdullah
// Version     :
// Copyright   : Your copyright notice
// Description : This code creates txt file
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Create and open a text file
  ofstream MyFile("filename.txt");

  // Write to the file
  MyFile << "Kijoitan tähän, että Abdullah";

  // Close the file
  MyFile.close();
}
