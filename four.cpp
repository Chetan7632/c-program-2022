#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Circle {
private:
    float radius;
public:
    Circle(float r=1.0) { radius = r; }
    float area() { return M_PI * radius * radius; }
    float circumference() { return 2 * M_PI * radius; }
};

int main() {
    float r;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    Circle c(r);
    cout << fixed << setprecision(2);
    cout << "Area of the circle = " << c.area() << endl;
    cout << "Circumference of the circle = " << c.circumference() << endl;
    return 0;
}

