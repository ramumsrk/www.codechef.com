#include <cstdlib>
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

auto
chef_and_the_gemstones(
    const int& K,
    int const& N,
    vector<long long int> A
) -> void {
    
}

auto
main(void) -> int {
    int T {};
    cin>>T;
    while (T) {
        int K {}, N {};
        cin>>K>>N;
        vector<long long int> A(N,0);
        for (auto& a : A) {
            cin>>a;
        }
        chef_and_the_gemstones(K, N, A);
        T -= 1;
    }
    return EXIT_SUCCESS;
}