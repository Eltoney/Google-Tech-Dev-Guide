class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_set<int> ust;
        for(auto x : nums1){
            ust.insert(x);
        }
        for(auto x : nums2){
            if(ust.count(x)){
                ans.push_back(x);
                ust.erase(x);
            }
        }
            
        return ans;
    }
};
