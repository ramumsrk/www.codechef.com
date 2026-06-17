#include <cstdlib>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::max;

auto
lose_less(
    const int& M,
    int const& N
) -> int {
    int min_losses {};
    // Chefland has lost all matches out
    // of M matches
    if (N == 0) {
        min_losses = M;
    } else {
        int matches_won {N/3};
        int matches_drawn {N/1 >= M ? M : N/1};
        int remaining_matches {M - max(matches_drawn, matches_won)};
        min_losses = remaining_matches;
    }
    return min_losses;
}

auto
main(void) -> int {
    int T {};
    cin>>T;
    while (T) {
        int M {}, N {};
        cin>>M>>N;
        // function call
        int min_losses {lose_less(M, N)};
        cout<<min_losses<<endl;
        T -= 1;
    }
    return EXIT_SUCCESS;
}