#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using std::boolalpha;
using namespace std::literals::string_literals;

class Solution {
    public:
        bool canWin(int a, int b, int w) {
            return a+b >= w;
        }
};

auto
main(void) -> int {
    int t {};
    cin>>t;
    Solution solution {};
    while (t) {
        int a {}, b {}, w {};
        cin>>a>>b>>w;
        bool canwin {solution.canWin(a, b, w)};
        // cout<<boolalpha<<canwin<<endl;
        if (canwin) {
            cout<<"True"s<<endl;
        } else {
            cout<<"False"s<<endl;
        }
        t -= 1;
    }
    return EXIT_SUCCESS;
}