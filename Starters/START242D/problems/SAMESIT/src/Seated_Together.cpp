#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using namespace std::literals::string_literals;
using std::vector;

auto
seated_together(
    const int& X
) -> bool {
    constexpr int rows {20}, seats_per_row {5};
    vector<vector<int>> seats(rows,vector<int>(seats_per_row,0));
    int seat_number {1};
    bool are_seated_together {false};
    // populate the seats
    for (int i {}; i < rows; i += 1) {
        for (int j {}; j < seats_per_row; j += 1) {
            seats[i][j] = seat_number;
            seat_number += 1; 
        }
    }
    // display seat numbers
    // for (int i {}; i < rows; i += 1) {
    //     for (int j {}; j < seats_per_row; j += 1) {
    //         cout<<seats[i][j]<<' ';
    //     }
    //     cout<<endl;
    // }
    for (int i {}; i < rows; i += 1) {
        for (int j {}; j < seats_per_row; j += 1) {
            if (
                X >= seats[i][0] && X <= seats[i][3]
            ) {
                are_seated_together = true;
            }
        }
    }
    return are_seated_together;
}

auto
main(void) -> int {
    int X {};
    cin>>X;
    bool are_seated_together {seated_together(X)};
    if (are_seated_together) {
        cout<<"Yes"s<<endl;
    } else {
        cout<<"No"s<<endl;
    }
    return EXIT_SUCCESS;
}