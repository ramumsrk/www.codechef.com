#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

auto
passing_chain(
    const int& N,
    int const& K
) -> int {
    int X {1};
    while (X+K <= N) {
        X += K;
    }
    return X;
}

auto
main(void) -> int {
    int T {};
    cin>>T;
    while (T) {
        int N {}, K {};
        cin>>N>>K;
        cout<<passing_chain(N, K)<<endl;
        T -= 1;
    }  
    return EXIT_SUCCESS;
}