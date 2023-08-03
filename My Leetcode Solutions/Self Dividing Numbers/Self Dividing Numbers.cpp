// https://leetcode.com/problems/self-dividing-numbers

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i = left; i <= right; i++)
        {
            string str = to_string(i);
            int flag = 0;
            int n = str.size();
            // Sort the character array
            sort(str.begin(), str.end());
            str.erase( unique( str.begin(), str.end() ), str.end() );
            for(int j = 0; j < str.size(); j++)
            {
                int x = str[j] - 48;
                if(x == 0)
                {
                    flag = 1;
                    break;
                }
                if(i % x != 0)
                {
                    flag = 1;
                    break;
                }
            }
            if(flag != 1) ans.push_back(i);
        }
        return ans;
    }
};