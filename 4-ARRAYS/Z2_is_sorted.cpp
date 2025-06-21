/*
    Author: Triyan Salazar
    Description: Programa para verificar si un arreglo dado del tipo entero esta ordenado de 
    menor a mayor.
    Version: 1.0
    Last Updated: 1/06/2025
*/

#include <iostream>

int is_sorted(int array[], int size) {
    int length = size / sizeof(array[0]);
    if(length == 1) return true;

    for(int i = 0; i < length - 1; i++) {
        if(!(array[i] <= array[i + 1])) return false;
    }

    return true;
}

int main() {
    int test1[1];
    int test2[2];
    int test3[5] = {10, 20, 30, 30, 34};
    int test4[6] = {1, 2, 4, 2, 5, 0};

    std::cout << std::boolalpha;
    std::cout << (is_sorted(test1, sizeof(test1)) ? "Is sorted" : "Not sorted" )<< std::endl;
    std::cout << (is_sorted(test2, sizeof(test2)) ? "Is sorted" : "Not sorted" )<< std::endl;
    std::cout << (is_sorted(test3, sizeof(test3)) ? "Is sorted" : "Not sorted" )<< std::endl;
    std::cout << (is_sorted(test4, sizeof(test4)) ? "Is sorted" : "Not sorted" )<< std::endl;

    return 0;
}