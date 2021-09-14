class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int st  = 0;
        int ans = 0;
        map<char , int> mp;
        int n = s.size();
        for(int i = 0 ; i < n ; i++){
            if(mp.find(s[i]) != mp.end()){
                ans = max(ans , i - st);
                st = max(st , mp[s[i]] + 1);
               // cout<<ans<<'\n';
            }
            mp[s[i]] = i;
        }
        ans = max(ans , n - st);
        
        return ans;
    }
};
