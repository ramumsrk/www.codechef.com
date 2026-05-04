#include <vector>
#include <unordered_set>
#include <utility>

using std::vector;
using std::unordered_set;
using std::pair;

class Twitter {
private:
    long long timeStamp;
    vector<vector<pair<long long,int>>> tweets;
    vector<unordered_set<int>> following;

public:
    Twitter() {
        // write your code here 
        
    }

    void postTweet(int userId, int tweetId) {
        // write your code here 
        
    }

    vector<int> getNewsFeed(int userId) {
        // write your code here 
        
    }

    void follow(int followerId, int followeeId) {
        // write your code here 
        
    }

    void unfollow(int followerId, int followeeId) {
        // write your code here 
        
    }
};