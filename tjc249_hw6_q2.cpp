#include <iostream>
using namespace std;


void printShiftedTriangle(int n, int m, char symbol);

void printPineTree(int n, char symbol);

int main() {

    int input_n;
    int input_m;
    char symbol;

    cout << "Please enter a positive integer: " << endl;
    cin >> input_n;
    cout << "Please enter the number of spaces from the left to shift your pinetree: " << endl;
    cin >> input_m;
    cout << "Please enter a symbol with which to build your pinetree: " << endl;
    cin >> symbol;

    printShiftedTriangle(input_n, input_m, symbol);
    printPineTree(input_n, symbol);

    return 0;


}


void printShiftedTriangle(int n, int m, char symbol) {

    int spaces = m + n - 1;
    int number_of_symbols = 1;

    for(int i = 1; i <= n; i ++) {

        

        //spaces
        for(int j = 1; j <= spaces; j++) {
            
            cout << " ";

        } 
        spaces = spaces - 1;

        //symbols
        for(int k = 1; k <= number_of_symbols; k++) {
            cout << symbol;

        }
        number_of_symbols = number_of_symbols +2;
        cout << endl;
    }

    cout << endl;


}



void printPineTree(int n, char symbol) {
    int number_of_rows = 2;
    int spaces = n;
    int number_of_symbols = 1;

    //number of triangles
    for (int i = 1; i <= n; i++) {


        //each number of rows in each triangle
        for(int j = 1; j <= number_of_rows; j++) {

            
            //spaces
            for(int k = 1; k <= spaces; k++) {
                cout << " ";
            }
            spaces = spaces - 1;

            //symbols
            
            for(int l = 1; l <= number_of_symbols; l++) {

                cout << symbol;
            }
            cout << endl;
            number_of_symbols = number_of_symbols + 2;
        }
        // cout << endl;

        number_of_rows = number_of_rows + 1;
        
        //reset spaces and number_of_symbols
        spaces = n;
        number_of_symbols = 1;
        

    }
   

}