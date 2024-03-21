#include <vector>

#pragma once

class IntegerSet {
    public:
    void AddNumber(int num);
    void DeleteNumber(int num);
    int GetItem(int pos);
    private:
    std::vector<int> numbers_;
};