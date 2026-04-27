#include <iostream>
#include <vector>
#include <cstdlib>
#include <numeric>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;
using std::accumulate;

class Solution {
    public:
        int computeTotal(int N, vector<int>& A) {
            int total_points = accumulate(begin(A), end(A), int {});
            return total_points;
        }
};

auto
main(void) -> int {
    int t {};
    cin>>t;
    Solution * solution = new Solution();
    while (t) {
        int N {};
        cin>>N;
        vector<int> A(N,0);
        for (auto& e : A) {
            cin>>e;
        }
        int total_points {solution->computeTotal(N, A)};
        cout<<total_points<<endl;
        t -= 1;
    } 
    return EXIT_SUCCESS;
}