#include <iostream>
using namespace std;

int Fib(int n)
{
    if (n >= 2)
        return Fib(n - 1) + Fib(n - 2);
    else
        return 1;
}

int main()
{

    int n;
    cout << "Enter the number: "<<"\n";
    cin >>n;

    cout << Fib(n)<<"\n";
  return 0;
}
