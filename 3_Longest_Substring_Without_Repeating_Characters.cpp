/*
Given a string, find the length of the longest substring without repeating characters.

Example 1:

Input: "abcabcbb"
Output: 3 
Explanation: The answer is "abc", with the length of 3. 
Example 2:

Input: "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3. 
             Note that the answer must be a substring, "pwke" is a subsequence and not a substring.
*/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> character;
        int maxnum = 0;
        map<char,int>::iterator finds;
      for(int i=0;i<s.size();i++){
        for(int j=i;j<s.size();j++){
           finds = character.find(s[j]);
            if(finds == character.end()){ // if cannot find
                character.insert(pair(s[j],1));
                if(s.size()==1){
                    maxnum=1;
                }
                
            }
            if(finds != character.end()){ //if can find match
                if(character.size()>maxnum){
                maxnum = character.size();
                }
            character.clear();   
            break;
            }
        }
      }
        return maxnum;
    }
};