#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//*********************************************************************
// Program:	findAvg.cpp
//
// Program that outputs the average score from a file that is listed
// in the command-line argument.
//*********************************************************************

//*********************************************************************
// This function returns the average score in the file that is
// passed to it as an argument.
//*********************************************************************
int averageScore(char name[]) {

  ifstream f;
  int count = 0;
  int num;
  int sum = 0;

  f.open(name);

  //*************************************************************
  // Scan through the file to add scores to a sum.
  //*************************************************************
  while (f >> num) {
    sum = sum + num;
    count++;
  }
  f.close();

  return (sum / count);
}

int main(int argc, char *argv[]) {

  int avg = averageScore(argv[1]);

  cout << avg << endl;
  
  return 0;
}
