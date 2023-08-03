// https://leetcode.com/problems/degree-of-an-array

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        vector<int> temp;
        temp = nums;
        sort(temp.begin(), temp.end());
        temp.erase(unique(temp.begin(), temp.end()), temp.end());
        int degree = 1;
        int digit = nums[0];
        int res=nums.size();
        for(int i = 0; i < temp.size(); i++)
        {
            int cnt = count(nums.begin(), nums.end(), temp[i]);
            if(cnt >= degree)
            {
                //cout << cnt << " " << temp[i] << " ";
                int start = find(nums.begin(), nums.end(), temp[i]) - nums.begin();
                //int end = find_end(nums.begin(), nums.end(), temp[i]) - nums.begin();
                size_t index = nums.size();
                do
                {
                    --index;
                }
                while (nums.at(index) != temp[i]);
                int end = index;
                //cout << start << " " << end << endl;
                if(res > end - start && cnt == degree)
                {
                    degree = cnt;
                    digit = temp[i];
                    res = end - start;
                }
                else if(cnt > degree)
                {
                    degree = cnt;
                    digit = temp[i];
                    res = end - start;
                }
            }
        }
        
        //res = end - start;
        return res+1;
    }
};