#include <iostream>

int main()
{
    int goals = 27;                                 // строка А
    int avgGoals = static_cast<double>(goals) / 8;   // строка Б
    std::cout << "Всего голов: " << goals << std::endl;
    std::cout << "Среднее за матч: " << avgGoals << std::endl;
    std::cout << "Мячей сыграно: " << static_cast<int>(8.9) << std::endl;  // строка В
    return 0;
}

//строка А отсутвовала ; в конце строки.
//строка Б неправильно было написано static(было statc)
//строка В отстутсовало > после int
