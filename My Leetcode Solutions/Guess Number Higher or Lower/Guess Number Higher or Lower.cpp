// https://leetcode.com/problems/guess-number-higher-or-lower

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        vector<int> vec;
        for(int i = 1; i <= n; i++) vec.push_back(i);
        int low = 0;
        int high = n - 1;
        int mid;
        while(low <= high)
        {
            mid = (low + high)/2;
            if(guess(vec[mid]) == 0)
            {
                return vec[mid];
            }
            else if(guess(vec[mid]) == -1)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return -1;
    }
};