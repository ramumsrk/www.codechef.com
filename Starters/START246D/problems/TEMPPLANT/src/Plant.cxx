#include <cstdlib>
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::min;
using std::max;

auto
plant(
    const int& N,
    const vector<int>& A
) -> int {
    int min_height {min(A[0], A[1])};
    int max_height {min_height};
    for (int i {1}; i <= N-2; i += 1) {
        min_height = min(A[i], A[i+1]);
        max_height = max(max_height, min_height);
    }
    return max_height;
}

auto
main(void) -> int {
    int T {};
    cin>>T;
    while (T) {
        int N {};
        cin>>N;
        vector<int> A(N,0);
        for (auto& a : A) {
            cin>>a;
        }
        cout<<plant(N, A)<<endl;
        T -= 1;
    }
    return EXIT_SUCCESS;
}