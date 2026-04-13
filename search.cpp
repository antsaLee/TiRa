#include "search.h"

std::vector<int> generateOrderedOddData(int size) {
    std::vector<int> data;
    data.reserve(size);

    for (int i = 0; i < size; ++i) {
        data.push_back(2 * i + 1);
    }

    return data;
}

int linearSearch(const std::vector<int>& data, int target) {
    for (int i = 0; i < static_cast<int>(data.size()); ++i) {
        if (data[i] == target) {
            return i;
        }
    }

    return -1;
}

int binarySearch(const std::vector<int>& data, int target) {
    int bottom = 0;
    int top = static_cast<int>(data.size()) - 1;

    while (bottom <= top) {
        int mid = (bottom + top) / 2;

        if (data[mid] == target) {
            return mid;
        }
        if (data[mid] < target) {
            bottom = mid + 1;
        } else {
            top = mid - 1;
        }
    }

    return -1;
}
