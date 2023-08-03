// https://leetcode.com/problems/jewels-and-stones

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int sizeOfJewels = jewels.size();
        int count=0;
        for(int i=0;i<sizeOfJewels;i++)
        {
            count += std::count(stones.begin(),stones.end(),jewels[i]);
        }
        return count;
    }
};