class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size =digits.size()-1;
        //digits[size]= digits[size]+1;
        add(digits,size);
        return digits;
    }
    vector<int> add (vector<int>& digits,int position){
        vector<int> final;
        
        if((digits[position]+1)>9){
            digits[position]=0;
            if(position-1<0){
                digits.insert(digits.begin(),1);
                return digits;
            }
            add(digits,position-1);
            
            
        }
        else{
            digits[position]+=1;
        }
        
        return digits;
    }
};


