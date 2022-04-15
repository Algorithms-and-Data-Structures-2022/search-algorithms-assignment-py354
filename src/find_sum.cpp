#include "assignment/find_sum.hpp"  // find_elements

namespace assignment {

  std::optional<std::pair<int, int>> find_sum(const std::vector<int>& data, int sum) {

    // Tips: для создания пары (pair) используйте функцию std::make_pair
    if (data.size() < 2) {
      return std::nullopt;
    }

    int left = 0;
    int right = data.size() - 1;
    while (left != right) {
      int s = data[left] + data[right];
      if (s == sum) {
        return std::make_pair(left, right);
      }

      if (s > sum) {
        right -= 1;
      } else {
        left += 1;
      }
    }
    return std::nullopt;
  }

}  // namespace assignment