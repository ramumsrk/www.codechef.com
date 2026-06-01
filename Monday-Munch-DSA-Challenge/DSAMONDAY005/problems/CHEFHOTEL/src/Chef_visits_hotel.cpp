#include <cstdlib>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Solution {
    public:
        auto calculateHotelBill(
            const int& N,
            int const& R,
            const int& E
        ) -> int {
            return (N*R)+E; 
        }
};

auto
main(void) -> int {
    int t {};
    cin>>t;
    Solution solution {};
    while (t) {
        int N {}, R {}, E {};
        cin>>N>>R>>E;
        cout<<solution.calculateHotelBill(N, R, E)<<endl;
        t -= 1;
    }
    return EXIT_SUCCESS;
}