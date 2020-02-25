class Solution {
public:
    int fib(int N) {
        if(N>0&&N<=2){
            return 1;
        }
        else if (N==0){
            return 0;
        }
        return fib(N-2)+fib(N-1);
    }
};

//1,1,2,3,5