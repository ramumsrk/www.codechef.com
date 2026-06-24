#include <cstdlib>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

auto
teleport_home(
    const int& D,
    int const& T
) -> int {
    if (T >= D) {
        return 0;
    } else {
        return D-T;
    }
}

auto
main(void) -> int {
    int D {}, T {};
    cin>>D>>T;
    cout<<teleport_home(D, T)<<endl;
    return EXIT_SUCCESS;
}