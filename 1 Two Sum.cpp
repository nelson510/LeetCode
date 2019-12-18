class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        int sumnum = nums.size();
        for (int i=0;i<sumnum;++i){
            for (int j=0; j<sumnum;++j){
                if (i==j){
                    continue;
                }
                if(nums[i]+nums[j]==target && result.empty()==true){
                    result.push_back(i);
                    result.push_back(j);
                    
                }
                
            }
        }
        return result;
    }
};

