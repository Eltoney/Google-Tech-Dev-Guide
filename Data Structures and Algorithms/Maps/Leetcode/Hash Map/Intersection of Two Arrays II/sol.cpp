class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        map<int,int> cnt;
        for(auto x : nums1){
            cnt[x]++;
        }
        for(auto x : nums2){
            if(cnt[x]){
                ans.push_back(x);
                cnt[x]--;
            }
        }
        return ans;
    }
};
