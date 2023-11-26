#include <iostream>
#include <algorithm>


int main() {
    system("chcp 65001");

    const int size = 8;
    int array[size] = {2,1,0,1,2,3,4,5};


    int minus = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] < 0) {
            minus++;
        }
    }
    std::cout <<"Кількість чисел в масиві нижче 0 = " << minus <<std::endl;

    int min = 0, sum = 0;

    for (int i = 0; i < size; i++) {
        if (array[i] == 0) {
            min = i;
        }
    }

    for (int i = min; i < size; i++) {
        sum += array[i];
    }
    std::cout << "Сумма елементів після нуля: " << sum <<std::endl;

    for (int zxc = 0; zxc < size - 1; ++zxc) {
        int smallestIndex = zxc;

        for (int currentIndex = zxc + 1; currentIndex < size; ++currentIndex) {

            if (array[currentIndex] < array[smallestIndex]) {
                smallestIndex = currentIndex;
        }


        std::swap (array[zxc], array[smallestIndex]);
    }


    for (int j = 0; j < size; ++j) {
        std::cout << array[j] << " ";
    }

    return 0;
    }
}