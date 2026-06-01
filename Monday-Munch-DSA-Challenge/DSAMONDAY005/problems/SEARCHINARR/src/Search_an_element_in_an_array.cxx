#include <vector>
#include <string>
#include <cstdlib>
#include <iostream>

using std::string;
using std::vector;
using namespace std::literals::string_literals;
using std::cin;
using std::cout;
using std::endl;

class Solution {
    public:
        auto solve(
            int N,
            int X,
            vector<int>& A
        ) -> string {
            string result {"NO"s};
            for (const auto& a : A) {
                if (X == a) {
                    result = "YES"s;
                    break;
                }
            }
            return result;
        }
};

auto
main(void) -> int {
    int t {};
    cin>>t;
    Solution solution {};
    while (t) {
        int N {}, X {};
        cin>>N>>X;
        vector<int> A(N,0);
        for (auto& a : A) {
            cin>>a;
        }
        cout<<solution.solve(N, X, A)<<endl;
        t -= 1;
    }
    return EXIT_SUCCESS;
}