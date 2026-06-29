#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

auto
codechef_xp(
    const int& A,
    int const& B,
    const int& P,
    int const& E 
) -> int {
    return ((A*P)+(B*E));
}

auto
main(void) -> int {
    int A {}, B {}, P {}, E {};
    cin>>A>>B>>P>>E;
    cout<<codechef_xp(A, B, P, E)<<endl;
    return EXIT_SUCCESS;
}