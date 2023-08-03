// https://leetcode.com/problems/decode-the-message

class Solution {
public:
    string decodeMessage(string key, string message) {
        for(int i = 0; i < key.size(); i++)
        {
            char c = key[i];
            key.erase(remove(key.begin()+i+1, key.end(), c), key.end());
        }
        key.erase(remove(key.begin(), key.end(), ' '), key.end());
        map<char, char> mp;
        mp[key[0]] = 'a';
        mp[key[1]] = 'b';
        mp[key[2]] = 'c';
        mp[key[3]] = 'd';
        mp[key[4]] = 'e';
        mp[key[5]] = 'f';
        mp[key[6]] = 'g';
        mp[key[7]] = 'h';
        mp[key[8]] = 'i';
        mp[key[9]] = 'j';
        mp[key[10]] = 'k';
        mp[key[11]] = 'l';
        mp[key[12]] = 'm';
        mp[key[13]] = 'n';
        mp[key[14]] = 'o';
        mp[key[15]] = 'p';
        mp[key[16]] = 'q';
        mp[key[17]] = 'r';
        mp[key[18]] = 's';
        mp[key[19]] = 't';
        mp[key[20]] = 'u';
        mp[key[21]] = 'v';
        mp[key[22]] = 'w';
        mp[key[23]] = 'x';
        mp[key[24]] = 'y';
        mp[key[25]] = 'z';
        string res = "";
        for(int i = 0; i < message.size(); i++)
        {
            if(message[i] == ' ') res += ' ';
            else res += mp[message[i]];
        }
        return res;
    }
};