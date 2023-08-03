// https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping

class Solution {
public:
   
    string freqAlphabets(string s) {
         map<string, string> mp;
    mp["1"] = "a";
    mp["2"] = "b";
    mp["3"] = "c";
    mp["4"] = "d";
    mp["5"] = "e";
    mp["6"] = "f";
    mp["7"] = "g";
    mp["8"] = "h";
    mp["9"] = "i";
    mp["10#"] = "j";
    mp["11#"] = "k";
    mp["12#"] = "l";
    mp["13#"] = "m";
    mp["14#"] = "n";
    mp["15#"] = "o";
    mp["16#"] = "p";
    mp["17#"] = "q";
    mp["18#"] = "r";
    mp["19#"] = "s";
    mp["20#"] = "t";
    mp["21#"] = "u";
    mp["22#"] = "v";
    mp["23#"] = "w";
    mp["24#"] = "x";
    mp["25#"] = "y";
    mp["26#"] = "z";
        string res = "";
        for(int i = 0; i < s.size();i++)
        {
            string key = "";
            if(i == s.size() - 1)
            {
                key = s[i];
            }
            else if(s[i+2] !='#')
            {
                key += s[i];
            }
            else
            {
                key += s[i++];
                key += s[i++];
                key += s[i];
            }
            cout << key << endl;
            // search key in map logic here
            res += mp[key];
        }
        return res;   
    }
};