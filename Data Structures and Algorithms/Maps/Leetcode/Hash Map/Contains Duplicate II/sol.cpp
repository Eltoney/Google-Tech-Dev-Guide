class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int> id;
        for(int i = 0 ; i < nums.size() ; i++){
            if(id.find(nums[i]) != id.end()){
                int cur = abs(i - id[nums[i]]);
                if(cur <= k){
                    return 1;
                }
            }
            id[nums[i]] = i;
        }
        return 0;
    }
};
