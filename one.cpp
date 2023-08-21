#include <iostream>
using namespace std;

int power(int x, int y = 2) {
    int result = 1;
    for (int i = 0; i < y; i++) {
        result *= x;
    }
    return result;
}

int main() {
    int x = 5;
    int y = 3;
    int result1 = power(x);
    int result2 = power(x, y);
    cout << "x^2 = " << result1 << endl;
    cout << "x^" << y << " = " << result2 << endl;
    return 0;
}


