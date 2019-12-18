//This code using map so that no need to loop all combination in the same time, it perfrom insert and check at the same time so one for loop is enough for working
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>allnum;
        map<int,int>::iterator re;
        for (int i=0;i<nums.size();++i){
            int other=target-nums[i];
            re=allnum.find(other);
            if(re!=allnum.end()){
                return vector<int>{re->second,i};
            }    
            allnum.insert(pair<int,int>(nums[i],i));
        }
        return vector<int>();
    }
};
//2 -not match
//7 -match

