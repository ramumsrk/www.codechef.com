#include <iostream>
#include <cstdlib>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using namespace std::literals::string_literals;
using std::max;

class Solution {
    public:
        string stoneAbbys(int N) {
            string winner {};
            if (N == 0 || N == 2 || N%2 != 0) {
                winner = "Alice"s;
            } else if (N%2 == 0) {
                N = max(0, N-1);
                if (N%2 == 0) {
                    winner = "Bob"s;
                } else {
                    winner = "Alice"s;
                }
            }
            return winner;
        }
};

auto
main(void) -> int {
    int t {};
    cin>>t;
    Solution solution {};
    while (t) {
        int N {};
        cin>>N;
        string winner {solution.stoneAbbys(N)};
        cout<<winner<<endl;
        t -= 1;
    }
    return EXIT_SUCCESS;
}