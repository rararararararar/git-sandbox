#include <iostream>

int main() {
    int choice = 0;
    do {
        std::cout << "\n--- Меню (Вариант 2) ---\n";
        std::cout << "1. Расчет формулы\n";
        std::cout << "0. Выход\n";
        std::cout << "Выберите пункт: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Расчет выполнен.\n";
                break;
            case 0:
                std::cout << "Выход из программы.\n";
                break;
            default:
                std::cout << "Неверный ввод.\n";
        }
    } while (choice != 0);

    return 0;
}
