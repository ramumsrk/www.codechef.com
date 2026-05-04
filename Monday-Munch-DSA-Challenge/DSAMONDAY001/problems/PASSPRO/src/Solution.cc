#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <numeric>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::accumulate;
using std::begin;
using std::end;
using namespace std::literals::string_literals;

class Solution {
    public:
        string checkPassword(int arr[], int n) {
            int arr_sum {};
            for (int i {}; i < n; i += 1) {
                arr_sum += arr[i];
            }
            return arr_sum-n==0?"SECURE"s:"NOT SECURE"s;
        }
};

auto
main(void) -> int {
    int T {};
    cin>>T;
    Solution * solution = new Solution();
    while (T) {
        int n {};
        cin>>n;
        int arr[1000];
        for (auto& e : arr) {
            cin>>e;
        }
        string result {solution->checkPassword(arr,n)};
        cout<<result<<endl;
        T -= 1;
    }
    return EXIT_SUCCESS;
}