#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::boolalpha;
using std::map;
using namespace std::literals::string_literals;

class Solution {
    public:
        bool hasDuplicate(const vector<int>& nums) {
            map<int,int> n_o;
            int nums_size {static_cast<int>(nums.size())};
            for (int i {}; i < nums_size; i += 1) {
                if (!n_o.contains(nums[i])) {
                    n_o[nums[i]] = 1;
                } else {
                    n_o[nums[i]] += 1;
                }
            }
            bool has_duplicate {false};
            for (const auto& [k,v] : n_o) {
                if (v > 1) {
                    has_duplicate = true;
                    break;
                }
            }
            return has_duplicate;
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
        bool has_duplicate {solution->hasDuplicate(nums)};
        if (has_duplicate) {
            cout<<"YES"s<<endl;
        } else {
            cout<<"NO"s<<endl;
        }
        T -= 1;
    }
    return EXIT_SUCCESS;
}