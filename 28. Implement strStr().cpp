class Solution {
public:
    int strStr(string haystack, string needle) {
    int len=needle.length();
    int it=0;
        
        do{
            
            if((needle.empty()&&haystack.empty())||needle.empty()){
                return 0;
            }
            if(needle==haystack.substr(it,len)){
                return it;
            } 
            it++;
        }while(it<haystack.length());
       
        return -1;
    }
};