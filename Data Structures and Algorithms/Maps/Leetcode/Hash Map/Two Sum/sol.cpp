class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hp;
        vector<int> ans;
        for(int i = 0 ; i < nums.size() ; i++){
            int need = target - nums[i];
            if(hp.find(need) != hp.end()){
                ans.push_back(i);
                ans.push_back(hp[need]);
                break;
            }
            hp[nums[i]] = i;
        }
        return ans;
    }
};
