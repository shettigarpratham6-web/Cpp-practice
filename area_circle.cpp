#include <iostream>
#include <cmath>  
using namespace std;

float area(float r) {
    return M_PI * r * r;
}

int main() {
    float radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle is: " << area(radius) << endl;
    return 0;
}
