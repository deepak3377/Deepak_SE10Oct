#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    cout << "Before swap: x = " << x << ", y = " << y << endl;

    swapValues(x, y);

    cout << "After swap: x = " << x << ", y = " << y << endl;

    double p = 3.14, q = 2.718;
    cout << "Before swap: p = " << p << ", q = " << q << endl;

    swapValues(p, q);

    cout << "After swap: p = " << p << ", q = " << q << endl;
    return 0;
}
