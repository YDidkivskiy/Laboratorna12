#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    system("chcp 65001");

    const int size = 100;
    int array[size];

    std::srand(std::time(0));

    for (int i = 0; i < size; ++i)
        array[i] = std::rand() % 101 - 50;

    int absolut = 0;
    int high = 0;

    for (int i = 0; i < size; ++i) {
        int absnum = std::abs(array[i]);
        int count = 0;

        for (int j = 0; j < size; ++j) {
            if (std::abs(array[j]) == absnum)
                ++count;
        }

        if (count > absolut) {
            high = absnum;
            absolut = count;
        }
    }

    std::cout << "Найчастіше зустрічається абсолютне число: " << absolut << " (зустрічається " << high << " разів)" << std::endl;

    return 0;
}