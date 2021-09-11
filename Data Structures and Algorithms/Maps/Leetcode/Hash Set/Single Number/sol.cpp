
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int>  hashset1 , hashset2;
        for(auto x : nums){
           int cc = hashset1.count(x);
           if(cc == 0){
               hashset1.insert(x);
               hashset2.insert(x);
           }else{
               hashset2.erase(x);
           }
        }
        for(auto x : nums){
            if(hashset2.count(x) > 0){
                return x;
            }
        }
        
        return 0;
    }
};
