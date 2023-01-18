#include <iostream>
using namespace std;

class Matrix {
    private:
        int *data;
        int size;

    public:
        Matrix(int s) {
            size = s;
            data = new int[size];
        }

        void input() {
            for (int i = 0; i < size; i++) {
                cin >> data[i];
            }
        }

        void display() {
            for (int i = 0; i < size; i++) {
                cout << data[i] << " ";
            }
            cout << endl;
        }

        friend Matrix operator+(Matrix &m1, Matrix &m2) {
            Matrix temp(m1.size);
            for (int i = 0; i < m1.size; i++) {
                temp.data[i] = m1.data[i] + m2.data[i];
            }
            return temp;
        }
};

int main() {
    int size;
    cout << "Enter the size of the matrices: ";
    cin >> size;

    Matrix m1(size);
    Matrix m2(size);

    cout << "Enter the elements of the first matrix: ";
    m1.input();

    cout << "Enter the elements of the second matrix: ";
    m2.input();

    Matrix m3 = m1 + m2;

    cout << "The addition of the two matrices is: ";
    m3.display();

    return 0;
}
