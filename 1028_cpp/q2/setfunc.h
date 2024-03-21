#include <set>
#include <string>

class SetFunc {
    public:
    void parseSet(const std::string& str);
    void printSet(const std::set<int>& set_);
    std::set<int> getIntersection(const std::set<int>& set_);
    std::set<int> getUnion(const std::set<int>& set_);
    std::set<int> getDifference(const std::set<int>& set_);
    private:
    std::set<int> set_0;
    std::set<int> set_1;
};