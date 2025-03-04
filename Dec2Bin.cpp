#include <iostream> // cin and cout
#include <string>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int main ()
{
  unsigned long long dec; // Number to convert.
  cout << "Hello! Please enter your decimal number: ";
  cin >> dec;
  string bits;


  while(dec > 0){
    bits.append(to_string(dec % 2));
    dec /= 2;
  }
  reverse(bits.begin(), bits.end());
  cout << "Your binary number is: " << bits << endl;
  system("pause");

}
