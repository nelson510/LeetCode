class Solution {
public:
    int reverse(int x) {
       int result = 0;
      while(x!=0){ //int will only return 0 if value > 1
         int remind = x%10;
         x =x/10;
         
         if (result>INT_MAX/10){ // /10 because later we will * 10 time, we can know whether it will overflow
             return 0;
         }
         else if  (result<INT_MIN/10){
             return 0;
         }
          result=result *10 +remind;
      } 
    return result;
    }
};