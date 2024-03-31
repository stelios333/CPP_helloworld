#include <iostream>
using namespace std;

int main() {
  // Variable types
  int myNIntegerum = 5;               // Integer (whole number without decimals)
  double myFloatNum = 5.99;    // Floating point number (with decimals)
  char myLetter = 'D';         // Character
  string myText = "Hello";     // String (text)
  bool myBoolean = true;   
  int myNum = 15;
  myNum = 25;
  cout << myNum << "\n";
  cout << "I am " << myNum << "years old\n";
  // Adding variables together
  int x = 5;
  int y = 6;
  int sum = x + y;
  cout << sum << "\n"; 
  //declare more than one variable of the same type
  int a = 5, b = 6, z = 50;
  cout << a + b + z << "\n";
  // assigning the same value to multiple variables in one line
  x = y = z = 50;
  cout << x + y + z;
  return 0;
} 