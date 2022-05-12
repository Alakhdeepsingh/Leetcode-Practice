class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1){
            return true;
        }
        if(n==0||n%2!=0){
            return false;
        }
        return isPowerOfTwo(n/2);
        
    }
};


// 16

// 2^0 , 2^1 , 2^2 , 2^3, 2^4 , 2^5