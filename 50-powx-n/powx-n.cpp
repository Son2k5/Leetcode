class Solution {
public:
    double myPow(double x, int n) {
        return recusive(x, static_cast<long> (n));
    }
private:
    double recusive(double x, long n){
        if(n == 0){
            return 1;
        }
        if(n < 0){
            return 1.0/(recusive(x,-n));
        }
        if(n % 2== 1){
            return x * recusive(x*x,(n-1)/2);
        }else{
            return recusive(x*x, n/2);
        }
    }
};