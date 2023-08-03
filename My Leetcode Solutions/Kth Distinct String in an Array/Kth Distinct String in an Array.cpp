// https://leetcode.com/problems/kth-distinct-string-in-an-array

class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_set<string> intSet;
        unordered_set<string> duplicate;
        for (int i = 0; i < arr.size(); i++) {
            // if element is not there then insert that
            if (intSet.find(arr[i]) == intSet.end()) intSet.insert(arr[i]);
            else duplicate.insert(arr[i]);
        }
        for(int i = 0; i < arr.size(); i++)
        {
            if (duplicate.find(arr[i]) == duplicate.end())
            {
                k--;
            }
            if(k == 0) return arr[i];
        }
        return "";
    }
};