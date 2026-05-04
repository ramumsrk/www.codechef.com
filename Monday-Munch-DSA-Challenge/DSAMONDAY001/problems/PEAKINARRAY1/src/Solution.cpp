#include <vector>
#include <iostream>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

class Solution {
    public:
        vector<int> findPeaks(vector<int>& A, int n) {
            vector<int> result(0,0);
            for (int i {}; i < n; i += 1) {
                if (i == 0) {
                    if (A[i] > A[i+1]) {
                        result.push_back(A[i]);
                    }
                } else if (i == n-1) {
                    if (A[i] > A[i-1]) {
                        result.push_back(A[i]);
                    }
                } else if (
                    A[i] > A[i-1]
                    &&
                    A[i] > A[i+1]
                ) {
                    result.push_back(A[i]);
                }
            }
            int result_size {static_cast<int>(result.size())};
            if (result_size==0) {
                result.push_back(-1);
            }
            return result;
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
        vector<int> A(n,0);
        for (auto& a : A) {
            cin>>a;
        }
        vector<int> result {solution->findPeaks(A, n)};
        for (const auto& e : result) {
            cout<<e<<' ';
        } cout<<endl;
        T -= 1;
    }
    return EXIT_SUCCESS;
}