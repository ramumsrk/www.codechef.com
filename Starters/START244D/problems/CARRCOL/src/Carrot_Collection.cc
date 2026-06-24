#include <cstdlib>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

auto
carrot_collection(
    const int& N,
    int const& L,
    const int& R
) -> int {
    
}

auto
main(void) -> int {
    int T {};
    cin>>T;
    while (T) {
        int N {}, L {}, R {};
        cin>>N>>L>>R;
        cout<<carrot_collection(N, L, R)<<endl;
        T -= 1;
    }
    return EXIT_SUCCESS;
}