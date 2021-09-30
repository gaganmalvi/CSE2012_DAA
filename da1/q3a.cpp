#include <iostream>
using namespace std;

int fibonacciSeq(int n)
{
    if (n <= 1)
        return n;
    return fibonacciSeq(n-1) + fibonacciSeq(n-2);
}

int main ()
{
    int n;
    cout << "[*] Enter the position of the Fibonacci sequence you wish to view: ";
    cin >> n;
    cout << "[*] Fibonacci series till the position " << n << ": " << endl;
    for (int i = 0; i <= n; i++) {
        cout << fibonacciSeq(i) << " ";
    }
    return 0;
}
