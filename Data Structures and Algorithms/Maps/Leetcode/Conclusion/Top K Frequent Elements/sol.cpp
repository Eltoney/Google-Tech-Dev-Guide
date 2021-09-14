class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> cnt;
        for(auto x : nums){
            cnt[x]++;
        }
        vector<int> ans;
        vector<pair<int,int>> vp;
        for(auto x : cnt){
             vp.push_back({x.second , x.first});
        }
        sort(vp.begin() , vp.end());
        for(int i = vp.size() - 1; i >= 0 && k; i-- ){
            ans.push_back(vp[i].second);
            k--;
        }
        return ans;
    }
};
