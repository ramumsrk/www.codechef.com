#include <cstdlib>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

auto
counting_characters(
    const int& N,
    string const& S
) -> void {
    int count_of_a {}, count_of_b {};
    for (int i {}; i < N; i += 1) {
        if (S[i] == 'a') {
            count_of_a += 1;
        } else if (S[i] == 'b') {
            count_of_b += 1;
        }
    }
    cout<<count_of_a<<' '<<count_of_b<<endl;
}

auto
main(void) -> int {
    int T {};
    cin>>T;
    while (T) {
        int N {};
        cin>>N;
        string S {};
        cin>>S;
        // function call
        counting_characters(N, S);
        T -= 1;
    }
}