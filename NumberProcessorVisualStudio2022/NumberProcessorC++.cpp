#include <iostream>
using namespace std;

// Function to perform the specified operations recursively
void processNumber(int num) {
    // Base case: if the number is 1, stop the recursion
    if (num == 1) {
        cout << num << endl;
        return;
    }

    // Print the current number
    cout << num << " -> ";

    // If the number is odd
    if (num % 2 != 0) {
        processNumber(num * 3 + 1);
    }
    // If the number is even
    else {
        processNumber(num / 2);
    }
}

int main() {
    int num;

    // Prompt user for input
    cout << "Enter a number between 1 and 9: ";
    cin >> num;

    // Validate input
    if (num < 1 || num > 9) {
        cout << "Invalid input. Please enter a number between 1 and 9." << endl;
        return 1;
    }

    // Call the recursive function to process the number
    processNumber(num);

    // Wait for user input before exiting
    cout << "Press Enter to exit..." << endl;
    cin.ignore();  // Ignore any remaining input
    cin.get();     // Wait for the user to press Enter

    return 0;
}
