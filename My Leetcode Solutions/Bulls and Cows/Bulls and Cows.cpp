// https://leetcode.com/problems/bulls-and-cows

class Solution {
public:
    string getHint(string secret, string guess) {
        int count=0,cow=0;
        for(int i=0;i<secret.size();i++)
        {
            if(secret[i]==guess[i])
            {
                secret[i]='m';
                guess[i]='m';
                count++;
            }
            else
            {
                size_t found = guess.find(secret[i]);
                while(found!=string::npos)
                {
                    if(guess[found]==secret[found])
                    {
                        found = guess.find(secret[i],found+1);
                    }
                    else
                    {
                        guess[found]='m';
                        cow++;
                        break;
                    }
                }
            }
        }
        string res=to_string(count);
        res+="A";
        res+=to_string(cow);
        res+="B";
        return res;
    }
};