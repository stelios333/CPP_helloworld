#include <iostream>
#include <limits>
using namespace std;

int main() {
  // Test comment
  cout << "Hello World!\n";
  cout << "I am learing C++!\n";
  std::cin.clear(); // reset any error flags
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any characters in the input buffer until we find an enter character
  std::cin.get();
  return 0;
}