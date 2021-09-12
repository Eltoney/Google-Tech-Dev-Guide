class Solution {
    int mnAns(int ans   , int cur){
        if(ans == -1)
            return cur;
        return min(ans , cur);
    }
public:
    int firstUniqChar(string s) {
        vector<int> occ(26) , firstId (26);
        for(int i = 0 ; i < s.size() ; i++){
            if(!occ[s[i] - 'a']){
                firstId[s[i]-'a'] = i;
            }
            occ[s[i]-'a']++;
        }
        int ans = -1;
        for(int i = 0 ; i < 26 ; i++){
            if(occ[i] == 1){
                ans = mnAns(ans , firstId[i]);
            }
        }
        return ans;
    }
};
