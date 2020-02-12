/*
Implement strStr().

Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

Example 1:

Input: haystack = "hello", needle = "ll"
Output: 2
Example 2:

Input: haystack = "aaaaa", needle = "bba"
Output: -1
Clarification:

What should we return when needle is an empty string? This is a great question to ask during an interview.

For the purpose of this problem, we will return 0 when needle is an empty string. This is consistent to C's strstr() and Java's indexOf().
*/    
class Solution {
public:
    int strStr(string haystack, string needle) {
    int len=needle.length();
        //needle is empty
        if(needle.empty()){
                return 0;
            }
        //needle > haystack
        if(needle.length()>haystack.length()){
            return -1;
        }
        for(int i=0;i<=haystack.length()-needle.length();i++) //hay.len-needl.len reduce the number of loop 
            if(haystack[i]==needle[0]){  //only the first character match will generate the substring reduce the time
                string temp=haystack.substr(i,len);
            if(temp==needle){
                return i;
                }
            }
        return -1;
    }
};