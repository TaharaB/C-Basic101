#include <iostream>
using namespace std;

int doubleDigit(int n) {
   int answer = 0;
   int mult = 1;
   while (n > 0) {
      answer += (n % 10) * 11 * mult;
      n /= 10;
      mult *= 100;
   }
   return answer;
}

int doubleDigitR(int n) {
   if (n == 0)
      return 0;
   return doubleDigit(n/10) * 100 + (n%10) * 11;
}

int main() {
   cout << doubleDigit(9) << endl;
   cout << doubleDigitR(9) << endl;
   cout << doubleDigit(81) << endl;
   cout << doubleDigit(243) << endl;
   cout << doubleDigit(244) << endl; 
   return 0;
}

