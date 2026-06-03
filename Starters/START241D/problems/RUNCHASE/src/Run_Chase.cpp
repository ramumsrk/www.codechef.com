#include <cstdlib>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

auto
run_chase(
    const int& N
) -> int {
    return (N/20)+1;
}

auto
main(void) -> int {
    int T {};
    cin>>T;
    while (T) {
        int N {};
        cin>>N;
        int R {run_chase(N)};
        cout<<R<<endl;
        T -= 1;
    }
    return EXIT_SUCCESS;
}