#include <cstdlib>
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

auto
leader_of_an_array(
    const int& N,
    const vector<long long int>& A
) -> void {
    if (N == 1) {
        cout<<A[0]<<endl;
    } else {
        vector<long long int> result(0,0);
        bool is_left_greater {true};
        for (int i {}; i <= N-2; i += 1) {
            for (int j {i+1}; j < N; j += 1) {
                if (A[i] < A[j]) {
                    is_left_greater = false;
                    break;
                }else {
                    is_left_greater = true;
                }
            }
            if (is_left_greater) {
                result.push_back(A[i]);
            }
        }
        result.push_back(A[N-1]);
        for (const auto& a : result) {
            cout<<a<<' ';
        }
        cout<<endl;
    }
}

auto
main(void) -> int {
    int N {};
    cin>>N;
    vector<long long int> A(N,0);
    for (auto& a : A) {
        cin>>a;
    }
    // function call
    leader_of_an_array(N, A);
    return EXIT_SUCCESS;
}