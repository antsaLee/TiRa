#include "sorting.h"

#include <chrono>
#include <iostream>
#include <random>

std::vector<int> generateRandomData(int size) {
    std::vector<int> data;
    data.reserve(size);

    unsigned seed = static_cast<unsigned>(
        std::chrono::steady_clock::now().time_since_epoch().count());
    std::mt19937 generator(seed);
    std::uniform_int_distribution<int> distribution(0, size * 10);

    for (int i = 0; i < size; ++i) {
        data.push_back(distribution(generator));
    }

    return data;
}

void insertionSort(std::vector<int>& data) {
    for (int i = 1; i < static_cast<int>(data.size()); ++i) {
        int current = data[i];
        int j = i - 1;

        while (j >= 0 && data[j] > current) {
            data[j + 1] = data[j];
            --j;
        }

        data[j + 1] = current;
    }
}

void printFirstElements(const std::vector<int>& data, int count) {
    int shown = count;
    if (shown > static_cast<int>(data.size())) {
        shown = static_cast<int>(data.size());
    }

    for (int i = 0; i < shown; ++i) {
        std::cout << data[i];
        if (i + 1 < shown) {
            std::cout << " ";
        }
    }
    std::cout << "\n";
}
