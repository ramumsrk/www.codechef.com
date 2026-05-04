#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::map;
using std::begin;
using std::end;
using std::sort;

class Solution {
    public:
        vector<long long int> findSuperstarDishes(vector<long long int>&a, long long int n) {
            map<long long int, long long int> number_count;
            long long int one_third {n/3};
            vector<long long int> result(0,0);
            for (int i {}; i < n; i += 1) {
                if (!number_count.contains(a[i])) {
                    number_count[a[i]] = 1;
                } else {
                    number_count[a[i]] += 1;
                }
            }
            for (const auto& [k,v] : number_count) {
                if (v > one_third) {
                    result.push_back(k);
                }
            }
            sort(begin(result), end(result));
            return result;
        }
};

auto
main(void) -> int {
    int T {};
    cin>>T;
    while (T) {
        long long int n {};
        cin>>n;
        vector<long long int> a(n,0);
        for (auto& e : a) {
            cin>>e;
        }
        Solution * solution = new Solution();
        vector<long long int> result {solution->findSuperstarDishes(a, n)};
        for (const auto& e : result) {
            cout<<e<<' ';
        }cout<<endl;
        T -= 1;
    }
    return EXIT_SUCCESS;
}