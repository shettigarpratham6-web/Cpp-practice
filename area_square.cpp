#include <iostream>
using namespace std;

void square(float s) {
    cout << "The area of the square is: " << (s * s) << endl;
}

int main() {
    float side;
    cout << "Enter the side length of the square: ";
    cin >> side;
    square(side);
    return 0;
}
