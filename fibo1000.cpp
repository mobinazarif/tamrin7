#include <iostream>
using namespace std;

int Fib(int n)
{
    if (n >= 2) {

        return Fib(n - 1) + Fib(n - 2);
    }
    else
    {
        return 1;
    }

}

int main()
{
   
    for (int i = 0; i < 1000; i++)
    {
        cout << Fib(i) << "\n";

    }
    return 0;
}
