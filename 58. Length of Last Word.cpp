class Solution {
public:
    int lengthOfLastWord(string s){
        int size = s.size()-1;
        int num =0;
        while (size>=0){
            if(s[size]!=' ')
                break;
            else
                size--;
        }
        for(int i=size;i>=0;--i){
            if(s[i]!=' '){
                num++;
            }
            else
                return num;
        }
        return num;
        }
};