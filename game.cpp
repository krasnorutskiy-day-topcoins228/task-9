#include <iostream>

const int RECORD = 2000; 

int main()
{
    std::string name;
    int points = 0;
    double hours = 0.0;

    std::cout << "Введите имя игрока: ";
    std::cin >> name;
    std::cout << "Введите суммарные очки: ";
    std::cin >> points;
    std::cout << "Введите часы игры: ";
    std::cin >> hours;

    int level = points / 1000;                                              
    int progress = static_cast<int>((points % 1000) / 1000.0 * 100 + 0.5);  
    long long ms = static_cast<long long>(hours) * 3600 * 1000;             
    char rank = 'D' - level;                                                
    bool recordBeaten = points > RECORD;                                    

    std::cout << "\nИгрок: " << name << std::endl;
    std::cout << "Очки: " << points << ", уровень: " << level << std::endl;
    std::cout << "Прогресс до уровня " << level + 1 << ": " << progress << "%" << std::endl;
    std::cout << "Миллисекунд в игре: " << ms << std::endl;
    std::cout << "Ранг: " << rank << std::endl;
    std::cout << "Рекорд побит: " << recordBeaten << std::endl;

    return 0;
}
