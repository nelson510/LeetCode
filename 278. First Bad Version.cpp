// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
       
       int half = n/2;
       if(n==1){
           return 1;
        }
        
      else if (isBadVersion(half)){  //if true
          return firstBadVersion(half);                 //here return is needed otherwise the recursion will return -1;
       }
        
      else{                       //if false
        for(int i=half+1;i<=n;i++){
            if(isBadVersion(i)){
                return i;
            }
        }
    }
        return -1;
    }
    
};