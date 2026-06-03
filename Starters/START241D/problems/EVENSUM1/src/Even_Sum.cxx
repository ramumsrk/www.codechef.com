#include <cstdlib>
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::accumulate;
using std::begin;
using std::end;
using namespace std::literals::string_literals;

auto
even_sum(
    const int& N,
    const vector<int>& A
) -> bool {
    int A_sum {accumulate(begin(A), end(A), int {})};
    bool result {false};
    for (int i {}; i < N; i += 1) {
        if ((A_sum-A[i])%2 == 0) {
            result = true;
            break;
        }
    }
    return result;
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
        bool result {even_sum(N, A)};
        if (result) {
            cout<<"Yes"s<<endl;
        } else {
            cout<<"No"s<<endl;
        }
        T -= 1;
    }
    return EXIT_SUCCESS;
}