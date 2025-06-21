/*
    Author: Triyan Salazar
    Description: Programa para invertir el orden de dos numeros e intercambiar sus valores entre variables
    Version: 1.0
    Last Updated: 1/06/2025
*/

#include <iostream>
#include <string.h>

using namespace std;

void reverse_dig(int &a, int &b) {
    string reverse_a, reverse_b;
    int temp_a = a, temp_b = b;
    while (temp_a > 0 || temp_b > 0) {
        if (temp_a > 0) {
            int last_number_a = temp_a % 10;
            reverse_a += (last_number_a + '0');
            temp_a /= 10;
        }
        if (temp_b > 0) {
            int last_number_b = temp_b % 10;
            reverse_b += (last_number_b + '0');
            temp_b /= 10;
        }
    }
    cout << "Inside the function reverse_digit" << endl;
    cout << reverse_a << " " << reverse_b << endl << endl;

    a = stoi(reverse_a);
    b = stoi(reverse_b);
}

void swap(int &a, int &b) {
    cout << "Inside the function swap" << endl;
    cout << a << " " << b << endl;

    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int number_a = 1234;
    int number_b = 67890;
    string expected_ouput = "9876 4321";

    reverse_dig(number_a, number_b);
    swap(number_a, number_b);

    cout << endl << "Return into the function main" << endl;
    cout << "Expected ouput: "<< expected_ouput << endl;
    cout << "output: " << number_a << " " << number_b << endl;

    return 0;
}