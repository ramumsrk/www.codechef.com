#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

auto
monthly_earnings(
    const int& S,
    int const& B,
    const int& R
) -> __int128_t {
    return (S+(R*B));
}

auto
main(void) -> int {
    int S {}, B {}, R {};
    cin>>S>>B>>R;
    __int128_t total_earnings {monthly_earnings(S, B, R)};
    cout<<static_cast<long long int>(total_earnings)<<endl;
    return EXIT_SUCCESS;
}