#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

auto
pen_shortage(
    const int& N,
    int const& P
) -> int {
    int additional_pens {};
    if (N == P) {
        additional_pens = N-P;
    } else {
        additional_pens = N-P;
    }
    return additional_pens;
}

auto
main(void) -> int {
    int N {}, P {};
    cin>>N>>P;
    int additional_pens {pen_shortage(N, P)};
    cout<<additional_pens<<endl;
    return EXIT_SUCCESS;
}