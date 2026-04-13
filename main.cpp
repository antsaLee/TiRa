#include "ui.h"

#include <iostream>

int main() {
    while (true) {
        printMenu();

        int choice = 0;
        std::cin >> choice;
        std::cout << "\n";

        if (choice == 1) {
            runLinearSearching();
        } else if (choice == 2 || choice == 3 || choice == 4 || choice == 5) {
            std::cout << "Choice " << choice << " not implemented.\n";
        } else if (choice == 6) {
            break;
        } else {
            std::cout << "Unknown choice.\n";
        }

        std::cout << "\n";
    }

    return 0;
}
