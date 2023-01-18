#include <iostream>

using namespace std;

class Swap
{
    int x, y;

public:
    void setValues(int a, int b)
    {
        x = a;
        y = b;
    }

    void displayValues()
    {
        cout << "x = " << x << ", y = " << y << endl;
    }

    friend void swapValues(Swap &s);
};

void swapValues(Swap &s)
{
    s.x = s.x + s.y;
    s.y = s.x - s.y;
    s.x = s.x - s.y;
}

int main()
{
    Swap s;
    s.setValues(10, 20);
    cout << "Before swapping:" << endl;
    s.displayValues();

    swapValues(s);

    cout << "After swapping:" << endl;
    s.displayValues();

    return 0;
}
