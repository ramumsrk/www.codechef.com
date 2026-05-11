#include <iostream>
#include <cstdlib>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::boolalpha;
using std::vector;

class Solution {
    public:
        bool isBitSet(long long int n, int i) {
            vector<int> binary_digits(0,0);
            while (n != 1) {
                binary_digits.push_back(n%2);
                n /= 2;
            }
            binary_digits.push_back(n);
            int binary_digits_size {static_cast<int>(binary_digits.size())};
            bool is_bit_set {false};
            for (int j {}; j < binary_digits_size; j += 1) {
                if (i == j && binary_digits[j] == 1) {
                    is_bit_set = true;
                    break;
                }
            }
            return is_bit_set;
        }
};

auto
main(void) -> int {
    int T {};
    cin>>T;
    Solution * solution = new Solution();
    while (T) {
        long long int n {};
        cin>>n;
        int i {};
        cin>>i;
        bool is_bit_set {solution->isBitSet(n,i)};
        cout<<boolalpha<<is_bit_set<<endl;
        T -= 1;
    }
    return EXIT_SUCCESS;
}