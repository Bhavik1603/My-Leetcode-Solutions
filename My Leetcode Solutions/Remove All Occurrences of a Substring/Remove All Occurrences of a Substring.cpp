// https://leetcode.com/problems/remove-all-occurrences-of-a-substring

#include<bits/stdc++.h>
class Solution {
public:
    string removeOccurrences(string s, string part) {
        int prevLength = s.size();
        int newLength = INT_MAX;
        while(prevLength != newLength)
        {
            prevLength = s.size();
            size_t found = s.find(part);
            cout << found << endl;
            if(found != string::npos) s.replace(found, part.size(), "");  
            newLength = s.size();
        }
        return s;
    }
};