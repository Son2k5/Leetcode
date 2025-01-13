class Solution {
public:
    int mySqrt(int x) 
    {
        if(x==0){
            return 0;
        }
        int low =1;
        int high =x;
        while(low <= high){
            int mid= low +(high - low) % 2;
            int temp= x/mid;
            if(mid == temp){
                return mid;
            }
            else if( mid< temp){
                low = mid+1;
            }
            else{
                high = mid -1;
            }
        }
        return high;
    }
};