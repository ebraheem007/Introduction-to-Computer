#include <iostream>
using namespace std;

int main() {
    int x, y;

    cout << "Enter 5 Digit number in Variable X: ";
    cin >> x;

    int digit1 = x % 10; x = x / 10;
    int digit2 = x % 10; x = x / 10;
    int digit3 = x % 10; x = x / 10;
    int digit4 = x % 10; x = x / 10;
    int digit5 = x % 10;

    y = digit1 * 10000 + digit2 * 1000 + digit3 * 100 + digit4 * 10 + digit5;

    cout << "5 Digit number in reverse order in Variable Y is: " << y << endl;

    return 0;
}
