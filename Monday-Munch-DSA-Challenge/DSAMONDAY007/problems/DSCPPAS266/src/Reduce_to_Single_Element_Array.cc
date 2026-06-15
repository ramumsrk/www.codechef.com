#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::boolalpha;
using namespace std::literals::string_literals;
using std::sort;

class Solution {
    public:
        bool canReduce(int N, vector<int>& arr) {
            if (N == 1) {
                return true;
            }
            sort(begin(arr), end(arr));
            int count_of_zeros {};
            bool canreduce {false};            
            for (int i {}; i <= N-2; i += 1) {
                if (arr[i] == arr[i+1]) {
                    arr[i+1] = 0;
                    count_of_zeros += 1;
                } else if ((arr[i]-arr[i+1]) == -1) {
                    arr[i] = 0;
                    count_of_zeros += 1;
                } else if ((arr[i]-arr[i+1]) == 1) {
                    arr[i+1] = 0;
                    count_of_zeros += 1;
                }
            }
            if (count_of_zeros == N-2) {
                canreduce = true;
            }
            return canreduce;
        }
};

auto
main(void) -> int {
    int t {};
    cin>>t;
    Solution solution {};
    while (t) {
        int N {};
        cin>>N;
        vector<int> arr(N,0);
        for (auto& e : arr) {
            cin>>e;
        }
        bool canreduce {solution.canReduce(N, arr)};
        if (canreduce) {
            cout<<"YES"s<<endl;
        } else {
            cout<<"NO"s<<endl;
        }
        t -= 1;
    }
    return EXIT_SUCCESS;
}