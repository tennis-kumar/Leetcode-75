class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> Result;

        const int maximumCandies = ranges::max(candies);

        for(const int candy:candies) Result.push_back( candy + extraCandies >= maximumCandies);
        return Result;
    }
};