class Solution {
public:
    int reverse(int x) {
        int temp = 0;
        int y;
        int negative = 0;
        
        if(x*-1 > INT_MAX){
                return 0;
            }
            if(x*-1 < INT_MIN){
                return 0;
            }
        
        if (0>x){
            negative = 1;
            x=x*-1;
        }
        while(x>0){
            y=x%10;
            x=x/10;
            if(temp > INT_MAX/10 || temp>INT_MAX/10){
                return 0;
            }
            if(temp < INT_MIN/10 || temp < INT_MIN/10){
                return 0;
            }
            temp=temp*10+y;    
            
        }
        if(negative == 1){
            temp=temp*-1;
        }
        
    return temp;
    }
};