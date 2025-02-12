class Solution 
{
public:
    int maximumLengthSubstring(string s)
    {
        int L = 0, R = 0, maxL = 0;
        vector<int> Hash(26, 0);
        while (R < s.size())
        {
            Hash[s[R]-'a']++;
            
            while (Hash[s[R]-'a'] == 3)
            {
                Hash[s[L]-'a']--;   
                L++;
            }    
            maxL = max(maxL, R - L + 1);

            R++;
        }
        return maxL;
    }
};
