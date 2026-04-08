#include <cstdlib>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

auto
main(void) -> int {
    int T {};
    cin>>T;
    while (T) {
        int N {}, M {}, A {}, B {}, C {};
        cin>>N>>M>>A>>B>>C;
        int NMAB {};
        int nmab {};        
        if (N == M) {
            NMAB = (N*A)+(M*B);
            nmab = ((N-1)*A)+((M-1)*B)+C;
        } else if (N > M) {
            NMAB = (N*A)+(M*B);
            nmab = ((N-1)*A)+((M-1)*B)+C;
        } else if (N < M) {
            NMAB = (N*A)+(M*B);
            nmab = ((N-1)*A)+((M-1)*B)+C;
        }
        int result = NMAB < nmab ? NMAB : nmab;
        cout<<result<<endl;
        T -= 1;
    }
    return EXIT_SUCCESS;
}