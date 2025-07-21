//Ejemplo 2: Modificadores de acceso y herencia
// Caso 2: Haciendo público a "x"

#include <iostream>
using namespace std;

class Base {
public:
    int x;
    Base(int a) : x(a) {
        cout << "Base \n";
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
        cout << x << " " << y << '\n';
    }
};

int main() {
    Derived d(10, 20);
    d.print();
    cout << d.x << '\n';
    return 0;
}