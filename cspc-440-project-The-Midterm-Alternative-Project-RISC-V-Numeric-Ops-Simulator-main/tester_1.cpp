#include <iostream>
#include <cstdint>
#include "twosComplement.h"

using namespace std;

int main() {
    int32_t number;
    unsigned bits;

    cout << "Enter an integer: ";
    cin >> number;

    cout << "Enter bit width (2, 4, 8, 16, 32): ";
    cin >> bits;


    twosComplement example(number);

    cout << "\n=== " << bits << "-bit Mode ===" << endl;

    cout << "Original (" << number << "): ";
    example.showBinary(bits);
    cout << endl;

    cout << "Two's Complement (" << example.getTwosComplement() << "): ";
    example.showTwosBinary(bits);
    cout << endl;

    return 0;
}
