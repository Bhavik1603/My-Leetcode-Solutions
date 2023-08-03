// https://leetcode.com/problems/day-of-the-year

class Solution {
    
public:
    int leapyear(int year)
    {
        if (year % 4 == 0) 
        {
            if (year % 100 == 0) 
            {
                if (year % 400 == 0) 
                {
                    return 1;
                }
                else 
                {
                    return 0;
                }
            }
            else 
            {
                return 1;
            }
        }
        else 
        {
            return 0;
        }
    }
        
    
    
    int dayOfYear(string date) {
        int dd, mm, yyyy;
        int ans;
        string d = "";
        string m = "";
        string y = "";
        d += date[8];
        d += date[9];
        dd = stoi(d);
        
        m += date[5];
        m += date[6];
        mm = stoi(m);
        
        y += date[0];
        y += date[1];
        y += date[2];
        y += date[3];
        yyyy = stoi(y);
        
        if(leapyear(yyyy))
        {
            if(mm == 1)
            {
                return dd;
            }
            if(mm == 2)
            {
                return 31 + dd;
            }
            if(mm == 3)
            {
                return 60 + dd;
            }
            if(mm == 4)
            {
                return 91 + dd;
            }
            if(mm == 5)
            {
                return 121 + dd;
            }
            if(mm == 6)
            {
                return 152 + dd;
            }
            if(mm == 7)
            {
                return 182 + dd;
            }
            if(mm == 8)
            {
                return 213 + dd;
            }
            if(mm == 9)
            {
                return 244 + dd;
            }
            if(mm == 10)
            {
                return 274 + dd;
            }
            if(mm == 11)
            {
                return 305 + dd;
            }
            if(mm == 12)
            {
                return 335 + dd;
            }
        }
        else
        {
            if(mm == 1)
            {
                return dd;
            }
            if(mm == 2)
            {
                return 31 + dd;
            }
            if(mm == 3)
            {
                return 59 + dd;
            }
            if(mm == 4)
            {
                return 90 + dd;
            }
            if(mm == 5)
            {
                return 120 + dd;
            }
            if(mm == 6)
            {
                return 151 + dd;
            }
            if(mm == 7)
            {
                return 181 + dd;
            }
            if(mm == 8)
            {
                return 212 + dd;
            }
            if(mm == 9)
            {
                return 243 + dd;
            }
            if(mm == 10)
            {
                return 273 + dd;
            }
            if(mm == 11)
            {
                return 304 + dd;
            }
            if(mm == 12)
            {
                return 334 + dd;
            }
        }
        return ans;
    }
};