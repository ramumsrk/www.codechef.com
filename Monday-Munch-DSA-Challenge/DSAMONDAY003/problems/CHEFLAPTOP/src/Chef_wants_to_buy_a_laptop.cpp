#include <cstdlib>
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

class Solution {
    public:
        int borrowMoney(int X, int Y) {
            int borrow_money {};
            if (Y >= X) {
                ;
            } else if (Y < X) {
                borrow_money = X-Y;
            }
            return borrow_money;
        }
};

auto
main(void) -> int {
    int T {};
    cin>>T;
    Solution * solution = new Solution();
    while (T) {
        int X {}, Y {};
        cin>>X>>Y;
        int borrow_money {solution->borrowMoney(X, Y)};
        cout<<borrow_money<<endl;
        T -= 1;
    }
    return EXIT_SUCCESS;
}