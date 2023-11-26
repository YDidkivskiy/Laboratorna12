#include <iostream>
#include <cmath>

int main() {
    system("chcp 65001");

    int masiv[6] = {1,2,3,4,5,6};

    int min = std::fabs(masiv[0]),summaM = 0;
    bool zero = false;

    for (int m = 1; m < 6; m++) {
        if (std::fabs(masiv[m]) < min) {
            min = std::fabs(masiv[m]);
        }
    }

    for (int zxc = 0; zxc < 6; zxc++){
        if (zero) {
            summaM += std::fabs(masiv[zxc]);
        }

        if (masiv[zxc] == 0) {
            zero = true;
        }
    }

    std::cout << "Мінімальний за модулем елемент: " << min << std::endl;
    std::cout << "Сума модулів елементві масиву, розташованих після першого елемента, рівного нулю: " << summaM << std::endl;
    return 0;
}