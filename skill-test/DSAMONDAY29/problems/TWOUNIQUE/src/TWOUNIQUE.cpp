#include <iostream>
#include <cstdlib>
#include <map>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::map;
using std::vector;
using std::begin;
using std::end;
using std::sort;

auto
findSingleNumbers(
    vector<int>& nums
) -> vector<int> {
    map<int,int> n_o;
    vector<int> r(0,0);
    for (int i {}; i < static_cast<int>(nums.size()); i += 1) {
        if (!n_o.contains(nums[i])) {
            n_o[nums[i]] = 1;
        } else {
            n_o[nums[i]] += 1;
        }
    }
    for (const auto& [k, v] : n_o) {
        if (v == 1) {
            r.push_back(k);
        }
    }
    sort(begin(r), end(r));
    return r;
}

auto
main(void) -> int {
    int t {};
    cin>>t;
    while (t) {
        int n {};
        cin>>n;
        vector<int> nums(n,0);
        for (auto& num : nums) {
            cin>>num;
        }
        vector<int> r {findSingleNumbers(nums)};
        for (const auto& e : r) {
            cout<<e<<' ';
        }
        cout<<endl;
        t -= 1;
    }
    return EXIT_SUCCESS;
}