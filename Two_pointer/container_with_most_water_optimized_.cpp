#include <iostream>
#include <vector>
#include <algorithm> // Required for std::min and std::max

int main() {
    // Fast I/O
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    const std::vector<int> nums = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    int max_area = 0;
    int left = 0;
    int right = static_cast<int>(nums.size()) - 1;

    // Strict less-than since a container needs width > 0
    while (left < right) {
        const int width = right - left;
        const int height = std::min(nums[left], nums[right]);
        
        max_area = std::max(max_area, height * width);

        // Shift the pointer with the smaller height
        if (nums[left] < nums[right]) {
            ++left; // Pre-increment is idiomatic in C++
        } else {
            --right;
        }
    }

    std::cout << max_area << '\n'; // '\n' is faster than std::endl

    return 0;
}
