#include <iostream>
using namespace std;

int main() {
    int startnumber; // Variable to store the user input

    // Prompting the user to write the starting number and storing it in the variable startnumber
    cout << "Enter a number to start the countdown: ";
    cin >> startnumber;

    // For loop to count down from the user input (startnumber) to 1
    for (int i = startnumber; i >= 1; i--) {
        cout << i << endl;  // Printing each number in descending order
    }

    // Printing "Blast off!" after the countdown is finished
    cout << "Blast off!" << endl; 

    return 0;
}