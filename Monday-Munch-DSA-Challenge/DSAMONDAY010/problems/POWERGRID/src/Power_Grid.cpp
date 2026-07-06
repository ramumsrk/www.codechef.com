#include <cstdlib>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

auto
power_grid(
    const int& R,
    int const& C,
    const int& W
) -> int {
    return R*C*W;
}

auto
main(void) -> int {
    int R {}, C {}, W {};
    cin>>R>>C>>W;
    cout<<power_grid(R, C, W)<<endl;
    return EXIT_SUCCESS;
}