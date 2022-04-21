class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> se;
        int len=0,l=0,r=0;
        int n=s.length();
        if(n==1) return 1;
        for(int i=0;i<n;)
        {
            if(!se.count(s[i]))
            {
                se.insert(s[i]);
                len=max(len,i-l+1);
                i++;
            }
            else
            {
                se.erase(s[l]);
                l++;
                
            }
        }
        return len;
        
    }
};