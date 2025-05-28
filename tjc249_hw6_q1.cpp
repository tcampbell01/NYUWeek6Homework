#include <iostream>
using namespace std;

int fib(int n);

int main()
{

    int input;

    cout << "Please enter a positive integer:" << endl;
    cin >> input;

    // call fib function, input becomes int n
    int fib_number = fib(input);

    cout << fib_number << endl; // print the result

    return 0;
}

int fib(int n)
{

    int i;
    int one_previous = 1;
    int two_previous = 1;
    int current_n = 0;

    if (n == 1 || n == 2)
    {
        current_n = 1;
    }
    else
    {

        for (i = 3; i <= n; i++)
        {
            current_n = one_previous + two_previous;
            two_previous = one_previous;
            one_previous = current_n;
        }
    }

    return current_n; // return the computed Fibonacci number, go back to main function line 22
}