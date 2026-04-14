#include "ui.h"

#include "search.h"
#include "sorting.h"

#include <iostream>
#include <vector>

void printMenu() {
    std::cout << "1) Linear searching\n";
    std::cout << "2) Binary searching\n";
    std::cout << "3) n^2 type sorting\n";
    std::cout << "4) n * log( n ) type of sorting\n";
    std::cout << "5) Sorting algorithms performance inspection\n";
    std::cout << "6) Quit\n";
    std::cout << "Your choice: ";
}

void runLinearSearching() {
    int size = 0;
    std::cout << "Data size: ";
    std::cin >> size;

    std::vector<int> data = generateOrderedOddData(size);

    int target = 0;
    std::cout << "Search value: ";
    std::cin >> target;

    int index = linearSearch(data, target);

    if (index >= 0) {
        std::cout << "Value found. Element number: " << (index + 1) << "\n";
    } else {
        std::cout << "Value not found.\n";
    }
}

void runBinarySearching() {
    int size = 0;
    std::cout << "Data size: ";
    std::cin >> size;

    std::vector<int> data = generateOrderedOddData(size);

    int target = 0;
    std::cout << "Search value: ";
    std::cin >> target;

    int index = binarySearch(data, target);

    if (index >= 0) {
        std::cout << "Value found. Element number: " << (index + 1) << "\n";
    } else {
        std::cout << "Value not found.\n";
    }
}

void runQuadraticSorting() {
    int size = 0;
    std::cout << "Data size: ";
    std::cin >> size;

    std::vector<int> data = generateRandomData(size);

    int shownCount = 0;
    std::cout << "How many elements are shown from the beginning: ";
    std::cin >> shownCount;

    std::cout << "Before sorting:\n";
    printFirstElements(data, shownCount);

    insertionSort(data);

    std::cout << "After sorting:\n";
    printFirstElements(data, shownCount);
}
