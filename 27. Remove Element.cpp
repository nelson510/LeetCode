class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       vector<int>::iterator it;
       for(it=nums.begin();it!=nums.end();){
             if(*it==val){
                nums.erase(it);
             }
            else{
              it++;
            }
       }
         return nums.size();
    }
   
};
//In place algorithm means you are not going to use another container to handle this job.
//The erase [nums.erase(it)] after erase will point to the next value so that we do not need to ++it in that case