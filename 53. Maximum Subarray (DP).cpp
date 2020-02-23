class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max=nums[0];
        int current=nums[0];
        
        for(int i=1;i<nums.size();i++){
            if(current<0 && nums[i]>current){
                current=nums[i];
            }
            else if(current>=0){
                current=current+nums[i];
            }
            if(current>max){
                max=current;
            }
        }
        return max;
    }
    
    
};
/*
using the idea of DP 
original :1,2,-1,-2,2,1,-2,1,4,-5,4
logic num[1]+previous large (if previous is <0 then use itself)
         :1,3, 2, 0,2,3, 1,2,6, 1,5
original:-2,1,-3,4,-1,2,1,-5,4
        :-2,1,-2,4, 3,5,6, 1,5
*/