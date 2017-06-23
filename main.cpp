#include <iostream>
using namespace std;

int main(){
  int x = 0; // numeric datatype (whole numbers);
  cout << "x(int) is equal to " << x << endl;
  float w = 1.32; // a numeric datatype (always signed and holds 8 bytes of data in memory);
  cout << "w(float) is equal to " << w << endl;
  signed int z = -12; // an integer that can have both positive and negative;
  cout << "z(signed) is equal to " << z << endl;
  unsigned int t = 2; // an integer that can have only positive numbers;
  cout << "t(unsigned) is equal to " << t << endl;
  double temp = 32.4381; // a numeric datatype (always signed and holds larger bytes of data in memory);
  cout << "temp(double) is equal to " << temp << endl;
  string a = "hello world!"; // a string datatype that holds a sentence;
  cout << "a(string) is equal to " + a << endl;
  char b[2] = "b"; // string datatype that only has 1 alpha character;
  cout << "b(char) is equal to " << b << endl;
  bool isTrue = true;
  cout << "isTrue(bool) is equal to " << isTrue << endl;
  bool isFalse = false;
  cout << "isFalse(bool) is equal to " << isFalse << endl;
  return 0;
}
