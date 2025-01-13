class Solution {
public:
    int climbStairs(int n) {
        if(n==0 || n==1 ){
            return 1;
        }
        int f1 = 1;
        int f2= 2;
        for(int i =2; i<n; i++){
            int fn = f1+ f2;
            f1= f2;
            f2= fn;
        }
        return f2;
    }
};