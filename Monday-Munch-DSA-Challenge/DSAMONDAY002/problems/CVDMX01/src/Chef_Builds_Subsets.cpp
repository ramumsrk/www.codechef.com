#include <vector>

using std::vector;

class Solution {
    public:
        vector<vector<int>> findSubsets(vector<int>& inputNumbers) {
            int inputNumbersSize {static_cast<int>(inputNumbers.size())};
            vector<vector<int>> result(0,vector<int>(0,0));
            for (int i {}; i < inputNumbersSize; i += 1) {
                for (int j {i}; j < inputNumbersSize; j += 1) {
                    vector<int> v(0,0);
                    for (int k {i}; k <= j; k += 1) {
                        v.push_back(inputNumbers[k]);
                    }
                    result.push_back(v);
                }
            }
            vector<int> empty_vector(0,0);
            result.push_back(empty_vector);
            return result;
        }
};