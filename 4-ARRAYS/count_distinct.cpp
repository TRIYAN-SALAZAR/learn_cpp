#include <iostream>

int count_distinct_in_a_array(int arr[], int size_arr) {
    int n_processed, count = 0;

    for(int i = 0; i < size_arr; i++) {
        n_processed = arr[i];

        if(n_processed != 0) { 
            count++;
            for(int j = 0; j < size_arr; j++) {
                if(arr[j] != 0)
                    if(n_processed == arr[j]) arr[j] = 0;
            }
        }
    }

    return count;
}

int main() {
    int test1[5] = {10, 20, 10, 20, 30};
    int test2[4] = {1, 2, 3, 3};
    int test3[4] = {1, 1, 1, 1};

std::cout << "El numero de elementos distintos es de: " << count_distinct_in_a_array(test1, sizeof(test1) / sizeof(test1[0])) << std::endl;
std::cout << "El numero de elementos distintos es de: " << count_distinct_in_a_array(test2, sizeof(test2) / sizeof(test2[0])) << std::endl;
std::cout << "El numero de elementos distintos es de: " << count_distinct_in_a_array(test3, sizeof(test3) / sizeof(test3[0])) << std::endl;

}