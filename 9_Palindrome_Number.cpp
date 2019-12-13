/*
Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.

Example 1:

Input: 121
Output: true
Example 2:

Input: -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
Follow up:

Coud you solve it without converting the integer to a string?
*/
class Solution {
public:
    bool isPalindrome(int x) {
        int result = 0;
        int y=x;
        if(x < 0 ){     // negative int must be wrong
            return false;
        }
        
        while(x!=0){//int will only return 0 if value > 1
        int remind = x%10;
        x =x/10;
         
        if (result>INT_MAX/10){ // /10 because later we will * 10 time, we can know whether it will overflow
             return false;
         }
         else if  (result<INT_MIN/10){
             return false;
         }
          result=result *10 +remind;
      }  
    if(y == result){
        return true;
    }
    else {
        return false;
    }
    
    return NULL;
    }
};