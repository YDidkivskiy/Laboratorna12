#include <iostream>


int main() {
    system("chcp 65001");

    double array1[10] = {0,1.125,-2.9,3,4.99,42.24124,55,11.99,2,999.1};
    double a;

    std::cout << "Введи число A для підрахування кількості елементів менше за ваше число: ";
    std::cin >> a;

    int kilkist = 0, summ = 0;


    for (int qwe = 0; qwe < 10; ++qwe){
        if (array1[qwe] < a) {
            kilkist++;
        }
    }

    for (int sf = 0; sf < 10; ++sf) {
        summ += static_cast<int>(array1[sf]);
    }

    int currentminus = 0;
    for (int l = 0; l < 10; ++l) {
        if (array1[l] < 0) {
            currentminus = l;
        }
    }

    if (currentminus != -1) {
        int sum = 0;
        for (int i = currentminus + 1; i < 10; ++i) {
            sum += static_cast<int>(array1[i]);
        }

        std::cout << "Сума цілих частин елементів після останнього від'ємного елемента: " << sum << std::endl;
    }

    std::cout << "Кількість елементів масиву менших за A = " << kilkist << std::endl;
    return 0;
}