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
class FileError{
public:
  FileError(){}
  FileError ( string theString) : fileName (theString){}
  string getName() { return fileName; }
private:
  string fileName;
};
//*************************************************************************
// This function returns the average score in the file that is
// passed to it as an argument
//*************************************************************************
int averageScore (char name[]){
  ifstream f;
  int count = 0;
  int num;
  int sum = 0;
f.open(name);
if (f.fail())
  throw FileError(name);
//*************************************************************************
// Scan through the file to add scores to a sum
//*************************************************************************
While ( f> num){
sum = sum + num;
count++;
}
f.close();
return (sum/ count);
}
int main ( int argc, char *argv []){
  int avg;
  char filename[20];
  try {
    if ( argc == 1)
      throw argc;
    if ( argc > 2 ){
    string s = argv [2];
    throw s;
    }
  }
catch ( int e) {
  char filename[20] = "scores.txt";

  cout << "You didn't specify a file name, so I'm confusing scores.txt by default" << endl;
agv = averageScore (filename);
}
catch (string x){
cout << "You have tpp many file name arguments " << endl;
cout << " I am ignoring this argument: " << x << endl;

avg= averageScore(argv[1]);


