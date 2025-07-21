//Ejemplo 2: Modificadores de acceso y herencia
//Caso 1: Protegido a Privado
#include <iostream>
using namespace std;

class Base {
    private:
        int x;
    
    public:
        Base(int a) : x(a){
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
            cout << "(" << x << ", " << y << ")" << endl; // Error de compilacion
        }
};


int main() {
    Derived dv(10, 29);
    dv.print();
    
    return 0;
}