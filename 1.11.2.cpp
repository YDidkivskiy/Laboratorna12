#include <iostream>

int main() {
    system("chcp 65001");
    const int n = 7;
    int a[n] = {0, 0, 0, 1, 2, 3, 3};

    int num = 1;
    int maxnum = 1;

    for (int j = 1; j < n; ++j) {
        if (a[j] == a[j - 1]) {
            num++;
        } else {

            if (num > maxnum) {
                maxnum = num;
            }
            num = 1;
        }
    }

    if (num > maxnum) {
        maxnum = num;
    }

    std::cout << "Найбільша кількість елементів розміщених підряд: " << maxnum << std::endl;
    return 0;
}