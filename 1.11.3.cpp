#include <iostream>
#include <algorithm>
#include <cmath>

int main() {
    system("chcp 65001");
    int sum = 0;
    int dobutok = 1;

    int arr[5] = {0, 5, -3, -3, -3};

    for (int s = 0; s < 5; ++s) {
        if (arr[s] < 0) {
            sum += arr[s];
        }
    }

    for (int d = 0; d < 5; ++d) {
        dobutok *= arr[d];
    }

    std::cout << "Сума масиву: " << sum << std::endl;
    std::cout << "Добуток масиву: " << dobutok << std::endl;

    std::sort(arr,arr+5);
    for (int sor= 0; sor < 5; ++sor) {
        std::cout << arr[sor] << " ";
    }
    return 0;
}