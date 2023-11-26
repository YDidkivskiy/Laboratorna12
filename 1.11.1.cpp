#include <iostream>

int main() {
    system("chcp 65001");

    int array[6] = {1, 4, -6, 213, -44, -50};

    for (int i = 0; i < 6; ++i) {
        if (array[i] < 0) {
            array[i] = 0;
        }
        std::cout << array[i] << " ";
    }
   return 0;
}