class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        map<string,int> andy;
        vector<string> ans;
        for(int i = 0 ; i < list1.size() ; i++){
            andy[list1[i]] = i;
        }
        int sum = 3000;
        for(int i = 0 ; i < list2.size() ; i++){
            if(andy.find(list2[i]) != andy.end()){
                int cur = andy[list2[i]] + i;
                if(cur < sum){
                    ans.clear();
                }
                if(cur <= sum){
                    ans.push_back(list2[i]);
                    sum = cur;
                }
            }
        }
        return ans;
    }
};
