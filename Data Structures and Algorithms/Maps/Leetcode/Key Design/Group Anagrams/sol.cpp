class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;
        vector<vector<string>> ans;
        for(auto str : strs){
            string cur = str;
            sort(cur.begin() , cur.end());
            mp[cur].push_back(str);
        }
        for(auto s : mp){
            ans.push_back(s.second);
        }
        return ans;
    }
};
