//Ejemplo 2: Modificadores de acceso y herencia
//Caso 3: Acceso protegido en herencia

#include <iostream>
using namespace std;

class Base {
    protected:
        int x;
    
    public:
        Base(int a) : x(a) {
            cout << "Base \n";
        }
};

class Derived : protected Base {
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
    dv.x; // Error de compilacion
    return 0;
}