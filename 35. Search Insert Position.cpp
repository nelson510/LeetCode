class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int j=nums.size()-1;//start from the end
        int loop=(nums.size()/2)+1;//+1 is for odd number vector
        
        for(int i=0;i<loop;i++){ //start from the begin
            
        if(nums[i]==target){
            return i;
        }
        if (nums[j]==target){
            return j;
        }
         
        if(nums[i]>target){
            if(i==0){
                return 0;
            }
            else if(nums[i-1]<target){
                return i;
            }
        }
         
        if(nums[j]<target){
            if(j==nums.size()-1){
                return nums.size();
            }
            else if(nums[j+1]>target){
                return j+1;
            }
        }
       
        j--;    
        }
        return 0;
    }
 };
 
            