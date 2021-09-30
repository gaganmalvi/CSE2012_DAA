#include <iostream>
using namespace std;

void fibonacciSeq(int no) {
   int x = 0, y = 1, z = 0;
   for (int i = 0; i <= no; i++) {
      cout << x << " ";
      z = x + y;
      x = y;
      y = z;
   }
}

int main() {
   int no;
   cout << "[*] Enter the position of the Fibonacci sequence you want to view: ";
   cin >> no;
   cout << "[*] The Fibonacci sequence up to position " << no << ": " << endl;
   fibonacciSeq(no);
   return 0;
}
