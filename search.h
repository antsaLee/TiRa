#ifndef SEARCH_H
#define SEARCH_H

#include <vector>

std::vector<int> generateOrderedOddData(int size);
int linearSearch(const std::vector<int>& data, int target);
int binarySearch(const std::vector<int>& data, int target);

#endif
