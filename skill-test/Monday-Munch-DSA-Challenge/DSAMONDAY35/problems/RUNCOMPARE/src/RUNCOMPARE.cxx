#include <iostream>
#include <cstdlib>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

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
        vector<int> B(N,0);
        for (auto& b : B) {
            cin>>b;
        }
        int happy_days {};
        for (int i {}; i < N; i += 1) {
            if (
                A[i] <= (2*B[i])
                &&
                B[i] <= (2*A[i])
            ) {
                happy_days += 1;
            }
        }
        cout<<happy_days<<endl;
        T -= 1;
    }
    return EXIT_SUCCESS;
}