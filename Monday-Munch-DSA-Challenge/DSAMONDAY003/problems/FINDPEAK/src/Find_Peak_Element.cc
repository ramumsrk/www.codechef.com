#include <cstdlib>
#include <vector>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

class Solution {
    public:
        int findPeakElement(const vector<int>& nums) {
            int nums_size {static_cast<int>(nums.size())};
            int peak_element_index {};
            for (int i {1}; i <= nums_size-2 ; i += 1) {
                if (nums[i] > nums[i-1] && nums[i] > nums[i+1]) {
                    if (i > peak_element_index) {
                        peak_element_index = i;
                    }
                }
            }
            return peak_element_index;
        }
};

auto
main(void) -> int {
    int T {};
    cin>>T;
    Solution * solution = new Solution();
    while (T) {
        int N {};
        cin>>N;
        vector<int> nums(N,0);
        for (auto& e : nums) {
            cin>>e;
        }
        int peak_element_index {solution->findPeakElement(nums)};
        cout<<peak_element_index<<endl;
        T -= 1;
    }
    return EXIT_SUCCESS;
}