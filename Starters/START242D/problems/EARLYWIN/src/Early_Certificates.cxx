#include <iostream>
#include <cstdlib>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

auto
early_certificate(
    const int& N,
    int const& M,
    const string& A,
    string const& B 
) -> string {
    string engraved_name {};
    int len {N <= M ? N : M};
    for (int i {}; i < len; i += 1) {
        if (A[i] == B[i]) {
            engraved_name.push_back(A[i]);
        }
        else {
            break;
        }
    }
    return engraved_name;
}

auto
main(void) -> int {
    int T {};
    cin>>T;
    while (T) {
        int N {}, M {};
        cin>>N>>M;
        string A {}, B {};
        cin>>A;
        cin>>B;
        string engraved_name {early_certificate(N, M, A, B)};
        cout<<engraved_name<<endl;
        T -= 1;
    }
    return EXIT_SUCCESS;
}