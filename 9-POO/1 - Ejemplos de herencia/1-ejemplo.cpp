//Ejemplo 1: Constructor de clase base y derivada

#include <iostream>
using namespace std;

class Base {
    protected:
        int x;
    
    public:
        Base(int a) : x(a) {
            cout << "Base" << endl;
        }
};

class Derived : public Base {
    private:
        int y;
    
    public:
        Derived(int a, int b) : Base(a), y(b) {
            cout << "Derived \n";
        }

        void print() {
            cout << "(" << x << ", " << y << ")" << endl;
        }
};

int main() {
    Derived dv(10, 29);
    dv.print();

    return 0;
}