#include <iostream>
#include <vector>
#include <algorithm>

bool ing(std::pair<int, int> &a, std::pair<int, int> &b) {
    return a.second < b.second; // Return true if a should come before b
}

int main() {
    std::vector<std::pair<int, int>> v = {{1, 3}, {4, 1}, {2, 2}, {5, 0}};

    // Sort by the second element of the pairs
    std::sort(v.begin(), v.end(), ing);

    // Output the sorted vector of pairs
    for (const auto& p : v) {
        std::cout << "{" << p.first << ", " << p.second << "} ";
    }

    return 0;
}
