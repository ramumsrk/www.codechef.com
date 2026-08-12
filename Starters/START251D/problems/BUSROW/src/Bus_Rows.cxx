#include <cstdlib>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

auto
seat_in_row(
    const int& N,
    const int& M,
    const int& X
) -> int {
    int seat_is_in_row {};
    int seat {1};
    for (int i {1}; i <= N; i += 1) {
        for (int j {1}; j <= M; j += 1) {
            if (X == seat) {
                seat_is_in_row = i;
                break;
            } else {
                seat += 1;
            }
        }
        if (seat_is_in_row != 0) {
            break;
        }
    } 
    return seat_is_in_row;
}

auto
bus_rows(
    const int& N,
    const int& M,
    const int& X
) -> int {
    // function call
    int row {seat_in_row(N, M, X)};
    return row-1 < N-row ? row-1 : N-row;
}

auto
main(void) -> int {
    int T {};
    cin>>T;
    while (T) {
        int N {}, M {}, X {};
        cin>>N>>M>>X;
        int min_rows {bus_rows(N, M, X)};
        cout<<min_rows+1<<endl;
        T -= 1;
    }
    return EXIT_SUCCESS;
}