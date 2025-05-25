#include <iostream>
using namespace std;

void printDivisors(int num);

int main() {

    int input;
    int divisors;

    cout << "Please enter a positive integer >= 2: ";
    cin >> input;

    printDivisors(input);

    return 0;

}

void printDivisors(int num) {

    for (int i = 1; i <= num; i++) {
        if(num % i == 0) {
            cout << i << " ";
        }
    }

}

