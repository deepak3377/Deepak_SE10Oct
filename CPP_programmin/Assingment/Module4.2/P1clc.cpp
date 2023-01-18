#include <iostream>

using namespace std;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int subtract(int a, int b)
    {
        return a - b;
    }

    int multiply(int a, int b)
    {
        return a * b;
    }

    int divide(int a, int b)
    {
        return a / b;
    }
};

int main()
{
    Calculator calc;

    cout << calc.add(1, 2) << endl;
    cout << calc.subtract(5, 3) << endl;
    cout << calc.multiply(4, 5) << endl;
    cout << calc.divide(9, 3) << endl;

    return 0;
}
