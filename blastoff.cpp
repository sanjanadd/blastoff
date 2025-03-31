#include <iostream>
using namespace std;

int main() {
    int startNumber; // Variable to store the user input

    // Prompting the user for the start number
    cout << "Enter a number to start the countdown: ";
    cin >> startNumber;

    // Count down from user-specified number to 1 using a for loop
    for (int i = startNumber; i >= 1; i--) {
        cout << i << endl;  // Printing each number in descending order
    }

    // Printing blast off after countdown is done
    cout << "Blast off!" << endl; 

    return 0;
}