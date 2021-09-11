class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>  hashset;
        for(auto x : nums){
            if(hashset.count(x) > 0){
                return 1;
            }
            hashset.insert(x);
        }
        return 0;
    }
};
