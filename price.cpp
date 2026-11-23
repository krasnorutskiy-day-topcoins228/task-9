#include <iostream>

int main()
{
    double price;
    std::cout << "Введите цену: ";
    std::cin >> price;
    int kopecks = static_cast<int>(price * 100 + 0.5);
    int rub = static_cast<int>(kopecks / 100);
    int part_kop = static_cast<int>(kopecks % 100);
    std::cout << "Рублей: " << kopecks / 100 << std::endl;
    std::cout << "Копеек: " << kopecks % 100 << std::endl;
    std::cout << "Итого: " << rub << "руб" << part_kop << "коп" <<std::endl;
    return 0;
}
//пользователь вводит цену в рублях и программа пишет рубли и копейки.

//K1