// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        for(int i=0;i<candies.size();i++)
        {
            if((candies[i]+extraCandies) >= *max_element(candies.begin(),candies.end()))
            {
                result.push_back(true);
            }
            else
            {
                result.push_back(false);
            }
        }
        return result;
    }
};