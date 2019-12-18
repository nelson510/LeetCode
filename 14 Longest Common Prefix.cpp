/*
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:

Input: ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
Note:

All given inputs are in lowercase letters a-z.
*/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //string result;
        string first;
        int start =0;
        int length =1;
        if(strs.empty()||strs[0]==""){return "" ;}
        first = strs[0];
        for (int i=1;i<strs.size();i++){
            while(length <= first.size()){
                if(first.substr(start,length) == strs[i].substr(start,length)){
                    length++;
                }
                else{break;}
            }
                if(length>1){
                    first = first.substr(start,length-1);
                    length=1;
                }
                else{
                    return "";
                    }
                }
            return first;
        }
};
